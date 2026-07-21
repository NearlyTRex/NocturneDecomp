// Name: engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_0040eab0
// Address: 0040eab0
// Address Range: [[0040eab0, 0040ead5]]
// Convention: unknown
// Signature: void engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_0040eab0(int param_1)

#include "nocturne.h"

void engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_0040eab0(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = *(uint **)(param_1 + 8);
  puVar3 = (uint *)&DAT_01c00024;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(byte *)puVar3 = *(byte *)puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
    puVar3 = (uint *)((int)puVar3 + 1);
  }
  return;
}
