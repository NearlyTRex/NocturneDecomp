// Name: FUN_005b2e00
// Address: 005b2e00
// Address Range: [[005b2e00, 005b2ed1] [005b2ed7, 005b3064] [005b3071, 005b307d]]
// Convention: unknown
// Signature: void FUN_005b2e00(HMODULE param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b2e00(HMODULE param_1,uint param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  HWND hWnd;
  DWORD DVar5;
  LPSTR pCVar6;
  byte *pbVar7;
  HWND pHVar8;
  BOOL BVar9;
  byte *pbVar10;
  HANDLE hThread;
  int iVar11;
  uint uVar12;
  WNDCLASSA *pWVar13;
  char *pcVar14;
  byte bVar15;
  WNDCLASSA local_58;
  _MEMORYSTATUS local_30;
  
  bVar15 = 0;
  hWnd = FindWindowA(PTR_s_Nocturne_006260dc,(LPCSTR)0x0);
  pWVar13 = &local_58;
  if (hWnd != (HWND)0x0) {
    pHVar8 = GetLastActivePopup(hWnd);
    if (pHVar8 != (HWND)0x0) {
      hWnd = pHVar8;
    }
    BringWindowToTop(hWnd);
    BVar9 = IsIconic(hWnd);
    if (BVar9 != 0) {
      ShowWindow(hWnd,9);
    }
    SetForegroundWindow(hWnd);
                    /* WARNING: Subroutine does not return */
    ExitProcess(1);
  }
  do {
    iVar11 = *(int *)pWVar13;
    pWVar13 = (WNDCLASSA *)((int)pWVar13 + -0x80);
  } while (iVar11 < (int)pWVar13);
  DVar5 = timeGetTime();
  FUN_005c0870(DVar5);
  pcVar14 = &DAT_02c9ca08;
  pCVar6 = GetCommandLineA();
  do {
    cVar2 = *pCVar6;
    *pcVar14 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pCVar6[1];
    pCVar6 = pCVar6 + 2;
    pcVar14[1] = cVar2;
    pcVar14 = pcVar14 + 2;
  } while (cVar2 != '\0');
  pbVar10 = &DAT_02c9ca08;
  if (DAT_02c9ca08 != '\0') {
    pbVar1 = pbVar10;
    iVar11 = _DAT_02c9cb08 << 2;
    do {
      do {
        pbVar7 = pbVar1;
        pbVar1 = pbVar7 + 1;
      } while (0x20 < *pbVar7);
      *pbVar7 = 0;
      _DAT_02c9cb08 = _DAT_02c9cb08 + 1;
      *(byte **)(iVar11 + 0x2c9cb0c) = pbVar10;
      bVar3 = *pbVar1;
      pbVar10 = pbVar1;
      while (bVar3 == 0x20) {
        pbVar1 = pbVar10 + 1;
        pbVar10 = pbVar10 + 1;
        bVar3 = *pbVar1;
      }
      pbVar1 = pbVar10;
      iVar11 = iVar11 + 4;
    } while (*pbVar10 != 0);
  }
  GetCurrentDirectoryA(0x100,&DAT_02c9c908);
  GetModuleFileNameA(param_1,&DAT_02c9c808,0x100);
  uVar12 = 0xffffffff;
  pcVar14 = &DAT_02c9c808;
  do {
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    cVar2 = *pcVar14;
    pcVar14 = pcVar14 + (uint)bVar15 * -2 + 1;
  } while (cVar2 != '\0');
  uVar12 = ~uVar12;
  do {
    uVar4 = uVar12;
    if ((int)(uVar4 - 1) < 1) goto LAB_005b2f58;
    uVar12 = uVar4 - 1;
  } while (*(char *)(uVar4 + 0x2c9c807) != '\\');
  *(byte *)(uVar4 + 0x2c9c807) = 0;
LAB_005b2f58:
  SetCurrentDirectoryA(&DAT_02c9c808);
  local_58.style = 3;
  local_58.lpfnWndProc = (WNDPROC)&LAB_005b27d0;
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
  FUN_005b2d90();
  ShowWindow(_DAT_02c9be68,param_4);
  UpdateWindow(_DAT_02c9be68);
  hThread = GetCurrentProcess();
  SetThreadPriority(hThread,2);
  FUN_005bfb70(&local_30,0,0x20);
  local_30.dwLength = 0x20;
  GlobalMemoryStatus(&local_30);
  _DAT_02c9be78 = local_30.dwTotalPhys;
  _DAT_02c9be7c = local_30.dwAvailPageFile;
  FUN_005032a0(_DAT_02c9cb08,0x2c9cb0c);
  thunk_FUN_0050cc90();
  FUN_00503a30();
                    /* WARNING: Subroutine does not return */
  ExitProcess(0);
}
