// Name: core_zombie.cpp_CZombie_FUN_005fc120
// Address: 005fc120
// Address Range: [[005fc120, 005fc1fc]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_FUN_005fc120(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_zombie.cpp_CZombie_FUN_005fc120(CZombie* param_1, uint
   param_2) */

int __cdecl core_zombie_cpp_CZombie_FUN_005fc120(void)

{
  CDeformableModelInstance *this_ptr;
  CVector3f *pCVar1;
  CDemonActor *in_stack_00000004;
  CVector3f *in_stack_00000008;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  this_ptr = (CDeformableModelInstance *)(in_stack_00000004 + 1);
  local_10 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       ((CMotionController *)this_ptr,3);
  if (local_10 <= 0.0) {
    return 0;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
            (this_ptr,&local_34,*(int *)(in_stack_00000004[0x8e].create_event + 8));
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
            (this_ptr,&local_4c,*(int *)(in_stack_00000004[0x8e].create_event + 0xc));
  local_1c = local_34.x + local_4c.x;
  local_18 = local_34.y + local_4c.y;
  local_28.x = local_1c * 0.5f;
  local_28.y = local_18 * 0.5f;
  local_14 = local_34.z + local_4c.z;
  local_28.z = local_14 * 0.5f;
  pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (in_stack_00000004,&local_40,&local_28);
  if (in_stack_00000008 != pCVar1) {
    in_stack_00000008->x = pCVar1->x;
    in_stack_00000008->y = pCVar1->y;
    in_stack_00000008->z = pCVar1->z;
  }
  return 1;
}
