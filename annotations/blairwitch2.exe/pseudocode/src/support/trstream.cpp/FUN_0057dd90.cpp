// Name: support_trstream.cpp_FUN_0057dd90
// Address: 0057dd90
// Address Range: [[0057dd90, 0057ddca]]
// Convention: unknown
// Signature: undefined4 support_trstream_cpp_FUN_0057dd90(int *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint support_trstream_cpp_FUN_0057dd90(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x18))(param_1);
  iVar1 = _fopen(param_2,param_3);
  param_1[1] = iVar1;
  if (iVar1 != 0) {
    return 1;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  return 0;
}
