// Name: core_flashlit.cpp_FUN_004a7cf0
// Address: 004a7cf0
// Address Range: [[004a7cf0, 004a7d62]]
// Convention: unknown
// Signature: void core_flashlit_cpp_FUN_004a7cf0(CAlphaBitmap *param_1,char *param_2,int param_3,int param_4)

#include "nocturne.h"

void core_flashlit_cpp_FUN_004a7cf0(CAlphaBitmap *param_1,char *param_2,int param_3,int param_4)

{
  char acStack_208 [256];
  char acStack_108 [256];
  
  engine_dosio_cpp_splitPath_FUN_00465e50(param_2,(char *)0x0,(char *)0x0,acStack_208,(char *)0x0);
  _sprintf(acStack_108,&DAT_005c0d12);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(param_1,acStack_108,param_3,param_4);
  return;
}
