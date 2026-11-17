// Name: wincore_winrun.cpp_processWindowMessages_FUN_005b2cf0
// Address: 005b2cf0
// Address Range: [[005b2cf0, 005b2d8d]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_processWindowMessages_FUN_005b2cf0(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005b2d67) */

void __cdecl wincore_winrun_cpp_processWindowMessages_FUN_005b2cf0(void)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  tagMSG local_28;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (*(int *)((int)g_INT_ARRAY_02c9be80 + iVar3) == 1) {
      g_CHAR_ARRAY_01c50950[iVar1] = '\0';
    }
    iVar1 = iVar1 + 1;
    *(uint *)((int)g_INT_ARRAY_02c9be80 + iVar3) = 0;
    iVar3 = iVar3 + 4;
  } while (iVar1 < 600);
  while( true ) {
    while (BVar2 = PeekMessageA(&local_28,(HWND)0x0,0,0,1), BVar2 != 0) {
      TranslateMessage(&local_28);
      DispatchMessageA(&local_28);
    }
    if ((g_INT_006260e4 != 0) || (g_INT_02c9be70 != 0)) break;
    Sleep(0x14);
    if (g_INT_006260e8 == 0) {
      return;
    }
  }
  return;
}
