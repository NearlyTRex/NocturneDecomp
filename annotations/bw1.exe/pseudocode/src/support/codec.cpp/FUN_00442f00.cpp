// Name: support_codec.cpp_FUN_00442f00
// Address: 00442f00
// Address Range: [[00442f00, 00442f69]]
// Convention: unknown
// Signature: bool support_codec_cpp_FUN_00442f00(int *param_1,char *param_2,int *param_3)

#include "nocturne.h"

bool support_codec_cpp_FUN_00442f00(int *param_1,char *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  COutStreamMemory CStack_28;
  
  support_trstream_cpp_COutStreamMemory_ctorOpen_FUN_005a1ad0(&CStack_28,param_2,*param_3);
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,&CStack_28);
  iVar2 = support_trstream_cpp_COutStreamMemory_tell_FUN_005a1d10(&CStack_28);
  *param_3 = *param_3 - iVar2;
  support_trstream_cpp_COutStreamMemory_dtor_FUN_005a1b60(&CStack_28,0);
  return iVar1 == 1;
}
