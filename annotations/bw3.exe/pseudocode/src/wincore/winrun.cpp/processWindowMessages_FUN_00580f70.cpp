// Name: wincore_winrun.cpp_processWindowMessages_FUN_00580f70
// Address: 00580f70
// Address Range: [[00580f70, 0058100d]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_processWindowMessages_FUN_00580f70(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00580fe7) */

void __cdecl wincore_winrun_cpp_processWindowMessages_FUN_00580f70(void)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  tagMSG local_28;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (*(int *)((int)g_INT_ARRAY_02d21b90 + iVar3) == 1) {
      g_CHAR_ARRAY_01c6cef0[iVar1] = '\0';
    }
    iVar1 = iVar1 + 1;
    *(uint *)((int)g_INT_ARRAY_02d21b90 + iVar3) = 0;
    iVar3 = iVar3 + 4;
  } while (iVar1 < 600);
  while( true ) {
    while (BVar2 = PeekMessageA(&local_28,(HWND)0x0,0,0,1), BVar2 != 0) {
      TranslateMessage(&local_28);
      DispatchMessageA(&local_28);
    }
    if ((g_INT_00607288 != 0) || (g_INT_02d21b80 != 0)) break;
    Sleep(0x14);
    if (g_INT_0060728c == 0) {
      return;
    }
  }
  return;
}
