// Name: core_ghoul.cpp_CGhoul_canBeAttracted_FUN_004aaf40
// Address: 004aaf40
// Address Range: [[004aaf40, 004ab105]]
// Convention: unknown
// Signature: undefined4 core_ghoul_cpp_CGhoul_canBeAttracted_FUN_004aaf40(CDemonActor *param_1,CVector3f *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_ghoul_cpp_CGhoul_canBeAttracted_FUN_004aaf40(CDemonActor *param_1,CVector3f *param_2)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CDeformableModelInstance *this_ptr;
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
  
  this_ptr = (CDeformableModelInstance *)(param_1 + 1);
  local_10 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(this_ptr,0xb)
  ;
  if (local_10 <= 0.0) {
    return 0;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (this_ptr,&local_40,_DAT_01c78c18);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (this_ptr,&local_88,_DAT_01c78c20);
  local_34 = pCVar2->x + pCVar1->x;
  local_30 = pCVar2->y + pCVar1->y;
  local_58 = local_34 * 0.5f;
  local_2c = pCVar2->z + pCVar1->z;
  local_54 = local_30 * 0.5f;
  local_50 = local_2c * 0.5f;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (this_ptr,&local_94,_DAT_01c78c1c);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (this_ptr,&local_4c,_DAT_01c78c24);
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
  pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&local_1c,&local_70);
  if (param_2 != pCVar1) {
    param_2->x = pCVar1->x;
    param_2->y = pCVar1->y;
    param_2->z = pCVar1->z;
  }
  return 1;
}
