// Name: core_fldnotes.cpp_SPageResourceBitmap_ctorFromFile_FUN_004baa40
// Address: 004baa40
// Address Range: [[004baa40, 004baac0]]
// Convention: __cdecl
// Signature: int * __cdecl core_fldnotes_cpp_SPageResourceBitmap_ctorFromFile_FUN_004baa40(SPageResourceBitmap *this_ptr,char *param_2,int param_3,int param_4)

#include "nocturne.h"

int * __cdecl core_fldnotes_cpp_SPageResourceBitmap_ctorFromFile_FUN_004baa40(SPageResourceBitmap *this_ptr,char *param_2,int param_3,int param_4)

{
  int extraout_EAX;
  CAlphaBitmap *this_ptr_00;
  char local_108 [256];
  
  core_fldnotes_cpp_SPageResource_ctor_FUN_004ba730(&this_ptr->base);
  this_ptr_00 = engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0
                          ((CAlphaBitmap *)(extraout_EAX + 0x18));
  this_ptr_00[-1].height = (int)&g_SPageResourceBitmapVTable;
  engine_dosio_cpp_splitPath_FUN_00479580(param_2,(char *)0x0,(char *)0x0,local_108,(char *)0x0);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(this_ptr_00,local_108,param_3,param_4);
  this_ptr_00[-1].opa = (char *)this_ptr_00->width;
  this_ptr_00[-1].act = (uint *)this_ptr_00->height;
  return &this_ptr_00[-2].height;
}
