// Name: engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_0040eab0
// Address: 0040eab0
// Address Range: [[0040eab0, 0040ead5]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_0040eab0(CAlphaBitmap *this_ptr)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_0040eab0(CAlphaBitmap *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = this_ptr->act;
  puVar3 = (uint *)&DAT_01c00024;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(char *)puVar3 = (char)*puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
    puVar3 = (uint *)((int)puVar3 + 1);
  }
  return;
}
