// Name: core_zombie.cpp_CZombie_canBeAttracted_FUN_005fc120
// Address: 005fc120
// Address Range: [[005fc120, 005fc1fc]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_canBeAttracted_FUN_005fc120(CZombie *this_ptr,CVector3f *param_2)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_canBeAttracted_FUN_005fc120(CZombie *this_ptr,CVector3f *param_2)

{
  CDeformableModelInstance *this_ptr_00;
  CVector3f *pCVar1;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  local_10 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&this_ptr_00->motion_controller,3);
  if (local_10 <= 0.0) {
    return 0;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
            (this_ptr_00,&local_34,this_ptr->bone_l_hand);
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
            (this_ptr_00,&local_4c,this_ptr->bone_r_hand);
  local_1c = local_34.x + local_4c.x;
  local_18 = local_34.y + local_4c.y;
  local_28.x = local_1c * 0.5f;
  local_28.y = local_18 * 0.5f;
  local_14 = local_34.z + local_4c.z;
  local_28.z = local_14 * 0.5f;
  pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     ((CDemonActor *)this_ptr,&local_40,&local_28);
  if (param_2 != pCVar1) {
    param_2->x = pCVar1->x;
    param_2->y = pCVar1->y;
    param_2->z = pCVar1->z;
  }
  return 1;
}
