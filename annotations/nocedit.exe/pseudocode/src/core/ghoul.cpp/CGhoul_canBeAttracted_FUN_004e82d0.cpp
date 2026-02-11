// Name: core_ghoul.cpp_CGhoul_canBeAttracted_FUN_004e82d0
// Address: 004e82d0
// Address Range: [[004e82d0, 004e8495]]
// Convention: __cdecl
// Signature: int __cdecl core_ghoul_cpp_CGhoul_canBeAttracted_FUN_004e82d0(CGhoul *this_ptr,CVector3f *param_2)

#include "nocturne.h"

int __cdecl core_ghoul_cpp_CGhoul_canBeAttracted_FUN_004e82d0(CGhoul *this_ptr,CVector3f *param_2)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CDeformableModelInstance *this_ptr_00;
  CVector3f local_94;
  CVector3f local_88;
  float local_7c;
  float local_78;
  float local_74;
  CVector3f local_70;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  CVector3f local_4c;
  CVector3f local_40;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  CVector3f local_1c;
  float local_10;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  local_10 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&this_ptr_00->motion_controller,0xb);
  if (local_10 <= 0.0) {
    return 0;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (this_ptr_00,&local_40,INT_02d83300);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (this_ptr_00,&local_88,INT_02d83308);
  local_34 = pCVar2->x + pCVar1->x;
  local_30 = pCVar2->y + pCVar1->y;
  local_58 = local_34 * 0.5f;
  local_2c = pCVar2->z + pCVar1->z;
  local_54 = local_30 * 0.5f;
  local_50 = local_2c * 0.5f;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (this_ptr_00,&local_94,INT_02d83304);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (this_ptr_00,&local_4c,INT_02d8330c);
  local_7c = pCVar2->x + pCVar1->x;
  local_78 = pCVar2->y + pCVar1->y;
  local_64 = local_7c * 0.5f;
  local_60 = local_78 * 0.5f;
  local_74 = pCVar2->z + pCVar1->z;
  local_28 = local_58 + local_64;
  local_5c = local_74 * 0.5f;
  local_70.x = local_28 * 0.5f;
  local_24 = local_54 + local_60;
  local_70.y = local_24 * 0.5f;
  local_20 = local_50 + local_5c;
  local_70.z = local_20 * 0.5f;
  pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     ((CDemonActor *)this_ptr,&local_1c,&local_70);
  if (param_2 != pCVar1) {
    param_2->x = pCVar1->x;
    param_2->y = pCVar1->y;
    param_2->z = pCVar1->z;
  }
  return 1;
}
