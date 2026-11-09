// Name: support_codec.cpp_FUN_00440860
// Address: 00440860
// Address Range: [[00440860, 004408c3]]
// Convention: unknown
// Signature: undefined4 support_codec_cpp_FUN_00440860(undefined4 param_1,int *param_2,int *param_3)

#include "nocturne.h"

uint support_codec_cpp_FUN_00440860(uint param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    uVar1 = (**(code **)(*param_2 + 4))(param_2);
    if (uVar1 == 0xffffffff) {
      return 1;
    }
    if ((int)uVar1 < 0) break;
    iVar2 = (**(code **)(*param_3 + 4))(param_3,uVar1 & 0xff);
    if (iVar2 < 0) {
      iVar3 = (**(code **)(*param_2 + 8))(param_2,uVar1);
      if ((iVar3 != 0) && (iVar2 == -1)) {
        return 2;
      }
      return 0;
    }
  }
  return 0;
}
