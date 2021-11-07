/*
 ** 队列的模块接口
*/

#include <stdlib.h>
#define QUEUE_TYPE int //队列元素的类型

//使用动态分配数组创建一个队列
void create_queue( size_t size );

//销毁一个队列（用于链式和动态分配数组的队列）
void destroy_queue( void ); 

//向队列添加元素
void insert( QUEUE_TYPE value );

//从队列删除一个元素
void delete( void );

//返回队列第一个元素的值，不修改队列
QUEUE_TYPE first( void );

//判断空队列 为空返回TRUE，否则返回FALSE
int is_empty( void );

//判断满队列，为满返回TRUE，否则返回FALSE
int is_full( void );

