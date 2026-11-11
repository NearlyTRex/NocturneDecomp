// Name: core_fldnotes.cpp_SNotesMap_dtor_FUN_004a3820
// Address: 004a3820
// Address Range: [[004a3820, 004a3851]]
// Convention: unknown
// Signature: SNotesMap * core_fldnotes_cpp_SNotesMap_dtor_FUN_004a3820(SNotesMap *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SNotesMap * core_fldnotes_cpp_SNotesMap_dtor_FUN_004a3820(SNotesMap *this_ptr,uint flags)

{
  CAlphaBitmap *pCVar1;
  
  core_fldnotes_cpp_SNotesMap_reset_FUN_004a3860(this_ptr);
  pCVar1 = engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440(&this_ptr->reveal_mask,0);
  pCVar1 = engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440((CAlphaBitmap *)&pCVar1[-2].height,0);
  return (SNotesMap *)&pCVar1[-6].act;
}
