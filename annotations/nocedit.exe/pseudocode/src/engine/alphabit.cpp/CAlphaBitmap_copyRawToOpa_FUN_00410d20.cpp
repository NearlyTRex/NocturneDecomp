// Name: engine_alphabit.cpp_CAlphaBitmap_copyRawToOpa_FUN_00410d20
// Address: 00410d20
// Address Range: [[00410d20, 00410d44]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_copyRawToOpa_FUN_00410d20(CAlphaBitmap *this_ptr)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_copyRawToOpa_FUN_00410d20(CAlphaBitmap *this_ptr)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  
  uVar1 = this_ptr->width * this_ptr->height;
  pcVar3 = this_ptr->raw;
  pcVar4 = this_ptr->opa;
  for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(uint *)pcVar4 = *(uint *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *pcVar4 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  }
  return;
}
