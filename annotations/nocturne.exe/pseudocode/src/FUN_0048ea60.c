// Name: FUN_0048ea60
// Address: 0048ea60
// Address Range: [[0048ea60, 0048eb21]]
// Convention: unknown
// Signature: undefined4 FUN_0048ea60(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0048ea60(int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  byte local_20 [12];
  byte auStack_14 [12];
  
  if (*(int *)(param_1 + 0x560) < 1) {
    return 0;
  }
  uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0xd8))(param_1,local_20);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,auStack_14,uVar2);
  core_fire_cpp_CFireEffect_createGunFlames_FUN_0048c3c0(0x01C08D04,auStack_14,param_1 + 0x30,3,1)
  ;
  if (*(int *)(param_1 + 0x578) == 0) {
    fVar1 = 1.0 / _DAT_0059d7a0;
    *(int *)(param_1 + 0x560) = *(int *)(param_1 + 0x560) + -1;
    *(float *)(param_1 + 0x57c) = fVar1;
  }
  iVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x8c))(param_1);
  if (iVar3 == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    FUN_004940d0(0x01C70F74);
  }
  *(uint *)(param_1 + 0x570) = 1;
  return 1;
}
