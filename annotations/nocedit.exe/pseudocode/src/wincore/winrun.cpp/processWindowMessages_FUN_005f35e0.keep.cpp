// Name: wincore_winrun.cpp_processWindowMessages_FUN_005f35e0
// Address: 005f35e0
// MANUAL RECONSTRUCTION
// Address Range: [[005f35e0, 005f3670]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_processWindowMessages_FUN_005f35e0(void)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_processWindowMessages_FUN_005f35e0(void)

{
  int iVar1;
  tagMSG local_28;

  for (iVar1 = 0; iVar1 < 600; iVar1++) {
    if (g_MessageFlags[iVar1] == 1) {
      g_KeyboardState[iVar1] = '\0';
    }
    g_MessageFlags[iVar1] = 0;
  }
  while (true) {
    while ((*g_PeekMessageAFunc)(&local_28, 0, 0, 0, 1) != 0) {
      (*g_TranslateMessageFunc)(&local_28);
      (*g_DispatchMessageAFunc)(&local_28);
    }
#if NOCTURNE_AUTHENTIC_WINDOWS
    if (g_WindowActive != 0 || g_InputDisabled != 0 || g_ForceMessagePump == 0) break;
    (*g_SleepFunc)(0x14);
#else
    break;
#endif
  }
  return;
}
