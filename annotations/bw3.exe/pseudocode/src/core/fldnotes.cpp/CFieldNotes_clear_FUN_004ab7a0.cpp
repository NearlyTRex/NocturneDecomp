// Name: core_fldnotes.cpp_CFieldNotes_clear_FUN_004ab7a0
// Address: 004ab7a0
// Address Range: [[004ab7a0, 004ab8e4]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_CFieldNotes_clear_FUN_004ab7a0(CFieldNotes *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_CFieldNotes_clear_FUN_004ab7a0(CFieldNotes *this_ptr)

{
  char cVar1;
  SNotesSection *this_ptr_00;
  SNotesMap *this_ptr_01;
  CAlphaBitmap *this_ptr_02;
  char *pcVar2;
  char *pcVar3;
  
  this_ptr_00 = SNotesSection_ARRAY_01d0d214;
  do {
    core_fldnotes_cpp_SNotesSection_clear_FUN_004a9bc0(this_ptr_00);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (SNotesSection *)&DAT_01d0e36c);
  this_ptr_01 = SNotesMap_ARRAY_01d0e370;
  _DAT_01d0d210 = 0;
  do {
    core_fldnotes_cpp_SNotesMap_reset_FUN_004a9eb0(this_ptr_01);
    this_ptr_01 = this_ptr_01 + 1;
  } while (this_ptr_01 != (SNotesMap *)&DAT_01d19ba8);
  pcVar2 = "fieldnote";
  pcVar3 = &DAT_01d0cfc8;
  _DAT_01d0e36c = 0;
  DAT_01d0cfa8 = 0;
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
  this_ptr_02 = CAlphaBitmap_ARRAY_01d19bc0;
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19bac);
  do {
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(this_ptr_02);
    this_ptr_02 = this_ptr_02 + 1;
  } while (this_ptr_02 != &CAlphaBitmap_01d19c38);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c38);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c4c);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c60);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c74);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c9c);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19cb0);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19cc4);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19cd8);
  DAT_005fe370 = 1;
  _DAT_01d19f78 = 0;
  DAT_005fe3a8 = 0xffffffff;
  _DAT_01d1a058 = 0;
  DAT_01d19f90 = 0;
  this_ptr->file_name[0] = '\0';
  return;
}
