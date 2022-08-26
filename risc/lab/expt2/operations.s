li x1,25
li x2,35
add x3,x1,x2

li x4,3
mul x5,x4,x3
add x5,x5,x2

blt x1,x2,next
li x3,17
next: j next