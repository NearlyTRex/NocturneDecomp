// Name: engine_alphabit.cpp_CAlphaBitmap_copyRawToOpa_FUN_0040dcf0
// Address: 0040dcf0
// Address Range: [[0040dcf0, 0040dd14]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_copyRawToOpa_FUN_0040dcf0(CAlphaBitmap *this_ptr)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_copyRawToOpa_FUN_0040dcf0(CAlphaBitmap *this_ptr)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  uVar1 = *(int *)&this_ptr->field_0xc * *(int *)&this_ptr->field_0x10;
  puVar3 = *(uint **)this_ptr;
  puVar4 = *(uint **)&this_ptr->field_0x4;
  for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(byte *)puVar4 = *(byte *)puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  return;
}
