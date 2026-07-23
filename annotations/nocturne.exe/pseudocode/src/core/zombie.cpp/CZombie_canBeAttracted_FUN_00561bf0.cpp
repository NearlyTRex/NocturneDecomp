// Name: core_zombie.cpp_CZombie_canBeAttracted_FUN_00561bf0
// Address: 00561bf0
// Address Range: [[00561bf0, 00561ccc]]
// Convention: unknown
// Signature: undefined4 core_zombie_cpp_CZombie_canBeAttracted_FUN_00561bf0(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint core_zombie_cpp_CZombie_canBeAttracted_FUN_00561bf0(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  float local_4c;
  float local_48;
  float local_44;
  byte local_40 [12];
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  iVar1 = param_1 + 0x150;
  local_10 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(iVar1,3);
  if (local_10 <= 0.0) {
    return 0;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
            (iVar1,&local_34,*(uint *)(param_1 + 0xbdb8));
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
            (iVar1,&local_4c,*(uint *)(param_1 + 0xbdbc));
  local_1c = local_34 + local_4c;
  local_18 = local_30 + local_48;
  local_28 = local_1c * 0.5f;
  local_24 = local_18 * 0.5f;
  local_14 = local_2c + local_44;
  local_20 = local_14 * 0.5f;
  puVar2 = (uint *)
           core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_40,&local_28);
  if (param_2 != puVar2) {
    *param_2 = *puVar2;
    param_2[1] = puVar2[1];
    param_2[2] = puVar2[2];
  }
  return 1;
}
