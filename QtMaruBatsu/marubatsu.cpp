#include "marubatsu.h"


inline void MaruBatsu::resetGame(){
    isGaming_ = true;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            map_[i][j] = 0;
        }
    }
}

inline int MaruBatsu::push(int i, int j){
    if( (3 < i)||(3 < j)){
        return -1;
    }else if(isGaming_ == false){
        return map_[i][j];
    }else{
        return (turn_ % 2)+1;
    }

}
