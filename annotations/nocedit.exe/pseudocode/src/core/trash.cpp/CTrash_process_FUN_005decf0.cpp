// Name: core_trash.cpp_CTrash_process_FUN_005decf0
// Address: 005decf0
// Address Range: [[005decf0, 005ded29] [005df4fe, 005df533]]
// Convention: __cdecl
// Signature: void __cdecl core_trash_cpp_CTrash_process_FUN_005decf0(CTrash *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_trash_cpp_CTrash_process_FUN_005decf0(CTrash *this_ptr,float delta_time)

{
  CLocation *position;
  float *pfVar1;
  float fVar2;
  bool bVar3;
  CDemonSet *pCVar4;
  int iVar5;
  float fVar6;
  CVector3f *pCVar7;
  CVector3f *pCVar8;
  CMatrix3x4f *pCVar9;
  CMatrix3x3f *pCVar10;
  byte bVar11;
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
  
  bVar11 = 0;
  iVar5 = core_hero_cpp_FUN_004f2220();
  if (iVar5 == 0) {
    iVar5 = core_hero_cpp_FUN_004f2220();
    if (iVar5 != 0) {
      return;
    }
    (this_ptr->base).location.position.x = (this_ptr->home_pos).x;
    (this_ptr->base).location.position.y = (this_ptr->home_pos).y;
    (this_ptr->base).location.position.z = (this_ptr->home_pos).z;
    return;
  }
  local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.05,0.05);
  (this_ptr->drift).x = local_14 + (this_ptr->drift).x;
  local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.05,0.05);
  pfVar1 = &(this_ptr->drift).y;
  *pfVar1 = local_14 + *pfVar1;
  local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.05,0.05);
  pfVar1 = &(this_ptr->drift).z;
  *pfVar1 = local_14 + *pfVar1;
  pCVar4 = g_CDemonSetPtr;
  local_d0 = 0x40800000;
  local_cc = 0;
  pCVar8 = &(g_CDemonSetPtr->active_fog).scroll;
  local_c8 = 0;
  if (pCVar8 != (CVector3f *)&local_d0) {
    pCVar8->x = 4.0;
    (pCVar4->active_fog).scroll.y = 0.0;
    (pCVar4->active_fog).scroll.z = 0.0;
  }
  fVar6 = this_ptr->animation_timer - delta_time;
  this_ptr->animation_timer = fVar6;
  pCVar4 = g_CDemonSetPtr;
  if (fVar6 <= 0.0) {
    pCVar8 = &(g_CDemonSetPtr->active_fog).scroll;
    if (&this_ptr->drift_target != pCVar8) {
      (this_ptr->drift_target).x = pCVar8->x;
      (this_ptr->drift_target).y = (pCVar4->active_fog).scroll.y;
      (this_ptr->drift_target).z = (pCVar4->active_fog).scroll.z;
    }
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-10.0,10.0);
    (this_ptr->drift_target).x = local_14 + (this_ptr->drift_target).x;
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,25.0);
    (this_ptr->drift_target).y = local_14 + (this_ptr->drift_target).y;
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-10.0,10.0);
    (this_ptr->drift_target).z = local_14 + (this_ptr->drift_target).z;
    fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(6.0,20.0);
    this_ptr->animation_timer = fVar6;
  }
  pCVar8 = &this_ptr->drift_target;
  local_28 = (g_CDemonSetPtr->active_fog).scroll.x - pCVar8->x;
  local_24 = (g_CDemonSetPtr->active_fog).scroll.y - (this_ptr->drift_target).y;
  local_ac = local_28 * 0.05f;
  local_20 = (g_CDemonSetPtr->active_fog).scroll.z - (this_ptr->drift_target).z;
  local_a8 = local_24 * 0.05f;
  local_a4 = local_20 * 0.05f;
  pCVar7 = &this_ptr->drift;
  pCVar8->x = pCVar8->x + local_ac;
  (this_ptr->drift_target).y = (this_ptr->drift_target).y + local_a8;
  (this_ptr->drift_target).z = (this_ptr->drift_target).z + local_a4;
  local_94 = pCVar8->x - pCVar7->x;
  local_90 = (this_ptr->drift_target).y - (this_ptr->drift).y;
  local_40 = local_94 * 0.07f;
  local_8c = (this_ptr->drift_target).z - (this_ptr->drift).z;
  local_3c = local_90 * 0.07f;
  local_38 = local_8c * 0.07f;
  pCVar7->x = pCVar7->x + local_40;
  (this_ptr->drift).y = (this_ptr->drift).y + local_3c;
  (this_ptr->drift).z = (this_ptr->drift).z + local_38;
  local_c4 = (this_ptr->base).location.position.x;
  local_c0 = (this_ptr->base).location.position.y;
  local_bc = (this_ptr->base).location.position.z;
  local_14 = -this_ptr->gravity;
  pCVar8 = &this_ptr->velocity;
  local_e8 = pCVar7->x - pCVar8->x;
  local_e4 = (this_ptr->drift).y - (this_ptr->velocity).y;
  pfVar1 = &this_ptr->damping_factor;
  local_e0 = (this_ptr->drift).z - (this_ptr->velocity).z;
  local_dc = local_e8 * *pfVar1;
  local_48 = local_e4 * *pfVar1;
  local_d4 = local_e0 * *pfVar1;
  local_d8 = local_14 + local_48;
  local_4c = local_dc;
  local_44 = local_d4;
  pCVar7 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                     (&this_ptr->base,&local_70,pCVar7);
  local_a0 = pCVar7->x * 0.5f;
  local_9c = pCVar7->y * 0.5f;
  local_98 = 0.5f * pCVar7->z;
  pCVar7 = &this_ptr->acceleration;
  fVar6 = (this_ptr->acceleration).y * 0.8f;
  fVar2 = (this_ptr->acceleration).z * 0.8f;
  pCVar7->x = pCVar7->x * 0.8f;
  (this_ptr->acceleration).y = fVar6;
  (this_ptr->acceleration).z = fVar2;
  pCVar7->x = pCVar7->x + local_a0;
  (this_ptr->acceleration).y = (this_ptr->acceleration).y + local_9c;
  (this_ptr->acceleration).z = (this_ptr->acceleration).z + local_98;
  local_7c = local_dc * delta_time;
  local_78 = local_d8 * delta_time;
  local_74 = local_d4 * delta_time;
  pCVar8->x = pCVar8->x + local_7c;
  (this_ptr->velocity).y = (this_ptr->velocity).y + local_78;
  (this_ptr->velocity).z = (this_ptr->velocity).z + local_74;
  fVar6 = (this_ptr->acceleration).y;
  fVar2 = (this_ptr->acceleration).z;
  fVar6 = SQRT(fVar2 * fVar2 + pCVar7->x * pCVar7->x + fVar6 * fVar6) * (float)0.15915494309644401;
  if (1.0 < fVar6) {
    fVar6 = 1.0 / fVar6;
    pCVar7->x = pCVar7->x * fVar6;
    (this_ptr->acceleration).y = (this_ptr->acceleration).y * fVar6;
    (this_ptr->acceleration).z = (this_ptr->acceleration).z * fVar6;
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
  bVar3 = false;
  if ((0.0 <= local_14) && (local_14 < 1.0)) {
    local_58 = local_58 * local_14;
    local_54 = local_54 * local_14;
    local_50 = local_50 * local_14;
    bVar3 = true;
  }
  position = &(this_ptr->base).location;
  fVar6 = (this_ptr->base).location.position.y;
  (position->position).x = (position->position).x + local_58;
  fVar2 = (this_ptr->base).location.position.z;
  (this_ptr->base).location.position.y = fVar6 + local_54;
  (this_ptr->base).location.position.z = fVar2 + local_50;
  local_1c = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                       (g_CDemonSetPtr,&position->position,
                        this_ptr->collision_radius * (float)0.90000000000000002);
  if (local_1c <= (this_ptr->base).location.position.y) {
    if (!bVar3) goto LAB_005df3d0;
  }
  else {
    fVar6 = this_ptr->collision_radius;
    fVar2 = (float)1.5;
    (this_ptr->base).location.position.y = local_1c;
    if (fVar6 * fVar2 + local_c0 < (this_ptr->base).location.position.y) {
      (position->position).x = local_c4;
      (this_ptr->base).location.position.y = local_c0;
      (this_ptr->base).location.position.z = local_bc;
    }
  }
  fVar6 = (this_ptr->acceleration).y * 0.7f;
  fVar2 = (this_ptr->acceleration).z * 0.7f;
  (this_ptr->acceleration).x = (this_ptr->acceleration).x * 0.7f;
  (this_ptr->acceleration).y = fVar6;
  (this_ptr->acceleration).z = fVar2;
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
  pCVar9 = &local_178;
  pCVar10 = &local_148;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    pCVar10->m[0].x = pCVar9->m[0].w;
    pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar11 * -2 + 1) * 4);
    pCVar10 = (CMatrix3x3f *)((int)pCVar10 + ((uint)bVar11 * -2 + 1) * 4);
  }
  pCVar8 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_148,&local_88);
  if (pCVar8 != local_18) {
    local_18->x = pCVar8->x;
    local_18->y = pCVar8->y;
    local_18->z = pCVar8->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  return;
}
