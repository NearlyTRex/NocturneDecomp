// Name: wincore_winrun.cpp_FUN_00559260
// Address: 00559260
// Address Range: [[00559260, 005594fb]]
// Convention: unknown
// Signature: undefined4 wincore_winrun_cpp_FUN_00559260(HMODULE param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint wincore_winrun_cpp_FUN_00559260(HMODULE param_1,uint param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  HWND hWnd;
  HWND pHVar4;
  BOOL BVar5;
  DWORD DVar6;
  LPSTR pCVar7;
  byte *pbVar8;
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
  hWnd = FindWindowA(PTR_s_Nocturne_005c1658,(LPCSTR)0x0);
  pWVar12 = &local_58;
  if (hWnd != (HWND)0x0) {
    pHVar4 = GetLastActivePopup(hWnd);
    if (pHVar4 != (HWND)0x0) {
      hWnd = pHVar4;
    }
    BringWindowToTop(hWnd);
    BVar5 = IsIconic(hWnd);
    if (BVar5 != 0) {
      ShowWindow(hWnd,9);
    }
    SetForegroundWindow(hWnd);
    return 0;
  }
  do {
    iVar10 = *(int *)pWVar12;
    pWVar12 = (WNDCLASSA *)((int)pWVar12 + -0x80);
  } while (iVar10 < (int)pWVar12);
  _DAT_02de209c = param_1;
  DVar6 = timeGetTime();
  srand(DVar6);
  pcVar13 = &DAT_02de2c10;
  pCVar7 = GetCommandLineA();
  do {
    cVar2 = *pCVar7;
    *pcVar13 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pCVar7[1];
    pCVar7 = pCVar7 + 2;
    pcVar13[1] = cVar2;
    pcVar13 = pcVar13 + 2;
  } while (cVar2 != '\0');
  pbVar9 = &DAT_02de2c10;
  if (DAT_02de2c10 != '\0') {
    pbVar1 = pbVar9;
    iVar10 = _DAT_02de2d10 << 2;
    do {
      do {
        pbVar8 = pbVar1;
        pbVar1 = pbVar8 + 1;
      } while (0x20 < *pbVar8);
      *pbVar8 = 0;
      _DAT_02de2d10 = _DAT_02de2d10 + 1;
      *(byte **)(iVar10 + 0x2de2d14) = pbVar9;
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
  GetCurrentDirectoryA(0x100,(LPSTR)0x2de2b10);
  GetModuleFileNameA(param_1,&DAT_02de2a10,0x100);
  uVar11 = 0xffffffff;
  pcVar13 = &DAT_02de2a10;
  do {
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar13 + (uint)bVar14 * -2 + 1;
  } while (cVar2 != '\0');
  uVar11 = ~uVar11;
  do {
    uVar11 = uVar11 - 1;
    if ((int)uVar11 < 1) goto LAB_005593b7;
  } while ((&DAT_02de2a10)[uVar11] != '\\');
  (&DAT_02de2a10)[uVar11] = 0;
LAB_005593b7:
  SetCurrentDirectoryA(&DAT_02de2a10);
  local_58.lpfnWndProc = (WNDPROC)&LAB_00558d90;
  local_58.cbClsExtra = 0;
  local_58.cbWndExtra = 0;
  local_58.hInstance = param_1;
  local_58.style = 3;
  local_58.hIcon = LoadIconA(param_1,(LPCSTR)0x65);
  local_58.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_58.hbrBackground = GetStockObject(4);
  local_58.lpszClassName = PTR_s_Nocturne_005c1658;
  local_58.lpszMenuName = (LPCSTR)0x0;
  RegisterClassA(&local_58);
  _DAT_02de2098 =
       CreateWindowExA(0x40000,PTR_s_Nocturne_005c1658,PTR_s_Nocturne_005c165c,0x80000000,0,0,0,0,
                       (HWND)0x0,(HMENU)0x0,param_1,(LPVOID)0x0);
  if (_DAT_02de2098 == (HWND)0x0) {
    return 0;
  }
  ShowWindow(_DAT_02de2098,param_4);
  UpdateWindow(_DAT_02de2098);
  hThread = GetCurrentProcess();
  SetThreadPriority(hThread,1);
  memset(&local_30,0,0x20);
  local_30.dwLength = 0x20;
  GlobalMemoryStatus(&local_30);
  _DAT_02de20a8 = local_30.dwTotalPhys;
  _DAT_02de20ac = local_30.dwAvailPageFile;
  FUN_004c85f0(_DAT_02de2d10,0x2de2d14);
  thunk_FUN_004d23d0();
  FUN_004c90e0();
  return 0;
}
