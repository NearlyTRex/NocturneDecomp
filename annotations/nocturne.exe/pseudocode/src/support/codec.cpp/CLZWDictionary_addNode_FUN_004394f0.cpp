// Name: support_codec.cpp_CLZWDictionary_addNode_FUN_004394f0
// Address: 004394f0
// Address Range: [[004394f0, 00439581]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_codec_cpp_CLZWDictionary_addNode_FUN_004394f0(int *param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

uint __cdecl support_codec_cpp_CLZWDictionary_addNode_FUN_004394f0(int *param_1,uint param_2,int param_3)

{
  if (param_1[3] < *param_1) {
    if ((param_1[3] & param_1[3] - 1U) == 0) {
      param_1[2] = param_1[2] + 1;
    }
    *(uint *)(param_1[3] * 0x10 + param_1[4]) = param_2;
    *(int *)(param_1[4] + 4 + param_1[3] * 0x10) = param_3;
    *(uint *)(param_1[3] * 0x10 + 8 + param_1[4]) = 0xffffffff;
    *(uint *)(param_1[3] * 0x10 + param_1[4] + 0xc) =
         *(uint *)(param_1[4] + param_3 * 0x10 + 8);
    *(int *)(param_3 * 0x10 + param_1[4] + 8) = param_1[3];
    param_1[3] = param_1[3] + 1;
    return 0;
  }
  support_codec_cpp_CLZWDictionary_initTable_FUN_00439450(param_1);
  return 1;
}
