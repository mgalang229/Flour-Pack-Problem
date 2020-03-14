#include <iostream>
using namespace std;

class Flour{
	public:
		static int canPack(int bigCount, int smallCount, int goal){
			bool checker;
			int newBigCount = bigCount * 5;
			int total = newBigCount + smallCount;
			if(bigCount < 0 || smallCount < 0){
				checker = false;
			} else if (total >= goal){
				if(goal < newBigCount && smallCount == 0){
          checker = false;
        } else{
          checker = true;
        }
			} else if (total < goal){
				checker = false;
			}
			return checker;
		}
};
int main(){
	Flour fl;
	cout << fl.canPack(1, 0, 4) << endl;		
	cout << fl.canPack(1, 0, 5) << endl;
	cout << fl.canPack(2, 2, 11) << endl;
	cout << fl.canPack(-3, 2, 12) << endl;
	cout << endl;
	return 0;
}

