# long long整型

> Felix
>
> 2022.6.29



long long有两种类型：

- long long 
- unsigned long long



了解平台上longlong 大小的方法：

**code:**

```c++
#include <climits>
#include <cstdio>
#include <iostream>


int main() {
    long long ll_min = LLONG_MIN;
    long long ll_max = LLONG_MAX;
    unsigned long long ull_max = ULLONG_MAX;

    printf("min of long long: %lld\n", ll_min);
    printf("max of long long: %lld\n", ll_max);
    printf("max of unsigned long long: %llu\n", ull_max);
    return 0;
}
```

**min of long long: -9223372036854775808
max of long long: 9223372036854775807
max of unsigned long long: 18446744073709551615
请按任意键继续. . .**