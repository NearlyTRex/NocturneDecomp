// Name: core_bmppuzzl.cpp_restorePuzzleGraphics_FUN_0059abe0
// Address: 0059abe0
// Address Range: [[0059abe0, 0059ac0f]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_restorePuzzleGraphics_FUN_0059abe0(void)

#include "nocturne.h"

void __cdecl core_bmppuzzl_cpp_restorePuzzleGraphics_FUN_0059abe0(void)

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
      (**(code **)(*(int *)*puVar1 + 0xc))((int *)*puVar1);
    } while (iVar2 < g_INT_ARRAY_026677b4[0]);
  }
  return;
}
