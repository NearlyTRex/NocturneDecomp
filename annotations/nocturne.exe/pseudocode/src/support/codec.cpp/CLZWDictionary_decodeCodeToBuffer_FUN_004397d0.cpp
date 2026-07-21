// Name: support_codec.cpp_CLZWDictionary_decodeCodeToBuffer_FUN_004397d0
// Address: 004397d0
// Address Range: [[004397d0, 0043982f]]
// Convention: unknown
// Signature: undefined4 support_codec_cpp_CLZWDictionary_decodeCodeToBuffer_FUN_004397d0(int param_1,int param_2,int *param_3)

#include "nocturne.h"

uint support_codec_cpp_CLZWDictionary_decodeCodeToBuffer_FUN_004397d0(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar2 = param_2;
  do {
    puVar3 = (uint *)(iVar2 * 0x10 + *(int *)(param_1 + 0x10));
    iVar5 = iVar5 + 1;
    uVar1 = *puVar3;
    iVar2 = puVar3[1];
    iVar4 = iVar5;
  } while (-1 < iVar2);
  do {
    *(byte *)(*param_3 + iVar4 + -1) =
         *(byte *)(*(int *)(param_1 + 0x10) + param_2 * 0x10);
    param_2 = *(int *)(param_2 * 0x10 + 4 + *(int *)(param_1 + 0x10));
    iVar4 = iVar4 + -1;
  } while (-1 < param_2);
  *param_3 = *param_3 + iVar5;
  return uVar1;
}
