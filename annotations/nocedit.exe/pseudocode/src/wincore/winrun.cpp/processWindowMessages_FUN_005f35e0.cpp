// Name: wincore_winrun.cpp_processWindowMessages_FUN_005f35e0
// Address: 005f35e0
// Address Range: [[005f35e0, 005f3670]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_processWindowMessages_FUN_005f35e0(void)

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
    while (BVar2 = (*g_PeekMessageAFunc)(&local_28,0,0,0,1), BVar2 != 0) {
      (*g_TranslateMessageFunc)(&local_28);
      (*g_DispatchMessageAFunc)(&local_28);
    }
    if (((g_WindowActive != 0) || (g_InputDisabled != 0)) || (g_ForceMessagePump == 0)) break;
    (*g_SleepFunc)(0x14);
  }
  return;
}
