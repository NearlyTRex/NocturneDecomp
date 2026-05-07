// Name: core_trash.cpp_CTrash_process_FUN_005decf0
// Address: 005decf0
// MANUAL RECONSTRUCTION
// Address Range: [[005decf0, 005df540]]
// Convention: __cdecl
// Signature: void __cdecl core_trash_cpp_CTrash_process_FUN_005decf0(CTrash *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_trash_cpp_CTrash_process_FUN_005decf0(CTrash *this_ptr,float delta_time)

{
  CLocation *pCVar2;
  UOrientationVector *euler_angles;
  float *pfVar3;
  CVector3f *pCVar4;
  float fVar5;
  float fVar6;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  CDemonSet *pCVar17;
  int iVar6;
  float fVar18;
  float fVar7;
  CVector3f *pCVar8;
  CVector3f *pCVar9;
  int iVar19;
  CVector3f *pCVar20;
  byte bVar12;
  CMatrix3x4f local_1a8;
  CMatrix3x4f local_178;
  CMatrix3x4f local_148;
  CMatrix3x4f local_118;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
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
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  CVector3f local_34;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  CVector3f *local_18;
  float local_14;
  bool bVar4;
  CDemonSet *pCVar5;
  CLocation *pCVar1;
  float *pfVar2;
  float fVar3;
  
  bVar12 = 0;
  pCVar2 = &(this_ptr->base).location;
  iVar6 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004f2220(&pCVar2->position,100.0);
  if (iVar6 == 0) {
    iVar19 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004f2220(&this_ptr->home_pos,100.0);
    if (iVar19 != 0) {
      return;
    }
    (pCVar2->position).x = (this_ptr->home_pos).x;
    (this_ptr->base).location.position.y = (this_ptr->home_pos).y;
    (this_ptr->base).location.position.z = (this_ptr->home_pos).z;
    return;
  }
  fVar18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-0.05,0.05);
  (this_ptr->drift).x = fVar18 + (this_ptr->drift).x;
  fVar18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-0.05,0.05);
  pfVar3 = &(this_ptr->drift).y;
  *pfVar3 = fVar18 + *pfVar3;
  fVar18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-0.05,0.05);
  pfVar3 = &(this_ptr->drift).z;
  *pfVar3 = fVar18 + *pfVar3;
  pCVar5 = g_CDemonSetPtr;
  local_d0 = 0x40800000;
  local_cc = 0;
  pCVar20 = &(g_CDemonSetPtr->active_fog).scroll;
  local_c8 = 0;
  if (pCVar20 != (CVector3f *)&local_d0) {
    pCVar20->x = 4.0;
    (pCVar5->active_fog).scroll.y = 0.0;
    (pCVar5->active_fog).scroll.z = 0.0;
  }
  fVar18 = this_ptr->animation_timer - delta_time;
  this_ptr->animation_timer = fVar18;
  pCVar17 = g_CDemonSetPtr;
  if (fVar18 <= 0.0) {
    pCVar20 = &(g_CDemonSetPtr->active_fog).scroll;
    if (&this_ptr->drift_target != pCVar20) {
      (this_ptr->drift_target).x = pCVar20->x;
      (this_ptr->drift_target).y = (pCVar17->active_fog).scroll.y;
      (this_ptr->drift_target).z = (pCVar17->active_fog).scroll.z;
    }
    fVar18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-10.0,10.0);
    (this_ptr->drift_target).x = fVar18 + (this_ptr->drift_target).x;
    fVar18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(15.0,25.0);
    (this_ptr->drift_target).y = fVar18 + (this_ptr->drift_target).y;
    fVar18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-10.0,10.0);
    (this_ptr->drift_target).z = fVar18 + (this_ptr->drift_target).z;
    fVar7 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(6.0,20.0);
    this_ptr->animation_timer = fVar7;
  }
  pCVar20 = &this_ptr->drift_target;
  local_ac = ((g_CDemonSetPtr->active_fog).scroll.x - pCVar20->x) * 0.05f;
  local_a8 = ((g_CDemonSetPtr->active_fog).scroll.y - (this_ptr->drift_target).y) * 0.05f;
  local_a4 = ((g_CDemonSetPtr->active_fog).scroll.z - (this_ptr->drift_target).z) * 0.05f;
  pCVar4 = &this_ptr->drift;
  pCVar20->x = pCVar20->x + local_ac;
  (this_ptr->drift_target).y = (this_ptr->drift_target).y + local_a8;
  (this_ptr->drift_target).z = (this_ptr->drift_target).z + local_a4;
  local_94 = pCVar20->x - pCVar4->x;
  local_90 = (this_ptr->drift_target).y - (this_ptr->drift).y;
  local_8c = (this_ptr->drift_target).z - (this_ptr->drift).z;
  fVar18 = local_90 * 0.07f;
  fVar5 = local_8c * 0.07f;
  pCVar4->x = pCVar4->x + local_94 * 0.07f;
  (this_ptr->drift).y = (this_ptr->drift).y + fVar18;
  (this_ptr->drift).z = (this_ptr->drift).z + fVar5;
  local_c4 = (this_ptr->base).location.position.x;
  local_c0 = (this_ptr->base).location.position.y;
  local_bc = (this_ptr->base).location.position.z;
  fVar18 = this_ptr->gravity;
  pCVar20 = &this_ptr->velocity;
  fVar5 = pCVar4->x;
  fVar6 = pCVar20->x;
  fVar8 = (this_ptr->drift).y;
  fVar9 = (this_ptr->velocity).y;
  pfVar2 = &this_ptr->damping_factor;
  fVar10 = (this_ptr->drift).z;
  fVar11 = (this_ptr->velocity).z;
  fVar12 = *pfVar2;
  fVar13 = *pfVar2;
  fVar14 = *pfVar2;
  pCVar8 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                     (&this_ptr->base,&local_70,pCVar4);
  local_a0 = pCVar8->x * 0.5f;
  local_9c = pCVar8->y * 0.5f;
  local_98 = 0.5f * pCVar8->z;
  pCVar4 = &this_ptr->acceleration;
  fVar15 = (this_ptr->acceleration).y * 0.8f;
  fVar16 = (this_ptr->acceleration).z * 0.8f;
  pCVar4->x = pCVar4->x * 0.8f;
  (this_ptr->acceleration).y = fVar15;
  (this_ptr->acceleration).z = fVar16;
  pCVar4->x = pCVar4->x + local_a0;
  (this_ptr->acceleration).y = (this_ptr->acceleration).y + local_9c;
  (this_ptr->acceleration).z = (this_ptr->acceleration).z + local_98;
  pCVar20->x = pCVar20->x + (fVar5 - fVar6) * fVar12 * delta_time;
  (this_ptr->velocity).y =
       (this_ptr->velocity).y + (-fVar18 + (fVar8 - fVar9) * fVar13) * delta_time;
  (this_ptr->velocity).z = (this_ptr->velocity).z + (fVar10 - fVar11) * fVar14 * delta_time;
  fVar18 = (this_ptr->acceleration).y;
  fVar3 = (this_ptr->acceleration).z;
  fVar18 = SQRT(fVar3 * fVar3 + pCVar4->x * pCVar4->x + fVar18 * fVar18) * (float)0.15915494309644401;
  if (1.0 < fVar18) {
    fVar18 = 1.0 / fVar18;
    pCVar4->x = pCVar4->x * fVar18;
    (this_ptr->acceleration).y = (this_ptr->acceleration).y * fVar18;
    (this_ptr->acceleration).z = (this_ptr->acceleration).z * fVar18;
  }
  local_58 = (this_ptr->velocity).x * delta_time;
  local_54 = (this_ptr->velocity).y * delta_time;
  local_50 = (this_ptr->velocity).z * delta_time;
  local_34.x = (this_ptr->acceleration).x * delta_time;
  local_34.y = (this_ptr->acceleration).y * delta_time;
  local_34.z = delta_time * (this_ptr->acceleration).z;
  fVar18 = core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00573470
                     (g_CDemonSetPtr,(this_ptr->base).location.position.x,
                      (this_ptr->base).location.position.z,local_58,local_50,
                      this_ptr->collision_radius,this_ptr->collision_bottom_y,
                      this_ptr->collision_top_y);
  bVar4 = false;
  if ((0.0 <= fVar18) && (fVar18 < 1.0)) {
    local_58 = local_58 * fVar18;
    local_54 = local_54 * fVar18;
    local_50 = local_50 * fVar18;
    bVar4 = true;
  }
  pCVar2 = &(this_ptr->base).location;
  fVar18 = (this_ptr->base).location.position.y;
  (pCVar2->position).x = (pCVar2->position).x + local_58;
  fVar5 = (this_ptr->base).location.position.z;
  (this_ptr->base).location.position.y = fVar18 + local_54;
  (this_ptr->base).location.position.z = fVar5 + local_50;
  fVar18 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                     (g_CDemonSetPtr,&pCVar2->position,
                      this_ptr->collision_radius * (float)0.90000000000000002);
  if (fVar18 <= (this_ptr->base).location.position.y) {
    if (!bVar4) goto LAB_005df3d0;
  }
  else {
    fVar5 = this_ptr->collision_radius;
    fVar6 = (float)1.5;
    (this_ptr->base).location.position.y = fVar18;
    if (fVar5 * fVar6 + local_c0 < (this_ptr->base).location.position.y) {
      (pCVar2->position).x = local_c4;
      (this_ptr->base).location.position.y = local_c0;
      (this_ptr->base).location.position.z = local_bc;
    }
  }
  fVar18 = (this_ptr->acceleration).y * 0.7f;
  fVar5 = (this_ptr->acceleration).z * 0.7f;
  (this_ptr->acceleration).x = (this_ptr->acceleration).x * 0.7f;
  (this_ptr->acceleration).y = fVar18;
  (this_ptr->acceleration).z = fVar5;
LAB_005df3d0:
  fVar18 = 1.0 / delta_time;
  local_b8 = ((this_ptr->base).location.position.x - local_c4) * fVar18;
  local_b4 = ((this_ptr->base).location.position.y - local_c0) * fVar18;
  local_b0 = ((this_ptr->base).location.position.z - local_bc) * fVar18;
  if (&this_ptr->velocity != (CVector3f *)&local_b8) {
    (this_ptr->velocity).x = local_b8;
    (this_ptr->velocity).y = local_b4;
    (this_ptr->velocity).z = local_b0;
  }
  euler_angles = &(this_ptr->base).orient;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_1a8,&g_ZeroVector.f,&euler_angles->vec);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_118,&g_ZeroVector.f,&local_34);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_118,&local_1a8,&local_178);
  local_148 = local_178;
  pCVar9 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_148,&local_88);
  if (pCVar9 != (CVector3f *)euler_angles) {
    (euler_angles->vec).x = pCVar9->x;
    (this_ptr->base).orient.vec.y = pCVar9->y;
    (this_ptr->base).orient.vec.z = pCVar9->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  return;
}
