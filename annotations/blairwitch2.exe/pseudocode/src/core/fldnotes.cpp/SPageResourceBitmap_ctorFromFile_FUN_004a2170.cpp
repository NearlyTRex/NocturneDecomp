// Name: core_fldnotes.cpp_SPageResourceBitmap_ctorFromFile_FUN_004a2170
// Address: 004a2170
// Address Range: [[004a2170, 004a21f0]]
// Convention: __cdecl
// Signature: SPageResourceBitmap * __cdecl core_fldnotes_cpp_SPageResourceBitmap_ctorFromFile_FUN_004a2170(SPageResourceBitmap *this_ptr,char *path,int width,int height)

#include "nocturne.h"

SPageResourceBitmap * __cdecl core_fldnotes_cpp_SPageResourceBitmap_ctorFromFile_FUN_004a2170(SPageResourceBitmap *this_ptr,char *path,int width,int height)

{
  int extraout_EAX;
  CAlphaBitmap *this_ptr_00;
  char local_108 [256];
  
  core_fldnotes_cpp_SPageResource_ctor_FUN_004a1e60(&this_ptr->base);
  this_ptr_00 = engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420
                          ((CAlphaBitmap *)(extraout_EAX + 0x18));
  this_ptr_00[-1].height = (int)&g_SPageResourceBitmapVTable;
  engine_dosio_cpp_splitPath_FUN_00461070(path,(char *)0x0,(char *)0x0,local_108,(char *)0x0);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(this_ptr_00,local_108,width,height);
  this_ptr_00[-1].opa = (char *)this_ptr_00->width;
  this_ptr_00[-1].act = (uint *)this_ptr_00->height;
  return (SPageResourceBitmap *)&this_ptr_00[-2].height;
}
