# include <stdio.h>
# include <cs50.h> 
# include <stdlib.h>
# include <time.h>

const char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
// Change for array of chars
string encrypt (string plaintext, int key); 
string decrypt(string cipher, int key); 
string generate_key(void);

int main(void){
    
}
// CIFRA VIGENERE
string generate_key(void){ 
    // RANDOM NUMBER FOR FOR LOOP 
    srand(time(NULL));  // max = 5 min = 2
    // UNDERSTAND THIS FUNC HERE BETTER 
    int random = rand() % (10 - 5 + 1) + 5;
    int rand_char;
    string key;  
    for (int i = 0; i < random; i++ ){ 
        rand_char = rand()% ( 25 - 0 + 1) + 0; 
        key[i] = alphabet[rand_char]; 
    }
    
}
string encrypt(string plaintext, int key){ 
    // Use a data structure that stores numbers and chars respectivaly 
    // Probrably is a hashmap that i should use 
    // DATA STRUCUTURES and ALGORITMS ( memory ? )
}