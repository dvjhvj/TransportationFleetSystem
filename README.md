# TransportationFleetSystem

# Hệ thống quản lý xe công ty

## Giới thiệu
Dự án này xây dựng một chương trình C++ mô phỏng hệ thống quản lý các loại xe trong công ty vận tải.  
Chương trình được thiết kế dựa trên các khái niệm Lập trình Hướng đối tượng (OOP) như: đóng gói (encapsulation), hàm khởi tạo (constructor), và phương thức mô phỏng hành vi thực tế.

## Tính năng chính
- Quản lý nhiều loại xe khác nhau (ô tô, xe tải, xe máy, …).
- Thuộc tính bao gồm: loại xe, hãng, năm sản xuất, tốc độ tối đa, màu sắc, biển số, số tháng trong công ty, tên người quản lý, loại nhiên liệu và trạng thái bảo trì.
- Các phương thức:
  - `displayInfo()` → Hiển thị thông tin chi tiết của xe.
  - `accelerate()` → Mô phỏng xe tăng tốc đến tốc độ tối đa.
  - `evaluateCondition()` → Đánh giá tình trạng xe dựa trên tuổi đời.
  - `input()` → Cho phép nhập dữ liệu xe từ bàn phím.
- Hai chế độ sử dụng:
  - Dùng dữ liệu xe có sẵn.
  - Tự nhập dữ liệu xe từ người dùng.

## Liên hệ với lý thuyết OOP
- **Xác định thực thể**: Lớp `Vehicle` đại diện cho thực thể "Xe" trong thế giới thực.  
- **Đóng gói (Encapsulation)**: Các thuộc tính được khai báo `private` và truy cập thông qua getter/setter có kiểm tra dữ liệu (ví dụ: tốc độ tối đa không thể âm).  
- **Hành vi (Methods)**: Các phương thức mô phỏng hành vi thực tế như tăng tốc, đánh giá tình trạng, hiển thị thông tin.  
- **Khả năng mở rộng (Extensibility)**: Có thể dễ dàng bổ sung thêm thuộc tính hoặc phương thức mới mà không ảnh hưởng đến phần còn lại.

## Tự phản ánh
Khi phân tích yêu cầu, mình nhận ra thực thể trung tâm chính là **xe**. Từ đó, mình liệt kê các đặc điểm quan trọng (loại, hãng, tốc độ, biển số, …) thành thuộc tính và các hành vi (tăng tốc, hiển thị, đánh giá tình trạng) thành phương thức.  
Thách thức lớn nhất là chọn lọc thông tin nào cần thiết để chương trình vừa **thực tế** vừa **dễ triển khai**. Ngoài ra, mình cũng phải xử lý tình huống ngoại lệ, ví dụ tốc độ tối đa không thể âm nên cần kiểm tra trong setter.  

Qua dự án này, mình thấy rõ sức mạnh của OOP:
- **Đóng gói** giúp bảo vệ dữ liệu và tránh sai sót khi nhập.  
- **Hàm khởi tạo (constructor)** giúp việc tạo đối tượng trở nên nhanh chóng và rõ ràng.  
- **Trừu tượng hóa (abstraction)** qua các phương thức như `evaluateCondition()` giúp mô tả được hành vi của xe trong đời sống thật.  

Dự án nhỏ này đã giúp mình rèn luyện cách biến một yêu cầu thực tế thành cấu trúc phần mềm rõ ràng, dễ mở rộng và dễ bảo trì. Đây sẽ là kinh nghiệm hữu ích khi làm các bài tập lớn hơn trong tương lai.  

## Cách chạy chương trình
```bash
g++ main.cpp -o vehicle
./vehicle

