#include <cstdlib>
#include <ctime>
#include <vector>
#include <Point.hpp>
vector<Area> GenRoomArea(int width, int height, int divideNum = 3){
    srand(time(nullptr));
    const int minimalRoomSize = 5;
    vector<Area> area;
    if(divideNum&1){
        if(width<minimalRoomSize*2){
            area.append()
        }
    }
}
