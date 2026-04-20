#include<stdio.h>
#include<stdlib.h>
typedef int Data_Type;
#define DATA_SIZE 10


typedef struct data
 {
     Data_Type * Data_Enter ;    // 堆空间的入口地址
    int     Size ;              // 数据总量（可以存放的数据量） 数组最大的下标 
     int     Last ;              // 当前的使用量     数组当前使用的下标
 }Data ,  * P_Data;
 

//  建立堆空间， 来初始化 Data_Type * Data_Enter ; 
// 2. 确定堆空间的大小， 初始化 int     Size ;
// 3. 初始化 当前使用量为 0 int     Last ;
 Data * init_data()
 {
     // 在堆中申请一个管理结构体的内存空间
     P_Data ptr = calloc(1,sizeof(Data));
  
     // 申请堆空间来作为顺序表的存储空间
     ptr->Data_Enter = calloc( DATA_SIZE ,sizeof(Data_Type));
     ptr->Size = DATA_SIZE ; // 设置顺序表的大小为 10 
     ptr->Last = 0 ;  // 设置当前使用量为 0 
  
     return ptr ; // 返回管理结构体指针
 }

int ins_data(Data *ptr ,Data_Type data)
{
	if(ptr==NULL||ptr->Last==ptr->Size)

	{
		printf("顺序表已满\n");
		return 0; // 插入失败
	}
	ptr->Data_Enter[ptr->Last] = data;
	ptr->Last++;

	return ptr->Last; // 插入成功
}


int ins_data_shunxu(Data *ptr ,Data_Type data)
{
	if(ptr==NULL||ptr->Last==ptr->Size)

	{
		printf("顺序表已满\n");
		return 0; // 插入失败

	}

	if(ptr!=NULL)
	{
		
		if(ptr->Last==0)	// 如果顺序表为空，直接插入
		{
			ptr->Data_Enter[ptr->Last] = data;
			ptr->Last++;
			return ptr->Last; // 插入成功
		}


		for (int i=0; i<ptr->Last; i++)
		{
			
			if(ptr->Data_Enter[i]<=data)	// 找到插入位置
			{
				int tep=i;
				printf("tep = %d\n",tep);
				for(int j=ptr->Last;j>i;j--)
				{
					ptr->Data_Enter[j] = ptr->Data_Enter[j-1]; // 后移元素
				}
				ptr->Data_Enter[tep] = data;
				ptr->Last++;
				
				break; // 插入完成，退出循环
			}
			
		}
	}
	ptr->Data_Enter[ptr->Last] = data;
	return ptr->Last; // 插入成功
}




void show(Data *ptr)
{
	if(ptr==NULL)
	{
		printf("顺序表为空\n");
		return;
	}
	printf("顺序表中的数据为：\n");
	for(int i=0;i<ptr->Last;i++)
	{
		printf("%d\n",ptr->Data_Enter[i]);
	}
	printf("\n");
}




int main()
{

	Data * ptr = init_data();
	//printf("Data_Enter = %p\n",ptr->Data_Enter);

	ins_data_shunxu(ptr,2);
	ins_data_shunxu(ptr,3);
	ins_data_shunxu(ptr,5);
	ins_data_shunxu(ptr,11);
    ins_data_shunxu(ptr,3);
	show(ptr);
	printf("%d",ptr->Last);

}