// Name: core_fldnotes.cpp_NotesMap_ctor_FUN_004a9e10
// Address: 004a9e10
// Address Range: [[004a9e10, 004a9e61]]
// Convention: unknown
// Signature: SNotesMap * core_fldnotes_cpp_NotesMap_ctor_FUN_004a9e10(SNotesMap *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SNotesMap * core_fldnotes_cpp_NotesMap_ctor_FUN_004a9e10(SNotesMap *this_ptr)

{
  CAlphaBitmap *pCVar1;
  
  pCVar1 = engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0((CAlphaBitmap *)&this_ptr->field_0x70)
  ;
  pCVar1 = engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0((CAlphaBitmap *)&pCVar1[1].field_0x4);
  pCVar1[-7].field_0x8 = 0;
  *(uint *)&pCVar1[-1].field_0x10 = 0;
  *(uint *)(pCVar1 + 1) = 0;
  *(uint *)&pCVar1[0x45].field_0x4 = 0;
  core_fldnotes_cpp_FUN_004a9eb0(&pCVar1[-7].field_0x4);
  return (SNotesMap *)&pCVar1[-7].field_0x4;
}
