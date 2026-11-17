// Name: engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_0040dca0
// Address: 0040dca0
// Address Range: [[0040dca0, 0040dcef]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_0040dca0(CAlphaBitmap *this_ptr)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_0040dca0(CAlphaBitmap *this_ptr)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  
  if (g_INT_006141c0 == 0x10) {
    iVar4 = 0;
    iVar3 = 0;
    do {
      iVar2 = iVar3 + 2;
      puVar1 = (ushort *)((int)this_ptr->act + iVar4);
      iVar4 = iVar4 + 4;
      *(ushort *)((int)g_USHORT_ARRAY_01c35614 + iVar3) = *puVar1;
      iVar3 = iVar2;
    } while (iVar2 != 0x200);
    return;
  }
  puVar5 = this_ptr->act;
  puVar6 = g_UINT_ARRAY_01c35214;
  for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(char *)puVar6 = (char)*puVar5;
    puVar5 = (uint *)((int)puVar5 + 1);
    puVar6 = (uint *)((int)puVar6 + 1);
  }
  return;
}
