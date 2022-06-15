#include <iostream>
#include <string>

using namespace std;

int chargeCoin();

enum  VendingMach {
	SELECT, QTT,CAL,UPDATE
};

enum  Brand {
	Coke = 1, Sprite = 2, Fanta = 3, Milkis = 4, Samdasu = 5, BongBong = 6
};

struct Drinks
{
	Brand brandname;
	int inventory;
	int price;
};

int main(void) {
	int choice = 0;

	cout << "┌──────────────────────────────────────────────────────────────────┐" << endl;
	cout << "┃.                                                                 │" << endl;
	cout << "┃           음     료     자     동    판    매    기              │" << endl;
	cout << "┃.                                                                 │" << endl;
	cout << "┕──────────────────────────────────────────────────────────────────┛" << endl;
	cout << "┃                                                                  │" << endl;
	cout << "┃     (1)콜라            (2)사이다          (3)환타                │" << endl;
	cout << "┃      <1000>              <1100>            <1200>                │" << endl;
	cout << "┃                                                                  │" << endl;
	cout << "┃                                                                  │" << endl;
	cout << "┃     (4)밀키스            (5)삼다수          (6)봉봉              │" << endl;
	cout << "┃      <1000>              <1100>            <1200>                │" << endl;
	cout << "┃                                                                  │" << endl;
	cout << "┕──────────────────────────────────────────────────────────────────┛" << endl;
	cout << "┌──────────────────────────────────────────────────────────────────┐" << endl;
	cout << "┃.                                            1000원  동전         │" << endl;
	cout << "┃.                                                   반환.         │" << endl;
	cout << "┕──────────────────────────────────────────────────────────────────┛" << endl;
	cout << "┃.        / /                                                      │" << endl;
	cout << "┃.      / /                                                        │" << endl;
	cout << "┃.    /  /                                                         │" << endl;
	cout << "┃.    |  |                                                         │" << endl;
	cout << "┃.    ＼＼                                                         │" << endl;
	cout << "┃.      ＼＼                                                       │" << endl;
	cout << "┃.        ＼＼                                                     │" << endl;
	cout << "┃.          | |┌─────────────────────────────────────┐             │" << endl;
	cout << "┃.         / / │.                                    │             │" << endl;
	cout << "┃.       / /   │.                                    │             │" << endl;
	cout << "┃.     / /     ┕─────────────────────────────────────┛             │" << endl;
	cout << "┕──────────────────────────────────────────────────────────────────┛" << endl;
	cin >> choice;

	if (choice == 1) {

	}



	// charging system.
	//int chargeCoin(){
	//		int coin = 0;
	//
	//		cout << "동전을 넣으세요: " << endl;
	//		cin >> coin;
	//
	//		return coin;
	//	}


}

void DrinkList(Drinks) {
	// fill the stats about Drinks
	Drinks vendingMach[6];
	//1. coke 2.sprite 3.fanta 4.milkis 5.samdasu 6.bongbong
	vendingMach[0].brandname = Coke;
	vendingMach[0].inventory = 50;
	vendingMach[0].price = 1000;

	vendingMach[1].brandname = Sprite;
	vendingMach[1].inventory = 50;
	vendingMach[1].price = 1100;

	vendingMach[2].brandname = Fanta;
	vendingMach[2].inventory = 50;
	vendingMach[2].price = 1200;

	vendingMach[3].brandname = Milkis;
	vendingMach[3].inventory = 50;
	vendingMach[3].price = 1300;

	vendingMach[4].brandname = Samdasu;
	vendingMach[4].inventory = 50;
	vendingMach[4].price = 1500;

	vendingMach[5].brandname = BongBong;
	vendingMach[5].inventory = 50;
	vendingMach[5].price = 1800;

	Drinks seletedDrks;
}



