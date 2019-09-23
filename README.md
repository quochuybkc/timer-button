# timer-button

1. Mục tiêu
- Sử dụng timer trên nodemcu esp8266
- Đọc dữ liệu số và hiển thị qua uart/led dùng timer

2. Chuẩn bị

- esp8266
- 2 button
- 2 trở 10k ohm
- 7 led

3. Hướng dẫn sử dụng

- Tạo timer xử lí ngắt mỗi 10ms
- Đọc phím nhấn mỗi 10ms
- Tăng giá trị đếm khi phím 1 được nhấn, nếu nhấn giữ trên 1s thì tăng giá trị mỗi 0.5s, nếu nhấn giữ trên 3s thì tăng giá trị mỗi 0.1s
- Tương tự cho phím 2, nhưng là giảm giá trị đếm
- Ưu tiên phím 1 khi hai phím đều nhấn
- Các giá trị đếm được đưa ra 7 led hoặc uart
