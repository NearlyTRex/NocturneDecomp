// Name: wincore_winrun.cpp_getNextKeypress_FUN_005b2510
// Address: 005b2510
// Address Range: [[005b2510, 005b2576]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winrun_cpp_getNextKeypress_FUN_005b2510(void)

#include "nocturne.h"

int __cdecl wincore_winrun_cpp_getNextKeypress_FUN_005b2510(void)

{
  int iVar1;
  undefined3 uVar2;
  byte uVar3;
  
  uVar3 = 0;
  if (g_INT_02c9a618 == g_INT_02c9a61c) {
    do {
      if (g_INT_02c9be70 != 0) break;
      wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
    } while (g_INT_02c9a618 == g_INT_02c9a61c);
  }
  uVar2 = (undefined3)((uint)g_INT_02c9a618 >> 8);
  if (g_INT_02c9a618 != g_INT_02c9a61c) {
    iVar1 = g_INT_02c9a618 + 1;
    uVar3 = (byte)g_INT_ARRAY_02c9a5c8[g_INT_02c9a618];
    g_INT_02c9a618 = iVar1;
    if (0x13 < iVar1) {
      g_INT_02c9a618 = 0;
      return CONCAT31(uVar2,uVar3);
    }
  }
  return CONCAT31(uVar2,uVar3);
}
