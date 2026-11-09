// Name: support_codec.cpp_FUN_00441750
// Address: 00441750
// Address Range: [[00441750, 004417c8]]
// Convention: unknown
// Signature: undefined4 support_codec_cpp_FUN_00441750(undefined4 param_1,int *param_2,int *param_3)

#include "nocturne.h"

uint support_codec_cpp_FUN_00441750(uint param_1,int *param_2,int *param_3)

{
  byte uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  while( true ) {
    uVar2 = (**(code **)(*param_2 + 4))(param_2);
    if (uVar2 == 0xffffffff) {
      return 1;
    }
    if ((int)uVar2 < 0) break;
    uVar1 = support_codec_cpp_FUN_004416e0(param_1,uVar2 & 0xff);
    iVar3 = (**(code **)(*param_3 + 4))(param_3,uVar1);
    if (iVar3 < 0) {
      iVar4 = (**(code **)(*param_2 + 8))(param_2,uVar1);
      if ((iVar4 != 0) && (iVar3 == -1)) {
        return 2;
      }
      return 0;
    }
  }
  return 0;
}
