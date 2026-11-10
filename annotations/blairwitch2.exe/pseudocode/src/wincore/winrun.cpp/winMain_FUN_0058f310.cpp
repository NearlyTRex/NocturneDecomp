// Name: wincore_winrun.cpp_winMain_FUN_0058f310
// Address: 0058f310
// Address Range: [[0058f310, 0058f3e1] [0058f3e7, 0058f5a4] [0058f5b1, 0058f5c7]]
// Convention: unknown
// Signature: void wincore_winrun_cpp_winMain_FUN_0058f310(HMODULE param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wincore_winrun_cpp_winMain_FUN_0058f310(HMODULE param_1,uint param_2,uint param_3,int param_4)

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
  pcVar11 = &DAT_026651b8;
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
  pcVar11 = &DAT_026651b8;
  if (DAT_026651b8 != '\0') {
    pbVar1 = (byte *)pcVar11;
    iVar8 = _DAT_026652b8 << 2;
    do {
      do {
        pbVar5 = pbVar1;
        pbVar1 = pbVar5 + 1;
      } while (0x20 < *pbVar5);
      *pbVar5 = 0;
      _DAT_026652b8 = _DAT_026652b8 + 1;
      *(char **)(iVar8 + 0x26652bc) = pcVar11;
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
  GetCurrentDirectoryA(0x100,&DAT_026650b8);
  GetModuleFileNameA(param_1,&DAT_02664fb8,0x100);
  uVar9 = 0xffffffff;
  pcVar11 = &DAT_02664fb8;
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
  } while ((&DAT_02664fb8)[uVar9] != '\\');
  (&DAT_02664fb8)[uVar9] = 0;
LAB_0058f46b:
  SetCurrentDirectoryA(&DAT_02664fb8);
  local_58.lpfnWndProc = wincore_winrun_cpp_FUN_0058ed90;
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
    memset(&local_30,0,0x20);
    local_30.dwLength = 0x20;
    GlobalMemoryStatus(&local_30);
    _DAT_02664638 = local_30.dwTotalPhys;
    _DAT_0266463c = local_30.dwAvailPageFile;
    core_main_c_initializeGameSystems_FUN_004e46c0(_DAT_026652b8,(char **)0x26652bc);
    core_main_c_FUN_004e46b0();
    core_main_c_FUN_004e4e20();
                    /* WARNING: Subroutine does not return */
    ExitProcess(0);
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(1);
}
