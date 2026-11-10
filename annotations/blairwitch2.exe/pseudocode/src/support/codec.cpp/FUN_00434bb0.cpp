// Name: support_codec.cpp_FUN_00434bb0
// Address: 00434bb0
// Address Range: [[00434bb0, 00434bf1]]
// Convention: unknown
// Signature: undefined4 support_codec_cpp_FUN_00434bb0(int param_1,undefined4 param_2,int *param_3)

#include "nocturne.h"

uint support_codec_cpp_FUN_00434bb0(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  
  while( true ) {
    iVar1 = support_codec_cpp_writeBitsToStream_FUN_00433780(param_1 + 4,6,param_2);
    if (iVar1 < 0) break;
    (**(code **)(*param_3 + 4))(param_3,"!()*+0123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyz"[iVar1]);
  }
  return 1;
}
