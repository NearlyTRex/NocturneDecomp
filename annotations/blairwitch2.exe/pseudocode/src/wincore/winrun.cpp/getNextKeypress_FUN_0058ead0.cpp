// Name: wincore_winrun.cpp_getNextKeypress_FUN_0058ead0
// Address: 0058ead0
// Address Range: [[0058ead0, 0058eb36]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winrun_cpp_getNextKeypress_FUN_0058ead0(void)

#include "nocturne.h"

int __cdecl wincore_winrun_cpp_getNextKeypress_FUN_0058ead0(void)

{
  int iVar1;
  undefined3 uVar2;
  byte uVar3;
  
  uVar3 = 0;
  if (g_INT_02662dd8 == g_INT_02662ddc) {
    do {
      if (g_INT_02664630 != 0) break;
      wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
    } while (g_INT_02662dd8 == g_INT_02662ddc);
  }
  uVar2 = (undefined3)((uint)g_INT_02662dd8 >> 8);
  if (g_INT_02662dd8 != g_INT_02662ddc) {
    iVar1 = g_INT_02662dd8 + 1;
    uVar3 = (byte)g_INT_ARRAY_02662d88[g_INT_02662dd8];
    g_INT_02662dd8 = iVar1;
    if (0x13 < iVar1) {
      g_INT_02662dd8 = 0;
      return CONCAT31(uVar2,uVar3);
    }
  }
  return CONCAT31(uVar2,uVar3);
}
