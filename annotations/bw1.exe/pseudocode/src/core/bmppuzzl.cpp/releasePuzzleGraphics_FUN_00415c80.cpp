// Name: core_bmppuzzl.cpp_releasePuzzleGraphics_FUN_00415c80
// Address: 00415c80
// Address Range: [[00415c80, 00415cc8]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_releasePuzzleGraphics_FUN_00415c80(void)

#include "nocturne.h"

void __cdecl core_bmppuzzl_cpp_releasePuzzleGraphics_FUN_00415c80(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_007c3978 != (CPuzzle *)0x0) {
    core_bmppuzzl_cpp_activatePuzzle_FUN_00415be0(DAT_007c3978,0);
  }
  iVar2 = 0;
  if (0 < DAT_007c394c) {
    iVar3 = 0;
    do {
      puVar1 = (uint *)((int)&DAT_007c3950 + iVar3);
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
      (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1);
    } while (iVar2 < DAT_007c394c);
  }
  return;
}
