// Name: support_codec.cpp_FUN_004341e0
// Address: 004341e0
// Address Range: [[004341e0, 00434249]]
// Convention: unknown
// Signature: bool support_codec_cpp_FUN_004341e0(int *param_1,undefined4 param_2,int *param_3)

#include "nocturne.h"

bool support_codec_cpp_FUN_004341e0(int *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  COutStreamMemory CStack_28;
  
  support_trstream_cpp_FUN_0057de80(&CStack_28,param_2,*param_3);
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,&CStack_28);
  iVar2 = support_trstream_cpp_FUN_0057e0c0(&CStack_28);
  *param_3 = *param_3 - iVar2;
  support_trstream_cpp_COutStreamMemory_dtor_FUN_0057df10(&CStack_28,0);
  return iVar1 == 1;
}
