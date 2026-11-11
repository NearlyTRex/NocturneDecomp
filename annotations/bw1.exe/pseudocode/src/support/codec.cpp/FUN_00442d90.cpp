// Name: support_codec.cpp_FUN_00442d90
// Address: 00442d90
// Address Range: [[00442d90, 00442e00]]
// Convention: unknown
// Signature: undefined4 support_codec_cpp_FUN_00442d90(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

uint support_codec_cpp_FUN_00442d90(int *param_1,uint param_2,int *param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  CInStreamMemory local_24;
  
  support_trstream_cpp_CInStreamMemory_ctorOpen_FUN_005a1160(&local_24,param_2,*param_3);
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_24,param_4,param_5,param_6);
  iVar2 = support_trstream_cpp_CInStreamMemory_tell_FUN_005a13b0(&local_24);
  *param_3 = *param_3 - iVar2;
  support_trstream_cpp_CInStreamMemory_dtor_FUN_005a11e0(&local_24,0);
  return uVar1;
}
