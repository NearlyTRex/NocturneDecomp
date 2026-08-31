// Name: wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
// Address: 005f2e90
// MANUAL RECONSTRUCTION
// Address Range: [[005f2e90, 005f2ef6]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winrun_cpp_getNextKeypress_FUN_005f2e90(void)

#include "nocturne.h"

int __cdecl wincore_winrun_cpp_getNextKeypress_FUN_005f2e90(void)

{
  int iVar1;
  int iVar2;

  iVar2 = 0;
  if (g_InputReadIndex == g_InputWriteIndex) {
    do {
      if (g_InputDisabled != 0) break;
#if !NOCTURNE_AUTHENTIC_NETPLAY
      nocturne_net_keepalive();
#endif
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    } while (g_InputReadIndex == g_InputWriteIndex);
  }
  if (g_InputReadIndex != g_InputWriteIndex) {
    iVar1 = g_InputReadIndex + 1;
    iVar2 = g_InputBuffer[g_InputReadIndex];
    g_InputReadIndex = iVar1;
    if (0x13 < iVar1) {
      g_InputReadIndex = 0;
      return iVar2;
    }
  }
  return iVar2;
}
