#include <stdio.h>
#include <string.h>

int FindIndexByStr(const char* fine_str, const char* line) {
	int index = -1;
	const int line_Length = strlen(line);
	const int find_str_Length = strlen(fine_str);
	for (int i = 0; i < line_Length; i++) {
		int matchCount = 0;
	if (line[i] == find_str[0]) {
		for (int j = 0; j < find_str_Length; j++) {
			if (line[i+j] == find_str[j])
				matchCount++;}}
	if (matchCount == find_str_Length) {
		index = i;
		break; }}
	return index; }

void main() {
	FILE* fp = NULL;
	char strs[100] = "";
	char strs1[100] = "";
	char temp[50];
	char* p;
	int fine_pos;
	char option[50] = "option:";
	char values[50] = "";
	int line = 0;

	printf("라인 입력:");
	scanf("%d", &line);
	printf("수정 될 문자열 입력:");
	scanf("%s", values);

	if(0 == fopen_s(&fp, "b.txt", "r+t")) {
		int curLine = 0;
		int curLineStartPos = 0;
		while (!feop(fp)) {
			curLine++;
		fgets(temp, 50, fp);
		curLineStartPos += strlen(temp);

		if(curLine == line) {
			int checkPointPos = curLineStartPos;
			curLineStartPos -= strlen(temp);
			int pos = FindIndexByStr("option:", temp); { 
				rewind(fp);
			int posToModify = curLineStartPos + pos + strlen("option:") +1;
			fseek(fp, posToModify, SEEK_SET);
			fwrite(values, sizeof(char), strlen(values),fp);
			fseek(fp, checkPointPos, SEEK_SET); }}
		else if (curLine ==3) {
			while (getchar() != '\n');
			char str[50] = "";
			printf("문자열 입력:");
			str[0] = '\n';
			char firstChar = fgetc(stdin);
				if (firstChar == '\n') {
					strcat(str, "아무것도 입력하지 않았습니다.");}
				else {
					str[1] = firstChar;
					char str2[50] = "";
					scanf("%s", str2);
					strcat(str, str2); }
			fwrite(str, sizeof(char), strlen(str), fp);}}
		fclose(fp);}}
