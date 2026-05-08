// Name: core_charactr.cpp_CCharacter_addDamageDecal_FUN_0042b190
// Address: 0042b190
// MANUAL RECONSTRUCTION
// Address Range: [[0042b190, 0042b5aa]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_addDamageDecal_FUN_0042b190(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_addDamageDecal_FUN_0042b190(CCharacter *this_ptr)

{
  float fVar1;
  CVector3f *euler_angles;
  int iVar3;
  SDamageDecal *pSVar4;
  CMatrix3x4f local_2ec;
  CMatrix3x4f local_2bc;
  CMatrix3x4f local_28c;
  CMatrix3x4f local_25c;
  CMatrix3x4f local_22c;
  CMatrix3x4f local_1fc;
  CMatrix3x4f local_1cc;
  CMatrix3x4f local_19c;
  CMatrix3x4f local_16c;
  CMatrix3x4f local_13c;
  CMatrix3x4f local_10c;
  CMatrix3x4f local_dc;
  CMatrix3x4f local_ac;
  CMatrix3x4f local_7c;
  CVector3f local_4c;
  CVector3f local_40;
  float local_34;
  float local_30;
  float local_2c;
  CVector3f local_28;
  CDemonSet *pCVar1;

  pCVar1 = g_CDemonSetPtr;
  iVar3 = this_ptr->damage_decal_count;
  if ((iVar3 < 5) && (-1 < g_CDemonSetPtr->collision_part_index)) {
    this_ptr->damage_decal_count = this_ptr->damage_decal_count + 1;
    pSVar4 = this_ptr->damage_decals + iVar3;
    pSVar4->part_index = pCVar1->collision_part_index;
    iVar3 = pCVar1->collision_bone_index;
    pSVar4->bone_index = iVar3;
    if (iVar3 < 0) {
      iVar3 = (*(((this_ptr->base).vtable._uc)->_uc).getPartDominantBone)
                        (this_ptr,pSVar4->part_index);
      pSVar4->bone_index = iVar3;
    }
    local_4c.x = (g_CDemonSetPtr->ray_target).x - (g_CDemonSetPtr->ray_origin).x;
    local_4c.y = (g_CDemonSetPtr->ray_target).y - (g_CDemonSetPtr->ray_origin).y;
    local_4c.z = (g_CDemonSetPtr->ray_target).z - (g_CDemonSetPtr->ray_origin).z;
    fVar1 = SQRT(local_4c.z * local_4c.z + local_4c.y * local_4c.y + local_4c.x * local_4c.x);
    if (fVar1 <= 0.0) {
      local_30 = 0.0;
      local_34 = 0.0;
      local_2c = 0.0;
    }
    else {
      fVar1 = 1.0 / fVar1;
      local_34 = local_4c.x * fVar1;
      local_30 = local_4c.y * fVar1;
      local_2c = local_4c.z * fVar1;
    }
    fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.3,0.6);
    local_28.x = (g_CDemonSetPtr->collision_impact_position).x - local_34 * fVar1;
    local_28.y = (g_CDemonSetPtr->collision_impact_position).y - local_30 * fVar1;
    local_28.z = (g_CDemonSetPtr->collision_impact_position).z - local_2c * fVar1;
    euler_angles = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             (&local_40,&local_4c);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_ac,&local_28,euler_angles);
    fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-0.034906585,0.034906585);
    core_xform_cpp_buildRotationY_FUN_005f6cc0(fVar1,&local_25c);
    local_2bc = local_25c;
    fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-0.034906585,0.034906585);
    core_xform_cpp_buildRotationX_FUN_005f6c40(fVar1,&local_16c);
    local_19c = local_16c;
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_19c,&local_2bc,&local_1cc);
    local_13c = local_1cc;
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_13c,&local_ac,&local_7c);
    local_ac = local_7c;
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              (&local_10c,&(this_ptr->base).location.position,&(this_ptr->base).orient.vec);
    core_xform_cpp_inverse_FUN_005f6210
              ((this_ptr->model).bone_transform.bone_world_matrices + pSVar4->bone_index,&local_2ec)
    ;
    local_22c = local_2ec;
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_ac,&local_10c,&local_1fc);
    local_dc = local_1fc;
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_dc,&local_22c,&local_28c);
    pSVar4->transform = local_28c;
  }
  return;
}
