# include <stdio.h>
# include <cs50.h> 
# include <stdlib.h>
# include <time.h>

const char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
string encrypt (string plaintext, int key); 
string decrypt(string cipher, int key); 
string generate_key(void);

int main(void){
    string plaintext = get_string("Plaintext : ");
    string key = generate_key(); 
    encrypt(plaintext, key); 
}
// CIFRA VIGENERE
string generate_key(void){ 
    // srand chooses what sequence rand will follow because rand is not random at all 
    // it needs a seed to start the sequence of possibilities to ranh().
    srand(time(NULL));// here it receives an unsigned int or a positive integer 
    // rand() is not random.
    int random = rand() % (10 - 5 + 1) + 5;
    int rand_char;
    string key;  
    for (int i = 0; i < random; i++ ){ 
        rand_char = rand()% ( 25 - 0 + 1) + 0; 
        key[i] = alphabet[rand_char]; 
    }
    printf("%s\n", key); 
    return key; 
}

// plaintext is an input . 
string encrypt(string plaintext, int key){ 

    // conditional if the plaintext is bigger then the key: 
    string new_key; 
    while(strlen(plaintext) > strlen(key)){ 

    }

    string cipher; // this function will return this value. 
    for(int i = 0, n = strlen(plaintext); i < n; i++){ 
        cipher = alphabet[plaintext[i] + key[i]]; 
        
    }            
}

