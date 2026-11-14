// Name: core_fldnotes.cpp_SPageResourceBitmap_ctor_FUN_004baa10
// Address: 004baa10
// Address Range: [[004baa10, 004baa33]]
// Convention: __cdecl
// Signature: SPageResourceBitmap * __cdecl core_fldnotes_cpp_SPageResourceBitmap_ctor_FUN_004baa10(SPageResourceBitmap *this_ptr)

#include "nocturne.h"

SPageResourceBitmap * __cdecl core_fldnotes_cpp_SPageResourceBitmap_ctor_FUN_004baa10(SPageResourceBitmap *this_ptr)

{
  int extraout_EAX;
  CAlphaBitmap *pCVar1;
  
  core_fldnotes_cpp_SPageResource_ctor_FUN_004ba730(&this_ptr->base);
  pCVar1 = engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0((CAlphaBitmap *)(extraout_EAX + 0x18))
  ;
  pCVar1[-1].height = (int)&g_SPageResourceBitmapVTable;
  return (SPageResourceBitmap *)&pCVar1[-2].height;
}
