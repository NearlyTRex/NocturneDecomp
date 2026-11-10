// Name: wincore_winrun.cpp_winMain_FUN_005b2e00
// Address: 005b2e00
// Address Range: [[005b2e00, 005b2ed1] [005b2ed7, 005b3064] [005b3071, 005b307d]]
// Convention: unknown
// Signature: void wincore_winrun_cpp_winMain_FUN_005b2e00(HMODULE param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wincore_winrun_cpp_winMain_FUN_005b2e00(HMODULE param_1,uint param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  HWND hWnd;
  DWORD seed;
  LPSTR pCVar5;
  byte *pbVar6;
  HWND pHVar7;
  BOOL BVar8;
  HANDLE hThread;
  int iVar9;
  uint uVar10;
  WNDCLASSA *pWVar11;
  char *pcVar12;
  byte bVar13;
  WNDCLASSA local_58;
  _MEMORYSTATUS local_30;
  
  bVar13 = 0;
  hWnd = FindWindowA(PTR_s_Nocturne_006260dc,(LPCSTR)0x0);
  pWVar11 = &local_58;
  if (hWnd != (HWND)0x0) {
    pHVar7 = GetLastActivePopup(hWnd);
    if (pHVar7 != (HWND)0x0) {
      hWnd = pHVar7;
    }
    BringWindowToTop(hWnd);
    BVar8 = IsIconic(hWnd);
    if (BVar8 != 0) {
      ShowWindow(hWnd,9);
    }
    SetForegroundWindow(hWnd);
                    /* WARNING: Subroutine does not return */
    ExitProcess(1);
  }
  do {
    iVar9 = *(int *)pWVar11;
    pWVar11 = (WNDCLASSA *)((int)pWVar11 + -0x80);
  } while (iVar9 < (int)pWVar11);
  seed = timeGetTime();
  srand(seed);
  pcVar12 = &DAT_02c9ca08;
  pCVar5 = GetCommandLineA();
  do {
    cVar2 = *pCVar5;
    *pcVar12 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pCVar5[1];
    pCVar5 = pCVar5 + 2;
    pcVar12[1] = cVar2;
    pcVar12 = pcVar12 + 2;
  } while (cVar2 != '\0');
  pcVar12 = &DAT_02c9ca08;
  if (DAT_02c9ca08 != '\0') {
    pbVar1 = (byte *)pcVar12;
    iVar9 = _DAT_02c9cb08 << 2;
    do {
      do {
        pbVar6 = pbVar1;
        pbVar1 = pbVar6 + 1;
      } while (0x20 < *pbVar6);
      *pbVar6 = 0;
      _DAT_02c9cb08 = _DAT_02c9cb08 + 1;
      *(char **)(iVar9 + 0x2c9cb0c) = pcVar12;
      bVar3 = *pbVar1;
      pcVar12 = (char *)pbVar1;
      while (bVar3 == 0x20) {
        pbVar1 = (byte *)(pcVar12 + 1);
        pcVar12 = pcVar12 + 1;
        bVar3 = *pbVar1;
      }
      pbVar1 = (byte *)pcVar12;
      iVar9 = iVar9 + 4;
    } while (*pcVar12 != 0);
  }
  GetCurrentDirectoryA(0x100,&DAT_02c9c908);
  GetModuleFileNameA(param_1,&DAT_02c9c808,0x100);
  uVar10 = 0xffffffff;
  pcVar12 = &DAT_02c9c808;
  do {
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    cVar2 = *pcVar12;
    pcVar12 = pcVar12 + (uint)bVar13 * -2 + 1;
  } while (cVar2 != '\0');
  uVar10 = ~uVar10;
  do {
    uVar4 = uVar10;
    if ((int)(uVar4 - 1) < 1) goto LAB_005b2f58;
    uVar10 = uVar4 - 1;
  } while (*(char *)(uVar4 + 0x2c9c807) != '\\');
  *(byte *)(uVar4 + 0x2c9c807) = 0;
LAB_005b2f58:
  SetCurrentDirectoryA(&DAT_02c9c808);
  local_58.style = 3;
  local_58.lpfnWndProc = wincore_winrun_cpp_FUN_005b27d0;
  local_58.hInstance = param_1;
  local_58.cbClsExtra = 0;
  local_58.cbWndExtra = 0;
  local_58.hIcon = LoadIconA(param_1,&DAT_00000065);
  local_58.hCursor = LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
  local_58.hbrBackground = GetStockObject(4);
  local_58.lpszClassName = PTR_s_Nocturne_006260dc;
  local_58.lpszMenuName = (LPCSTR)0x0;
  RegisterClassA(&local_58);
  _DAT_02c9be6c = param_1;
  wincore_winrun_cpp_FUN_005b2d90();
  ShowWindow(_DAT_02c9be68,param_4);
  UpdateWindow(_DAT_02c9be68);
  hThread = GetCurrentProcess();
  SetThreadPriority(hThread,2);
  memset(&local_30,0,0x20);
  local_30.dwLength = 0x20;
  GlobalMemoryStatus(&local_30);
  _DAT_02c9be78 = local_30.dwTotalPhys;
  _DAT_02c9be7c = local_30.dwAvailPageFile;
  core_main_c_FUN_005032a0(_DAT_02c9cb08,(char **)0x2c9cb0c);
  core_main_c_FUN_00503290();
  core_main_c_FUN_00503a30();
                    /* WARNING: Subroutine does not return */
  ExitProcess(0);
}
