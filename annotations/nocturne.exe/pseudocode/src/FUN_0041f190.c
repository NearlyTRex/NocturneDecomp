// Name: FUN_0041f190
// Address: 0041f190
// Address Range: [[0041f190, 0041f232]]
// Convention: unknown
// Signature: void FUN_0041f190(int param_1)

#include "nocturne.h"

void FUN_0041f190(int param_1)

{
  uint uVar1;
  uint *puVar2;
  byte local_40 [24];
  byte auStack_28 [12];
  uint local_1c;
  uint uStack_18;
  uint uStack_14;
  byte local_10 [12];
  
  if (*(int *)(param_1 + 0x31c) == 0) {
    return;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
            (*(int *)(param_1 + 0x31c),&local_1c,param_1 + 0x20);
  uVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x31c) + 0x14c) + 0x14))
                    (*(int *)(param_1 + 0x31c),local_40,local_10,&local_1c);
  puVar2 = (uint *)core_box_cpp_CBoundingBox3D_clampPoint_FUN_0041e160(uVar1);
  if (&local_1c != puVar2) {
    local_1c = *puVar2;
    uStack_18 = puVar2[1];
    uStack_14 = puVar2[2];
  }
  puVar2 = (uint *)
           core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                     (*(uint *)(param_1 + 0x31c),auStack_28,&local_1c);
  *(uint *)(param_1 + 0x20) = *puVar2;
  *(uint *)(param_1 + 0x24) = puVar2[1];
  *(uint *)(param_1 + 0x28) = puVar2[2];
  return;
}
