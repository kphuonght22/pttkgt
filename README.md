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

### Input  
```bash
nhap N: 4
nhap M: 11
nhap khoi luong mon hang thu 1: 3
nhap gia tri mon hang thu 1: 4
nhap khoi luong mon hang thu 1: 5
nhap gia tri mon hang thu 1: 6
nhap khoi luong mon hang thu 1: 6
nhap gia tri mon hang thu 1: 5
nhap khoi luong mon hang thu 1: 1
nhap gia tri mon hang thu 1: 3
```

### Output  

```bash
cac do vat duoc chon: 4 2 1

tong gia tri cua vat cho vao tui la: 13
```
