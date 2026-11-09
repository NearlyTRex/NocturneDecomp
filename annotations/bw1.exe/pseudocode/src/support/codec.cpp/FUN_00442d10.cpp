// Name: support_codec.cpp_FUN_00442d10
// Address: 00442d10
// Address Range: [[00442d10, 00442d80]]
// Convention: unknown
// Signature: bool support_codec_cpp_FUN_00442d10(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

#include "nocturne.h"

bool support_codec_cpp_FUN_00442d10(int *param_1,uint param_2,int *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  CInStreamMemory local_24;
  
  support_trstream_cpp_FUN_005a1160(&local_24,param_2,*param_3);
  iVar1 = (**(code **)(*param_1 + 8))(param_1,&local_24,param_4);
  iVar2 = support_trstream_cpp_FUN_005a13b0(&local_24);
  *param_3 = *param_3 - iVar2;
  support_trstream_cpp_CInStreamMemory_dtor_FUN_005a11e0(&local_24,0);
  return iVar1 == 1;
}
