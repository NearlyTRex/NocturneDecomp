// Name: support_codec.cpp_FUN_00433f60
// Address: 00433f60
// Address Range: [[00433f60, 00433fe1]]
// Convention: unknown
// Signature: undefined4 support_codec_cpp_FUN_00433f60(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5)

#include "nocturne.h"

uint support_codec_cpp_FUN_00433f60(int *param_1,uint param_2,uint param_3,int *param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  COutStreamMemory CStack_24;
  
  support_trstream_cpp_FUN_0057de80(&CStack_24,param_3,*param_4);
  iVar1 = (**(code **)(*param_1 + 8))(param_1,param_2,&CStack_24);
  if (iVar1 == 1) {
    uVar2 = 1;
    if (param_5 == 0) goto LAB_00433fa2;
    iVar1 = (**(code **)(*param_1 + 0xc))(param_1,&CStack_24);
    uVar2 = 1;
    if (iVar1 == 1) goto LAB_00433fa2;
  }
  uVar2 = 0;
LAB_00433fa2:
  iVar1 = support_trstream_cpp_FUN_0057e0c0(&CStack_24);
  *param_4 = *param_4 - iVar1;
  support_trstream_cpp_COutStreamMemory_dtor_FUN_0057df10(&CStack_24,0);
  return uVar2;
}
