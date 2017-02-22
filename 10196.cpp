#include<iostream>

int main(){
	bool find = true;
	int check; //0 -> no check, 1 -> white check & 2 -> black check
	char board[8][8];
	while(find){
		find = false;
		for(int i = 0; i<8; i++){
			for(int j=0; j<8; j++){
				std::cin >> board[i][j];
			}
		}
		for(int i = 0; i<8; i++){
			for(int j=0; j<8; j++){
				std::cout << board[i][j] << " ";
			}
			std::cout << "\n";
		}
	}
	return 0;
}
