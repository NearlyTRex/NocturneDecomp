// Name: core_bmppuzzl.cpp_resetAllPuzzles_FUN_0059abb0
// Address: 0059abb0
// Address Range: [[0059abb0, 0059abdf]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_resetAllPuzzles_FUN_0059abb0(void)

#include "nocturne.h"

void __cdecl core_bmppuzzl_cpp_resetAllPuzzles_FUN_0059abb0(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < g_INT_ARRAY_026677b4[0]) {
    iVar3 = 0;
    do {
      puVar1 = (uint *)(iVar3 + 0x26677b8);
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
      (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
    } while (iVar2 < g_INT_ARRAY_026677b4[0]);
  }
  return;
}
