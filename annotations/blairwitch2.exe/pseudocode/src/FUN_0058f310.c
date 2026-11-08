// Name: FUN_0058f310
// Address: 0058f310
// Address Range: [[0058f310, 0058f3e1] [0058f3e7, 0058f5a4] [0058f5b1, 0058f5c7]]
// Convention: unknown
// Signature: void FUN_0058f310(HMODULE param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058f310(HMODULE param_1,uint param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  HWND hWnd;
  DWORD DVar4;
  LPSTR pCVar5;
  byte *pbVar6;
  HWND pHVar7;
  BOOL BVar8;
  byte *pbVar9;
  HANDLE hThread;
  int iVar10;
  uint uVar11;
  WNDCLASSA *pWVar12;
  char *pcVar13;
  byte bVar14;
  WNDCLASSA local_58;
  _MEMORYSTATUS local_30;
  
  bVar14 = 0;
  hWnd = FindWindowA(PTR_s_Coffin_Rock_0061e984,(LPCSTR)0x0);
  pWVar12 = &local_58;
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
    iVar10 = *(int *)pWVar12;
    pWVar12 = (WNDCLASSA *)((int)pWVar12 + -0x80);
  } while (iVar10 < (int)pWVar12);
  DVar4 = timeGetTime();
  FUN_005b84c0(DVar4);
  pcVar13 = &DAT_026651b8;
  pCVar5 = GetCommandLineA();
  do {
    cVar2 = *pCVar5;
    *pcVar13 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pCVar5[1];
    pCVar5 = pCVar5 + 2;
    pcVar13[1] = cVar2;
    pcVar13 = pcVar13 + 2;
  } while (cVar2 != '\0');
  pbVar9 = &DAT_026651b8;
  if (DAT_026651b8 != '\0') {
    pbVar1 = pbVar9;
    iVar10 = _DAT_026652b8 << 2;
    do {
      do {
        pbVar6 = pbVar1;
        pbVar1 = pbVar6 + 1;
      } while (0x20 < *pbVar6);
      *pbVar6 = 0;
      _DAT_026652b8 = _DAT_026652b8 + 1;
      *(byte **)(iVar10 + 0x26652bc) = pbVar9;
      bVar3 = *pbVar1;
      pbVar9 = pbVar1;
      while (bVar3 == 0x20) {
        pbVar1 = pbVar9 + 1;
        pbVar9 = pbVar9 + 1;
        bVar3 = *pbVar1;
      }
      pbVar1 = pbVar9;
      iVar10 = iVar10 + 4;
    } while (*pbVar9 != 0);
  }
  GetCurrentDirectoryA(0x100,&DAT_026650b8);
  GetModuleFileNameA(param_1,&DAT_02664fb8,0x100);
  uVar11 = 0xffffffff;
  pcVar13 = &DAT_02664fb8;
  do {
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar13 + (uint)bVar14 * -2 + 1;
  } while (cVar2 != '\0');
  uVar11 = ~uVar11;
  do {
    uVar11 = uVar11 - 1;
    if ((int)uVar11 < 1) goto LAB_0058f46b;
  } while ((&DAT_02664fb8)[uVar11] != '\\');
  (&DAT_02664fb8)[uVar11] = 0;
LAB_0058f46b:
  SetCurrentDirectoryA(&DAT_02664fb8);
  local_58.lpfnWndProc = (WNDPROC)&LAB_0058ed90;
  local_58.cbClsExtra = 0;
  local_58.cbWndExtra = 0;
  local_58.hInstance = param_1;
  local_58.style = 3;
  local_58.hIcon = LoadIconA(param_1,&DAT_00000065);
  local_58.hCursor = LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
  local_58.hbrBackground = GetStockObject(4);
  local_58.lpszClassName = PTR_s_Coffin_Rock_0061e984;
  local_58.lpszMenuName = (LPCSTR)0x0;
  RegisterClassA(&local_58);
  _DAT_02664628 =
       CreateWindowExA(0x40000,PTR_s_Coffin_Rock_0061e984,PTR_s_Coffin_Rock_0061e988,0x80000000,0,0,
                       0,0,(HWND)0x0,(HMENU)0x0,param_1,(LPVOID)0x0);
  if (_DAT_02664628 != (HWND)0x0) {
    _DAT_0266462c = param_1;
    ShowWindow(_DAT_02664628,param_4);
    UpdateWindow(_DAT_02664628);
    hThread = GetCurrentProcess();
    SetThreadPriority(hThread,1);
    FUN_005b77c0(&local_30,0,0x20);
    local_30.dwLength = 0x20;
    GlobalMemoryStatus(&local_30);
    _DAT_02664638 = local_30.dwTotalPhys;
    _DAT_0266463c = local_30.dwAvailPageFile;
    FUN_004e46c0(_DAT_026652b8,0x26652bc);
    thunk_FUN_004ee3f0();
    FUN_004e4e20();
                    /* WARNING: Subroutine does not return */
    ExitProcess(0);
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(1);
}
