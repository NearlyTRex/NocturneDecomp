// Name: core_fldnotes.cpp_FUN_004bdaa0
// Address: 004bdaa0
// Address Range: [[004bdaa0, 004bdbe4]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004bdaa0(undefined1 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004bdaa0(byte *param_1)

{
  char cVar1;
  SNotesSection *pSVar2;
  SNotesMap *pSVar3;
  CAlphaBitmap *this_ptr;
  char *pcVar4;
  char *pcVar5;
  
  pSVar2 = SNotesSection_ARRAY_01cc4474;
  do {
    core_fldnotes_cpp_FUN_004bbf60(pSVar2);
    pSVar2 = pSVar2 + 1;
  } while (pSVar2 != (SNotesSection *)&DAT_01cc55cc);
  pSVar3 = SNotesMap_ARRAY_01cc55d0;
  _DAT_01cc4470 = 0;
  do {
    core_fldnotes_cpp_FUN_004bc250(pSVar3);
    pSVar3 = pSVar3 + 1;
  } while (pSVar3 != (SNotesMap *)&DAT_01cc7b90);
  pcVar4 = "fieldnote";
  pcVar5 = &DAT_01cc4228;
  _DAT_01cc55cc = 0;
  DAT_01cc4208 = 0;
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
  this_ptr = CAlphaBitmap_ARRAY_01cc7ba8;
  engine_alphabit_cpp_FUN_0040d1c0(&CAlphaBitmap_01cc7b94);
  do {
    engine_alphabit_cpp_FUN_0040d1c0(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != &CAlphaBitmap_01cc7c20);
  engine_alphabit_cpp_FUN_0040d1c0(&CAlphaBitmap_01cc7c20);
  engine_alphabit_cpp_FUN_0040d1c0(&CAlphaBitmap_01cc7c34);
  engine_alphabit_cpp_FUN_0040d1c0(&CAlphaBitmap_01cc7c48);
  engine_alphabit_cpp_FUN_0040d1c0(&CAlphaBitmap_01cc7c5c);
  engine_alphabit_cpp_FUN_0040d1c0(&CAlphaBitmap_01cc7c84);
  engine_alphabit_cpp_FUN_0040d1c0(&CAlphaBitmap_01cc7c98);
  engine_alphabit_cpp_FUN_0040d1c0(&CAlphaBitmap_01cc7cac);
  engine_alphabit_cpp_FUN_0040d1c0(&CAlphaBitmap_01cc7cc0);
  DAT_0061d2e0 = 1;
  _DAT_01cc7f1c = 0;
  DAT_0061d310 = 0xffffffff;
  _DAT_01cc8000 = 0;
  DAT_01cc7f38 = 0;
  *param_1 = 0;
  return;
}
