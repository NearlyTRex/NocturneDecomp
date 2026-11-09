// Name: core_fldnotes.cpp_FUN_004a50b0
// Address: 004a50b0
// Address Range: [[004a50b0, 004a51f4]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004a50b0(undefined1 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004a50b0(byte *param_1)

{
  char cVar1;
  SNotesSection *pSVar2;
  SNotesMap *pSVar3;
  CAlphaBitmap *this_ptr;
  char *pcVar4;
  char *pcVar5;
  
  pSVar2 = SNotesSection_ARRAY_01cab9f4;
  do {
    core_fldnotes_cpp_FUN_004a3570(pSVar2);
    pSVar2 = pSVar2 + 1;
  } while (pSVar2 != (SNotesSection *)&DAT_01cacb4c);
  pSVar3 = SNotesMap_ARRAY_01cacb50;
  _DAT_01cab9f0 = 0;
  do {
    core_fldnotes_cpp_FUN_004a3860(pSVar3);
    pSVar3 = pSVar3 + 1;
  } while (pSVar3 != (SNotesMap *)&DAT_01caf110);
  pcVar4 = "fieldnote";
  pcVar5 = &DAT_01cab7a8;
  _DAT_01cacb4c = 0;
  DAT_01cab788 = 0;
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
  this_ptr = CAlphaBitmap_ARRAY_01caf128;
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01caf114);
  do {
    engine_alphabit_cpp_FUN_0040d540(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != &CAlphaBitmap_01caf1a0);
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01caf1a0);
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01caf1b4);
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01caf1c8);
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01caf1dc);
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01caf1f0);
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01caf204);
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01caf218);
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01caf22c);
  DAT_00616010 = 1;
  _DAT_01caf488 = 0;
  DAT_00616040 = 0xffffffff;
  _DAT_01caf568 = 0;
  DAT_01caf4a0 = 0;
  *param_1 = 0;
  return;
}
