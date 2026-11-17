// Name: wincore_winrun.cpp_processWindowMessages_FUN_0058f270
// Address: 0058f270
// Address Range: [[0058f270, 0058f300]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_processWindowMessages_FUN_0058f270(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_processWindowMessages_FUN_0058f270(void)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  tagMSG local_28;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (*(int *)((int)g_MessageFlags + iVar3) == 1) {
      g_KeyboardState[iVar1] = '\0';
    }
    iVar1 = iVar1 + 1;
    *(uint *)((int)g_MessageFlags + iVar3) = 0;
    iVar3 = iVar3 + 4;
  } while (iVar1 < 600);
  while( true ) {
    while (BVar2 = PeekMessageA(&local_28,(HWND)0x0,0,0,1), BVar2 != 0) {
      TranslateMessage(&local_28);
      DispatchMessageA(&local_28);
    }
    if (((g_WindowActive != 0) || (g_InputDisabled != 0)) || (g_ForceMessagePump == 0)) break;
    Sleep(0x14);
  }
  return;
}
