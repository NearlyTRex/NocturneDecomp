// Name: core_fldnotes.cpp_SNotesMap_ctor_FUN_004a37c0
// Address: 004a37c0
// Address Range: [[004a37c0, 004a3811]]
// Convention: __cdecl
// Signature: SNotesMap * __cdecl core_fldnotes_cpp_SNotesMap_ctor_FUN_004a37c0(SNotesMap *this_ptr)

#include "nocturne.h"

SNotesMap * __cdecl core_fldnotes_cpp_SNotesMap_ctor_FUN_004a37c0(SNotesMap *this_ptr)

{
  CAlphaBitmap *pCVar1;
  
  pCVar1 = engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420(&this_ptr->image);
  pCVar1 = engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420((CAlphaBitmap *)&pCVar1[1].opa);
  *(byte *)&pCVar1[-7].act = 0;
  pCVar1[-1].height = 0;
  pCVar1[1].raw = (char *)0x0;
  pCVar1[0x1c].act = (uint *)0x0;
  core_fldnotes_cpp_SNotesMap_reset_FUN_004a3860((SNotesMap *)&pCVar1[-7].opa);
  return (SNotesMap *)&pCVar1[-7].opa;
}
