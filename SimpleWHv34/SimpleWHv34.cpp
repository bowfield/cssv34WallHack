#include "stdafx.h"
using namespace std;
int main()
{
	int anull = 0;
	int fog_enable = 0;
	int novar = 0;
	int v = 2;
	int d = 1;
	HWND window = FindWindowA(0, "Counter-Strike Source");
	if (window == 0)
	{
		cout << "The game is not running !\n";
	}
	else
	{
		
			DWORD processId;
			GetWindowThreadProcessId(window, &processId);
			HANDLE process = OpenProcess(PROCESS_ALL_ACCESS, false, processId);
			if (!process)
			{
				cout << "Error.\n";
			}
			else
			{
				int memoryWriteStatus = WriteProcessMemory(process, (LPVOID)0x243B0C9C, &v, (DWORD)sizeof(v), NULL); //r_drawothermodels
				if (memoryWriteStatus > 0)
				{
					cout << "Wall hack succefuly installed!\n";
				}
				else
				{
					cout << "Unnamed Error!\n";
				}
				int memoryWriteStatus0 = WriteProcessMemory(process, (LPVOID)0x243EF114, &fog_enable, (DWORD)sizeof(fog_enable), NULL); //fog_enable
				if (memoryWriteStatus0 > 0)
				{
					cout << "Smokes has been disabled!\n";
				}
				else
				{
					cout << "Unnamed Error!\n";
				}
				int memoryWriteStatus1 = WriteProcessMemory(process, (LPVOID)0x243EEE44, &anull, (DWORD)sizeof(anull), NULL); //r_viewmodel 
			}
			cin >> novar;



		}

		return 0;
	}

