#include "queue.h"
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

//动态数组长度
static int  array_Size;

//用以存储队列对头，队尾的数组下标,声明指向数组的指针
static QUEUE_TYPE *queue;
static size_t front = 1;
static size_t rear = 0;

//创建队列
void
create_queue( size_t size )
{
    //在这使用条件——数组中始终保留一个元素不用，因而所需实际空间比总元素大小多1
    array_Size = size + 1;
    queue = malloc( ( sizeof ( QUEUE_TYPE ) ) * array_Size + 1 );
    assert( queue != NULL );

}

//插入元素
void
insert( QUEUE_TYPE value )
{
    assert( !is_full() );
    rear = ( rear + 1 ) % array_Size;
    queue[ rear ] = value;
}

//删除元素
void
delete( void )
{
    assert( queue != NULL );
    front = ( front + 1 ) % array_Size;
}   

//返回队列第一个元素
QUEUE_TYPE
first( void )
{
    assert( !is_empty() );
    return queue[ front ];
}

//判断队列是否为空
int
is_empty( void )
{
    return ( rear + 1 ) % array_Size == front;

}

//判断队列是否满
int
is_full( void )
{
    return ( rear +2 ) % array_Size == front;
}

