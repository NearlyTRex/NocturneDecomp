// Name: support_codec.cpp_FUN_00443290
// Address: 00443290
// Address Range: [[00443290, 00443361]]
// Convention: unknown
// Signature: undefined4 support_codec_cpp_FUN_00443290(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

uint support_codec_cpp_FUN_00443290(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = support_codec_cpp_FUN_004427a0(param_3,param_4);
  if (iVar1 < 0) {
    if (iVar1 == -1) {
      return 0xffffffff;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc);
    uVar4 = 0;
    uVar3 = 1 << ((char)*(uint *)(param_1 + 8) - 1U & 0x1f);
    if (uVar3 != 0) {
      do {
        if ((iVar1 - 1U & uVar3) != 0) {
          if ((param_2 & uVar3) == 0) break;
          iVar2 = support_codec_cpp_FUN_00442600(param_3,1,1,param_4);
          if (iVar2 < 0) {
            if (iVar2 != -2) {
              return 0xfffffffd;
            }
            uVar4 = 0xfffffffe;
          }
        }
        uVar3 = (int)uVar3 >> 1;
        if (uVar3 == 0) {
          return uVar4;
        }
      } while( true );
    }
    if (uVar3 == 0) {
      return uVar4;
    }
    while( true ) {
      while( true ) {
        iVar1 = support_codec_cpp_FUN_00442600(param_3,1,(uVar3 & param_2) != 0,param_4);
        uVar3 = (int)uVar3 >> 1;
        if (iVar1 < 0) break;
        if (uVar3 == 0) {
          return uVar4;
        }
      }
      if (iVar1 != -2) break;
      uVar4 = 0xfffffffe;
      if (uVar3 == 0) {
        return 0xfffffffe;
      }
    }
  }
  return 0xfffffffd;
}
