**解题思路**

对于输入的两个节点(t1、t2)，共有三种不同的状态：

- t1存在，t2为空
- t2存在，t1为空
- t1、t2均存在

对于前两种情况，直接返回存在的节点即可，第三种情况返回两节点值的和，递归就完事了。

