// Name: wincore_winrun.cpp_FUN_00559260
// Address: 00559260
// Address Range: [[00559260, 005594fb]]
// Convention: __stdcall
// Signature: int __stdcall wincore_winrun_cpp_FUN_00559260(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __stdcall wincore_winrun_cpp_FUN_00559260(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  HWND hWnd;
  HWND pHVar4;
  BOOL BVar5;
  DWORD seed;
  LPSTR pCVar6;
  byte *pbVar7;
  HANDLE hThread;
  int iVar8;
  uint uVar9;
  WNDCLASSA *pWVar10;
  char *pcVar11;
  byte bVar12;
  WNDCLASSA local_58;
  _MEMORYSTATUS local_30;
  
  bVar12 = 0;
  hWnd = FindWindowA(PTR_s_Nocturne_005c1658,(LPCSTR)0x0);
  pWVar10 = &local_58;
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
    iVar8 = *(int *)pWVar10;
    pWVar10 = (WNDCLASSA *)((int)pWVar10 + -0x80);
  } while (iVar8 < (int)pWVar10);
  _DAT_02de209c = hInstance;
  seed = timeGetTime();
  srand(seed);
  pcVar11 = &DAT_02de2c10;
  pCVar6 = GetCommandLineA();
  do {
    cVar2 = *pCVar6;
    *pcVar11 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pCVar6[1];
    pCVar6 = pCVar6 + 2;
    pcVar11[1] = cVar2;
    pcVar11 = pcVar11 + 2;
  } while (cVar2 != '\0');
  pcVar11 = &DAT_02de2c10;
  if (DAT_02de2c10 != '\0') {
    pbVar1 = (byte *)pcVar11;
    iVar8 = _DAT_02de2d10 << 2;
    do {
      do {
        pbVar7 = pbVar1;
        pbVar1 = pbVar7 + 1;
      } while (0x20 < *pbVar7);
      *pbVar7 = 0;
      _DAT_02de2d10 = _DAT_02de2d10 + 1;
      *(char **)(iVar8 + 0x2de2d14) = pcVar11;
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
  GetCurrentDirectoryA(0x100,(LPSTR)0x2de2b10);
  GetModuleFileNameA(hInstance,&DAT_02de2a10,0x100);
  uVar9 = 0xffffffff;
  pcVar11 = &DAT_02de2a10;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + (uint)bVar12 * -2 + 1;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  do {
    uVar9 = uVar9 - 1;
    if ((int)uVar9 < 1) goto LAB_005593b7;
  } while ((&DAT_02de2a10)[uVar9] != '\\');
  (&DAT_02de2a10)[uVar9] = 0;
LAB_005593b7:
  SetCurrentDirectoryA(&DAT_02de2a10);
  local_58.lpfnWndProc = wincore_winrun_cpp_FUN_00558d90;
  local_58.cbClsExtra = 0;
  local_58.cbWndExtra = 0;
  local_58.hInstance = hInstance;
  local_58.style = 3;
  local_58.hIcon = LoadIconA(hInstance,(LPCSTR)0x65);
  local_58.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_58.hbrBackground = GetStockObject(4);
  local_58.lpszClassName = PTR_s_Nocturne_005c1658;
  local_58.lpszMenuName = (LPCSTR)0x0;
  RegisterClassA(&local_58);
  _DAT_02de2098 =
       CreateWindowExA(0x40000,PTR_s_Nocturne_005c1658,PTR_s_Nocturne_005c165c,0x80000000,0,0,0,0,
                       (HWND)0x0,(HMENU)0x0,hInstance,(LPVOID)0x0);
  if (_DAT_02de2098 == (HWND)0x0) {
    return 0;
  }
  ShowWindow(_DAT_02de2098,nCmdShow);
  UpdateWindow(_DAT_02de2098);
  hThread = GetCurrentProcess();
  SetThreadPriority(hThread,1);
  memset(&local_30,0,0x20);
  local_30.dwLength = 0x20;
  GlobalMemoryStatus(&local_30);
  _DAT_02de20a8 = local_30.dwTotalPhys;
  _DAT_02de20ac = local_30.dwAvailPageFile;
  core_main_c_FUN_004c85f0(_DAT_02de2d10,(char **)0x2de2d14);
  core_main_c_enterMainGameMenu_FUN_004c85e0();
  core_main_c_FUN_004c90e0();
  return 0;
}
