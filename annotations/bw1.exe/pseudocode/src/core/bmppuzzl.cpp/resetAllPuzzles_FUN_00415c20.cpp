// Name: core_bmppuzzl.cpp_resetAllPuzzles_FUN_00415c20
// Address: 00415c20
// Address Range: [[00415c20, 00415c4f]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_resetAllPuzzles_FUN_00415c20(void)

#include "nocturne.h"

void __cdecl core_bmppuzzl_cpp_resetAllPuzzles_FUN_00415c20(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < DAT_007c394c) {
    iVar3 = 0;
    do {
      puVar1 = (uint *)((int)&DAT_007c3950 + iVar3);
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
      (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
    } while (iVar2 < DAT_007c394c);
  }
  return;
}
