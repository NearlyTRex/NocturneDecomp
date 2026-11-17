// Name: wincore_winrun.cpp_getNextKeypress_FUN_00558b00
// Address: 00558b00
// Address Range: [[00558b00, 00558b66]]
// Convention: __cdecl
// Signature: int __cdecl wincore_winrun_cpp_getNextKeypress_FUN_00558b00(void)

#include "nocturne.h"

int __cdecl wincore_winrun_cpp_getNextKeypress_FUN_00558b00(void)

{
  int iVar1;
  undefined3 uVar2;
  byte uVar3;
  
  uVar3 = 0;
  if (g_INT_02de0848 == g_INT_02de084c) {
    do {
      if (g_INT_02de20a0 != 0) break;
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    } while (g_INT_02de0848 == g_INT_02de084c);
  }
  uVar2 = (undefined3)((uint)g_INT_02de0848 >> 8);
  if (g_INT_02de0848 != g_INT_02de084c) {
    iVar1 = g_INT_02de0848 + 1;
    uVar3 = (byte)g_INT_ARRAY_02de07f8[g_INT_02de0848];
    g_INT_02de0848 = iVar1;
    if (0x13 < iVar1) {
      g_INT_02de0848 = 0;
      return CONCAT31(uVar2,uVar3);
    }
  }
  return CONCAT31(uVar2,uVar3);
}
