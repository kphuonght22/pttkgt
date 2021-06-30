#include <iostream>
using namespace std;

int N, M, W[100], V[100], MaxVal, tui[100], chon[100];

void QuayLui(int index);

int main(){
	cin >> N >> M;
	for (int i = 0; i < N; i++){
		cin >> W[i] >> V[i];
	}

	QuayLui(0);

	cout << MaxVal << endl;
	for (int i = 0; i < N; i++){
		if (tui[i] != 0)
			cout << i + 1 << " ";
	}

	return 0;
}

void QuayLui(int index){
	if (index == N){									
		int sumW = 0, sumVal = 0;						
    	for (int k = 0; k < N; k++){					
    		if (chon[k] == 1){							
    			sumW += W[k];							
    			sumVal += V[k];							
    		}
    	}
    	if (sumVal > MaxVal && sumW <= M){				
    		MaxVal = sumVal;								
    		for (int k = 0; k < N; k++){				
    			tui[k] = chon[k];						
    		}
    	}
	} else {
		for (int j = 0; j <= 1; j++){					
			chon[index] = j;
			QuayLui(index + 1);
		}
	}
}
