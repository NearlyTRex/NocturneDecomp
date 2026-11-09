// Name: support_codec.cpp_FUN_00442a80
// Address: 00442a80
// Address Range: [[00442a80, 00442ae1]]
// Convention: unknown
// Signature: undefined4 support_codec_cpp_FUN_00442a80(undefined4 param_1,int param_2,int param_3)

#include "nocturne.h"

uint support_codec_cpp_FUN_00442a80(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  while( true ) {
    if (param_3 == 0) {
      return 1;
    }
    if (0 < param_3) {
      param_3 = param_3 + -1;
    }
    uVar1 = _fgetc(param_2);
    if ((int)uVar1 < 0) break;
    support_codec_cpp_FUN_00442880(param_1,uVar1 & 0xff);
  }
  if ((param_3 < 0) && ((*(byte *)(param_2 + 0xc) & 0x20) == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
