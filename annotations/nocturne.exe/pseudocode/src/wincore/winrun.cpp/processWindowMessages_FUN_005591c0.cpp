// Name: wincore_winrun.cpp_processWindowMessages_FUN_005591c0
// Address: 005591c0
// Address Range: [[005591c0, 00559250]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_processWindowMessages_FUN_005591c0(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_processWindowMessages_FUN_005591c0(void)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  tagMSG local_28;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (*(int *)((int)g_INT_ARRAY_02de20b0 + iVar3) == 1) {
      g_CHAR_ARRAY_01c02598[iVar1] = '\0';
    }
    iVar1 = iVar1 + 1;
    *(uint *)((int)g_INT_ARRAY_02de20b0 + iVar3) = 0;
    iVar3 = iVar3 + 4;
  } while (iVar1 < 600);
  while( true ) {
    while (BVar2 = PeekMessageA(&local_28,0,0,0,1), BVar2 != 0) {
      TranslateMessage(&local_28);
      DispatchMessageA(&local_28);
    }
    if (((g_INT_005c1660 != 0) || (g_INT_02de20a0 != 0)) || (g_INT_005c1664 == 0)) break;
    Sleep(0x14);
  }
  return;
}
