#include <iostream>
#include <vector>
#include <string>
using namespace std;

using Point = pair<int, int>;
using Area = pair<Point, Point>;
vector<int> generateMap(int width, int height){
    vector<int> map_data(width * height);
    vector<Area> room_rims = generateRims(width, height);
    return map_data;
}

void showMap(vector<int> map_data, int width, int height){
    for(int y = 0; y < height; ++y) {
        for(int x = 0; x < width; ++x) {
            switch(map_data[x + y * width]) {
                case 0:
                    cout << ".";
                    break;
                default:
                    cout << ".";
                    break;
            }
        }
        cout << endl;
    }
}

void setSize(int *width, int *height){
    cin >> *width >> *height;
}

int main(){
    int width= 50, height= 15;
    setSize(&width, &height);
    vector<int> map_data = generateMap(width,height);
    while(true){
        string command;
        cin >> command;
        if(command == "show"){
            showMap(map_data, width, height);
        }
    }
}
