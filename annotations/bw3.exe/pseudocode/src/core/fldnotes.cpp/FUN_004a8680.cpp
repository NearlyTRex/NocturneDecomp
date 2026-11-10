// Name: core_fldnotes.cpp_FUN_004a8680
// Address: 004a8680
// Address Range: [[004a8680, 004a8700]]
// Convention: unknown
// Signature: int * core_fldnotes_cpp_FUN_004a8680(undefined4 param_1,char *param_2,int param_3,int param_4)

#include "nocturne.h"

int * core_fldnotes_cpp_FUN_004a8680(uint param_1,char *param_2,int param_3,int param_4)

{
  int iVar1;
  CAlphaBitmap *this_ptr;
  char local_108 [256];
  
  iVar1 = unkaddr_004a76f0_cpp_FUN_004a8370(param_1);
  this_ptr = engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0((CAlphaBitmap *)(iVar1 + 0x18));
  this_ptr[-1].height = (int)&g_PageResource_BitmapVTable;
  engine_dosio_cpp_splitPath_FUN_00465e50(param_2,(char *)0x0,(char *)0x0,local_108,(char *)0x0);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(this_ptr,local_108,param_3,param_4);
  this_ptr[-1].opa = (char *)this_ptr->width;
  this_ptr[-1].act = (uint *)this_ptr->height;
  return &this_ptr[-2].height;
}
