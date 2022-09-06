void lerString(char *stringLida, int tamanho){
    fflush(stdin);
    fgets(stringLida, tamanho, stdin);
    stringLida[strlen(stringLida)-1] = '\0';
}
