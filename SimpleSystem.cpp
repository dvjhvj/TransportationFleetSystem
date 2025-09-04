#include <iostream>
using namespace std;

class Vehicle {
    private:
        string type;
        string brand;
        int year; //năm chiếc xe ra đời
        int maxSpeed;
        string color;
        string licensePlate; //biển số xe để phân biệt các xe cùng loại với nhau. Ví dụ cách nhập biển số xe: 51C-12345, 59A-67890,...
        int monthsInCompany; //thời gian xe hoạt động trong công ty tính theo tháng
        string managerName;
        bool maintenanceStatus; //trạng thái bảo trì: false = chưa đến thời gian bảo trì, vẫn sử dụng được; true = hiện đang trong thời gian bảo trì, không thể sử dụng xe này.
    public:
        Vehicle() {}; //constructor mặc định, thêm vào để tránh lỗi khi khai báo mảng đối tượng
        //constructor có tham số để khởi tạo đối tượng với các thuộc tính cụ thể
        Vehicle(string type, string brand, int year, int maxSpeed, string color, string licensePlate, int monthsInCompany, string managerName, bool maintenanceStatus) {
            this->type = type;
            this->brand = brand;
            this->year = year;
            this->maxSpeed = (maxSpeed < 0 ? 0 : maxSpeed); //nếu tốc độ nhập vào là số âm thì gán tốc độ = 0
            this->color = color;
            this->licensePlate = licensePlate;
            this->monthsInCompany = monthsInCompany;
            this->managerName = managerName;
            this->maintenanceStatus = maintenanceStatus;
        }

        string getType() { return type; }
        void setType(string t) { type = t; }

        string getBrand() { return brand; }
        void setBrand(string b) { brand = b; }

        int getYear() { return year; }
        void setYear(int y) { year = y; }     

        int getMaxSpeed() { return maxSpeed; }
        void setMaxSpeed(int ms) { //phòng trường hợp gọi riêng hàm setMaxSpeed với tham số là số âm
            if (ms < 0) {
                maxSpeed = 0;
                cout << "Toc do toi da khong the la so am, chuyen lai thanh 0 km/h" << endl;
            } else {
                maxSpeed = ms;
            }
        }

        string getColor() { return color; }
        void setColor(string c) { color = c; }  

        string getLicensePlate() { return licensePlate; }
        void setLicensePlate(string lp) { licensePlate = lp; }

        int getMonthsInCompany() { return monthsInCompany; }
        void setMonthsInCompany(int mic) { monthsInCompany = mic; }

        string getManagerName() { return managerName; }
        void setManagerName(string mn) { managerName = mn; }

        bool getMaintenanceStatus() { return maintenanceStatus; }
        void setMaintenanceStatus(bool ms) { maintenanceStatus = ms; }


        void displayInfo() {
            cout << type;
            cout << " co bien so " << licensePlate;
            cout << " thuoc hang " << brand;
            cout << ", san xuat nam " << year;
            cout << ", toc do toi da " << maxSpeed << " km/h";
            cout << ", co mau " << color;
            cout << ", hoat dong trong cong ty duoc " << monthsInCompany << " thang";
            cout << ", thuoc quan ly cua " << managerName;
            cout << (maintenanceStatus ? ", hien dang trong thoi gian bao tri, khong the su dung xe nay." : ", chua den thoi gian bao tri, van su dung duoc.") << endl;
        } 

        void accelerate() {
            cout << "Xe " << type << " co bien so " << licensePlate << " dang tang toc len " << maxSpeed << " km/h" << endl;
        }

        void input(int index) {
            cout << "Nhap thong tin xe thu " << index+1 << endl;
            cout << "Loai xe: "; cin >> ws; getline(cin, type);
            cout << "Hang xe: "; cin >> ws; getline(cin, brand);
            cout << "Nam san xuat: "; cin >> year;
            cout << "Toc do toi da: "; cin >> maxSpeed;
            cout << "Mau sac: "; cin >> ws; getline(cin, color);
            cout << "Bien so xe: "; cin >> ws; getline(cin, licensePlate);
            cout << "So thang trong cong ty: "; cin >> monthsInCompany;
            cout << "Ten nguoi quan ly: "; cin >> ws; getline(cin, managerName);
            cout << "Trang thai bao tri: "; cin >> maintenanceStatus;
        }


};


int main() {
    bool availableData;
    cout<<"Chao mung ban den voi he thong quan ly xe cua cong ty!"<<endl;
    cout<<"Ban co hai lua chon"<<endl;
    cout<< "0: Tu nhap thong tin xe"<<endl;
    cout<< "1: Su dung thong tin xe co san"<<endl;
    cout<<"Lua chon cua ban: ";
    cin>>availableData;
    cout<<endl;
    if (availableData) {
        Vehicle car("oto", "Toyota", 2020, 120, "Do", "51A-12345", 24, "Le Van Viet", true);
        Vehicle truck("xe tai", "Hino", 2018, 100, "Trang", "51C-67890", 36, "Hoang Dieu", false);
        Vehicle motorcycle("xe may", "Honda", 2021, 90, "Den", "59A-24680", 12, "Vo Van Ngan", true);

        car.displayInfo();
        truck.displayInfo();
        motorcycle.displayInfo();
        cout<<endl;
        car.accelerate();
        truck.accelerate();
        motorcycle.accelerate();

        return 0;

    }
    const int N=100;
    Vehicle vehicles[N];
    int n;
    cout<<"He thong cong ty gom bao nhieu xe? "; cin>>n;
   for (int i=0; i<n; i++) {
        vehicles[i].input(i);
    }
    
    cout<<endl;
    cout<<"Thong tin chi tiet cac xe trong cong ty:"<<endl;
    for (int i=0; i<n; i++) {
        cout<<"Thong tin xe thu "<<i+1<<":"<<endl;
        vehicles[i].displayInfo();
        cout<<endl;
    }

    for (int i=0; i<n; i++) {
        vehicles[i].accelerate();
    }

    return 0;
}
/* Gợi ý một số thông tin giúp bạn input dễ dàng hơn:
    - Các loại xe trong công ty có thể là: oto, xe tai, xe may, xe buyt, xe container,...
    - Các hãng xe có thể là: Toyota, Ford, Honda, Yamaha, Hino, Thaco,...
    - Màu sắc có thể là: do, xanh, vang, trang, den,...
    - Biển số xe: nhập theo định dạng 51C-12345, 59A-67890,... với 2 chữ số đầu là mã tỉnh, tiếp theo là chữ cái và 5 chữ số cuối
    - Trạng thái bảo trì: nhập 0 nếu xe vẫn hoạt động được và 1 nếu xe đang trong thời gian bảo trì
*/
