// Name: core_fldnotes.cpp_CFieldNotes_clear_FUN_004a50b0
// Address: 004a50b0
// Address Range: [[004a50b0, 004a51f4]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_CFieldNotes_clear_FUN_004a50b0(CFieldNotes *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_CFieldNotes_clear_FUN_004a50b0(CFieldNotes *this_ptr)

{
  char cVar1;
  SNotesSection *this_ptr_00;
  SNotesMap *this_ptr_01;
  CAlphaBitmap *this_ptr_02;
  char *pcVar2;
  char *pcVar3;
  
  this_ptr_00 = SNotesSection_ARRAY_01cab9f4;
  do {
    core_fldnotes_cpp_SNotesSection_clear_FUN_004a3570(this_ptr_00);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (SNotesSection *)&DAT_01cacb4c);
  this_ptr_01 = SNotesMap_ARRAY_01cacb50;
  _DAT_01cab9f0 = 0;
  do {
    core_fldnotes_cpp_SNotesMap_reset_FUN_004a3860(this_ptr_01);
    this_ptr_01 = this_ptr_01 + 1;
  } while (this_ptr_01 != (SNotesMap *)&DAT_01caf110);
  pcVar2 = "fieldnote";
  pcVar3 = &DAT_01cab7a8;
  _DAT_01cacb4c = 0;
  DAT_01cab788 = 0;
  this_ptr->is_displayed = 0;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  this_ptr_02 = CAlphaBitmap_ARRAY_01caf128;
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01caf114);
  do {
    engine_alphabit_cpp_FUN_0040d540(this_ptr_02);
    this_ptr_02 = this_ptr_02 + 1;
  } while (this_ptr_02 != &CAlphaBitmap_01caf1a0);
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
  this_ptr->file_name[0] = '\0';
  return;
}
