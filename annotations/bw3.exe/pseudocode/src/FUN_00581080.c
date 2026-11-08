// Name: FUN_00581080
// Address: 00581080
// Address Range: [[00581080, 00581151] [00581157, 005812e4] [005812f1, 005812fd]]
// Convention: unknown
// Signature: void FUN_00581080(HMODULE param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00581080(HMODULE param_1,uint param_2,uint param_3,int param_4)

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
  hWnd = FindWindowA(PTR_s_Blair_Witch_3_00607280,(LPCSTR)0x0);
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
  FUN_005a35f0(DVar5);
  pcVar14 = &DAT_02d22718;
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
  pbVar10 = &DAT_02d22718;
  if (DAT_02d22718 != '\0') {
    pbVar1 = pbVar10;
    iVar11 = _DAT_02d22818 << 2;
    do {
      do {
        pbVar7 = pbVar1;
        pbVar1 = pbVar7 + 1;
      } while (0x20 < *pbVar7);
      *pbVar7 = 0;
      _DAT_02d22818 = _DAT_02d22818 + 1;
      *(byte **)(iVar11 + 0x2d2281c) = pbVar10;
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
  GetCurrentDirectoryA(0x100,&DAT_02d22618);
  GetModuleFileNameA(param_1,&DAT_02d22518,0x100);
  uVar12 = 0xffffffff;
  pcVar14 = &DAT_02d22518;
  do {
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    cVar2 = *pcVar14;
    pcVar14 = pcVar14 + (uint)bVar15 * -2 + 1;
  } while (cVar2 != '\0');
  uVar12 = ~uVar12;
  do {
    uVar4 = uVar12;
    if ((int)(uVar4 - 1) < 1) goto LAB_005811d8;
    uVar12 = uVar4 - 1;
  } while (*(char *)(uVar4 + 0x2d22517) != '\\');
  *(byte *)(uVar4 + 0x2d22517) = 0;
LAB_005811d8:
  SetCurrentDirectoryA(&DAT_02d22518);
  local_58.style = 3;
  local_58.lpfnWndProc = (WNDPROC)&LAB_00580a50;
  local_58.hInstance = param_1;
  local_58.cbClsExtra = 0;
  local_58.cbWndExtra = 0;
  local_58.hIcon = LoadIconA(param_1,&DAT_00000065);
  local_58.hCursor = LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
  local_58.hbrBackground = GetStockObject(4);
  local_58.lpszClassName = PTR_s_Blair_Witch_3_00607280;
  local_58.lpszMenuName = (LPCSTR)0x0;
  RegisterClassA(&local_58);
  _DAT_02d21b7c = param_1;
  FUN_00581010();
  ShowWindow(_DAT_02d21b78,param_4);
  UpdateWindow(_DAT_02d21b78);
  hThread = GetCurrentProcess();
  SetThreadPriority(hThread,2);
  FUN_005a28f0(&local_30,0,0x20);
  local_30.dwLength = 0x20;
  GlobalMemoryStatus(&local_30);
  _DAT_02d21b88 = local_30.dwTotalPhys;
  _DAT_02d21b8c = local_30.dwAvailPageFile;
  FUN_004e44e0(_DAT_02d22818,0x2d2281c);
  thunk_FUN_004ea4d0();
  FUN_004e4c70();
                    /* WARNING: Subroutine does not return */
  ExitProcess(0);
}
