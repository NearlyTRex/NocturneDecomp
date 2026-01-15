// Name: wincore_winrun.cpp_processWindowMessages_FUN_005f35e0
// Address: 005f35e0
// Address Range: [[005f35e0, 005f3670]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_processWindowMessages_FUN_005f35e0(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_processWindowMessages_FUN_005f35e0(void)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  tagMSG local_28;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (*(int *)((int)g_MessageFlags + iVar3 + 4) == 1) {
      g_KeyboardState[iVar1] = '\0';
    }
    iVar1 = iVar1 + 1;
    *(uint *)((int)g_MessageFlags + iVar3 + 4) = 0;
    iVar3 = iVar3 + 4;
  } while (iVar1 < 600);
  while( true ) {
    while (BVar2 = (*PTR_PeekMessageA_006114d0)(&local_28,(HWND)0x0,0,0,1), BVar2 != 0) {
      (*PTR_TranslateMessage_006114f8)(&local_28);
      (*PTR_DispatchMessageA_0061149c)(&local_28);
    }
    if (((g_WindowActive != 0) || (g_InputDisabled != 0)) || (g_ForceMessagePump == 0)) break;
    (*Sleep)(0x14);
  }
  return;
}
