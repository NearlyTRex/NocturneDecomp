// Name: engine_keys.cpp_CKeys_toggleInputMask_FUN_004c4210
// Address: 004c4210
// Address Range: [[004c4210, 004c422e]]
// Convention: __cdecl
// Signature: void __cdecl engine_keys_cpp_CKeys_toggleInputMask_FUN_004c4210(undefined4 param_1,int param_2)

#include "nocturne.h"

void __cdecl engine_keys_cpp_CKeys_toggleInputMask_FUN_004c4210(uint param_1,int param_2)

{
  if (param_2 != 0) {
    DAT_005b7630 = 0x1ff;
    return;
  }
  DAT_005b7630 = 0x7f;
  return;
}
