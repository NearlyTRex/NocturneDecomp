// Name: support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_00439760
// Address: 00439760
// Address Range: [[00439760, 004397c0]]
// Convention: unknown
// Signature: undefined4 support_codec_cpp_CLZWDictionary_writeCodeSequence_FUN_00439760(int param_1,int param_2,_ostream *param_3)

#include "nocturne.h"

uint support_codec_cpp_CLZWDictionary_writeCodeSequence_FUN_00439760(int param_1,int param_2,_ostream *param_3)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  param_2 = param_2 * 0x10;
  pbVar2 = (byte *)(*(int *)(param_1 + 0x10) + param_2);
  iVar1 = *(int *)(pbVar2 + 4);
  if (-1 < iVar1) {
    uVar3 = support_codec_cpp_CLZWDictionary_writeCodeSequence_FUN_00439760(param_1,iVar1,param_3);
    crt_iostream_cpp_ostream_put_FUN_00564ce5
              (param_3,(uint)*(byte *)(param_2 + *(int *)(param_1 + 0x10)));
    return uVar3;
  }
  crt_iostream_cpp_ostream_put_FUN_00564ce5(param_3,(uint)*pbVar2);
  return *(uint *)(param_2 + *(int *)(param_1 + 0x10));
}
