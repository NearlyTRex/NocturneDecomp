// Name: core_fldnotes.cpp_PageResource_Bitmap_ctor_FUN_004baa10
// Address: 004baa10
// Address Range: [[004baa10, 004baa33]]
// Convention: unknown
// Signature: SPageResourceBitmap * core_fldnotes_cpp_PageResource_Bitmap_ctor_FUN_004baa10(SPageResourceBitmap *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SPageResourceBitmap * core_fldnotes_cpp_PageResource_Bitmap_ctor_FUN_004baa10(SPageResourceBitmap *this_ptr)

{
  int iVar1;
  CAlphaBitmap *pCVar2;
  
  iVar1 = unkaddr_004b9ab0_cpp_FUN_004ba730(this_ptr);
  pCVar2 = engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0((CAlphaBitmap *)(iVar1 + 0x18));
  *(byte ***)&pCVar2[-1].field_0x10 = &g_PageResource_BitmapVTable;
  return (SPageResourceBitmap *)&pCVar2[-2].field_0x10;
}
