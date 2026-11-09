// Name: support_codec.cpp_FUN_004408e0
// Address: 004408e0
// Address Range: [[004408e0, 00440961]]
// Convention: unknown
// Signature: undefined4 support_codec_cpp_FUN_004408e0(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5)

#include "nocturne.h"

uint support_codec_cpp_FUN_004408e0(int *param_1,uint param_2,uint param_3,int *param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  COutStreamMemory CStack_24;
  
  support_trstream_cpp_FUN_00574ac0(&CStack_24,param_3,*param_4);
  iVar1 = (**(code **)(*param_1 + 8))(param_1,param_2,&CStack_24);
  if (iVar1 == 1) {
    uVar2 = 1;
    if (param_5 == 0) goto LAB_00440922;
    iVar1 = (**(code **)(*param_1 + 0xc))(param_1,&CStack_24);
    uVar2 = 1;
    if (iVar1 == 1) goto LAB_00440922;
  }
  uVar2 = 0;
LAB_00440922:
  iVar1 = support_trstream_cpp_FUN_00574d00(&CStack_24);
  *param_4 = *param_4 - iVar1;
  support_trstream_cpp_COutStreamMemory_dtor_FUN_00574b50(&CStack_24,0);
  return uVar2;
}
