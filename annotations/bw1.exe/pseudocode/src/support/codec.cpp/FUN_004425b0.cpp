// Name: support_codec.cpp_FUN_004425b0
// Address: 004425b0
// Address Range: [[004425b0, 004425d9]]
// Convention: unknown
// Signature: void support_codec_cpp_FUN_004425b0(int *param_1,int param_2,uint param_3)

#include "nocturne.h"

void support_codec_cpp_FUN_004425b0(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  if (0 < param_2) {
    uVar1 = param_1[1] << ((byte)param_2 & 0x1f);
    param_1[1] = uVar1;
    *param_1 = *param_1 + param_2;
    param_1[1] = uVar1 | param_3;
  }
  return;
}
