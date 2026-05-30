// Name: core_ghoul.cpp_CGhoul_canBeAttracted_FUN_004e82d0
// Address: 004e82d0
// MANUAL RECONSTRUCTION
// Address Range: [[004e82d0, 004e8495]]
// Convention: __cdecl
// Signature: int __cdecl core_ghoul_cpp_CGhoul_canBeAttracted_FUN_004e82d0(CGhoul *this_ptr,CVector3f *out_attract_position)

#include "nocturne.h"

int __cdecl core_ghoul_cpp_CGhoul_canBeAttracted_FUN_004e82d0(CGhoul *this_ptr,CVector3f *out_attract_position)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar4;
  CVector3f *pCVar5;
  CDeformableModelInstance *this_ptr_00;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_70;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_1c;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  fVar3 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&this_ptr_00->motion_controller,0xb);
  if (fVar3 <= 0.0) {
    return 0;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (this_ptr_00,&local_40,g_GhoulIndices[1]);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (this_ptr_00,&local_88,g_GhoulIndices[3]);
  fVar3 = (pCVar2->x + pCVar1->x) * 0.5f;
  fVar1 = (pCVar2->y + pCVar1->y) * 0.5f;
  fVar2 = (pCVar2->z + pCVar1->z) * 0.5f;
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (this_ptr_00,&local_94,g_GhoulIndices[2]);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (this_ptr_00,&local_4c,g_GhoulIndices[4]);
  local_70.x = (fVar3 + (pCVar5->x + pCVar4->x) * 0.5f) * 0.5f;
  local_70.y = (fVar1 + (pCVar5->y + pCVar4->y) * 0.5f) * 0.5f;
  local_70.z = (fVar2 + (pCVar5->z + pCVar4->z) * 0.5f) * 0.5f;
  pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     ((CDemonActor *)this_ptr,&local_1c,&local_70);
  if (out_attract_position != pCVar4) {
    *out_attract_position = *pCVar4;
  }
  return 1;
}
