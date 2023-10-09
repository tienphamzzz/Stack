## Bài tập lớn môn học: Cấu trúc dữ liệu và giải thuật
### Sinh viên thực hiện: Phạm Ngọc Tiền
### Mã số sinh viên: 221231008
***
#### Đề bài:
1. Cài đặt Stack bằng 2 cách: Mảng và danh sách liên kết 
2. Mô phỏng hoạt động của stack bằng cách xây dựng chương trình sau: 
 - Bạn được cho một ngăn xếp rỗng và một số truy vấn với ngăn xếp này. Các truy vấn là những truy vấn cơ bản của ngăn xếp: Đẩy vào, lấy ra, in ra phần tử ở đỉnh, các truy vấn có dạng: 
   1. Đẩy số nguyên n vào ngăn xếp 
   2. Loại bỏ phần tử ở đầu ngăn xếp (nếu ngăn xếp rỗng thì thao tác này không có hiệu lực) 
   3. In ra phần tử ở đỉnh ngăn xếp (không lấy ra khỏi ngăn xếp, nếu ngăn xếp rỗng thì in ra Empty!) 
- Dữ liệu vào:
  + Dòng đầu chứa số nguyên dương T là số truy vấn; 
  + T dòng tiếp theo, mỗi dòng chứa một truy vấn. 
- Dữ liệu ra:
  + Ứng với mỗi truy vấn loại 3, in ra kết quả tương ứng trên một dòng. 

3. Ứng dụng stack lập trình giải bài toán sau: 
- Cho dãy ngoặc đúng gồm n dấu mở ngoặc (và n dấu đóng ngoặc). Các dấu ngoặc được đánh số thứ tự từ 1 đến 2n. Hãy liệt kê chỉ số của các cặp dấu mở ngoặc và đóng ngoặc tương ứng. 
- Dữ liệu vào 
  - Gồm một dòng duy nhất chứa xâu ký tự biểu diễn dãy ngoặc. 
- Dữ liệu ra 
  - Gồm n dòng, mỗi dòng gồm hai số u, v là chỉ số của các cặp ngoặc tương ứng nhau, thứ tự liệt kê tăng dần theo chỉ số của dấu ngoặc đóng. 

#### Các chức năng đã hoàn thành
- [x] Xây dựng mô hình stack bằng danh sách liên kết đơn.
- [x] Xây dựng các chức năng cơ bản của stack.
- [x] Ứng dụng mô hình stack đã xây dựng để giải bài toán liệt kê các cặp ngoặc đúng.

#### Các file thành phần của chương trình
> **NodeandStack.h** : File chứa khai báo lớp Node và lớp Stack, chứa các hàm của lớp Node và Stack.
> **app1.cpp** : File chứa hàm main, chứa các hàm thực hiện các yêu cầu số 2 của đề bài
> **app2.cpp** : File chứa hàm main, chứa các hàm thực hiện các yêu cầu số 3 của đề bài

#### Hướng dẫn sử dụng chương trình
##### Đầu vào của chương trình app1 :

```
1 // Loại truy vấn: push vào stack
15 // Số nguyên 15 được đẩy vào stack
1
20 // Số nguyên 20 được đẩy vào stack
2 // Loại truy vấn: pop 20 ra khỏi stack
3 // Loại truy vấn: in 15 ra phần tử ở đỉnh stack
2 // Loại truy vấn: pop 15 ra khỏi stack
3 // Loại truy vấn: in ra phần tử ở đỉnh stack(Empty!)
```
##### Đầu ra của chương trình app1 :
```
15
Empty! 
```



##### Đầu vào của chương trình app2 :

```
((()()())(()())) // Dãy ngoặc đúng
```
##### Đầu ra của chương trình app2 :
```
3 4
5 6
7 8
2 9
11 12
13 14
10 15
1 16
```

#### Thông tin liên hệ:
- Email: tienpham2kk4@gmail.com
- Facebook: https://www.facebook.com/i4z158dd/