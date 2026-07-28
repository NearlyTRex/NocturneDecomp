// Name: core_zombie.cpp_CZombie_canBeAttracted_FUN_00561bf0
// Address: 00561bf0
// Address Range: [[00561bf0, 00561ccc]]
// Convention: unknown
// Signature: undefined4 core_zombie_cpp_CZombie_canBeAttracted_FUN_00561bf0(CDemonActor *param_1,CVector3f *param_2)

#include "nocturne.h"

uint core_zombie_cpp_CZombie_canBeAttracted_FUN_00561bf0(CDemonActor *param_1,CVector3f *param_2)

{
  CDeformableModelInstance *this_ptr;
  CVector3f *pCVar1;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  this_ptr = (CDeformableModelInstance *)(param_1 + 1);
  local_10 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(this_ptr,3);
  if (local_10 <= 0.0) {
    return 0;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
            (this_ptr,&local_34,*(int *)(param_1[0x90].create_event + 0x40));
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
            (this_ptr,&local_4c,*(int *)(param_1[0x90].create_event + 0x44));
  local_1c = local_34.x + local_4c.x;
  local_18 = local_34.y + local_4c.y;
  local_28.x = local_1c * 0.5f;
  local_28.y = local_18 * 0.5f;
  local_14 = local_34.z + local_4c.z;
  local_28.z = local_14 * 0.5f;
  pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&local_40,&local_28);
  if (param_2 != pCVar1) {
    param_2->x = pCVar1->x;
    param_2->y = pCVar1->y;
    param_2->z = pCVar1->z;
  }
  return 1;
}
