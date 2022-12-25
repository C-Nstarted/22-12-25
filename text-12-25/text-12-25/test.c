#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


#include <string.h>
//长度受限制的字符串函数
//strncpy    strncat       strncmp

//strncpy
//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello bit";
//	strncpy(arr1, arr2, 4);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include <assert.h>
//char* my_strncpy(char* dest, const char* src,int n)
//{
//	assert(*dest != NULL);
//	assert(*src != NULL);
//	int i = 0;
//	int str = dest;
//	for (i = 0; i < n; i++)
//	{
//		*dest++ = *src++;
//	}
//	return str;
//}
//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello bit";
//	my_strncpy(arr1, arr2,4);
//	printf("%s\n", arr1);
//	return 0;
//}




//strncat
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 4);
//	printf("%s\n", arr1);
//	return 0;
//}


//#include <assert.h>
//char* my_strncat(char* dest,const char* src, int n)
//{
//	assert(*dest != NULL);//断言
//	assert(*src != NULL);//断言
//	int str = *dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	dest--;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		*dest++ = *src++;
//	}
//	return str;
//}
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	my_strncat(arr1, arr2, 4);
//	printf("%s\n", arr1);
//	return 0;
//}




//strncmp
//int main()
//{
//	const char* p1 = "abcdefg";
//	char* p2 = "abcdqwer";
//	int ret=strncmp(p1,p2,4);
//	printf("%d\n", ret);
//	return 0;
//}


//#include <assert.h>
//char* my_strncmp(const char* dest,const char* src, int n)
//{
//	assert(*dest != NULL);
//	assert(*src != NULL);
//	if (!n)
//		return 0;
//	while (--n && *dest&& *dest == *src)
//	{
//	dest++;
//	src++;
//	}
//	if (*dest > *src)
//		return 1;
//	else
//		return -1;
//	//return *dest - *src;
//}
//int main()
//{
//	const char* p1 = "abcdefg";
//	char* p2 = "abcdqwer";
//	int ret = my_strncmp(p1, p2, 5);
//	printf("%d\n", ret);
//	return 0;
//}




//strstr   --查找字符串
//int main()
//{
//	char* p1 = "abcdefghi";
//	char* p2 = "def";
//	char* ret=strstr(p1, p2);//在p1里找p2是否存在，存在就会打印第一次出现的地址，不存在返回一个空指针
//	if (ret == NULL)
//		printf("不存在");
//	else
//		printf("%p\n", ret);
//		printf("%s\n", ret);
//	return 0;
//}


//#include <assert.h>
//char* my_strstr(const char* p1,const char* p2)
//{
//	assert(*p1 != NULL);
//	assert(*p2 != NULL);
//	char* s1 = p1;
//	char* s2 = p2;
//	char* cur = p1;
//	if (*p2 == '\0')
//	{
//		return p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++; 
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char* p1 = "abcdefghi";
//	char* p2 = "def";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//		printf("不存在");
//	else
//		printf("%p\n", ret);
//	printf("%s\n", ret);
//	return 0;
//}






// strtok     ——字符串切割
//int main()
//{
//	char arr[] = "hello@qq.com";//hello  qq   com
//	char* p = "@.";
//	char buf[20] = { 0 };
//	strcpy(buf,arr );
//
//	int ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}




//strerror   返回错误码，所对应的错误信息
//#include <errno.h>
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("unexist.ent", "r");
//	if (pFile == NULL)
//		printf("Error opening file unexist.ent: %s\n", strerror(errno));
//	return 0;
//}






