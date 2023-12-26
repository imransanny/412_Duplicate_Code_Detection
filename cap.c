void main() {
     char sentence[100];
     int i;

     printf("Enter your name and surnames: ");
     gets(sentence);

     for(i = 0; i<strlen(sentence); i++){
        if(sentence[i] == ' '){
            printf("%c", toupper(sentence[i]+1)); 
            //I want to advance to next item respect to space and capitalize it
            //But it doesn't work
        } else {
            printf("%c", sentence[i]);
        }
     }
} 
