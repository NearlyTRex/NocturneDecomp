// Name: core_fldnotes.cpp_NotesMap_dtor_FUN_004bc210
// Address: 004bc210
// Address Range: [[004bc210, 004bc241]]
// Convention: unknown
// Signature: SNotesMap * core_fldnotes_cpp_NotesMap_dtor_FUN_004bc210(SNotesMap *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SNotesMap * core_fldnotes_cpp_NotesMap_dtor_FUN_004bc210(SNotesMap *this_ptr,uint flags)

{
  CAlphaBitmap *pCVar1;
  
  core_fldnotes_cpp_FUN_004bc250(this_ptr);
  pCVar1 = engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0
                     ((CAlphaBitmap *)&this_ptr->field_0x88,0);
  pCVar1 = engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0((CAlphaBitmap *)&pCVar1[-2].height,0);
  return (SNotesMap *)&pCVar1[-6].act;
}
