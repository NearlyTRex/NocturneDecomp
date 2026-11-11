// Name: core_fldnotes.cpp_CFieldNotes_clear_FUN_004bdaa0
// Address: 004bdaa0
// Address Range: [[004bdaa0, 004bdbe4]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_CFieldNotes_clear_FUN_004bdaa0(CFieldNotes *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_CFieldNotes_clear_FUN_004bdaa0(CFieldNotes *this_ptr)

{
  char cVar1;
  SNotesSection *this_ptr_00;
  SNotesMap *this_ptr_01;
  CAlphaBitmap *this_ptr_02;
  char *pcVar2;
  char *pcVar3;
  
  this_ptr_00 = SNotesSection_ARRAY_01cc4474;
  do {
    core_fldnotes_cpp_SNotesSection_clear_FUN_004bbf60(this_ptr_00);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (SNotesSection *)&DAT_01cc55cc);
  this_ptr_01 = SNotesMap_ARRAY_01cc55d0;
  _DAT_01cc4470 = 0;
  do {
    core_fldnotes_cpp_SNotesMap_reset_FUN_004bc250(this_ptr_01);
    this_ptr_01 = this_ptr_01 + 1;
  } while (this_ptr_01 != (SNotesMap *)&DAT_01cc7b90);
  pcVar2 = "fieldnote";
  pcVar3 = &DAT_01cc4228;
  _DAT_01cc55cc = 0;
  DAT_01cc4208 = 0;
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
  this_ptr_02 = CAlphaBitmap_ARRAY_01cc7ba8;
  engine_alphabit_cpp_FUN_0040d1c0(&CAlphaBitmap_01cc7b94);
  do {
    engine_alphabit_cpp_FUN_0040d1c0(this_ptr_02);
    this_ptr_02 = this_ptr_02 + 1;
  } while (this_ptr_02 != &CAlphaBitmap_01cc7c20);
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
  this_ptr->file_name[0] = '\0';
  return;
}
