//Header
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <windows.h>
#include <time.h>
using namespace std;

//Global Constanst
         char boy;
         char girl;
         double hit;
         double c_HP;

//Prototype function
  
 double Sword_a();
 double Spell_a();
 double Dagger_a();
 string Adventuer_boya();
 string Adventuer_girla();
 string Switch_B_G();
 double adventuer_HP();
 int monster_f();
 int monster_w();
 double monster_attack();
 int wep_s();
 double Attack_Menu();
 void damge_flash();
 void quick_flash();

class Monster
                 {
                 public:
                 Monster(std::string y,int g);
                 void setname(std::string x);
                 void setHP(double h);
                double getHP()
                 {
                 
                 return HP;
                 }
                 
                string getname()
                 {

                 return name;
                 }
                 
                     private:
                    std::string name;
                     double HP;

                 };


                 Monster Hero();

Monster::Monster(string y, int g)
{
    setname(y);
    setHP(g);
}
void Monster::setname(string x)
{
    name = x;
}
void Monster::setHP(double h)
{
    HP = h;
}


void gameOver();


int main()
{
             
             system("color 02");
             system("cls" );

                           //varibls
                           char yon;


         

             Switch_B_G();
             adventuer_HP();
             monster_f();
             




    cout << "Play again?\n[Y]es or [n]o?";
    cin >> yon;
    switch(yon)
        {
            case 'y':
            {
                main();
                break;
            }
            case 'Y':
            {
                main();
                break;
            }
            default:
                break;
        }





    return EXIT_SUCCESS;
}

//Implentation
 double Sword_a()
         {
          int z;
      srand(time(NULL));

      for( int x=0; x < 1; x++)
           z = rand()%20 + 13; //13-33

           return z;
          }

 double Spell_a()
         {
                 int z;
      srand(time(NULL));

      for( int x=0; x < 2; x++)
           cout << rand()%11 << endl;
           z = rand()%11;// 0-10

           
           return z;
          }

 double Dagger_a()
         {
                  int z;
                  int q;
      srand(time(NULL));

      for( int x=0; x < 3; x++)
           cout <<  rand()%7 << endl;
           q = rand()%7 + 3;
           z = q * 3; //3-6 x 3
           
           return z;
          }



  string Adventuer_boya()
         {
                         string boy;
         cout << "I am a boy, which is you. What would you like my name to be? " << endl;
         cin >> boy;
         cout << "My name is: " << boy << endl;

         return boy;
         }

   string Adventuer_girla()
          {
                           string girl;
          cout << "I am a girl, which is you. What would you like my name to be? " << endl;
          cin >> girl;
          cout << "My name is: " << girl << endl;

          return girl;
          }

    string Switch_B_G()

          {
          char gender;
          cout << "Choose 1 for Boy or 2 Girl? " << endl;
          cin  >> gender;

             switch( gender )
             {
               case '1':
              string Adventuer_boya();
              return Adventuer_boya();
               break;

               case '2':
              string Adventuer_girla();
              return Adventuer_girla();
               break;

               default:
               cout << "I'll choose for you " << endl << endl;
              string Adventuer_boya();
              return Adventuer_boya() ;
               break;
               }
               return 0;
          }


          double adventuer_HP()
                 {
                double c;
                double adventuer_HP = 100;
                 
                 c = adventuer_HP;
                 
                 return adventuer_HP;
                 }










    int monster_f() // Default monster fight
         {
                 Monster Hero("Anthony",100);
                 Monster destoryer("destoryer", 100);
                 

         cout << "You ran Into a destroyer" << endl << endl;
         cout << "I am a destroyer, I will kill you! " << endl;
         cout << "Monsters Hp: " << destoryer.getHP() << endl << endl;
         cout << "Your HP: " << Hero.getHP() << endl << endl;

      while( destoryer.getHP() > 0 && Hero.getHP() > 0)
      {
      hit = Attack_Menu();
      c_HP = destoryer.getHP()- hit;
      destoryer.setHP(c_HP);

      hit = monster_w();
      c_HP = Hero.getHP()- hit;
      Hero.setHP(c_HP);
      
        cout << "Damage the monster delt: " << monster_w() << endl << endl;
       
        cout << "Monster HP : " << destoryer.getHP() << endl;
        cout << "Your HP: " << Hero.getHP() << endl << endl;

        system("PAUSE");
        cin.ignore();
        cin.get();
        system("cls");
        }
        if (Hero.getHP() <= 0)
        {
        cout<< "YOU LOSE!";
        Sleep(3500);
        gameOver();
        system("cls");
        }
        else
        {
        cout <<"CONGRADULATIONS, YOU WIN!";
        Sleep(3500);
        gameOver();
        system("cls");
        }
         return 0;
         }








    double Attack_Menu()
                   {

                       char attack;
                
                 cout << "Choose Attack : A-Sword    B-Spell     Any-Hiddin Dagger " << endl << endl;
                 cin >> attack;

              switch ( attack )
                     {
                     case 'a':
         cout << "You use the smashing might of your great-sword to deliver tramendus\namount of damage " << endl << endl;
         damge_flash();
         Sword_a();
         cout << "Damage you dealt : " << Sword_a() << endl;
              return Sword_a();
              break;
              
                     case 'b':
         cout << "You casted a fire ball that does flame damage" << endl << endl;
         damge_flash();
         Spell_a();
         cout << "Damage you dealt" << endl << endl;
              return Spell_a();
              break;

                     default:
         cout << "Quick slashing strikes with dagger " << endl << endl;
         damge_flash();
         Dagger_a();
         cout << "Damage you dealt" << endl;
              return Dagger_a();
               break;
               }
                
                return 0;
                     }
                     
        
        int monster_w()
               {
               
               int z;
      srand(time(NULL));

      for( int x=0; x < 1; x++)
           z = rand()%20 + 8; //13-33
           cout << z << endl; 
           
           return z;

               }


          double monster_attack()
                 {
                            double a;
                            
                 cout << "A claw swips you " << endl << endl;
                 quick_flash();
                 cout << "Damage delt to you " << endl;
                 a = adventuer_HP() - monster_w();
                 cout << "Your current HP : " << a << endl;
                 
                 return a;
                 }






           void damge_flash()
                 {
                 system ("color 41");
                 system ("color 02");
                 system ("color 41");
                 system ("color 02");
                 system ("color 41");
                 system ("color 02");
                 system ("color 41");
                 system ("color 02");
                 }


            void quick_flash()
                 {
                 system ("color 13");
                 Sleep(1000);
                 system ("color 02");
                 Sleep(1000);
                 system ("color 13");
                 Sleep(1000);
                 system ("color 02");
                 }
void gameOver()
{

    cout << "********************************************************************************";
    cout << "********************************************************************************";
    cout << "********            ******      ******   *********   **             **  ********";
    cout << "********  ***************   **   *****    *******    **  *************  ********";
    cout << "********  **************   ****   ****  *  *****  *  **  *************  ********";
    cout << "********  *************   ******   ***  **  ***  **  **  *************  ********";
    cout << "********  ************              **  ***  *  ***  **         ******  ********";
    cout << "********  *****     **  **********  **  ****   ****  **  *************  ********";
    cout << "********  ********  **  **********  **  ***********  **  *************  ********";
    cout << "********  ********  **  **********  **  ***********  **  *************  ********";
    cout << "********            **  **********  **  ***********  **             **  ********";
    cout << "**********************************************************************  ********";
    cout << "**********************************************************************  ********";
    cout << "********            **  **********  **               **        *******  ********";
    cout << "********  ********  **  **********  **  ***************  *****   *****  ********";
    cout << "********  ********  **  **********  **  ***************  *******   ***  ********";
    cout << "********  ********  **  **********  **  ***************  *****   *****  ********";
    cout << "********  ********  **   ********   **          *******       ********  ********";
    cout << "********  ********  ***   ******   ***  ***************     **********  ********";
    cout << "********  ********  ****   ****   ****  ***************  **   ******************";
    cout << "********  ********  *****   **   *****  ***************  ****   ****************";
    cout << "********            ******      ******              ***  ******   ****  ********";
    cout << "********************************************************************************";
    cout << "********************************************************************************";
    cout << "*******************************************************************************";
    quick_flash();
    Sleep(4200);
    system("cls");
}
