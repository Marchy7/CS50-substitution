#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //check there is a key entry
    if (argc == 1)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    
    //length of input
    string entry = argv[1];
    int entry_length = strlen(entry);
    
    //check for invalid entries
    int j = 0;
    int ax = 0, bx = 0, cx = 0, dx = 0, ex = 0, fx = 0, gx = 0, hx = 0, ix = 0, jx = 0, kx = 0, lx = 0, mx = 0,
        nx = 0, ox = 0, px = 0, qx = 0, rx = 0, sx = 0, tx = 0, ux = 0, vx = 0, wx = 0, xx = 0, yx = 0, zx = 0;
    
    for (int i = 0; i < entry_length; i++)
    {
        if (isdigit(entry[i]) || ispunct(entry[i]) || isspace(entry[i]))
        {
            j++;
        }
    }
    
    //check for duplicates
    for (int i = 0; i < entry_length; i++)
    {
        if (entry[i] == 'a' || entry[i] == 'A')
        {
            ax++;
        }
        
        if (entry[i] == 'b' || entry[i] == 'B')
        {
            bx++;
        }
        
        if (entry[i] == 'c' || entry[i] == 'C')
        {
            cx++;
        }
        
        if (entry[i] == 'd' || entry[i] == 'D')
        {
            dx++;
        }
        
        if (entry[i] == 'e' || entry[i] == 'E')
        {
            ex++;
        }
        
        if (entry[i] == 'f' || entry[i] == 'F')
        {
            fx++;
        }
        
        if (entry[i] == 'g' || entry[i] == 'G')
        {
            gx++;
        }
        
        if (entry[i] == 'h' || entry[i] == 'H')
        {
            hx++;
        }
        
        if (entry[i] == 'i' || entry[i] == 'I')
        {
            ix++;
        }
        
        if (entry[i] == 'j' || entry[i] == 'J')
        {
            jx++;
        }
        
        if (entry[i] == 'k' || entry[i] == 'K')
        {
            kx++;
        }
        
        if (entry[i] == 'l' || entry[i] == 'L')
        {
            lx++;
        }
        
        if (entry[i] == 'm' || entry[i] == 'M')
        {
            mx++;
        }
        
        if (entry[i] == 'n' || entry[i] == 'N')
        {
            nx++;
        }
        
        if (entry[i] == 'o' || entry[i] == 'O')
        {
            ox++;
        }
        
        if (entry[i] == 'p' || entry[i] == 'P')
        {
            px++;
        }
        
        if (entry[i] == 'q' || entry[i] == 'Q')
        {
            qx++;
        }
        
        if (entry[i] == 'r' || entry[i] == 'R')
        {
            rx++;
        }
        
        if (entry[i] == 's' || entry[i] == 'S')
        {
            sx++;
        }
        
        if (entry[i] == 't' || entry[i] == 'T')
        {
            tx++;
        }
        
        if (entry[i] == 'u' || entry[i] == 'U')
        {
            ux++;
        }
        
        if (entry[i] == 'v' || entry[i] == 'V')
        {
            vx++;
        }
        
        if (entry[i] == 'w' || entry[i] == 'W')
        {
            wx++;
        }
        
        if (entry[i] == 'x' || entry[i] == 'X')
        {
            xx++;
        }
        
        if (entry[i] == 'y' || entry[i] == 'Y')
        {
            yx++;
        }
        
        if (entry[i] == 'z' || entry[i] == 'Z')
        {
            zx++;
        }
    }
    
    if (argc == 2 && j == 0 && entry_length == 26 && ax < 2 && bx < 2 && cx < 2 && dx < 2 && ex < 2 && fx < 2 && gx < 2 && hx < 2 
        && jx < 2 && kx < 2 && lx < 2 && mx < 2 && nx < 2 && ox < 2 && px < 2 && qx < 2
        && rx < 2 && sx < 2 && tx < 2 && ux < 2 && vx < 2 && wx < 2 && xx < 2 && yx < 2 && zx < 2)
    {
        //Get desried message
        string text = get_string("plaintext: ");
        int text_length = strlen(text);
        
        printf("ciphertext: ");
        
        //print letter
        for (int i = 0; i < text_length; i++)
        {
            //Uppercase letters
            if (isupper(text[i]))
            {
                if (text[i] == 'A')
                {
                    char letter = toupper(argv[1][0]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'B')
                {
                    char letter = toupper(argv[1][1]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'C')
                {
                    char letter = toupper(argv[1][2]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'D')
                {
                    char letter = toupper(argv[1][3]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'E')
                {
                    char letter = toupper(argv[1][4]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'F')
                {
                    char letter = toupper(argv[1][5]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'G')
                {
                    char letter = toupper(argv[1][6]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'H')
                {
                    char letter = toupper(argv[1][7]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'I')
                {
                    char letter = toupper(argv[1][8]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'J')
                {
                    char letter = toupper(argv[1][9]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'K')
                {
                    char letter = toupper(argv[1][10]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'L')
                {
                    char letter = toupper(argv[1][11]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'M')
                {
                    char letter = toupper(argv[1][12]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'N')
                {
                    char letter = toupper(argv[1][13]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'O')
                {
                    char letter = toupper(argv[1][14]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'P')
                {
                    char letter = toupper(argv[1][15]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'Q')
                {
                    char letter = toupper(argv[1][16]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'R')
                {
                    char letter = toupper(argv[1][17]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'S')
                {
                    char letter = toupper(argv[1][18]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'T')
                {
                    char letter = toupper(argv[1][19]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'U')
                {
                    char letter = toupper(argv[1][20]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'V')
                {
                    char letter = toupper(argv[1][21]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'W')
                {
                    char letter = toupper(argv[1][22]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'X')
                {
                    char letter = toupper(argv[1][23]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'Y')
                {
                    char letter = toupper(argv[1][24]);
                    printf("%c", letter);
                }
                
                else
                {
                    char letter = toupper(argv[1][25]);
                    printf("%c", letter);
                }
            }
            
            //Lower case letters
            else if (islower(text[i]))
            {
                if (text[i] == 'a')
                {
                    char letter = tolower(argv[1][0]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'b')	
                {
                    char letter = tolower(argv[1][1]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'c')
                {
                    char letter = tolower(argv[1][2]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'd')
                {
                    char letter = tolower(argv[1][3]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'e')
                {
                    char letter = tolower(argv[1][4]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'f')
                {
                    char letter = tolower(argv[1][5]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'g')
                {
                    char letter = tolower(argv[1][6]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'h')
                {
                    char letter = tolower(argv[1][7]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'i')
                {
                    char letter = tolower(argv[1][8]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'j')
                {
                    char letter = tolower(argv[1][9]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'k')
                {
                    char letter = tolower(argv[1][10]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'l')
                {
                    char letter = tolower(argv[1][11]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'm')
                {
                    char letter = tolower(argv[1][12]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'n')
                {
                    char letter = tolower(argv[1][13]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'o')
                {
                    char letter = tolower(argv[1][14]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'p')
                {
                    char letter = tolower(argv[1][15]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'q')
                {
                    char letter = tolower(argv[1][16]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'r')
                {
                    char letter = tolower(argv[1][17]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 's')
                {
                    char letter = tolower(argv[1][18]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 't')
                {
                    char letter = tolower(argv[1][19]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'u')
                {
                    char letter = tolower(argv[1][20]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'v')
                {
                    char letter = tolower(argv[1][21]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'w')
                {
                    char letter = tolower(argv[1][22]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'x')
                {
                    char letter = tolower(argv[1][23]);
                    printf("%c", letter);
                }
                
                else if (text[i] == 'y')
                {
                    char letter = tolower(argv[1][24]);
                    printf("%c", letter);
                }
                
                else
                {
                    char letter = tolower(argv[1][25]);
                    printf("%c", letter);
                }
            }
            
            //Spaces and punctuation
            else 
            {
                char punct = text[i];
                printf("%c", punct);
                
            }
        }
        
        //new line
        printf("\n");
        return 0;
    }
    
    //Too many entries
    else
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
}
