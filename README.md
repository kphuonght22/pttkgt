# Problem
```bash
Có một cái túi có thể đựng được tối đa trọng lượng là M và N gói hàng, gói hàng thứ i có trọng lượng 
là Wi và giá trị là Vi. Yêu cầu xác định các món hàng được chọn để bỏ vào túi sao cho tổng giá trị 
là lớn nhất.
```

# Backtracking

## Input

N M  
W[1] V[1]  
W[2] V[2]  
...  
W[N] V[N]

## Output

Line 1: Tổng giá trị lớn nhất được chọn  
Line 2: Các món hàng được chọn

## Demo

### Input   
```bash
4 11
3 4
5 6
6 5
1 3
```
### Output    
```bash
13
1 3 4
```

# DynamicProgramming

## Input 

N M  
Nhap khoi luong mon hang thu i: W[i] (i < n)  
Nhap gia tri mon hang thu i: V[i] (i < n)  

## Output

Cac mon hang duoc chon: ...  
Tong gia tri cua cac mon hang cho vao tui: ...
## Demo

Input  
![bt3](https://user-images.githubusercontent.com/81338938/123503059-a9ea7080-d67a-11eb-9663-a613ca396cc3.JPG)  
Output  
![bt4](https://user-images.githubusercontent.com/81338938/123503061-ab1b9d80-d67a-11eb-83f9-e1cb4333634a.JPG)
