# TransportationFleetSystem - Hệ thống quản lý xe công ty

## Giới thiệu
- Bài tập lần này là để luyện tập cách làm một bài toán mà trong đó không các thành phần trong bài mình đều phải tự suy luận và phân tích. Không sẵn có các thành phần con như những bài tập trước đó, bài toán lần này là một dạng thực tế để làm quen cách ta phân tích một bài toán trong môi trường thực tế. Để làm được điều đó, ta cần trải qua nhiều bước phân tích kỹ lưỡng kết hợp quan sát tình hình thị trường ngày này.
- Một hệ thống đơn giản, sơ khai sẽ là nền tảng cho những hệ thống phức tạp sau này.
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
  
## Thực hành
- Khi phân tích yêu cầu, mình nhận ra tâm điểm chính là **xe**. Từ đó, liệt kê các đặc điểm quan trọng (loại, hãng, tốc độ, biển số, …) thành thuộc tính và các hành vi (tăng tốc, hiển thị, đánh giá tình trạng) thành phương thức.  
- Nhiều khó khăn xuất hiện trong bài tập lần này. Đầu tiên, mình muốn tạo input được nhập từ bàn phím nhưng lại không biết là có mảng nào mà phần tử là __Class__ không? Và để giải quyết vấn đề đó, mình đã hỏi người bạn của mình, __ChatGPT__. Sau khi có được câu trả lời thì mình đã hiểu và biết thêm một phần kiến thức. Thứ hai, có quá nhiều thuộc tính để lựa chọn và không biết nên thêm nên bỏ cái nào và cách đặt tên của nó như thế nào cho hợp lý. Và thứ ba là việc các yêu cầu của bài tập lần này như về cách đặt tên theo __Camel Case__, hay đầy đủ một vài thuộc tính và phương thức bắt buộc cũng như các input một cách gọn gàng khi các phần tử là một class. Mọi khó khăn gặp phải mình đều trao đổi với __ChatGPT__ kết hợp một vài thông tin tìm kiếm trên mạng xã hội.  
- Thách thức lớn nhất trong bài tập lần này theo mình cảm thấy đó là việc chọn lọc thông tin nào cần thiết để chương trình vừa **thực tế** vừa **dễ triển khai**. Ngoài ra, mình cũng phải xử lý một vài tình huống ngoại lệ mà đôi khi bản thân ta không để ý đến, ví dụ tốc độ tối đa không thể âm nên cần kiểm tra trong setter.  

# Nhận xét
- Tự đánh giá không cao trong phần ouput ra màn hình của code mình không phải tiếng Anh mà là __tiếng Việt__. Nhưng mình muốn hệ thống được hiển thị một cách thân thuộc và dễ nhìn nên mình lựa chọn output bằng tiếng Việt. Việc chuyển qua output lại bằng tiếng Anh có thể dễ dàng khi chúng ta có bạn đồng hành, chỉ cần một nút lệnh yêu cầu là được.
- Tuy nhiên, bản thân mình cảm thấy sẽ dễ kiểm soát hơn khi là tiếng Việt. Đây là một nhược điểm mà bản thân mình sẽ cố gắng cải thiện và thay đổi nó.


