#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

char Map[30][30] = {"####################",
                    "#                #!#",
                    "#                  #",
                    "#                  #",
                    "#                  #",
                    "#                  #",
                    "#                  #",
                    "#                  #",
                    "#                  #",
                    "#                  #",
                    "#                  #",
                    "#                  #",
                    "#                  #",
                    "#                  #",
                    "#    #@#           #",
                    "####################"};

              int gamespeed = 0;
              int Level = 1;
              bool stopgame = false;
              

int main(int argc, char *argv[])
{

    while( stopgame == false && Level == 1)
    {

           system("cls");
           for ( int y = 0; y < 20; y++)
           {
             cout << Map[y] << endl;
           }
          
          for ( int y = 0; y < 20; y++)
          {
              for ( int x = 0; x < 20; x++)
              {
                  switch(Map[y][x])
                  {
                        case '#':
                        {
                             system("color 02");
                             Map[y][x] = 219;
                        }break;

                  
                         case '@':
                         {
                              
                              if ( GetAsyncKeyState(VK_UP) !=0 )
                              {
                                 int y2 = (y-1);
                                  
                                  switch(Map[y2][x])
                                  {
                                  
                                        case ' ':
                                        {
                                             Map[y][x] = ' ';
                                             y -= 1;
                                             Map[y2][x] = '@';
                                        }break;
                                        
                                        case '!' :
                                        {
                                             Level = 2;
                                        
                                        }break;
                  
                                  }
                              }
                              if ( GetAsyncKeyState(VK_DOWN) !=0 )
                              {
                                 int y2 = (y+1);
                                  
                                  switch(Map[y2][x])
                                  {
                                  
                                        case ' ':
                                        {
                                             Map[y][x] = ' ';
                                             y += 1;
                                             Map[y2][x] = '@';
                                        }break;

                                        case '!':
                                        {
                                             Level = 2;
                                        }break;
                                   }
                              

                              }
                              if ( GetAsyncKeyState(VK_RIGHT) !=0 )
                              {
                                 int x2 = (x+1);
                                 
                                 switch (Map[y][x2])
                                 {

                                        case ' ':
                                        {
                                             Map[y][x] = ' ';
                                             x += 1;
                                             Map[y][x2] = '@';
                                        }break;
                                        
                                        case '!':
                                        {
                                             Level = 2;
                                        }break;
                                 }
                              }


                              if ( GetAsyncKeyState(VK_LEFT) !=0 )
                              {
                                 int x2 = (x-1);

                                 switch (Map[y][x2])
                                   {
                                        case ' ':
                                        {
                                             Map[y][x] = ' ';
                                             x -= 1;
                                             Map[y][x2] = '@';
                                        }break;
                                        
                                        case '!':
                                        {
                                             Level = 2;
                                        }break;
                                     }

                              }


                         }break;
                  }       
              }  
              Sleep(gamespeed);   
          }
          while ( stopgame == false && Level == 2 )
            {
            system("cls");
            cout << "congradulations on getting to Level 2!";
            Sleep(2000);
            return 0;
            }








    }













    system("PAUSE");
    return EXIT_SUCCESS;
}
