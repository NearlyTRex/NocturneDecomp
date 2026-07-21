// Name: core_actor.cpp_crc32ProcessBuffer_FUN_0040e0a0
// Address: 0040e0a0
// Address Range: [[0040e0a0, 0040e0d3]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_crc32ProcessBuffer_FUN_0040e0a0(undefined4 param_1,undefined1 *param_2,int param_3)

#include "nocturne.h"

void __cdecl core_actor_cpp_crc32ProcessBuffer_FUN_0040e0a0(uint param_1,byte *param_2,int param_3)

{
  byte uVar1;
  
  for (; 0 < param_3; param_3 = param_3 + -1) {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    core_actor_cpp_crc32ProcessByte_FUN_0040dfc0(param_1,uVar1);
  }
  return;
}
