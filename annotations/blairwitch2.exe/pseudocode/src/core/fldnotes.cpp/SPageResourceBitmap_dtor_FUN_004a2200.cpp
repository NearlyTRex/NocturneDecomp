// Name: core_fldnotes.cpp_SPageResourceBitmap_dtor_FUN_004a2200
// Address: 004a2200
// Address Range: [[004a2200, 004a226e]]
// Convention: unknown
// Signature: SPageResourceBitmap * core_fldnotes_cpp_SPageResourceBitmap_dtor_FUN_004a2200(SPageResourceBitmap *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SPageResourceBitmap * core_fldnotes_cpp_SPageResourceBitmap_dtor_FUN_004a2200(SPageResourceBitmap *this_ptr,uint flags)

{
  CAlphaBitmap *pCVar1;
  SPageResourceBitmap *pSVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_PageResource_BitmapTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_SPageResourceBitmapVTable;
  engine_alphabit_cpp_FUN_0040d540(&this_ptr->bitmap);
  pCVar1 = engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440(&this_ptr->bitmap,0);
  pSVar2 = (SPageResourceBitmap *)
           core_fldnotes_cpp_SPageResource_dtor_FUN_004a1e90((SPageResource *)&pCVar1[-2].height);
  if ((flags & 2) == 0) {
    return pSVar2;
  }
  FUN_005b7fdc(pSVar2);
  return pSVar2;
}
