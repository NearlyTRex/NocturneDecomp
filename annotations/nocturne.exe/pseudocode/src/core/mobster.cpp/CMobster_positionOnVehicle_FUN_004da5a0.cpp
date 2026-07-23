// Name: core_mobster.cpp_CMobster_positionOnVehicle_FUN_004da5a0
// Address: 004da5a0
// Address Range: [[004da5a0, 004da669]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_positionOnVehicle_FUN_004da5a0(int param_1)

#include "nocturne.h"

void __cdecl core_mobster_cpp_CMobster_positionOnVehicle_FUN_004da5a0(int param_1)

{
  float fVar1;
  uint *puVar2;
  uint local_3c;
  uint local_38;
  uint local_34;
  byte local_30 [12];
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  if (*(int *)(param_1 + 0xbd4c) == 0) {
    local_38 = 0xc0166666;
    local_34 = 0xbfcccccd;
    local_3c = 0x400ccccd;
    if (&local_24 != &local_3c) {
      local_20 = 0xc0166666;
      local_1c = 0xbfcccccd;
      local_24 = 0x400ccccd;
    }
    fVar1 = *(float *)(*(int *)(param_1 + 0xbd48) + 0x34) + (float)1.57079632675;
  }
  else {
    local_14 = 0xc0166666;
    local_10 = 0xbfcccccd;
    local_18 = 0xc00ccccd;
    if (&local_24 != &local_18) {
      local_20 = 0xc0166666;
      local_1c = 0xbfcccccd;
      local_24 = 0xc00ccccd;
    }
    fVar1 = *(float *)(*(int *)(param_1 + 0xbd48) + 0x34) + (float)-1.57079632675;
  }
  *(float *)(param_1 + 0x34) = fVar1;
  puVar2 = (uint *)
           core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                     (*(uint *)(param_1 + 0xbd48),local_30,&local_24);
  *(uint *)(param_1 + 0x20) = *puVar2;
  *(uint *)(param_1 + 0x24) = puVar2[1];
  *(uint *)(param_1 + 0x28) = puVar2[2];
  return;
}
