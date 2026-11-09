// Name: support_codec.cpp_FUN_00440240
// Address: 00440240
// Address Range: [[00440240, 0044025e]]
// Convention: unknown
// Signature: undefined4 support_codec_cpp_FUN_00440240(undefined4 *param_1,undefined4 *param_2)

#include "nocturne.h"

uint support_codec_cpp_FUN_00440240(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_1[1] = 0;
  *param_1 = 0;
  return uVar1;
}
