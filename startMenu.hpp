#ifndef MENU_H
#define MENU_H

//���� �޴� â ���� ���� ����
int menu_w = 1300;
int menu_h = 700;

//���� �޴� â
Mat menu(menu_h, menu_w, CV_8UC3, Scalar(0, 0, 0));

// �÷� �̹����� ������ Mat ��ü�� �����մϴ�.
Scalar red(0, 0, 255);
Scalar green(0, 255, 0);
Scalar blue(255, 0, 0);
Scalar white(255, 255, 255);
Scalar yellow(0, 255, 255);
Scalar cyan(255, 255, 0);
Scalar magenta(255, 0, 255);

//â�� ��� ����
int center_x = int(menu_w / 2.0);
int center_y = int(menu_h / 2.0);

//�ؽ�Ʈ �߰�
int thickness = 2;
Point location(center_x - 350, center_y - 100); //�۾� ��ġ
int font = FONT_HERSHEY_SCRIPT_SIMPLEX;// ��Ʈ
double fontScale = 3; //�۾� ũ��
putText(menu, "Rock Scissor Paper", location, font, fontScale, yellow, 3); //�ؽ�Ʈ ����

location = Point(center_x - 200, center_y + 20);
font = FONT_ITALIC;
fontScale = 1;
putText(menu, "Press SPACE to start game", location, font, fontScale, red, thickness);

location = Point(center_x - 500, center_y + 100);
font = FONT_HERSHEY_SIMPLEX;
fontScale = 1;
putText(menu, "when the game start, place your palm in blue circle for 5 seconds", location, font, fontScale, blue, thickness);

location = Point(center_x - 520, center_y + 150);
font = FONT_HERSHEY_SIMPLEX;
fontScale = 1;
putText(menu, "There should be no skin color inside the red circle except your hand", location, font, fontScale, blue, thickness);

#endif // MENU_H
