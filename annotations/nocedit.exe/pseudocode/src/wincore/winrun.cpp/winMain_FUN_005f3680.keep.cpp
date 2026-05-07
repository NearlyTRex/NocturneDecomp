// Name: wincore_winrun.cpp_winMain_FUN_005f3680
// Address: 005f3680
// MANUAL RECONSTRUCTION
// Address Range: [[005f3680, 005f3915]]
// Convention: __stdcall
// Signature: int __stdcall wincore_winrun_cpp_winMain_FUN_005f3680(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow)

#include "nocturne.h"

int __stdcall wincore_winrun_cpp_winMain_FUN_005f3680(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow)

{
  byte *pbVar1;
  byte bVar3;
  HWND existingWindow;
  HWND activePopup;
  BOOL BVar4;
  DWORD seed;
  LPSTR pCVar5;
  byte *pbVar6;
  HANDLE currentProcess;
  uint uVar8;
  char *pcVar9;
  WNDCLASSA windowClass;
  _MEMORYSTATUS memStatus;

  existingWindow = (*g_FindWindowAFunc)(g_ApplicationTitle,(LPCSTR)0x0);
  if (existingWindow != 0) {
    activePopup = (*g_GetLastActivePopupFunc)(existingWindow);
    if (activePopup != 0) {
      existingWindow = activePopup;
    }
    (*g_BringWindowToTopFunc)(existingWindow);
    BVar4 = (*g_IsIconicFunc)(existingWindow);
    if (BVar4 != 0) {
      (*g_ShowWindowFunc)(existingWindow,9);
    }
    (*g_SetForegroundWindowFunc)(existingWindow);
    return 0;
  }
  seed = (*g_timeGetTimeFunc)();
  srand(seed);
  pCVar5 = (*g_GetCommandLineAFunc)();
  strcpy(g_CommandLineBuffer, pCVar5);
  pcVar9 = g_CommandLineBuffer;
  if (g_CommandLineBuffer[0] != '\0') {
    pbVar1 = (byte *)pcVar9;
    do {
      do {
        pbVar6 = pbVar1;
        pbVar1 = pbVar6 + 1;
      } while (0x20 < *pbVar6);
      *pbVar6 = 0;
      g_ArgCount = g_ArgCount + 1;
      g_ArgVector[g_ArgCount - 1] = pcVar9;
      bVar3 = *pbVar1;
      pcVar9 = (char *)pbVar1;
      while (bVar3 == 0x20) {
        pbVar1 = (byte *)(pcVar9 + 1);
        pcVar9 = pcVar9 + 1;
        bVar3 = *pbVar1;
      }
      pbVar1 = (byte *)pcVar9;
    } while (*pcVar9 != 0);
  }
  (*g_GetCurrentDirectoryAFunc)(0x100,g_CurrentDirectory);
  (*g_GetModuleFileNameAFunc)(hInstance,g_ModuleFileName,0x100);
  uVar8 = strlen(g_ModuleFileName);
  while ((int)uVar8 > 0) {
    uVar8 = uVar8 - 1;
    if (g_ModuleFileName[uVar8] == '\\') {
      g_ModuleFileName[uVar8] = '\0';
      break;
    }
  }
  (*g_SetCurrentDirectoryAFunc)(g_ModuleFileName);
  windowClass.lpfnWndProc = wincore_winrun_cpp_mainWindowProc_FUN_005f3150;
  windowClass.cbClsExtra = 0;
  windowClass.cbWndExtra = 0;
  windowClass.hInstance = hInstance;
  windowClass.style = 3;
  windowClass.hIcon = (*g_LoadIconAFunc)(hInstance,(LPCSTR)0x65);
  windowClass.hCursor = (*g_LoadCursorAFunc)((HINSTANCE)0x0,(LPCSTR)0x7f00);
  windowClass.hbrBackground = (HBRUSH)(*g_GetStockObjectFunc)(4);
  windowClass.lpszClassName = g_ApplicationTitle;
  windowClass.lpszMenuName = (LPCSTR)0x0;
  (*g_RegisterClassAFunc)(&windowClass);
  g_MainWindowHandle =
       (*g_CreateWindowExAFunc)
                 (0x40000,g_ApplicationTitle,g_ApplicationTimerTitle,0x80000000,0,0,0,0,0,(HMENU)0x0
                  ,hInstance,(LPVOID)0x0);
  if (g_MainWindowHandle == 0) {
    return 0;
  }
  (*g_ShowWindowFunc)(g_MainWindowHandle,nCmdShow);
  (*g_UpdateWindowFunc)(g_MainWindowHandle);
  currentProcess = (*g_GetCurrentProcessFunc)();
  (*g_SetThreadPriorityFunc)(currentProcess,1);
  memset(&memStatus,0,0x20);
  memStatus.dwLength = 0x20;
  (*g_GlobalMemoryStatusFunc)(&memStatus);
  g_TotalPhysicalMemory = memStatus.dwTotalPhys;
  g_AvailableSwapSpace = memStatus.dwAvailPageFile;
  core_main_c_initializeGameSystems_FUN_00507a60(g_ArgCount,g_ArgVector);
  core_main_c_enterMainGameMenu_FUN_00507a50();
  core_main_c_finalizeGameSystems_FUN_00508570();
  return 0;
}
