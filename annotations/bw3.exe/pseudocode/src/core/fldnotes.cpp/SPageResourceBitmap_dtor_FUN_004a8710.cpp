// Name: core_fldnotes.cpp_SPageResourceBitmap_dtor_FUN_004a8710
// Address: 004a8710
// Address Range: [[004a8710, 004a877e]]
// Convention: __cdecl
// Signature: SPageResourceBitmap * __cdecl core_fldnotes_cpp_SPageResourceBitmap_dtor_FUN_004a8710(SPageResourceBitmap *this_ptr,uint flags)

#include "nocturne.h"

SPageResourceBitmap * __cdecl core_fldnotes_cpp_SPageResourceBitmap_dtor_FUN_004a8710(SPageResourceBitmap *this_ptr,uint flags)

{
  CAlphaBitmap *pCVar1;
  SPageResourceBitmap *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_PageResource_BitmapTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_SPageResourceBitmapVTable;
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&this_ptr->bitmap);
  pCVar1 = engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d300(&this_ptr->bitmap,0);
  ptr = (SPageResourceBitmap *)
        core_fldnotes_cpp_SPageResource_dtor_FUN_004a83a0((SPageResource *)&pCVar1[-2].height);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
