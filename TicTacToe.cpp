#include<iostream>

using namespace std;

void drawBord(char *spaces){
    cout << "     |     |     \n";
    cout << "  "<<spaces[0]<<"  |  "<<spaces[1]<<"  |  "<<spaces[2]<<"  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  "<<spaces[3]<<"  |  "<<spaces[4]<<"  |  "<<spaces[5]<<"  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  "<<spaces[6]<<"  |  "<<spaces[7]<<"  |  "<<spaces[8]<<"  \n";
    cout << "     |     |     \n";

}

void playMove(char *spaces, char player){
    int num;
    do
    {
        cout << "Choose a case (1-9) : \n";
        cin >> num;
        num--;
        if(spaces[num] == ' '){
            spaces[num]=player;
            break;
        }else{
            cout << "Case # '"<<num+1<<"' it's already use !!";
            
        }
    }while ((!num < 1 && !num>8));
 }
void computerMove(char *spaces, char computer){
    int num;
    do
    {
        srand(time(NULL));
        num = (rand() % 9) + 1;
        if(spaces[num] == ' '){
            spaces[num]=computer;
            break;
        }else{
            num = (rand() % 9) + 1;

        }
    } while (true);
    

}
bool winner(char *spaces){
    if(spaces[0]!=' '){
        if(spaces[0]==spaces[1]){
            if(spaces[0]==spaces[2]){
                if(spaces[0]='X'){
                    return true;
                }
                return false;
            }
        }else if(spaces[0]==spaces[3]){
            if(spaces[0]==spaces[6]){
                if(spaces[0]='X'){
                    return true;
                }
                return false;
                }
        }else if(spaces[0]==spaces[4]){
            if(spaces[0]==spaces[8]){
                if(spaces[0]='X'){
                    return true;
                }
                return false;
            }
        }
        }
    if(spaces[4]!=' '){
        if(spaces[4]==spaces[1]){
            if(spaces[4]==spaces[7]){
                if(spaces[4]='X'){
                    return true;
                }
                return false;
            }
        }else if(spaces[4]==spaces[3]){
                if(spaces[5]==spaces[5]){
                if(spaces[4]='X'){
                    return true;
                }
                return false;
        }}else if(spaces[4]==spaces[2]){
            if(spaces[4]==spaces[6]){
                if(spaces[4]='X'){
                    return true;
                }
                return false;
            }
        }
        
    }
    if(spaces[8]!=' '){
        if(spaces[8]==spaces[5]){
            if(spaces[8]==spaces[2]){
                if(spaces[8]='X'){
                    return true;
                }
                return false;
            }
        }else if(spaces[8]==spaces[7]){
                if(spaces[8]==spaces[6]){
                if(spaces[8]='X'){
                    return true;
                }
                return false;
        }
        }
        }

    }

int main(){
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool result; 
    drawBord(spaces);
    do
    {
        playMove(spaces, player);
        computerMove(spaces, computer);
        drawBord(spaces);
        result = winner;
        if(result){
            cout<<"!!!!! Player win !!!!!";
        }else{
            cout<<"!!!!! Computer win !!!!!";

        }


    } while (winner);
    

    return 0;
}