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
        bool maintenanceStatus; //trạng thái bảo trì: true = chưa đến thời gian bảo trì, vẫn sử dụng được; false = hiện đang trong thời gian bảo trì, không thể sử dụng xe này.
    public:
        Vehicle() {}; //constructor mặc định, thêm vào để tránh lỗi khi khai báo mảng đối tượng
        //constructor có tham số để khởi tạo đối tượng với các thuộc tính cụ thể
        Vehicle(string type, string brand, int year, int maxSpeed, string color, string licensePlate, int monthsInCompany, string managerName, bool maintenanceStatus) {
            this->type = type;
            this->brand = brand;
            this->year = year;
            this->maxSpeed = maxSpeed;
            this->color = color;
            this->licensePlate = licensePlate;
            this->monthsInCompany = monthsInCompany;
            this->managerName = managerName;
            this->maintenanceStatus = maintenanceStatus;
        }

        string getTypes() { return type; }
        void setTypes(string t) { type = t; }

        string getBrand() { return brand; }
        void setBrand(string b) { brand = b; }

        int getYear() { return year; }
        void setYear(int y) { year = y; }     

        int getMaxSpeed() { return maxSpeed; }
        void setMaxSpeed(int ms) { maxSpeed = ms; }

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
            cout << (maintenanceStatus ? ", chua den thoi gian bao tri, van su dung duoc." : ", hien dang trong thoi gian bao tri, khong the su dung xe nay.") << endl;
        } 

        void accelerate() {
            cout << "Xe " << type << " co bien so " << licensePlate << " dang tang toc len " << maxSpeed << " km/h" << endl;
        }


};

int main() {
    const int N=100;
    Vehicle vehicles[N];
    int n;
    cout<<"He thong cong ty gom bao nhieu xe? "; cin>>n;
    for (int i=0; i<n; i++) {
        string type, brand, color, managerName, licensePlate;
        int year, maxSpeed, monthsInCompany;
        bool maintenanceStatus;
        cout<<"Nhap thong tin xe thu "<<i+1<<":"<<endl;
        cin>>ws; //bỏ hết ký tự trắng còn thừa trong bộ đệm. Tiện hơn khi dùng cin.ignore() khi chỉ xóa được một ký tự trắng
        cout<<"Loai xe: "; getline(cin, type);
        cout<<"Hang xe: "; getline(cin, brand);
        cout<<"Nam san xuat: "; cin>>year;
        cout<<"Toc do toi da: "; cin>>maxSpeed;
        cout<<"Mau sac: "; cin>>ws; getline(cin, color);
        cout<<"Bien so xe: "; cin>>ws; getline(cin, licensePlate);
        cout<<"So thang trong cong ty: "; cin>>monthsInCompany;
        cout<<"Ten nguoi quan ly: "; cin>>ws; getline(cin, managerName); 
        cout<<"Trang thai bao tri: "; cin>>maintenanceStatus;
        vehicles[i] = Vehicle(type, brand, year, maxSpeed, color,licensePlate, monthsInCompany, managerName, maintenanceStatus);
    }

    for (int i=0; i<n; i++) {
        cout<<"Thong tin xe thu "<<i+1<<":"<<endl;
        vehicles[i].displayInfo();
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
    - Trạng thái bảo trì: nhập 1 nếu bạn muốn xe sử dụng được và 0 thì ngược lại
*/
