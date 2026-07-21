// Name: wincore_winrun.cpp_processWindowMessages_FUN_005591c0
// Address: 005591c0
// Address Range: [[005591c0, 00559250]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_processWindowMessages_FUN_005591c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_processWindowMessages_FUN_005591c0(void)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  tagMSG local_28;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (*(int *)(iVar3 + 0x2de20b0) == 1) {
      (&DAT_01c02598)[iVar1] = 0;
    }
    iVar1 = iVar1 + 1;
    *(uint *)(iVar3 + 0x2de20b0) = 0;
    iVar3 = iVar3 + 4;
  } while (iVar1 < 600);
  while( true ) {
    while (BVar2 = PeekMessageA(&local_28,(HWND)0x0,0,0,1), BVar2 != 0) {
      TranslateMessage(&local_28);
      DispatchMessageA(&local_28);
    }
    if (((DAT_005c1660 != 0) || (_DAT_02de20a0 != 0)) || (DAT_005c1664 == 0)) break;
    Sleep(0x14);
  }
  return;
}
