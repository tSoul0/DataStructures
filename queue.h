/*
 ** 队列的模块接口
*/

#include <stdlib.h>
#define QUEUE_TYPE int //队列元素的类型

//使用动态分配数组创建一个队列
void create_queue( size_t size );

//销毁一个队列（用于链式和动态分配数组的队列）
void destroy_queue( void ); 








