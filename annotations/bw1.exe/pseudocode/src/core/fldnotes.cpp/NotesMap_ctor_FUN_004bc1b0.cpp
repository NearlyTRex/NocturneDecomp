// Name: core_fldnotes.cpp_NotesMap_ctor_FUN_004bc1b0
// Address: 004bc1b0
// Address Range: [[004bc1b0, 004bc201]]
// Convention: unknown
// Signature: SNotesMap * core_fldnotes_cpp_NotesMap_ctor_FUN_004bc1b0(SNotesMap *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SNotesMap * core_fldnotes_cpp_NotesMap_ctor_FUN_004bc1b0(SNotesMap *this_ptr)

{
  CAlphaBitmap *pCVar1;
  
  pCVar1 = engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0((CAlphaBitmap *)&this_ptr->field_0x70)
  ;
  pCVar1 = engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0((CAlphaBitmap *)&pCVar1[1].field_0x4);
  pCVar1[-7].field_0x8 = 0;
  *(uint *)&pCVar1[-1].field_0x10 = 0;
  *(uint *)(pCVar1 + 1) = 0;
  *(uint *)&pCVar1[0x1c].field_0x8 = 0;
  core_fldnotes_cpp_FUN_004bc250(&pCVar1[-7].field_0x4);
  return (SNotesMap *)&pCVar1[-7].field_0x4;
}
