// Name: core_trash.cpp_CTrash_process_FUN_005decf0
// Address: 005decf0
// Address Range: [[005decf0, 005ded29] [005df4fe, 005df533]]
// Convention: __cdecl
// Signature: void __cdecl core_trash_cpp_CTrash_process_FUN_005decf0(CTrash *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_trash_cpp_CTrash_process_FUN_005decf0(CTrash *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  float *pfVar2;
  float fVar3;
  bool bVar4;
  CDemonSet *pCVar5;
  int iVar6;
  float fVar7;
  CVector3f *pCVar8;
  CVector3f *pCVar9;
  CMatrix3x4f *pCVar10;
  CMatrix3x3f *pCVar11;
  byte bVar12;
  CMatrix3x4f local_1a8;
  CMatrix3x4f local_178;
  CMatrix3x3f local_148;
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
  
  bVar12 = 0;
  pCVar1 = &(this_ptr->base).location;
  iVar6 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004f2220(&pCVar1->position,100.0);
  if (iVar6 == 0) {
    iVar6 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004f2220(&this_ptr->home_pos,100.0);
    if (iVar6 != 0) {
      return;
    }
    (pCVar1->position).x = (this_ptr->home_pos).x;
    (this_ptr->base).location.position.y = (this_ptr->home_pos).y;
    (this_ptr->base).location.position.z = (this_ptr->home_pos).z;
    return;
  }
  local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.05,0.05);
  (this_ptr->drift).x = local_14 + (this_ptr->drift).x;
  local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.05,0.05);
  pfVar2 = &(this_ptr->drift).y;
  *pfVar2 = local_14 + *pfVar2;
  local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.05,0.05);
  pfVar2 = &(this_ptr->drift).z;
  *pfVar2 = local_14 + *pfVar2;
  pCVar5 = g_CDemonSetPtr;
  local_d0 = 0x40800000;
  local_cc = 0;
  pCVar9 = &(g_CDemonSetPtr->active_fog).scroll;
  local_c8 = 0;
  if (pCVar9 != (CVector3f *)&local_d0) {
    pCVar9->x = 4.0;
    (pCVar5->active_fog).scroll.y = 0.0;
    (pCVar5->active_fog).scroll.z = 0.0;
  }
  fVar7 = this_ptr->animation_timer - delta_time;
  this_ptr->animation_timer = fVar7;
  pCVar5 = g_CDemonSetPtr;
  if (fVar7 <= 0.0) {
    pCVar9 = &(g_CDemonSetPtr->active_fog).scroll;
    if (&this_ptr->drift_target != pCVar9) {
      (this_ptr->drift_target).x = pCVar9->x;
      (this_ptr->drift_target).y = (pCVar5->active_fog).scroll.y;
      (this_ptr->drift_target).z = (pCVar5->active_fog).scroll.z;
    }
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-10.0,10.0);
    (this_ptr->drift_target).x = local_14 + (this_ptr->drift_target).x;
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,25.0);
    (this_ptr->drift_target).y = local_14 + (this_ptr->drift_target).y;
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-10.0,10.0);
    (this_ptr->drift_target).z = local_14 + (this_ptr->drift_target).z;
    fVar7 = core_actor_cpp_getRandomFloat_FUN_0040cc10(6.0,20.0);
    this_ptr->animation_timer = fVar7;
  }
  pCVar9 = &this_ptr->drift_target;
  local_28 = (g_CDemonSetPtr->active_fog).scroll.x - pCVar9->x;
  local_24 = (g_CDemonSetPtr->active_fog).scroll.y - (this_ptr->drift_target).y;
  local_ac = local_28 * 0.05f;
  local_20 = (g_CDemonSetPtr->active_fog).scroll.z - (this_ptr->drift_target).z;
  local_a8 = local_24 * 0.05f;
  local_a4 = local_20 * 0.05f;
  pCVar8 = &this_ptr->drift;
  pCVar9->x = pCVar9->x + local_ac;
  (this_ptr->drift_target).y = (this_ptr->drift_target).y + local_a8;
  (this_ptr->drift_target).z = (this_ptr->drift_target).z + local_a4;
  local_94 = pCVar9->x - pCVar8->x;
  local_90 = (this_ptr->drift_target).y - (this_ptr->drift).y;
  local_40 = local_94 * 0.07f;
  local_8c = (this_ptr->drift_target).z - (this_ptr->drift).z;
  local_3c = local_90 * 0.07f;
  local_38 = local_8c * 0.07f;
  pCVar8->x = pCVar8->x + local_40;
  (this_ptr->drift).y = (this_ptr->drift).y + local_3c;
  (this_ptr->drift).z = (this_ptr->drift).z + local_38;
  local_c4 = (this_ptr->base).location.position.x;
  local_c0 = (this_ptr->base).location.position.y;
  local_bc = (this_ptr->base).location.position.z;
  local_14 = -this_ptr->gravity;
  pCVar9 = &this_ptr->velocity;
  local_e8 = pCVar8->x - pCVar9->x;
  local_e4 = (this_ptr->drift).y - (this_ptr->velocity).y;
  pfVar2 = &this_ptr->damping_factor;
  local_e0 = (this_ptr->drift).z - (this_ptr->velocity).z;
  local_dc = local_e8 * *pfVar2;
  local_48 = local_e4 * *pfVar2;
  local_d4 = local_e0 * *pfVar2;
  local_d8 = local_14 + local_48;
  local_4c = local_dc;
  local_44 = local_d4;
  pCVar8 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                     (&this_ptr->base,&local_70,pCVar8);
  local_a0 = pCVar8->x * 0.5f;
  local_9c = pCVar8->y * 0.5f;
  local_98 = 0.5f * pCVar8->z;
  pCVar8 = &this_ptr->acceleration;
  fVar7 = (this_ptr->acceleration).y * 0.8f;
  fVar3 = (this_ptr->acceleration).z * 0.8f;
  pCVar8->x = pCVar8->x * 0.8f;
  (this_ptr->acceleration).y = fVar7;
  (this_ptr->acceleration).z = fVar3;
  pCVar8->x = pCVar8->x + local_a0;
  (this_ptr->acceleration).y = (this_ptr->acceleration).y + local_9c;
  (this_ptr->acceleration).z = (this_ptr->acceleration).z + local_98;
  local_7c = local_dc * delta_time;
  local_78 = local_d8 * delta_time;
  local_74 = local_d4 * delta_time;
  pCVar9->x = pCVar9->x + local_7c;
  (this_ptr->velocity).y = (this_ptr->velocity).y + local_78;
  (this_ptr->velocity).z = (this_ptr->velocity).z + local_74;
  fVar7 = (this_ptr->acceleration).y;
  fVar3 = (this_ptr->acceleration).z;
  fVar7 = SQRT(fVar3 * fVar3 + pCVar8->x * pCVar8->x + fVar7 * fVar7) * (float)0.15915494309644401;
  if (1.0 < fVar7) {
    fVar7 = 1.0 / fVar7;
    pCVar8->x = pCVar8->x * fVar7;
    (this_ptr->acceleration).y = (this_ptr->acceleration).y * fVar7;
    (this_ptr->acceleration).z = (this_ptr->acceleration).z * fVar7;
  }
  local_58 = (this_ptr->velocity).x * delta_time;
  local_54 = (this_ptr->velocity).y * delta_time;
  local_50 = (this_ptr->velocity).z * delta_time;
  local_34.x = (this_ptr->acceleration).x * delta_time;
  local_34.y = (this_ptr->acceleration).y * delta_time;
  local_34.z = delta_time * (this_ptr->acceleration).z;
  local_14 = core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00573470
                       (g_CDemonSetPtr,(this_ptr->base).location.position.x,
                        (this_ptr->base).location.position.z,local_58,local_50,
                        this_ptr->collision_radius,this_ptr->collision_bottom_y,
                        this_ptr->collision_top_y);
  bVar4 = false;
  if ((0.0 <= local_14) && (local_14 < 1.0)) {
    local_58 = local_58 * local_14;
    local_54 = local_54 * local_14;
    local_50 = local_50 * local_14;
    bVar4 = true;
  }
  pCVar1 = &(this_ptr->base).location;
  fVar7 = (this_ptr->base).location.position.y;
  (pCVar1->position).x = (pCVar1->position).x + local_58;
  fVar3 = (this_ptr->base).location.position.z;
  (this_ptr->base).location.position.y = fVar7 + local_54;
  (this_ptr->base).location.position.z = fVar3 + local_50;
  local_1c = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                       (g_CDemonSetPtr,&pCVar1->position,
                        this_ptr->collision_radius * (float)0.90000000000000002);
  if (local_1c <= (this_ptr->base).location.position.y) {
    if (!bVar4) goto LAB_005df3d0;
  }
  else {
    fVar7 = this_ptr->collision_radius;
    fVar3 = (float)1.5;
    (this_ptr->base).location.position.y = local_1c;
    if (fVar7 * fVar3 + local_c0 < (this_ptr->base).location.position.y) {
      (pCVar1->position).x = local_c4;
      (this_ptr->base).location.position.y = local_c0;
      (this_ptr->base).location.position.z = local_bc;
    }
  }
  fVar7 = (this_ptr->acceleration).y * 0.7f;
  fVar3 = (this_ptr->acceleration).z * 0.7f;
  (this_ptr->acceleration).x = (this_ptr->acceleration).x * 0.7f;
  (this_ptr->acceleration).y = fVar7;
  (this_ptr->acceleration).z = fVar3;
LAB_005df3d0:
  local_64 = (this_ptr->base).location.position.x - local_c4;
  local_60 = (this_ptr->base).location.position.y - local_c0;
  local_b0 = 1.0 / delta_time;
  local_b8 = local_64 * local_b0;
  local_5c = (this_ptr->base).location.position.z - local_bc;
  local_b4 = local_60 * local_b0;
  local_b0 = local_5c * local_b0;
  if (&this_ptr->velocity != (CVector3f *)&local_b8) {
    (this_ptr->velocity).x = local_b8;
    (this_ptr->velocity).y = local_b4;
    (this_ptr->velocity).z = local_b0;
  }
  local_18 = (CVector3f *)&(this_ptr->base).orient;
  local_14 = local_1c;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_1a8,&g_ZeroVector,local_18);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_118,&g_ZeroVector,&local_34);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_118,&local_1a8,&local_178);
  pCVar10 = &local_178;
  pCVar11 = &local_148;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    pCVar11->m[0].x = pCVar10->m[0].w;
    pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar12 * -2 + 1) * 4);
    pCVar11 = (CMatrix3x3f *)((int)pCVar11 + ((uint)bVar12 * -2 + 1) * 4);
  }
  pCVar9 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_148,&local_88);
  if (pCVar9 != local_18) {
    local_18->x = pCVar9->x;
    local_18->y = pCVar9->y;
    local_18->z = pCVar9->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  return;
}
