// Name: core_fldnotes.cpp_SPageResourceBitmap_ctor_FUN_004a2140
// Address: 004a2140
// Address Range: [[004a2140, 004a2163]]
// Convention: unknown
// Signature: SPageResourceBitmap * core_fldnotes_cpp_SPageResourceBitmap_ctor_FUN_004a2140(SPageResourceBitmap *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SPageResourceBitmap * core_fldnotes_cpp_SPageResourceBitmap_ctor_FUN_004a2140(SPageResourceBitmap *this_ptr)

{
  int extraout_EAX;
  CAlphaBitmap *pCVar1;
  
  core_fldnotes_cpp_SPageResource_ctor_FUN_004a1e60(&this_ptr->base);
  pCVar1 = engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420((CAlphaBitmap *)(extraout_EAX + 0x18))
  ;
  pCVar1[-1].height = (int)&g_SPageResourceBitmapVTable;
  return (SPageResourceBitmap *)&pCVar1[-2].height;
}
