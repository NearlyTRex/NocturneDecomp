// Name: wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
// Address: 005f2e90
// Address Range: [[005f2e90, 005f2ef6]]
// Convention: __cdecl
// Signature: int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90(void)

#include "nocturne.h"

int __cdecl wincore_winrun_cpp_getNextKeypress_FUN_005f2e90(void)

{
  int iVar1;
  undefined3 uVar2;
  byte uVar3;
  
  uVar3 = 0;
  if (g_InputReadIndex == g_InputWriteIndex) {
    do {
      if (g_InputDisabled != 0) break;
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    } while (g_InputReadIndex == g_InputWriteIndex);
  }
  uVar2 = (undefined3)((uint)g_InputReadIndex >> 8);
  if (g_InputReadIndex != g_InputWriteIndex) {
    iVar1 = g_InputReadIndex + 1;
    uVar3 = (byte)g_InputBuffer[g_InputReadIndex];
    g_InputReadIndex = iVar1;
    if (0x13 < iVar1) {
      g_InputReadIndex = 0;
      return CONCAT31 /* combine 2-byte values */(uVar2,uVar3);
    }
  }
  return CONCAT31 /* combine 2-byte values */(uVar2,uVar3);
}
