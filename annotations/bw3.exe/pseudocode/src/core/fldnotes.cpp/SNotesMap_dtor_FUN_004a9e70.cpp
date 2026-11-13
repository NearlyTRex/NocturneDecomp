// Name: core_fldnotes.cpp_SNotesMap_dtor_FUN_004a9e70
// Address: 004a9e70
// Address Range: [[004a9e70, 004a9ea1]]
// Convention: __cdecl
// Signature: SNotesMap * __cdecl core_fldnotes_cpp_SNotesMap_dtor_FUN_004a9e70(SNotesMap *this_ptr,uint flags)

#include "nocturne.h"

SNotesMap * __cdecl core_fldnotes_cpp_SNotesMap_dtor_FUN_004a9e70(SNotesMap *this_ptr,uint flags)

{
  CAlphaBitmap *pCVar1;
  
  core_fldnotes_cpp_SNotesMap_reset_FUN_004a9eb0(this_ptr);
  pCVar1 = engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d300(&this_ptr->reveal_mask,0);
  pCVar1 = engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d300((CAlphaBitmap *)&pCVar1[-2].height,0);
  return (SNotesMap *)&pCVar1[-6].act;
}
