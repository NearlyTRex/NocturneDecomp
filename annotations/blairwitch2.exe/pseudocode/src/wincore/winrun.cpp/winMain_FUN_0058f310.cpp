// Name: wincore_winrun.cpp_winMain_FUN_0058f310
// Address: 0058f310
// Address Range: [[0058f310, 0058f3e1] [0058f3e7, 0058f5a4] [0058f5b1, 0058f5c7]]
// Convention: __stdcall
// Signature: int __stdcall wincore_winrun_cpp_winMain_FUN_0058f310(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __stdcall wincore_winrun_cpp_winMain_FUN_0058f310(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  HWND hWnd;
  DWORD seed;
  LPSTR pCVar4;
  byte *pbVar5;
  HWND pHVar6;
  BOOL BVar7;
  HANDLE hThread;
  int iVar8;
  uint uVar9;
  WNDCLASSA *pWVar10;
  char *pcVar11;
  byte bVar12;
  WNDCLASSA local_58;
  _MEMORYSTATUS local_30;
  
  bVar12 = 0;
  hWnd = FindWindowA(PTR_s_Coffin_Rock_0061e984,(LPCSTR)0x0);
  pWVar10 = &local_58;
  if (hWnd != (HWND)0x0) {
    pHVar6 = GetLastActivePopup(hWnd);
    if (pHVar6 != (HWND)0x0) {
      hWnd = pHVar6;
    }
    BringWindowToTop(hWnd);
    BVar7 = IsIconic(hWnd);
    if (BVar7 != 0) {
      ShowWindow(hWnd,9);
    }
    SetForegroundWindow(hWnd);
                    /* WARNING: Subroutine does not return */
    ExitProcess(1);
  }
  do {
    iVar8 = *(int *)pWVar10;
    pWVar10 = (WNDCLASSA *)((int)pWVar10 + -0x80);
  } while (iVar8 < (int)pWVar10);
  seed = timeGetTime();
  srand(seed);
  pcVar11 = g_CommandLineBuffer;
  pCVar4 = GetCommandLineA();
  do {
    cVar2 = *pCVar4;
    *pcVar11 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pCVar4[1];
    pCVar4 = pCVar4 + 2;
    pcVar11[1] = cVar2;
    pcVar11 = pcVar11 + 2;
  } while (cVar2 != '\0');
  pcVar11 = g_CommandLineBuffer;
  if (g_CommandLineBuffer[0] != '\0') {
    pbVar1 = (byte *)pcVar11;
    iVar8 = g_ArgCount << 2;
    do {
      do {
        pbVar5 = pbVar1;
        pbVar1 = pbVar5 + 1;
      } while (0x20 < *pbVar5);
      *pbVar5 = 0;
      g_ArgCount = g_ArgCount + 1;
      *(char **)((int)g_ArgVector + iVar8) = pcVar11;
      bVar3 = *pbVar1;
      pcVar11 = (char *)pbVar1;
      while (bVar3 == 0x20) {
        pbVar1 = (byte *)(pcVar11 + 1);
        pcVar11 = pcVar11 + 1;
        bVar3 = *pbVar1;
      }
      pbVar1 = (byte *)pcVar11;
      iVar8 = iVar8 + 4;
    } while (*pcVar11 != 0);
  }
  GetCurrentDirectoryA(0x100,g_CurrentDirectory);
  GetModuleFileNameA(hInstance,g_ModuleFileName,0x100);
  uVar9 = 0xffffffff;
  pcVar11 = g_ModuleFileName;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + (uint)bVar12 * -2 + 1;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  do {
    uVar9 = uVar9 - 1;
    if ((int)uVar9 < 1) goto LAB_0058f46b;
  } while (g_ModuleFileName[uVar9] != '\\');
  g_ModuleFileName[uVar9] = '\0';
LAB_0058f46b:
  SetCurrentDirectoryA(g_ModuleFileName);
  local_58.lpfnWndProc = wincore_winrun_cpp_mainWindowProc_FUN_0058ed90;
  local_58.cbClsExtra = 0;
  local_58.cbWndExtra = 0;
  local_58.hInstance = hInstance;
  local_58.style = 3;
  local_58.hIcon = LoadIconA(hInstance,&DAT_00000065);
  local_58.hCursor = LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
  local_58.hbrBackground = GetStockObject(4);
  local_58.lpszClassName = PTR_s_Coffin_Rock_0061e984;
  local_58.lpszMenuName = (LPCSTR)0x0;
  RegisterClassA(&local_58);
  g_MainWindowHandle =
       CreateWindowExA(0x40000,PTR_s_Coffin_Rock_0061e984,PTR_s_Coffin_Rock_0061e988,0x80000000,0,0,
                       0,0,(HWND)0x0,(HMENU)0x0,hInstance,(LPVOID)0x0);
  if (g_MainWindowHandle != (HWND)0x0) {
    _DAT_0266462c = hInstance;
    ShowWindow(g_MainWindowHandle,nCmdShow);
    UpdateWindow(g_MainWindowHandle);
    hThread = GetCurrentProcess();
    SetThreadPriority(hThread,1);
    memset(&local_30,0,0x20);
    local_30.dwLength = 0x20;
    GlobalMemoryStatus(&local_30);
    g_TotalPhysicalMemory = local_30.dwTotalPhys;
    g_INT_0266463c = local_30.dwAvailPageFile;
    core_main_c_initializeGameSystems_FUN_004e46c0(g_ArgCount,g_ArgVector);
    core_main_c_enterMainGameMenu_FUN_004e46b0();
    core_main_c_finalizeGameSystems_FUN_004e4e20();
                    /* WARNING: Subroutine does not return */
    ExitProcess(0);
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(1);
}
