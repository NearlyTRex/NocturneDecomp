// Name: core_muzzle.cpp_FUN_0059ded0
// Address: 0059ded0
// Address Range: [[0059ded0, 0059df66]]
// Convention: unknown
// Signature: undefined4 * core_muzzle_cpp_FUN_0059ded0(int param_1)

#include "nocturne.h"

uint * core_muzzle_cpp_FUN_0059ded0(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar1 = (uint *)
           __arrinit(param_1 + 4,0x10,&g_SFollowSlotStructTypeInfo);
  puVar1[0xf0] = 0;
  puVar2 = puVar1;
  do {
    *puVar2 = 0;
    puVar3 = puVar2 + 0xf;
    puVar2[1] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xe] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2 = puVar3;
  } while (puVar3 != puVar1 + 0xf0);
  puVar1[0xf2] = 0x3f000000;
  puVar1[0xf3] = 0x40400000;
  puVar1[0xf1] = puVar1[0xf2];
  return puVar1 + -1;
}
