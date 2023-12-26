#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "LinkedList_int.h"
#include <CoreWindow.h>
#include <windows.h>
#include <limits.h>
#define Max 10

void Create(LinkedList** _ptList);
void Destroy(LinkedList** _ptList);
Node* GetNode(int _iObject, char* String);
Node* Read(LinkedList* _ptList, unsigned int i);
void Traversal(LinkedList* _ptList);
Node* AppendFromHead(LinkedList* _ptList, int _iObject, char* String);
Node* AppendFromTail(LinkedList* _ptList, int _iObject, char* String);
Node* InsertBefore(LinkedList* _ptList, Node* _ptNode, int Object, char* String);
Node* InsertAfter(LinkedList* _ptList, Node* _ptNode, int Object, char* String);
Node* DeleteFromHead(LinkedList* _ptList);
Node* DeleteFromTail(LinkedList* _ptList);
Node* Delete(LinkedList* _ptList, Node* _ptNode);
Node* DeleteNode_Count(LinkedList* _ptList, int count);
void DeleteAll(LinkedList* _ptList);
Node* Modify(LinkedList* _ptList, Node* _ptNode, int iObject, char* String);
Node* LinearSearchByUnique(LinkedList* _ptList, int Object, char* String);
Node* LinearSearchByUnique_String(LinkedList* _ptList, char* String); // ������ġ �ϳ�ã��
Node* LinearSearchByUnique_Object(LinkedList* _ptList, int Object);


void LinearSearchByDuplicate(LinkedList* _ptList, int Object, char* String, int* _resultSize, Node*** _resultArray);
void LinearSearchByDuplicate_Object(LinkedList* _ptList, int Object, int* _resultSize, Node*** _resultArray);
void LinearSearchByDuplicate_KyeWord_String(LinkedList* _ptList, char* String, int* _resultSize, Node*** _resultArray);

Node* BinarySearchByUnique_ObjectSorted(LinkedList* _ptList, int Object);
Node* BinarySearchByUnique_StringSorted(LinkedList* _ptList, int Object, char* String);
void BinarySearchByDuplicate_Object(LinkedList* _ptList, int Object, int* _resultSize, Node*** _resultArray);
void BinarySearchByDuplicate_String(LinkedList* _ptList, int Object, char* String, int* _resultSize, Node*** _resultArray);


void Change(LinkedList* _ptList, Node* _ptNode1, Node* _ptNode2);
void SortBySelection_Object(LinkedList* _ptList);
void SortBySelection_String(LinkedList* _ptList);

Node* Modify_by_Count(LinkedList* _ptList, int count, int iObject, char* String);
Node* Modify_String(LinkedList* _ptList, Node* _ptNode, char* String);
Node* Modify_by_Count_String(LinkedList* _ptList, int count, char* String);
Node* Modify_Object(LinkedList* _ptList, Node* _ptNode, int iObject);
Node* Modify_by_Count_Object(LinkedList* _ptList, int count, int iObject);
Node* Insert_Count_Before(LinkedList* _ptList, int Count, int Object, char* String);
Node* Insert_Count_After(LinkedList* _ptList, int Count, int Object, char* String);

void cur(short x, short y)		//ȭ���� ���ϴ� x, y��ǥ�� ����
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}



int main() {
	long long L = (-2147483647 - 1);
	int R = 2147483647;
	char Cont;
	int flag = 0;
	LinkedList* Lists[3] = {NULL,};

	long long Num_tmp = 0;
	long long Num_tmp2 = 0;
	long long Num_tmp3 = 0;
	Node* Node_tmp = NULL;
	int SearchResultSize;
	Node** SearchSortResultArr;
	COORD pos = { 0,0 };

	while (flag == 0) {

		int Selection_flag = 0;
		printf("---------------------------------------------------------------------------\n");
		printf("0. ���� ���� ����\t\t1. �� ��� �߰�\t\t2. �� ��� �߰�\n3. ���� ��ġ �� �б�\t\t");
		printf("4. ��� ��ȸ\t\t5. �������� �Ҹ�\n---------------------------------------------------------------------------\n");
		printf("6. ���� ��� �� ����\t\t7. ���� ��� �� ����\n8. ���� ��� �� ����\t\t9. ���� ��� �� ����\n---------------------------------------------------------------------------\n");
		printf("11. �� ��� ����\t\t12. �� ��� ����\n");
		printf("13. ���� ��ġ ����\t\t14. ���� ��� ����\t15. ��� ��� ����\n---------------------------------------------------------------------------\n");
		printf("21. ���� ��� ����\t\t22. ���� ��� ����\n---------------------------------------------------------------------------\n31. ���� ���� Ž��\t\t");
		printf("32. ���� ���� Ž��\n33. ���� ���� Ž��\t\t");
		printf("34. ���� ���� Ž��\n---------------------------------------------------------------------------\n41. ��ǰ ����\t");
		printf("42. ���� ����\t43. ���� ����\n---------------------------------------------------------------------------\n51. ����\n");
		printf("---------------------------------------------------------------------------\n");
		printf("");
		printf("\n\n");
		long long Num_tmp = 0;
		long long Num_tmp2 = 0;
		long long Num_tmp3 = 0;
		if (!Node_tmp) Node_tmp == NULL;

		printf("���� ����Ʈ _\n");

		if (Lists != NULL) {
			int count = 0;
			printf("\nList  :");
			if (!Lists->m_pHead) { printf("Empty"); }
			Node* curr = Lists->m_pHead;
			while (count < Lists->m_uCount) {
				if (curr == Node_tmp) {
					printf(" '%d' ", curr->m_iObject);
					curr = curr->m_pNext;
					count++;
					continue;
				}
				printf(" %d ", curr->m_iObject);
				curr = curr->m_pNext;
				count++;
			}

		}
		else printf("\n@ ");


		printf("\n\n");





		int Selection = -1;

		printf("\n��� ����:");
		int err = scanf("%d", &Selection);
		if (err != 1) {

			printf("\n�߸��� �Է�\n");
			Sleep(300);
			while (getchar() != '\n') {}
			system("cls");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
			continue;

		}

		printf("\n\n");
		if (Selection == 0) {
			Selection_flag = 1;
			system("cls");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);


			if (Lists == NULL) {
				Create(&Lists);



			}



			else { printf("�̹� ����Ʈ�� �����մϴ�.\n"); }
			continue;
		}
		if (Selection == 5) {
			Selection_flag = 1;

			Destroy(&Lists);
			//List_num--;
			system("cls");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

		}

		if (Selection == 3) {
			Selection_flag = 1;

			printf("���° ��带 ? :");
			err = scanf("%d", &Num_tmp);
			if (err != 1) {
				printf("\n�߸��� �Է�\n");
				Sleep(300);
				while (getchar() != '\n') {}
				system("cls");
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
				continue;

			}

			system("cls");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
			Node_tmp = Read(Lists, Num_tmp);
		}
		if (Selection == 4) {
			Selection_flag = 1;

			system("cls");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
			Traversal(Lists);
		}
		if (Selection == 1) {
			Selection_flag = 1;

			printf("���� Object ? :");
			err = scanf("%lld", &Num_tmp2);
			if (err != 1) {
				printf("\n�߸��� �Է�\n");
				Sleep(300);
				int ch;
				while ((ch = getchar()) != '\n' && ch != EOF) {}

				system("cls");
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
				continue;

			}
			else {
				if (Num_tmp2 >= INT_MIN && Num_tmp2 <= INT_MAX) {

				}
				else {
					system("cls");
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
					printf("����,����÷ο� �߻�\n\n");


					continue;
				}
			}
			if (Lists != NULL) {
				Node_tmp = AppendFromHead(Lists, Num_tmp2);
				system("cls");
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
				continue;
			}
			else {
				system("cls");
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
				printf("�ش縮��Ʈ�� ��������� �ʾҽ��ϴ�.\n\n\n");
				continue;

			}
		}
		if (Selection == 2) {
			Selection_flag = 1;

			printf("���� Object ? :");
			err = scanf("%lld", &Num_tmp2);
			if (err != 1) {
				printf("\n�߸��� �Է�\n");
				Sleep(300);
				int ch;
				while ((ch = getchar()) != '\n' && ch != EOF) {}

				system("cls");
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
				continue;

			}
			else {
				if (Num_tmp2 >= INT_MIN && Num_tmp2 <= INT_MAX) {

				}
				else {
					system("cls");
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
					printf("����,����÷ο� �߻�\n\n");

					continue;
				}
			}
			if (Lists != NULL) {
				Node_tmp = AppendFromTail(Lists, Num_tmp2);
				system("cls");
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); continue;
			}
			else {
				system("cls");
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
				printf("�ش縮��Ʈ�� ��������� �ʾҽ��ϴ�.\n\n\n");
				continue;

			}

		}
		if (Selection == 6) {
			Selection_flag = 1;

			printf("���� Object ? :");
			err = scanf("%lld", &Num_tmp2);
			if (err != 1) {
				printf("\n�߸��� �Է�\n");
				Sleep(300);
				int ch;
				while ((ch = getchar()) != '\n' && ch != EOF) {}

				system("cls");
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
				continue;

			}
			else {
				if (Num_tmp2 >= INT_MIN && Num_tmp2 <= INT_MAX) {

				}
				else {
					system("cls");
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
					printf("����,����÷ο� �߻�\n\n");

					continue;
				}
			}
			system("cls");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
			Node_tmp = InsertBefore(Lists, Node_tmp, Num_tmp2);

			continue;
		}



		if (Selection == 7) {
			Selection_flag = 1;

			printf("���� Object ? :");
			err = scanf("%lld", &Num_tmp2);
			if (err != 1) {
				printf("\n�߸��� �Է�\n");
				Sleep(300);
				int ch;
				while ((ch = getchar()) != '\n' && ch != EOF) {}

				system("cls");
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
				continue;

			}
			else {
				if (Num_tmp2 >= INT_MIN && Num_tmp2 <= INT_MAX) {

				}
				else {
					system("cls");
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
					printf("����,����÷ο� �߻�\n\n");


					continue;
				}
			}
			system("cls");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
			Node_tmp = InsertAfter(Lists, Node_tmp, Num_tmp2); continue;
		}

		if (Selection == 8) {
			Selection_flag = 1;

			printf("���° ��� �տ� ? :");

			err = scanf("%lld", &Num_tmp3);
			if (err != 1) {
				printf("\n�߸��� �Է�\n");
				Sleep(300);
				while (getchar() != '\n') {}
				system("cls");
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
				continue;

			}
			printf("���� Object ? :");
			err = scanf("%lld", &Num_tmp2);
			if (err != 1) {
				printf("\n�߸��� �Է�\n");
				Sleep(300);
				int ch;
				while ((ch = getchar()) != '\n' && ch != EOF) {}

				system("cls");
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
				continue;

			}
			else {
				if (Num_tmp2 >= INT_MIN && Num_tmp2 <= INT_MAX) {

				}
				else {
					system("cls");
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
					printf("����,����÷ο� �߻�\n\n");

					continue;
				}
			}
			system("cls");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
			Node_tmp = Insert_Count_Before(Lists, Num_tmp3, Num_tmp2);
			continue;
		}

		if (Selection == 9) {
			Selection_flag = 1;

			printf("���° ��� �ڿ� ? :");

			err = scanf("%lld", &Num_tmp3);
			if (err != 1) {
				printf("\n�߸��� �Է�\n");
				Sleep(300);
				while (getchar() != '\n') {}
				system("cls");
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
				continue;

			}
			printf("���� Object ? :");
			err = scanf("%lld", &Num_tmp2);
			if (err != 1) {
				printf("\n�߸��� �Է�\n");
				Sleep(300);
				int ch;
				while ((ch = getchar()) != '\n' && ch != EOF) {}

				system("cls");
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
				continue;

			}
			else {
				if (Num_tmp2 >= INT_MIN && Num_tmp2 <= INT_MAX) {

				}
				else {
					system("cls");
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
					printf("����,����÷ο� �߻�\n\n");

					continue;
				}
			}
			system("cls");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
			Node_tmp = Insert_Count_After(Lists, Num_tmp3, Num_tmp2);
			continue;
		}

		if (Selection == 11) {
			Selection_flag = 1;

			system("cls");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
			Node_tmp = DeleteFromHead(Lists);
			free(Node_tmp);
			Node_tmp = NULL;
			continue;
		}
		if (Selection == 12) {
			Selection_flag = 1;

			system("cls");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
			Node_tmp = DeleteFromTail(Lists);
			free(Node_tmp);
			Node_tmp = NULL;
			continue;
		}
		if (Selection == 13) {
			Selection_flag = 1;

			system("cls");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
			Node_tmp = Delete(Lists, Node_tmp);
			free(Node_tmp);
			Node_tmp = NULL;
			continue;
		}
		if (Selection == 14) {
			Selection_flag = 1;

			printf("���° ��� ? :");
			err = scanf("%lld", &Num_tmp2);
			if (err != 1) {
				printf("\n�߸��� �Է�\n");
				Sleep(300);
				while (getchar() != '\n') {}
				system("cls");
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
				continue;

			}
			system("cls");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
			Node_tmp = DeleteNode_Count(Lists, Num_tmp2);
			free(Node_tmp);
			Node_tmp = NULL;
			continue;
		}
		if (Selection == 15) {
			Selection_flag = 1;

			DeleteAll(Lists);
			system("cls");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); continue;
		}
		if (Selection == 21) {
			Selection_flag = 1;

			printf("������ Object ? :");
			err = scanf("%lld", &Num_tmp2);
			if (err != 1) {
				printf("\n�߸��� �Է�\n");
				Sleep(300);
				int ch;
				while ((ch = getchar()) != '\n' && ch != EOF) {}

				system("cls");
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
				continue;

			}
			else {
				if (Num_tmp2 >= INT_MIN && Num_tmp2 <= INT_MAX) {

				}
				else {
					system("cls");
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
					printf("����,����÷ο� �߻�\n\n");

					continue;
				}
			}
			system("cls");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
			Node_tmp = Modify(Lists, Node_tmp, Num_tmp2);
			continue;
		}
		if (Selection == 22) {
			Selection_flag = 1;

			printf("���° ��� ? :");
			err = scanf("%lld", &Num_tmp2);
			if (err != 1) {
				printf("\n�߸��� �Է�\n");
				Sleep(300);
				while (getchar() != '\n') {}
				system("cls");
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
				continue;

			}
			printf("������ Object ? :");
			err = scanf("%lld", &Num_tmp3);
			if (err != 1) {
				printf("\n�߸��� �Է�\n");
				Sleep(300);
				int ch;
				while ((ch = getchar()) != '\n' && ch != EOF) {}

				system("cls");
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
				continue;

			}
			else {
				if (Num_tmp3 >= INT_MIN && Num_tmp3 <= INT_MAX) {

				}
				else {
					system("cls");
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
					printf("����,����÷ο� �߻�\n\n");

					continue;
				}
			}
			system("cls");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
			Node_tmp = Modify_by_Count(Lists, Num_tmp2, Num_tmp3);
			continue;
		}
		if (Selection == 31) {

			printf("ã�� Object ? :");
			err = scanf("%lld", &Num_tmp2);
			if (err != 1) {
				printf("\n�߸��� �Է�\n");
				Sleep(300);
				int ch;
				while ((ch = getchar()) != '\n' && ch != EOF) {}

				system("cls");
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
				continue;

			}
			else {
				if (Num_tmp2 >= INT_MIN && Num_tmp2 <= INT_MAX) {

				}
				else {
					system("cls");
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
					printf("����,����÷ο� �߻�\n\n");

					continue;
				}
			}
			system("cls");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
			Node_tmp = LinearSearchByUnique(Lists, Num_tmp2); continue;
		}
		if (Selection == 32) {

			printf("ã�� Object ? :");
			err = scanf("%lld", &Num_tmp2);
			if (err != 1) {
				printf("\n�߸��� �Է�\n");
				Sleep(300);
				int ch;
				while ((ch = getchar()) != '\n' && ch != EOF) {}

				system("cls");
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
				continue;

			}
			else {
				if (Num_tmp2 >= INT_MIN && Num_tmp2 <= INT_MAX) {

				}
				else {
					system("cls");
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
					printf("����,����÷ο� �߻�\n\n");

					continue;
				}
			}
			system("cls");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
			LinearSearchByDuplicate(Lists, Num_tmp2, &SearchResultSize, &SearchSortResultArr);
			continue;
		}
		if (Selection == 33) {
			Selection_flag = 1;

			printf("ã�� Object ? :");
			err = scanf("%lld", &Num_tmp2);
			if (err != 1) {
				printf("\n�߸��� �Է�\n");
				Sleep(300);
				int ch;
				while ((ch = getchar()) != '\n' && ch != EOF) {}

				system("cls");
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
				continue;

			}
			else {
				if (Num_tmp2 >= INT_MIN && Num_tmp2 <= INT_MAX) {

				}
				else {
					system("cls");
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
					printf("����,����÷ο� �߻�\n\n");

					continue;
				}
			}
			system("cls");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
			Node_tmp = BinarySearchByUnique(Lists, Num_tmp2);
		}
		if (Selection == 34) {
			Selection_flag = 1;
			printf("ã�� Object ? :");
			err = scanf("%lld", &Num_tmp2);
			if (err != 1) {
				printf("\n�߸��� �Է�\n");
				Sleep(300);
				int ch;
				while ((ch = getchar()) != '\n' && ch != EOF) {}

				system("cls");
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
				continue;

			}
			else {
				if (Num_tmp2 >= INT_MIN && Num_tmp2 <= INT_MAX) {

				}
				else {
					system("cls");
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
					printf("����,����÷ο� �߻�\n\n");

					continue;
				}
			}
			system("cls");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
			BinarySearchByDuplicate(Lists, Num_tmp2, &SearchResultSize, &SearchSortResultArr);
			continue;
		}
		if (Selection == 41) {
			Selection_flag = 1;

			SortByBubble(Lists);
			system("cls");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); continue;
		}
		if (Selection == 42) {
			Selection_flag = 1;

			SortByInsertion(Lists);
			system("cls");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); continue;
		}
		if (Selection == 43) {
			Selection_flag = 1;

			SortBySelection(Lists);
			system("cls");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); continue;
		}
		if (Selection == 51) {
			printf("����\n");
			flag = 1;
			system("cls");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); continue;
		}

		if (Selection_flag == 0) {
			system("cls");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); continue;
		}
	}


	return 0;
}