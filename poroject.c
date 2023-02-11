#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <errno.h>
#include <windows.h>
#include <direct.h>
#include <dirent.h>
void BailOut(char *msg)
{
  fprintf(stderr, "Exiting: %s\n", msg);
  exit(1);
}
void myfilerecursive(char *basePath)
{
    char path[1000];
    struct dirent *dp;
    DIR *dir = opendir(basePath);


    if (!dir)
        return;

    while ((dp = readdir(dir)) != NULL)
    {
        if (strcmp(dp->d_name, ".") != 0 && strcmp(dp->d_name, "..") != 0)
        {
            printf("%s\n", dp->d_name);
            strcpy(path, basePath);
            strcat(path, "/");
            strcat(path, dp->d_name);

            myfilerecursive(path);
        }
    }

    closedir(dir);
}
int main(){
    char *myfile = (char*) malloc(sizeof(char)*100);

    while (1)
    {
         int count = 0;
        int temp = 1;
        int temp2 = 0;
        char ch;
        char ch2;
        scanf("%s", myfile);
        if (strcmp(myfile , "createfile") == 0)
        {
            char *file = (char*) malloc(sizeof(char)*100);
            scanf("%s", file);
            if (strcmp(file , "-file") == 0){
            char *f = (char*) malloc(sizeof(char)*100);
  /*          int i = 0;
            char folder[100];
            while(f != '0'){
                scanf("%c", &f);
               if(f !='0' ){
                folder[i] = f;
               }
                i++;
            }
             mkdir(folder);
*/
            char *name = (char*) malloc(sizeof(char)*100);
            scanf("%s", name);
            //strcat(folder,name);
            if (access(name , F_OK) == -1){
            FILE* cmyfile= fopen(name, "w");
            fclose(cmyfile);
            }
            else{
                printf("ERROR: bro already made");
            }
            }
        }
//create file
//--------------------------------------------
else if (strcmp(myfile , "insertstr")== 0){

    char *file = (char*) malloc(sizeof(char)*100);
            scanf("%s", file);
            if (strcmp(file , "-file") == 0){
            char *insert = (char*) malloc(sizeof(char)*100);
            scanf("%s", insert);
            if (access(insert , F_OK) != -1){

            FILE* text = (fopen(insert, "r"));

            FILE* text2 = (fopen("toftozendegi.txt", "w"));

            char *text3 = (char*) malloc(sizeof(char)*100);
            strcpy(text3, insert);

            char *str = (char*) malloc(sizeof(char)*100);
            scanf("%s", str);
            if (strcmp(str , "-str") == 0){
            char *onepm = (char*) malloc(sizeof(char)*100);
            scanf("%s", onepm);
            char *pos = (char*) malloc(sizeof(char)*100);
            scanf("%s", pos);
            if (strcmp(pos , "-pos") == 0){

                int *line = (int*) malloc(sizeof(int)*100);
                char *noghte = (char*) malloc(sizeof(char)*100);
                int *startp = (int*) malloc(sizeof(int)*100);
                scanf("%d%c%d", &line, &noghte, &startp);
                if (noghte = ':') {

                    rewind(text);

                        while(ch != EOF){

                            ch = fgetc(text);
                            putc(ch, text2);
                            printf("%c", ch);
                            if(ch == '\n'){
                                temp++;
                            }
                            if(temp == line){
                                temp2 ++;
                            }
                            if(temp2 == startp){
                                   if (strcmp(onepm , "\n")== 0){
                                    fputc("\n", text2);
                                   }
                                   else if (strcmp(onepm , "\\n")== 0){
                                    fputc("\\n", text2);

                                   }
                                   else {
                                    fputs(onepm, text2);
                                    printf("%s", onepm);
                                   }
                            }
                        }
                        fclose(text2);
                        fclose(text);
                       remove(insert);

                        rename("toftozendegi.txt", text3);


                }
            }
            }
            }

}
}
//insert
//--------------------------------------------
        else if (strcmp(myfile , "cat")== 0){

                   char *file = (char*) malloc(sizeof(char)*100);
            scanf("%s", file);
            if (strcmp(file , "-file") == 0){
            char *catmyfile = (char*) malloc(sizeof(char)*100);
            scanf("%s", catmyfile);
            if (access(catmyfile , F_OK) != -1){
            FILE* text = (fopen(catmyfile, "r"));

            if ( text != NULL){
                do
                {
                    char c = fgetc(text);
                    if (feof(text)) break;
                    printf("%c", c);
                } while(1);
            }
             fclose(text);
            }
            } }
//cat
//--------------------------------------------
        else if (strcmp(myfile , "removestr")== 0){

            char *file = (char*) malloc(sizeof(char)*100);
            scanf("%s", file);
            if (strcmp(file , "-file") == 0){

            char *catmyfile = (char*) malloc(sizeof(char)*100);
            scanf("%s", catmyfile);
            if (access(catmyfile , F_OK) != -1){

            FILE* text = (fopen(catmyfile, "r"));
            FILE* text2 = (fopen("toftozendegi.txt", "w"));
            char *text3 = (char*) malloc(sizeof(char)*100);
             strcpy(text3, catmyfile);
            char *pos = (char*) malloc(sizeof(char)*100);
            scanf("%s", pos);
            if (strcmp(pos , "-pos") == 0){

             int *line = (int*) malloc(sizeof(int)*100);
            char *noghte = (char*) malloc(sizeof(char)*100);
            int *startp = (int*) malloc(sizeof(int)*100);
            scanf("%d%c%d", &line, &noghte, &startp);

            if (noghte = ':'){

            char *size = (char*) malloc(sizeof(char)*100);
            scanf("%s", size);
            if (strcmp(size , "-size") == 0){

                int num;
                int counter = 0;
                int counter2 = 0;
                int number;
                scanf("%d", &num);
                char *forback = (char*) malloc(sizeof(char)*100);
                scanf("%s", forback);
                if (strcmp(forback , "-f") == 0){
                     rewind(text);
                    ch = fgetc(text);
                        while(ch != EOF){

                            counter++;
                            if(ch == '\n'){
                                temp++;
                            }
                            if(temp == line){
                                temp2 ++;
                                if(temp2 == startp){
                                   number = counter;
                                }
                            }

                        }
                        rewind(text);

                        while(ch2 != EOF){
                            ch2 = fgetc(text);
                            counter2++;
                                if(counter2 <= number || counter2 > (number + num)){

                                    putc(ch2, text2);


                            }


                        }
                }
                else if (strcmp(forback , "-b") == 0){

                              rewind(text);
                        ch = fgetc(text);
                        while(ch != EOF){
                            ch = fgetc(text);
                            counter++;
                            if(ch == '\n'){
                                temp++;
                            }
                            if(temp == line){

                                temp2 ++;
                                if(temp2 == startp){
                                   number = counter;

                                }
                            }

                        }
                         rewind(text);
                        while(ch2 != EOF){
                            ch2 = fgetc(text);

                            counter2++;
                            if((counter2 < (number - num)) || (counter2 >= number) ){

                                    putc(ch2, text2);


                            }
                        }




            }
                        fclose(text2);
                        fclose(text);
                        remove(catmyfile);
                        rename("toftozendegi.txt", text3);
            }

            }
            }
        }
        }
        }
//remove
//--------------------------------------------
        else if (strcmp(myfile , "copystr")== 0){
            FILE* text2= fopen("copy.text", "w");
            char *file = (char*) malloc(sizeof(char)*100);
            scanf("%s", file);
            if (strcmp(file , "-file") == 0){
            char *catmyfile = (char*) malloc(sizeof(char)*100);
            scanf("%s", catmyfile);
            if (access(catmyfile , F_OK) != -1){

            FILE* text = (fopen(catmyfile, "r"));
            char *pos = (char*) malloc(sizeof(char)*100);
            scanf("%s", pos);
            if (strcmp(pos , "-pos") == 0){
             int *line = (int*) malloc(sizeof(int)*100);
            char *noghte = (char*) malloc(sizeof(char)*100);
             char *ch3[100];
            int *startp = (int*) malloc(sizeof(int)*100);
            scanf("%d%c%d", &line, &noghte, &startp);

            if (noghte = ':'){

            char *size = (char*) malloc(sizeof(char)*100);
            scanf("%s", size);
            if (strcmp(size , "-size") == 0){
                int num;
                int counter2 = 0;
                scanf("%d", &num);
                char *forback = (char*) malloc(sizeof(char)*100);
                scanf("%s", forback);
                temp2 = 0;
                temp = 1;
                int counter = 0;
                int number= 0;
                if (strcmp(forback , "-f") == 0){
                    while(ch != EOF){
                            ch = fgetc(text);
                            counter++;
                            if(ch == '\n' && temp != line){
                                temp++;
                            }
                            if(temp == line) {
                                if(temp2 == startp){
                                   number = counter;
                                   break;
                                } else {
                                    temp2++;
                                }
                            }
                        }
                        ch2 = '\0';
                        rewind(text);
                        while(ch2 != EOF){
                            ch2 = fgetc(text);
                            counter2++;
                                if(counter2 >= number && counter2 < (number + num)){

                                    break;


                            }

                        }
                }
                else if (strcmp(forback , "-b") == 0){

                         counter = 0;
                        counter2 = 0;
                temp = 1;
                temp2 = 0;
                         rewind(text);
                         ch = '\0';
                        while(ch != EOF){
                            ch = fgetc(text);
                            counter++;
                            if(ch == '\n' && temp != line){
                                temp++;
                            }
                            if(temp == line){
                                    if(temp2 == startp){
                                   number = counter;
                                   break;
                                }
                                temp2 ++;
                            }
                        }
                         rewind(text);
                         ch2 = '\0';
                        while(ch2 != EOF){
                            ch2 = fgetc(text);
                            counter2++;
                                if(counter2 > (number - num) && counter2 <= number){
                                        break;
                                }


                        }
                }


                int coun;
                text2 = text;
for (coun = 0; coun != num; coun++) {
    ch3[coun] = fgetc(text2);
}
ch3[coun] = '\0';
 char output[1000000];
 strcpy(output, ch3);
 size_t len = strlen(output) + 1;
HGLOBAL hMem =  GlobalAlloc(GMEM_MOVEABLE, len);
memcpy(GlobalLock(hMem), output, len);
GlobalUnlock(hMem);
OpenClipboard(0);
EmptyClipboard();
SetClipboardData(CF_TEXT, hMem);
CloseClipboard();
            }
                        fclose(text2);
                        fclose(text);
                        remove(text2);
            //}

            }

            }
            }
        }


        }
//copy
//--------------------------------------------------------
        else if (strcmp(myfile , "cutstr")== 0){
            FILE* text2= fopen("copy.text", "w");
            FILE* text3= fopen("copy2.text", "w");
            char *file = (char*) malloc(sizeof(char)*100);
            scanf("%s", file);
            if (strcmp(file , "-file") == 0){
            char *catmyfile = (char*) malloc(sizeof(char)*100);
            scanf("%s", catmyfile);
            if (access(catmyfile , F_OK) != -1){
            FILE* text = (fopen(catmyfile, "r"));
            char *text4 = (char*) malloc(sizeof(char)*100);
             strcpy(text4, catmyfile);
            char *pos = (char*) malloc(sizeof(char)*100);
            scanf("%s", pos);
            if (strcmp(pos , "-pos") == 0){
            int *line = (int*) malloc(sizeof(int)*100);
            char *noghte = (char*) malloc(sizeof(char)*100);
            int *startp = (int*) malloc(sizeof(int)*100);
            scanf("%d%c%d", &line, &noghte, &startp);

            if (noghte = ':'){
            char *size = (char*) malloc(sizeof(char)*100);
            char *ch3[100];
            scanf("%s", size);
            if (strcmp(size , "-size") == 0){
                int num;
                scanf("%d", &num);
                char *forback = (char*) malloc(sizeof(char)*100);
                scanf("%s", forback);
temp2 = 0;
                temp = 1;
                int counter = 0;
                int number= 0;
                int counter2 = 0;
                if (strcmp(forback , "-f") == 0){
                        while(ch != EOF){
                            ch = fgetc(text);
                            counter++;
                            if(ch == '\n' && temp != line){
                                temp++;
                            }
                            if(temp == line) {
                                if(temp2 == startp){
                                   number = counter;
                                   break;
                                } else {
                                    temp2++;
                                }
                            }
                        }
                        ch2 = '\0';
                        rewind(text);
                        while(ch2 != EOF){
                            ch2 = fgetc(text);
                            counter2++;
                                if(counter2 >= number && counter2 < (number + num)){

                                    break;


                            }
                            else{
                                putc(ch2, text3);
                            }

                        }
                }
                else if (strcmp(forback , "-b") == 0){

                           counter = 0;
                        counter2 = 0;
                temp = 1;
                temp2 = 0;
                         rewind(text);
                         ch = '\0';
                        while(ch != EOF){
                            ch = fgetc(text);
                            counter++;
                            if(ch == '\n' && temp != line){
                                temp++;
                            }
                            if(temp == line){
                                    if(temp2 == startp){
                                   number = counter;
                                   break;
                                }
                                temp2 ++;
                            }
                        }
                         rewind(text);
                         ch2 = '\0';
                        while(ch2 != EOF){
                            ch2 = fgetc(text);
                            counter2++;
                                if(counter2 > (number - num) && counter2 <= number){
                                        break;
                                }
                                else{
                                    putc(ch2, text3);
                                }


                        }
                }
             int coun;
                text2 = text;
for (coun = 0; coun != num; coun++) {
    ch3[coun] = fgetc(text2);
}
ch3[coun] = '\0';
 char output[1000000];
 strcpy(output, ch3);
 size_t len = strlen(output) + 1;
HGLOBAL hMem =  GlobalAlloc(GMEM_MOVEABLE, len);
memcpy(GlobalLock(hMem), output, len);
GlobalUnlock(hMem);
OpenClipboard(0);
EmptyClipboard();
SetClipboardData(CF_TEXT, hMem);
CloseClipboard();
            }
                        fclose(text2);
                        fclose(text);
                        fclose(text3);
                        remove("copy.txt");

                        remove(catmyfile);
                        rename(text3, text4);
            }

            }

            }
            }
        }
//cut
//--------------------------------------------------
else if (strcmp(myfile , "pastestr")== 0){
    char *file = (char*) malloc(sizeof(char)*100);
            scanf("%s", file);
            if (strcmp(file , "-file") == 0){
            char *insert = (char*) malloc(sizeof(char)*100);
            scanf("%s", insert);
            if (access(insert , F_OK) != -1){
            FILE* text = (fopen(insert, "r"));
            FILE* text2 = (fopen("toftozendegi.txt", "w"));
            char *text3 = (char*) malloc(sizeof(char)*100);
            strcpy(text3, insert);
            char *pos = (char*) malloc(sizeof(char)*100);
            scanf("%s", pos);
            if (strcmp(pos , "-pos") == 0){
                int *line = (int*) malloc(sizeof(int)*100);
            char *noghte = (char*) malloc(sizeof(char)*100);
             char *ch3[100];
            int *startp = (int*) malloc(sizeof(int)*100);
            scanf("%d%c%d", &line, &noghte, &startp);

            if (noghte = ':'){

                    rewind(text);

                     HANDLE h;
                        if (!OpenClipboard(NULL))
                        BailOut("Can't open clipboard");

                        h = GetClipboardData(CF_TEXT);


  CloseClipboard();
                        while(ch != EOF){
                            ch = getc(text);
                            putc(ch, text2);
                            if(ch == '\n'){
                                temp++;
                            }
                            if(temp == line){
                                temp2 ++;
                            }
                            if(temp2 == startp){

                                while(h != EOF){
                                             putc(h,text2);



                                }
                            }
                        }
                        fclose(text2);
                        fclose(text);
                        remove(insert);
                        rename("toftozendegi.txt", text3);


                }
            }
            }
            }

}

//paste
//--------------------------------------------------------------
else if (strcmp(myfile , "auto")== 0){
        char *file = (char*) malloc(sizeof(char)*100);
            scanf("%s", file);
            if (strcmp(file , "-indent") == 0){
                char *insert = (char*) malloc(sizeof(char)*100);
            scanf("%s", insert);
            if (access(insert , F_OK) != -1){
                FILE* text = (fopen(insert, "r"));
                FILE* text2 = (fopen("toftozendegi.txt", "w"));
                 char *text3 = (char*) malloc(sizeof(char)*100);
            strcpy(text3, insert);

                        rewind(text);
                        while(ch != EOF){
                            ch = getc(text);

                            if(ch == '{'){
                                fputs("{\n", text2);
                                printf("{\n");
                            }
                            else if(ch == '}' ){
                                 fputs("\n}", text2);
                                 printf("\n}");
                            }
                            else{
                                putc(ch, text2);
                                printf("%c", ch);
                            }
                        }
                        fclose(text2);
                        fclose(text);
                        remove(insert);
                        rename("toftozendegi.txt", text3);
            }

            }
}
//closing pairs
//--------------------------------------------------------------
else if (strcmp(myfile , "tree")== 0){
    char name[100000];
    scanf("%s", name);

    myfilerecursive(name);
        }
//tree
//--------------------------------------------------------------
else if (strcmp(myfile , "grep")== 0){
        char word[50];
        char name[100000];
        char ch;
        int line = 1;
        scanf("%s", name);
        if (strcmp(name , "-str")== 0){
            char mystr[100000];
            scanf("%s", mystr);
            char file[100000];
            scanf("%s", file);
            if (strcmp(file , "-file")== 0){

                char filename[100];
                while(filename != '\n'){

                    scanf("%s", filename);
                    if (access(filename , F_OK) != -1){
                    FILE* text = (fopen(filename, "r"));
                    int count = 1;
                    char ch2;
                    char pos;
                    rewind(text);
                    do{

                        ch = fscanf(text, "%s", word);

                            if(ch== '\n'){
                                line++;
                            }
                        if(strcmp(word, mystr) == 0)
                                {
                                    pos = line;
                                    rewind(text);
                        while(ch2 != EOF){
                            ch2 = getc(text);
                            if(ch2 == '\n'){
                                count++;
                            }
                            if(count == pos){
                                printf("%c", ch2);
                            }
                            }
                                }
                    }while( ch != EOF);

                    fclose(text);

                }
                    }

}
        }
        else if (strcmp(name , "-c")== 0){

            char noa[100];

            scanf("%s", noa);
                    if (strcmp(noa , "-str")== 0){
            char mystr[100000];
            scanf("%s", mystr);
            char file[100000];
            scanf("%s", file);

            if (strcmp(file , "-file")== 0){
                char filename[100];
               while(strcmp(filename , "\n")){
                    scanf("%s", filename);
                    if (access(filename , F_OK) != -1){
                    FILE* text = (fopen(filename, "r"));

                     rewind(text);
                    do{
                        ch = fscanf(text, "%s", word);
                        if(strcmp(word, mystr) == 0)
                                {
                                temp2++;
                                }
                    }while( ch != EOF);

                    fclose(text);

                }//printf("%d\n", temp2);
            }printf("%d\n", temp2);
        }

}
        }

        else if (strcmp(name , "-l")== 0){
            char noa[100];
            scanf("%s", noa);
                    if (strcmp(noa , "-str")== 0){
            char mystr[100000];
            scanf("%s", mystr);
            char file[100000];
            scanf("%s", file);
            int count = 0;
            if (strcmp(file , "-file")== 0){
                char filename[100];
                while(filename != '\n'){
                    scanf("%s", filename);
                    if (access(filename , F_OK) != -1){
                    FILE* text = (fopen(filename, "r"));

                     rewind(text);
                    do{
                        ch = fscanf(text, "%s", word);
                        if(strcmp(word, mystr) == 0)
                                {
                                 temp2++;
                                }
                    }while( ch != EOF);
if (temp2 > 0){
                        printf("%s\n", filename);
                    }
                    fclose(text);

                }
            }
        }

}
        }
}

//grep
//--------------------------------------------------------------
else if (strcmp(myfile , "compare")== 0){

                    char word[50];
                    char word2[50];
                    int line = 1;
                    int line2 = 1;
            char *file = (char*) malloc(sizeof(char)*100);
            scanf("%s", file);
            char *file2 = (char*) malloc(sizeof(char)*100);
            char ch3[100];
            char ch4[100];
            scanf("%s", file2);
            if (access(file , F_OK) != -1){
                if (access(file2 , F_OK) != -1){
                    FILE* text = (fopen(file, "r"));
                    FILE* text2 = (fopen(file2, "r"));
                    rewind(text);
                    rewind(text2);
                    do{
                     ch = fgetc(text);
                     ch2 = fgetc(text2);
                     if(ch == '\n'){
                        line++;
                     }
                     if(ch2 == '\n'){
                        line2++;
                     }
                     if((ch2 != ch) && (line2 == line)){
                        int number = line;
                        printf("line: %d\n", number);
                        int line3 = 1;
                        int line4 = 1;
                        rewind(text);
                    rewind(text2);
                    fgets(ch3, 100, text);
                    fgets(ch4, 100, text2);
                     if(ch3 == '\n'){
                        line3++;
                     }
                     if(ch4 == '\n'){
                        line4++;
                     }
                     if(line3 == number){
                        printf("%c", ch3);
                     }
                     if(line4 == number){
                        printf("%c", ch4);
                     }
                    }
                   else if(line2 < line){
                    printf("%c", ch);
                   }
                   else if(line < line2){
                    printf("%c", ch2);
                   }if(line2 < line){
                        printf("start line: %d\n end line: %d",(line2+1),line);
                    }
                    else if(line2 > line){
                        printf("start line: %d\n end line: %d",(line+1),line2);
                    }



                    }while( ch != EOF || ch2 != EOF);
                }
            }

            }
//text comparator
//--------------------------------------------------------------
    }

return 0;
}


//char *a = (char *)calloc(1000, sizeof(char *));

//a = (char *)realloc(500* si)
