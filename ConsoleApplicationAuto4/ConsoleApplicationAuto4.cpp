#include <iostream>

using namespace std;




  /*  void global_info() {
        this->print_wheel_vol();
        cout << "There are:\n"
            << recieved << " recieved\n"
            << selled << " selled\n"
            << written_off << " written off\n"
            << transferred << " transferred\n"
            << global_type <<" parts with "<< type << endl
			<< "middle buy price is " << buy_price << "$ and sell price is " << sell_price << "$\n"; 
    } */


class Car_parts{
protected:
    string global_type = "car";
};

class Turbulent_wings : public Car_parts {
protected:
    string type = "Turbulent wings";
};

class Wheel_tur : public Turbulent_wings
{
	int vol;
	int buy_price = 200;
	int sell_price = 250;
public:
	static int recieved;
	static int selled;
	static int written_off;
	static int transferred;

	Wheel_tur(int vol) {
		this->vol = vol;
	};
	void global_info() {
		this->print_wheel_vol();
		cout << "There are:\n"
			<< Wheel_tur::recieved << " recieved\n"
			<< Wheel_tur::selled << " selled\n"
			<< Wheel_tur::written_off << " written off\n"
			<< Wheel_tur::transferred << " transferred\n"
			<< global_type << " parts with " << type << endl
			<< "middle buy price is " << buy_price << "$ and sell price is " << sell_price << "$\n";
	}
	void print_wheel_vol() {
		cout << "Wheel: " << vol << " inches" << endl;
	}
};

class Light_tur : public Turbulent_wings
{
	int buy_price = 500;
	int sell_price = 600;
	int L_type;
public:
	static int recieved;
	static int selled;
	static int written_off;
	static int transferred;

	Light_tur(int L_type) {
		this->L_type = L_type;
	};
	void global_info() {
		this->print_light_type();
		cout << "There are:\n"
			<< Light_tur::recieved << " recieved\n"
			<< Light_tur::selled << " selled\n"
			<< Light_tur::written_off << " written off\n"
			<< Light_tur::transferred << " transferred\n"
			<< global_type << " parts with " << type << endl
			<< "middle buy price is " << buy_price << "$ and sell price is " << sell_price << "$\n";
	}
	void print_light_type() {
		cout << "Light: " << "Type " << L_type
			<< endl;
	}
};

class Engine_tur : public Turbulent_wings
{
	int buy_price = 2000;
	int sell_price = 2500;
	double value;
public:
	static int recieved;
	static int selled;
	static int written_off;
	static int transferred;

	Engine_tur(double value) {
		this->value = value;
	};
	void global_info() {
		this->print_engine_value();
		cout << "There are:\n"
			<< Engine_tur::recieved << " recieved\n"
			<< Engine_tur::selled << " selled\n"
			<< Engine_tur::written_off << " written off\n"
			<< Engine_tur::transferred << " transferred\n"
			<< global_type << " parts with " << type << endl
			<< "middle buy price is " << buy_price << "$ and sell price is " << sell_price << "$\n";
	}
	void print_engine_value() {
		cout << "Engine: " << value << " L" << endl;
	}
};

class Chassis_tur : public Turbulent_wings
{
	int buy_price = 1000;
	int sell_price = 1300;
	string condition;
public:
	static int recieved;
	static int selled;
	static int written_off;
	static int transferred;

	Chassis_tur(string condition) {
		this->condition = condition;
	};
	void global_info() {
		this->print_chassis_condition();
		cout << "There are:\n"
			<< Chassis_tur::recieved << " recieved\n"
			<< Chassis_tur::selled << " selled\n"
			<< Chassis_tur::written_off << " written off\n"
			<< Chassis_tur::transferred << " transferred\n"
			<< global_type << " parts with " << type << endl
			<< "middle buy price is " << buy_price << "$ and sell price is " << sell_price << "$\n";
	}
	void print_chassis_condition() {
		cout << "Chassis: " << condition << endl;
	}
};

int Chassis_tur::recieved = 12;
int Chassis_tur::selled = 4;
int Chassis_tur::written_off = 5;
int Chassis_tur::transferred = 1;

int Engine_tur::recieved = 12;
int Engine_tur::selled = 4;
int Engine_tur::written_off = 5;
int Engine_tur::transferred = 1;

int Light_tur::recieved = 12;
int Light_tur::selled = 4;
int Light_tur::written_off = 5;
int Light_tur::transferred = 1;

int Wheel_tur::recieved = 15;
int Wheel_tur::selled = 3;
int Wheel_tur::written_off = 7;
int Wheel_tur::transferred = 3;


class Router_4G : public Car_parts {
protected:
	string type = "4G Router";
};


class Wheel_4G : public Router_4G
{
	int vol;
	int buy_price = 200;
	int sell_price = 250;
public:
	static int recieved;
	static int selled;
	static int written_off;
	static int transferred;

	Wheel_4G(int vol) {
		this->vol = vol;
	};
	void global_info() {
		this->print_wheel_vol();
		cout << "There are:\n"
			<< Wheel_4G::recieved << " recieved\n"
			<< Wheel_4G::selled << " selled\n"
			<< Wheel_4G::written_off << " written off\n"
			<< Wheel_4G::transferred << " transferred\n"
			<< global_type << " parts with " << type << endl
			<< "middle buy price is " << buy_price << "$ and sell price is " << sell_price << "$\n";
	}
	void print_wheel_vol() {
		cout << "Wheel: " << vol << " inches" << endl;
	}
};

class Light_4G : public Router_4G
{
	int buy_price = 500;
	int sell_price = 600;
	int L_type;
public:
	static int recieved;
	static int selled;
	static int written_off;
	static int transferred;

	Light_4G(int L_type) {
		this->L_type = L_type;
	};
	void global_info() {
		this->print_light_type();
		cout << "There are:\n"
			<< Light_4G::recieved << " recieved\n"
			<< Light_4G::selled << " selled\n"
			<< Light_4G::written_off << " written off\n"
			<< Light_4G::transferred << " transferred\n"
			<< global_type << " parts with " << type << endl
			<< "middle buy price is " << buy_price << "$ and sell price is " << sell_price << "$\n";
	}
	void print_light_type() {
		cout << "Light: " << "Type " << L_type << endl;
	}
};

class Engine_4G : public Router_4G
{
	int buy_price = 2000;
	int sell_price = 2500;
	double value;
public:
	static int recieved;
	static int selled;
	static int written_off;
	static int transferred;

	Engine_4G(double value) {
		this->value = value;
	};
	void global_info() {
		this->print_engine_value();
		cout << "There are:\n"
			<< Engine_4G::recieved << " recieved\n"
			<< Engine_4G::selled << " selled\n"
			<< Engine_4G::written_off << " written off\n"
			<< Engine_4G::transferred << " transferred\n"
			<< global_type << " parts with " << type << endl
			<< "middle buy price is " << buy_price << "$ and sell price is " << sell_price << "$\n";
	}
	void print_engine_value() {
		cout << "Engine: " << value << " L" << endl;
	}
};

class Chassis_4G : public Router_4G
{
	int buy_price = 1000;
	int sell_price = 1300;
	string condition;
public:
	static int recieved;
	static int selled;
	static int written_off;
	static int transferred;

	Chassis_4G(string condition) {
		this->condition = condition;
	};
	void global_info() {
		this->print_chassis_condition();
		cout << "There are:\n"
			<< Chassis_4G::recieved << " recieved\n"
			<< Chassis_4G::selled << " selled\n"
			<< Chassis_4G::written_off << " written off\n"
			<< Chassis_4G::transferred << " transferred\n"
			<< global_type << " parts with " << type << endl
			<< "middle buy price is " << buy_price << "$ and sell price is " << sell_price << "$\n";
	}
	void print_chassis_condition() {
		cout << "Chassis: " << condition << endl;
	}
};

int Chassis_4G::recieved = 15;
int Chassis_4G::selled = 3;
int Chassis_4G::written_off = 8;
int Chassis_4G::transferred = 2;

int Engine_4G::recieved = 20;
int Engine_4G::selled = 5;
int Engine_4G::written_off = 2;
int Engine_4G::transferred = 5;

int Light_4G::recieved = 17;
int Light_4G::selled = 8;
int Light_4G::written_off = 2;
int Light_4G::transferred = 3;

int Wheel_4G::recieved = 11;
int Wheel_4G::selled = 7;
int Wheel_4G::written_off = 2;
int Wheel_4G::transferred = 1;


class Truck_parts {
protected:
	string global_type = "truck";
};


class Dump_truck_body : public Truck_parts {
protected:
	string type = "dump truck body";
};


class Wheel_dump_truck : public Dump_truck_body
{
	int vol;
	int buy_price = 200;
	int sell_price = 250;
public:
	static int recieved;
	static int selled;
	static int written_off;
	static int transferred;

	Wheel_dump_truck(int vol) {
		this->vol = vol;
	};
	void global_info() {
		this->print_wheel_vol();
		cout << "There are:\n"
			<< Wheel_dump_truck::recieved << " recieved\n"
			<< Wheel_dump_truck::selled << " selled\n"
			<< Wheel_dump_truck::written_off << " written off\n"
			<< Wheel_dump_truck::transferred << " transferred\n"
			<< global_type << " parts with " << type << endl
			<< "middle buy price is " << buy_price << "$ and sell price is " << sell_price << "$\n";
	}
	void print_wheel_vol() {
		cout << "Wheel: " << vol << " inches" << endl;
	}
};

class Light_dump_truck : public Dump_truck_body
{
	int buy_price = 500;
	int sell_price = 600;
	int L_type;
public:
	static int recieved;
	static int selled;
	static int written_off;
	static int transferred;

	Light_dump_truck(int L_type) {
		this->L_type = L_type;
	};
	void global_info() {
		this->print_light_type();
		cout << "There are:\n"
			<< Light_dump_truck::recieved << " recieved\n"
			<< Light_dump_truck::selled << " selled\n"
			<< Light_dump_truck::written_off << " written off\n"
			<< Light_dump_truck::transferred << " transferred\n"
			<< global_type << " parts with " << type << endl
			<< "middle buy price is " << buy_price << "$ and sell price is " << sell_price << "$\n";
	}
	void print_light_type() {
		cout << "Light: " << "Type " << L_type << endl;
	}
};

class Engine_dump_truck : public Dump_truck_body
{
	int buy_price = 2000;
	int sell_price = 2500;
	double value;
public:
	static int recieved;
	static int selled;
	static int written_off;
	static int transferred;

	Engine_dump_truck(double value) {
		this->value = value;
	};
	void global_info() {
		this->print_engine_value();
		cout << "There are:\n"
			<< Engine_dump_truck::recieved << " recieved\n"
			<< Engine_dump_truck::selled << " selled\n"
			<< Engine_dump_truck::written_off << " written off\n"
			<< Engine_dump_truck::transferred << " transferred\n"
			<< global_type << " parts with " << type << endl
			<< "middle buy price is " << buy_price << "$ and sell price is " << sell_price << "$\n";
	}
	void print_engine_value() {
		cout << "Engine: " << value << " L" << endl;
	}
};

class Chassis_dump_truck : public Dump_truck_body
{
	int buy_price = 1000;
	int sell_price = 1300;
	string condition;
public:
	static int recieved;
	static int selled;
	static int written_off;
	static int transferred;

	Chassis_dump_truck(string condition) {
		this->condition = condition;
	};
	void global_info() {
		this->print_chassis_condition();
		cout << "There are:\n"
			<< Chassis_dump_truck::recieved << " recieved\n"
			<< Chassis_dump_truck::selled << " selled\n"
			<< Chassis_dump_truck::written_off << " written off\n"
			<< Chassis_dump_truck::transferred << " transferred\n"
			<< global_type << " parts with " << type << endl
			<< "middle buy price is " << buy_price << "$ and sell price is " << sell_price << "$\n";
	}
	void print_chassis_condition() {
		cout << "Chassis: " << condition << endl;
	}
};

int Chassis_dump_truck::recieved = 16;
int Chassis_dump_truck::selled = 4;
int Chassis_dump_truck::written_off = 6;
int Chassis_dump_truck::transferred = 3;

int Engine_dump_truck::recieved = 17;
int Engine_dump_truck::selled = 2;
int Engine_dump_truck::written_off = 3;
int Engine_dump_truck::transferred = 7;

int Light_dump_truck::recieved = 18;
int Light_dump_truck::selled = 3;
int Light_dump_truck::written_off = 6;
int Light_dump_truck::transferred = 2;

int Wheel_dump_truck::recieved = 12;
int Wheel_dump_truck::selled = 6;
int Wheel_dump_truck::written_off = 2;
int Wheel_dump_truck::transferred = 4;


class Tent : public Truck_parts {
protected:
	string type = "Tent";
};


class Wheel_tent : public Tent
{
	int vol;
	int buy_price = 200;
	int sell_price = 250;
public:
	static int recieved;
	static int selled;
	static int written_off;
	static int transferred;

	Wheel_tent(int vol) {
		this->vol = vol;
	};
	void global_info() {
		this->print_wheel_vol();
		cout << "There are:\n"
			<< Wheel_tent::recieved << " recieved\n"
			<< Wheel_tent::selled << " selled\n"
			<< Wheel_tent::written_off << " written off\n"
			<< Wheel_tent::transferred << " transferred\n"
			<< global_type << " parts with " << type << endl
			<< "middle buy price is " << buy_price << "$ and sell price is " << sell_price << "$\n";
	}
	void print_wheel_vol() {
		cout << "Wheel: " << vol << " inches" << endl;
	}
};

class Light_tent : public Tent
{
	int buy_price = 500;
	int sell_price = 600;
	int L_type;
public:
	static int recieved;
	static int selled;
	static int written_off;
	static int transferred;

	Light_tent(int L_type) {
		this->L_type = L_type;
	};
	void global_info() {
		this->print_light_type();
		cout << "There are:\n"
			<< Light_tent::recieved << " recieved\n"
			<< Light_tent::selled << " selled\n"
			<< Light_tent::written_off << " written off\n"
			<< Light_tent::transferred << " transferred\n"
			<< global_type << " parts with " << type << endl
			<< "middle buy price is " << buy_price << "$ and sell price is " << sell_price << "$\n";
	}
	void print_light_type() {
		cout << "Light: " << "Type " << L_type << endl;
	}
};

class Engine_tent : public Tent
{
	int buy_price = 2000;
	int sell_price = 2500;
	double value;
public:
	static int recieved;
	static int selled;
	static int written_off;
	static int transferred;

	Engine_tent(double value) {
		this->value = value;
	};
	void global_info() {
		this->print_engine_value();
		cout << "There are:\n"
			<< Engine_tent::recieved << " recieved\n"
			<< Engine_tent::selled << " selled\n"
			<< Engine_tent::written_off << " written off\n"
			<< Engine_tent::transferred << " transferred\n"
			<< global_type << " parts with " << type << endl
			<< "middle buy price is " << buy_price << "$ and sell price is " << sell_price << "$\n";
	}
	void print_engine_value() {
		cout << "Engine: " << value << " L" << endl;
	}
};

class Chassis_tent : public Tent
{
	int buy_price = 1000;
	int sell_price = 1300;
	string condition;
public:
	static int recieved;
	static int selled;
	static int written_off;
	static int transferred;

	Chassis_tent(string condition) {
		this->condition = condition;
	};
	void global_info() {
		this->print_chassis_condition();
		cout << "There are:\n"
			<< Chassis_tent::recieved << " recieved\n"
			<< Chassis_tent::selled << " selled\n"
			<< Chassis_tent::written_off << " written off\n"
			<< Chassis_tent::transferred << " transferred\n"
			<< global_type << " parts with " << type << endl
			<< "middle buy price is " << buy_price << "$ and sell price is " << sell_price << "$\n";
	}
	void print_chassis_condition() {
		cout << "Chassis: " << condition << endl;
	}
};

int Chassis_tent::recieved = 16;
int Chassis_tent::selled = 4;
int Chassis_tent::written_off = 6;
int Chassis_tent::transferred = 3;

int Engine_tent::recieved = 19;
int Engine_tent::selled = 4;
int Engine_tent::written_off = 3;
int Engine_tent::transferred = 7;

int Light_tent::recieved = 12;
int Light_tent::selled = 7;
int Light_tent::written_off = 4;
int Light_tent::transferred = 3;

int Wheel_tent::recieved = 15;
int Wheel_tent::selled = 7;
int Wheel_tent::written_off = 3;
int Wheel_tent::transferred = 1;




int main()
{
	Engine_tur obj1(2.2);
	obj1.print_engine_value();
	cout << endl << endl;

	obj1.global_info();
	cout << endl << endl;

	Engine_tur::selled++;
	obj1.global_info();
	cout << endl << endl;


	Light_dump_truck obj2(3);
	obj2.global_info();
	cout << endl << endl;

	Chassis_4G obj3("Normal");
	obj3.global_info();
	cout << endl << endl;

	Wheel_tent obj4(27);
	obj4.global_info();
	cout << endl << endl;

	Wheel_tent::recieved += 5;
	obj4.global_info();
	cout << endl << endl;
}

