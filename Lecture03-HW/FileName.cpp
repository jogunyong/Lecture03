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
    std::cout << "��";
}

int main() {
    std::cout << "ȭ�鿡 �׸��� �׸��� ���α׷��Դϴ�.\n";
    std::cout << "�й�: 202327002\n";
    std::cout << "�̸�: ���ǿ�\n";

    while (true) {
        std::cout << "\nȭ�鿡 �׸� ��ü �ڵ带 �Է��ϼ��� (1: ���, 2: ������, 4: ���, 8: �����, 16: û�ϻ�, 32: ����Ÿ��, 64: ���α׷� ����): ";
        int code;
        std::cin >> code;

        if (code == 64) {
            break; // ���α׷� ����
        }
        else if (code == 0 || (code & 127) != code) {
            std::cout << "�ùٸ��� ���� �ڵ��Դϴ�. �ٽ� �Է��ϼ���.\n";
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
