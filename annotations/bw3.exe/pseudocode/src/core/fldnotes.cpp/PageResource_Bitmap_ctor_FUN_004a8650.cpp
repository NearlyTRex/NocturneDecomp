// Name: core_fldnotes.cpp_PageResource_Bitmap_ctor_FUN_004a8650
// Address: 004a8650
// Address Range: [[004a8650, 004a8673]]
// Convention: unknown
// Signature: SPageResourceBitmap * core_fldnotes_cpp_PageResource_Bitmap_ctor_FUN_004a8650(SPageResourceBitmap *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SPageResourceBitmap * core_fldnotes_cpp_PageResource_Bitmap_ctor_FUN_004a8650(SPageResourceBitmap *this_ptr)

{
  int iVar1;
  CAlphaBitmap *pCVar2;
  
  iVar1 = unkaddr_004a76f0_cpp_FUN_004a8370(this_ptr);
  pCVar2 = engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0((CAlphaBitmap *)(iVar1 + 0x18));
  pCVar2[-1].height = (int)&g_PageResource_BitmapVTable;
  return (SPageResourceBitmap *)&pCVar2[-2].height;
}
