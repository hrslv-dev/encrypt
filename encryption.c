#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

const char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
string encrypt(string plaintext, string key);
string decrypt(string cipher, int key);
string generate_key(void);

int main(void)
{
    string plaintext = get_string("Plaintext : ");
    string key = generate_key();
    encrypt(plaintext, key);
}
// CIFRA VIGENERE
string generate_key(void)
{
    // srand chooses what sequence rand will follow because rand is not random at all
    // it needs a seed to start the sequence of possibilities to ranh().
    srand(time(NULL)); // here it receives an unsigned int or a positive integer
    // rand() is not random.
    int random = rand() % (10 - 5 + 1) + 5;
    int rand_char;
    string key;
    for (int i = 0; i < random; i++)
    {
        rand_char = rand() % (25 - 0 + 1) + 0;
        key[i] = alphabet[rand_char];
    }
    printf("%s\n", key);
    return key;
}

// plaintext is an input .
string encrypt(string plaintext, string key)
{
    // STRLEN CUTS THE /0
    // original string = key
    // string reference = plaintext

    // 1 char == 1 byte in memory.]
    // if the string have 10 chars in it + 1 for the /0 it will need to be stored in memory in 12 bytes.
    size_t size = strlen(plaintext) + 1;
    // Stores an memory adress.
    char *resized_key = malloc(size); 
    if (resized_key == NULL)
    {
        printf("Error in alocating memory !");
        return 1; 
    }
    strcpy(resized_key, key); 
}

string cipher; // this function will return this value.
for (int i = 0, n = strlen(plaintext); i < n; i++)
{
    cipher = alphabet[plaintext[i] + key[i]];
}
}
