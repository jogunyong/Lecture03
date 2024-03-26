#include <iostream>

enum ForeColour {
    Default = 0,
    Black = 30,
    Red = 31,
    Green = 32,
    Yellow = 33,
    Blue = 34,
    Magenta = 35,
    Cyan = 36,
    White = 37,
};

void drawBlock(ForeColour colour) {
    std::cout << "\x1b[" << colour << "m";
    std::cout << "■";
}

int main() {
    std::cout << "화면에 그림을 그리는 프로그램입니다.\n";
    std::cout << "학번: 202327002\n";
    std::cout << "이름: 조건용\n";

    while (true) {
        std::cout << "\n화면에 그릴 물체 코드를 입력하세요 (1: 흰색, 2: 빨강색, 4: 녹색, 8: 노란색, 16: 청록색, 32: 마젠타색, 64: 프로그램 종료): ";
        int code;
        std::cin >> code;

        if (code == 64) {
            break; // 프로그램 종료
        }
        else if (code == 0 || (code & 127) != code) {
            std::cout << "올바르지 않은 코드입니다. 다시 입력하세요.\n";
            continue;
        }

        if (code & 1) {
            drawBlock(White);
        }
        if (code & 2) {
            drawBlock(Red);
        }
        if (code & 4) {
            drawBlock(Green);
        }
        if (code & 8) {
            drawBlock(Yellow);
        }
        if (code & 16) {
            drawBlock(Cyan);
        }
        if (code & 32) {
            drawBlock(Magenta);
        }
    }

    return 0;
}
