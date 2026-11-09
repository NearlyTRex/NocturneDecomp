// Name: core_fldnotes.cpp_PageResource_Bitmap_ctor_FUN_004a2140
// Address: 004a2140
// Address Range: [[004a2140, 004a2163]]
// Convention: unknown
// Signature: SPageResourceBitmap * core_fldnotes_cpp_PageResource_Bitmap_ctor_FUN_004a2140(SPageResourceBitmap *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SPageResourceBitmap * core_fldnotes_cpp_PageResource_Bitmap_ctor_FUN_004a2140(SPageResourceBitmap *this_ptr)

{
  int iVar1;
  CAlphaBitmap *pCVar2;
  
  iVar1 = unkaddr_004a1200_cpp_FUN_004a1e60(this_ptr);
  pCVar2 = engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420((CAlphaBitmap *)(iVar1 + 0x18));
  *(byte ***)&pCVar2[-1].field_0x10 = &g_PageResource_BitmapVTable;
  return (SPageResourceBitmap *)&pCVar2[-2].field_0x10;
}
