// Name: core_fldnotes.cpp_FUN_004ab7a0
// Address: 004ab7a0
// Address Range: [[004ab7a0, 004ab8e4]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004ab7a0(undefined1 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004ab7a0(byte *param_1)

{
  char cVar1;
  SNotesSection *pSVar2;
  SNotesMap *pSVar3;
  CAlphaBitmap *this_ptr;
  char *pcVar4;
  char *pcVar5;
  
  pSVar2 = SNotesSection_ARRAY_01d0d214;
  do {
    core_fldnotes_cpp_FUN_004a9bc0(pSVar2);
    pSVar2 = pSVar2 + 1;
  } while (pSVar2 != (SNotesSection *)&DAT_01d0e36c);
  pSVar3 = SNotesMap_ARRAY_01d0e370;
  _DAT_01d0d210 = 0;
  do {
    core_fldnotes_cpp_FUN_004a9eb0(pSVar3);
    pSVar3 = pSVar3 + 1;
  } while (pSVar3 != (SNotesMap *)&DAT_01d19ba8);
  pcVar4 = "fieldnote";
  pcVar5 = &DAT_01d0cfc8;
  _DAT_01d0e36c = 0;
  DAT_01d0cfa8 = 0;
  *(uint *)(param_1 + 0x40) = 0;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  this_ptr = CAlphaBitmap_ARRAY_01d19bc0;
  engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19bac);
  do {
    engine_alphabit_cpp_FUN_0040d400(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != &CAlphaBitmap_01d19c38);
  engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19c38);
  engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19c4c);
  engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19c60);
  engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19c74);
  engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19c9c);
  engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19cb0);
  engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19cc4);
  engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19cd8);
  DAT_005fe370 = 1;
  _DAT_01d19f78 = 0;
  DAT_005fe3a8 = 0xffffffff;
  _DAT_01d1a058 = 0;
  DAT_01d19f90 = 0;
  *param_1 = 0;
  return;
}
