// Name: wincore_winrun.cpp_winMain_FUN_005f3680
// Address: 005f3680
// Address Range: [[005f3680, 005f3915]]
// Convention: __stdcall
// Signature: int __stdcall wincore_winrun_cpp_winMain_FUN_005f3680 (HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow1,int nCmdShow2)

#include "nocturne.h"

int __stdcall
wincore_winrun_cpp_winMain_FUN_005f3680
          (HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow1,int nCmdShow2)

{
  char cVar1;
  byte bVar2;
  HWND existingWindow;
  HWND activePopup;
  BOOL BVar3;
  DWORD seed;
  byte *pbVar4;
  byte *pbVar5;
  HANDLE currentProcess;
  int iVar6;
  uint uVar7;
  WNDCLASSA *stackProbe;
  byte *pbVar8;
  char *pcVar9;
  byte bVar10;
  WNDCLASSA windowClass;
  _MEMORYSTATUS memStatus;
  
  bVar10 = 0;
  existingWindow = (*g_FindWindowAFunc)(g_ApplicationTitle,(LPCSTR)0x0);
  stackProbe = &windowClass;
  if (existingWindow != (HWND)0x0) {
    activePopup = (*g_GetLastActivePopupFunc)(existingWindow);
    if (activePopup != (HWND)0x0) {
      existingWindow = activePopup;
    }
    (*g_BringWindowToTopFunc)(existingWindow);
    BVar3 = (*g_IsIconicFunc)(existingWindow);
    if (BVar3 != 0) {
      (*g_ShowWindowFunc)(existingWindow,9);
    }
    (*g_SetForegroundWindowFunc)(existingWindow);
    return 0;
  }
  do {
    iVar6 = *(int *)stackProbe;
    stackProbe = (WNDCLASSA *)((int)stackProbe + -0x80);
  } while (iVar6 < (int)stackProbe);
  seed = (*g_timeGetTimeFunc)();
  crt_stdlib_c_srand_FUN_005feb80(seed);
  pbVar8 = &g_CommandLineBuffer;
  pbVar4 = (byte *)(*g_GetCommandLineAFunc)();
  do {
    bVar2 = *pbVar4;
    *pbVar8 = bVar2;
    if (bVar2 == 0) break;
    bVar2 = pbVar4[1];
    pbVar4 = pbVar4 + 2;
    pbVar8[1] = bVar2;
    pbVar8 = pbVar8 + 2;
  } while (bVar2 != 0);
  pbVar4 = &g_CommandLineBuffer;
  if (g_CommandLineBuffer != 0) {
    pbVar8 = pbVar4;
    iVar6 = g_ArgCount << 2;
    do {
      do {
        pbVar5 = pbVar8;
        pbVar8 = pbVar5 + 1;
      } while (0x20 < *pbVar5);
      *pbVar5 = 0;
      g_ArgCount = g_ArgCount + 1;
      *(byte **)((int)g_ArgVector + iVar6) = pbVar4;
      bVar2 = *pbVar8;
      pbVar4 = pbVar8;
      while (bVar2 == 0x20) {
        pbVar8 = pbVar4 + 1;
        pbVar4 = pbVar4 + 1;
        bVar2 = *pbVar8;
      }
      pbVar8 = pbVar4;
      iVar6 = iVar6 + 4;
    } while (*pbVar4 != 0);
  }
  (*g_GetCurrentDirectoryAFunc)(0x100,g_CurrentDirectory);
  (*g_GetModuleFileNameAFunc)(hInstance,g_ModuleFileName,0x100);
  uVar7 = 0xffffffff;
  pcVar9 = g_ModuleFileName;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + (uint)bVar10 * -2 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  do {
    uVar7 = uVar7 - 1;
    if ((int)uVar7 < 1) goto LAB_005f37d1;
  } while (g_ModuleFileName[uVar7] != '\\');
  g_ModuleFileName[uVar7] = '\0';
LAB_005f37d1:
  (*g_SetCurrentDirectoryAFunc)(g_ModuleFileName);
  windowClass.lpfnWndProc = wincore_winrun_cpp_mainWindowProc_FUN_005f3150;
  windowClass.cbClsExtra = 0;
  windowClass.cbWndExtra = 0;
  windowClass.hInstance = hInstance;
  windowClass.style = 3;
  windowClass.hIcon = (*g_LoadIconAFunc)(hInstance,(LPCSTR)0x65);
  windowClass.hCursor = (*g_LoadCursorAFunc)((HINSTANCE)0x0,(LPCSTR)0x7f00);
  windowClass.hbrBackground = (*g_GetStockObjectFunc)(4);
  windowClass.lpszClassName = g_ApplicationTitle;
  windowClass.lpszMenuName = (LPCSTR)0x0;
  (*g_RegisterClassAFunc)(&windowClass);
  g_MainWindowHandle =
       (*g_CreateWindowExAFunc)
                 (0x40000,g_ApplicationTitle,g_ApplicationTimerTitle,0x80000000,0,0,0,0,(HWND)0x0,
                  (HMENU)0x0,hInstance,(LPVOID)0x0);
  if (g_MainWindowHandle == (HWND)0x0) {
    return 0;
  }
  (*g_ShowWindowFunc)(g_MainWindowHandle,nCmdShow1);
  (*g_UpdateWindowFunc)(g_MainWindowHandle);
  currentProcess = (*g_GetCurrentProcessFunc)();
  (*g_SetThreadPriorityFunc)(currentProcess,1);
  crt_memory_c_memset_FUN_005fde40(&memStatus,0,0x20);
  memStatus.dwLength = 0x20;
  (*g_GlobalMemoryStatusFunc)(&memStatus);
  g_TotalPhysicalMemory = memStatus.dwTotalPhys;
  g_MessageFlags[0] = memStatus.dwAvailPageFile;
  core_main_c_initializeGameSystems_FUN_00507a60();
  core_main_c_enterMainGameMenu_FUN_00512f40();
  core_main_c_finalizeGameSystems_FUN_00508570();
  return 0;
}
