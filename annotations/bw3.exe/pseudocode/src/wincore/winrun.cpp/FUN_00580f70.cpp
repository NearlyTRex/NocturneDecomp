// Name: wincore_winrun.cpp_FUN_00580f70
// Address: 00580f70
// Address Range: [[00580f70, 0058100d]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_FUN_00580f70(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00580fe7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_FUN_00580f70(void)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  tagMSG local_28;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (*(int *)(iVar3 + 0x2d21b90) == 1) {
      (&DAT_01c6cef0)[iVar1] = 0;
    }
    iVar1 = iVar1 + 1;
    *(uint *)(iVar3 + 0x2d21b90) = 0;
    iVar3 = iVar3 + 4;
  } while (iVar1 < 600);
  while( true ) {
    while (BVar2 = PeekMessageA(&local_28,(HWND)0x0,0,0,1), BVar2 != 0) {
      TranslateMessage(&local_28);
      DispatchMessageA(&local_28);
    }
    if ((DAT_00607288 != 0) || (_DAT_02d21b80 != 0)) break;
    Sleep(0x14);
    if (DAT_0060728c == 0) {
      return;
    }
  }
  return;
}
