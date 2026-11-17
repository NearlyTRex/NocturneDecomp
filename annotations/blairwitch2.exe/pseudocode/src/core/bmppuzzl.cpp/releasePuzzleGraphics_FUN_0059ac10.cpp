// Name: core_bmppuzzl.cpp_releasePuzzleGraphics_FUN_0059ac10
// Address: 0059ac10
// Address Range: [[0059ac10, 0059ac58]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_releasePuzzleGraphics_FUN_0059ac10(void)

#include "nocturne.h"

void __cdecl core_bmppuzzl_cpp_releasePuzzleGraphics_FUN_0059ac10(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  if (g_INT_026677e0 != 0) {
    core_bmppuzzl_cpp_activatePuzzle_FUN_0059ab70((CPuzzle *)g_INT_026677e0,0);
  }
  iVar2 = 0;
  if (0 < g_INT_ARRAY_026677b4[0]) {
    iVar3 = 0;
    do {
      puVar1 = (uint *)(iVar3 + 0x26677b8);
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
      (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1);
    } while (iVar2 < g_INT_ARRAY_026677b4[0]);
  }
  return;
}
