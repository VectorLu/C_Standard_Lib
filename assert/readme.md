头文件可以以任何顺序被包含，每个头文件都可以在一个给定的范围内被包含多次，这和它被包含一次的效果相同，但包含 `<assert.h>` 的效果取决于 `NDEBUG` 的定义。

如果