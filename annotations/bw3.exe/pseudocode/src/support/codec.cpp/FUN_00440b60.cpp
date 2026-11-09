// Name: support_codec.cpp_FUN_00440b60
// Address: 00440b60
// Address Range: [[00440b60, 00440bc9]]
// Convention: unknown
// Signature: bool support_codec_cpp_FUN_00440b60(int *param_1,undefined4 param_2,int *param_3)

#include "nocturne.h"

bool support_codec_cpp_FUN_00440b60(int *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  COutStreamMemory CStack_28;
  
  support_trstream_cpp_FUN_00574ac0(&CStack_28,param_2,*param_3);
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,&CStack_28);
  iVar2 = support_trstream_cpp_FUN_00574d00(&CStack_28);
  *param_3 = *param_3 - iVar2;
  support_trstream_cpp_COutStreamMemory_dtor_FUN_00574b50(&CStack_28,0);
  return iVar1 == 1;
}
