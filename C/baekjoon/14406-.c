#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[12];
	
	scanf("%s",a);
	if(strcmp(a,"��.��.��") == 0)printf("����� ������ ������\n"); 
	else if(strcmp(a,"��.¡.��") == 0)printf("�������� ¡�׷��� ��︮��\n"); 
	else if(strcmp(a,"��.��.��") == 0)printf("������� �� ���� �� ����\n"); 
	else if(strcmp(a,"��.��.��") == 0)printf("����, ����, �ڽ��� ������ ���Ͽ�\n");
	else if(strcmp(a,"��.��.��") == 0)printf("����ְ� �����ְ� ���������� ����\n"); 
	else if(strcmp(a,"��.��.��") == 0)printf("����ϰ� �Ƹ��ٿ� �̷��� ���Ͽ�\n"); 
	else if(strcmp(a,"��.��.��") == 0)printf("�̷� ��ȸ�� ���� ������\n"); 
	else if(strcmp(a,"û.��.��") == 0)printf("û���� �ٷ� ���ݺ���\n");  
	return 0;
}
