// Name: core_fldnotes.cpp_SNotesMap_ctor_FUN_004bc1b0
// Address: 004bc1b0
// Address Range: [[004bc1b0, 004bc201]]
// Convention: unknown
// Signature: SNotesMap * core_fldnotes_cpp_SNotesMap_ctor_FUN_004bc1b0(SNotesMap *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SNotesMap * core_fldnotes_cpp_SNotesMap_ctor_FUN_004bc1b0(SNotesMap *this_ptr)

{
  CAlphaBitmap *pCVar1;
  
  pCVar1 = engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0(&this_ptr->image);
  pCVar1 = engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0((CAlphaBitmap *)&pCVar1[1].opa);
  *(byte *)&pCVar1[-7].act = 0;
  pCVar1[-1].height = 0;
  pCVar1[1].raw = (char *)0x0;
  pCVar1[0x1c].act = (uint *)0x0;
  core_fldnotes_cpp_SNotesMap_reset_FUN_004bc250((SNotesMap *)&pCVar1[-7].opa);
  return (SNotesMap *)&pCVar1[-7].opa;
}
