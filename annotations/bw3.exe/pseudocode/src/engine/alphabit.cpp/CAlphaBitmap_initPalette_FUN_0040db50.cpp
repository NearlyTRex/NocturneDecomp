// Name: engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_0040db50
// Address: 0040db50
// Address Range: [[0040db50, 0040db75]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_0040db50(CAlphaBitmap *this_ptr)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_0040db50(CAlphaBitmap *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = *(uint **)&this_ptr->field_0x8;
  puVar3 = (uint *)&DAT_01c6a974;
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
