// Name: core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40
// Address: 00428f40
// Address Range: [[00428f40, 004297d9]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter *this_ptr,CVector3f *velocity)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter *this_ptr,CVector3f *velocity)

{
  CLocation *pCVar1;
  UOrientationVector *pUVar2;
  float fVar3;
  bool bVar4;
  char *pcVar5;
  CDemonSet *pCVar6;
  CVector3f *pCVar7;
  CVector3f *pCVar8;
  SMotion *str1;
  uint uVar9;
  CVector3f *pCVar10;
  int iVar11;
  SMotion *pSVar12;
  int iVar13;
  byte bVar14;
  float afStackY_106c [991];
  float local_c0;
  float local_b0;
  CVector3f local_a8;
  CVector3f local_9c;
  float local_90;
  float local_8c;
  float local_88;
  char local_84 [4];
  float afStack_80 [5];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  CVector3f *local_50;
  CVector3f *local_4c;
  CVector3f *local_48;
  CVector3f *local_44;
  float local_40;
  float fStack_3c;
  int local_38;
  float local_34;
  CLocation *local_30;
  CVector3f *local_2c;
  CLocation *local_28;
  CVector3f *local_24;
  int local_20;
  CVector3f *local_1c;
  float fStack_18;
  float local_14;
  
  bVar14 = 0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(&this_ptr->base,&local_a8,velocity);
  if ((this_ptr->base).standing_platform != (CPlatform *)0x0) {
    (this_ptr->base).location.position.y =
         (this_ptr->base).platform_position_delta.y + (this_ptr->base).location.position.y;
    local_a8.x = local_a8.x + (this_ptr->base).platform_position_delta.x;
    local_a8.z = local_a8.z + (this_ptr->base).platform_position_delta.z;
    (this_ptr->base).platform_position_delta.z = 0.0;
    pUVar2 = &(this_ptr->base).orient;
    (this_ptr->base).platform_position_delta.y = (this_ptr->base).platform_position_delta.z;
    (this_ptr->base).platform_position_delta.x = (this_ptr->base).platform_position_delta.y;
    pCVar10 = &(this_ptr->base).platform_orientation_delta;
    (pUVar2->vec).x = pCVar10->x + (pUVar2->vec).x;
    (this_ptr->base).orient.vec.y =
         (this_ptr->base).platform_orientation_delta.y + (this_ptr->base).orient.vec.y;
    (this_ptr->base).orient.vec.z =
         (this_ptr->base).platform_orientation_delta.z + (this_ptr->base).orient.vec.z;
    (this_ptr->base).platform_orientation_delta.z = 0.0;
    (this_ptr->base).platform_orientation_delta.y = (this_ptr->base).platform_orientation_delta.z;
    pCVar10->x = (this_ptr->base).platform_orientation_delta.y;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  }
  PTR_00823c50 = (CDemonActor *)0x0;
  if ((((ABS(velocity->z) == 0.0) && (ABS(velocity->x) == 0.0)) && (velocity->y <= 0.0)) &&
     (((this_ptr->base).standing_platform == (CPlatform *)0x0 &&
      ((this_ptr->base).location.position.y == this_ptr->closest_distance_threshold)))) {
    core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
    (this_ptr->velocity).z = 0.0;
    (this_ptr->velocity).y = (this_ptr->velocity).z;
    (this_ptr->velocity).x = (this_ptr->velocity).y;
    return;
  }
  if ((this_ptr->model).model_name[0] != '\0') {
    str1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&(this_ptr->model).motion_controller);
    uVar9 = 0xffffffff;
    pSVar12 = str1;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar5 = pSVar12->motion_name;
      pSVar12 = (SMotion *)((int)pSVar12 + (uint)bVar14 * -2 + 1);
    } while (*pcVar5 != '\0');
    iVar11 = ~uVar9 - 0xc;
    local_84[0] = "noCollision"[0];
    local_84[1] = "noCollision"[1];
    local_84[2] = "noCollision"[2];
    local_84[3] = "noCollision"[3];
    afStack_80[(uint)bVar14 * -2] = *(float *)("noCollision" + (uint)bVar14 * -8 + 4);
    afStack_80[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         *(float *)("noCollision" + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
    iVar13 = 0;
    local_20 = iVar11;
    if (-1 < iVar11) {
      do {
        iVar11 = strnicmp(str1->motion_name,local_84,0xb);
        if (iVar11 == 0) {
          (this_ptr->velocity).z = 0.0;
          (this_ptr->velocity).y = (this_ptr->velocity).z;
          (this_ptr->velocity).x = (this_ptr->velocity).y;
          return;
        }
        iVar13 = iVar13 + 1;
        str1 = (SMotion *)(str1->motion_name + 1);
      } while (iVar13 <= local_20);
    }
  }
  local_50 = this_ptr->collision_test_points;
  iVar11 = 0;
  local_44 = this_ptr->collision_test_normals;
  local_48 = this_ptr->collision_test_points + 3;
  do {
    pCVar7 = local_50 + iVar11 * 3;
    pCVar10 = local_44;
    do {
      pCVar7->z = 0.0;
      pCVar7->y = pCVar7->z;
      pCVar7->x = pCVar7->z;
      pCVar10->z = 0.0;
      pCVar7 = pCVar7 + 1;
      pCVar10->y = pCVar10->z;
      pCVar10->x = pCVar10->z;
      pCVar10 = pCVar10 + 1;
    } while (pCVar7 != local_48);
    iVar11 = iVar11 + 1;
    local_44 = local_44 + 3;
    local_48 = local_48 + 3;
  } while (iVar11 < 5);
  pCVar1 = &(this_ptr->base).location;
  local_b0 = (this_ptr->base).location.position.y;
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&this_ptr->base);
  local_38 = 0;
  local_54 = velocity->y;
  local_4c = this_ptr->collision_test_normals;
  local_1c = this_ptr->collision_test_points;
  local_24 = this_ptr->collision_test_points + 1;
  pCVar10 = this_ptr->collision_test_normals + 2;
  local_2c = this_ptr->collision_test_normals + 1;
  pCVar7 = this_ptr->collision_test_points + 2;
  local_30 = pCVar1;
  local_28 = pCVar1;
  do {
    local_a8.y = 0.0;
    local_34 = this_ptr->collision_cylinder_top * this_ptr->size_scale;
    if (local_34 < this_ptr->collision_cylinder_bottom * this_ptr->size_scale) {
      local_34 = (this_ptr->model).bounding_box.max.y;
    }
    fVar3 = this_ptr->collision_cylinder_bottom * this_ptr->size_scale;
    if (local_34 < fVar3) {
      local_34 = this_ptr->size_scale * (float)0.5 + fVar3;
    }
    local_14 = core_setcolid_cpp_CDemonSet_testCapsuleCollision_FUN_00573470
                         (g_CDemonSetPtr,(this_ptr->base).location.position.x,
                          (this_ptr->base).location.position.z,local_a8.x,local_a8.z,
                          this_ptr->collision_cylinder_radius * this_ptr->size_scale,
                          (void *)(this_ptr->collision_cylinder_bottom * this_ptr->size_scale +
                                  (this_ptr->base).location.position.y),
                          (void *)((this_ptr->base).location.position.y + local_34));
    if (PTR_00823c50 == (CDemonActor *)0x0) {
      PTR_00823c50 = g_CDemonSetPtr->collision_actor;
    }
    pCVar8 = local_1c + local_38 * 3;
    if (pCVar8 != &g_TempNormal0) {
      pCVar8->x = g_TempNormal0.x;
      pCVar8->y = g_TempNormal0.y;
      pCVar8->z = g_TempNormal0.z;
    }
    if (local_24 != &g_TempNormal1) {
      local_24->x = g_TempNormal1.x;
      local_24->y = g_TempNormal1.y;
      local_24->z = g_TempNormal1.z;
    }
    if (pCVar7 != &g_TempNormal2) {
      pCVar7->x = g_TempNormal2.x;
      pCVar7->y = g_TempNormal2.y;
      pCVar7->z = g_TempNormal2.z;
    }
    if (0.0 <= local_14) {
      local_c0 = local_14;
      if (1.0 < local_14) {
        local_c0 = 1.0;
      }
      local_60 = local_a8.x * local_c0;
      local_5c = local_a8.y * local_c0;
      local_58 = local_a8.z * local_c0;
      (local_28->position).x = (local_28->position).x + local_60;
      (local_28->position).y = (local_28->position).y + local_5c;
      pCVar6 = g_CDemonSetPtr;
      (local_28->position).z = (local_28->position).z + local_58;
      afStack_80[2] = (pCVar6->collision_normal).x;
      afStack_80[3] = (pCVar6->collision_normal).y;
      afStack_80[4] = (pCVar6->collision_normal).z;
      local_14 = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                           (&this_ptr->base,this_ptr->collision_cylinder_height,&local_9c);
      bVar4 = false;
      pCVar8 = local_4c + local_38 * 3;
      this_ptr->closest_distance_threshold = local_14;
      if (pCVar8 != &g_TempNormal0) {
        pCVar8->x = g_TempNormal0.x;
        pCVar8->y = g_TempNormal0.y;
        pCVar8->z = g_TempNormal0.z;
      }
      if (local_2c != &g_TempNormal1) {
        local_2c->x = g_TempNormal1.x;
        local_2c->y = g_TempNormal1.y;
        local_2c->z = g_TempNormal1.z;
      }
      if (pCVar10 != &g_TempNormal2) {
        pCVar10->x = g_TempNormal2.x;
        pCVar10->y = g_TempNormal2.y;
        pCVar10->z = g_TempNormal2.z;
      }
      if ((this_ptr->base).location.position.y < this_ptr->closest_distance_threshold) {
        (this_ptr->base).location.position.y = this_ptr->closest_distance_threshold;
        local_b0 = (this_ptr->base).location.position.y;
      }
      if ((float)0.90000000000000002 < local_c0) break;
      fVar3 = SQRT(afStack_80[4] * afStack_80[4] + afStack_80[2] * afStack_80[2]);
      afStack_80[3] = 0.0;
      if (0.0 < fVar3) {
        fStack_18 = 1.0 / fVar3;
        afStack_80[2] = afStack_80[2] * fStack_18;
        afStack_80[3] = fStack_18 * 0.0;
        afStack_80[4] = afStack_80[4] * fStack_18;
      }
      fStack_3c = (float)0.90000000000000002 - local_c0;
      local_a8.x = local_a8.x * fStack_3c;
      local_a8.y = local_a8.y * fStack_3c;
      local_a8.z = local_a8.z * fStack_3c;
      fVar3 = afStack_80[4] * local_a8.z + afStack_80[2] * local_a8.x + afStack_80[3] * local_a8.y;
      if (0.0 <= fVar3) break;
      fVar3 = fVar3 * (float)1.2;
      fStack_6c = afStack_80[2] * fVar3;
      fStack_68 = afStack_80[3] * fVar3;
      fStack_64 = afStack_80[4] * fVar3;
      local_a8.x = local_a8.x - fStack_6c;
      local_a8.y = local_a8.y - fStack_68;
      local_a8.z = local_a8.z - fStack_64;
    }
    else {
      local_40 = local_14 + (float)-0.01;
      local_90 = (g_CDemonSetPtr->collision_normal).x * local_40;
      local_8c = (g_CDemonSetPtr->collision_normal).y * local_40;
      local_88 = (g_CDemonSetPtr->collision_normal).z * local_40;
      (local_30->position).x = (local_30->position).x - local_90;
      (local_30->position).y = (local_30->position).y - local_8c;
      bVar4 = true;
      (local_30->position).z = (local_30->position).z - local_88;
    }
    pCVar7 = pCVar7 + 3;
    local_24 = local_24 + 3;
    pCVar10 = pCVar10 + 3;
    local_2c = local_2c + 3;
    local_38 = local_38 + 1;
  } while (local_38 < 3);
  if (bVar4) {
    local_14 = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                         (&this_ptr->base,this_ptr->collision_cylinder_height,(CVector3f *)0x0);
    this_ptr->closest_distance_threshold = local_14;
  }
  fVar3 = (this_ptr->base).location.position.y + local_54;
  (this_ptr->base).location.position.y = fVar3;
  if (this_ptr->closest_distance_threshold <= fVar3) {
    if ((this_ptr->is_on_ground != 0) &&
       ((this_ptr->base).location.position.y <
        this_ptr->closest_distance_threshold + (float)0.5)) {
      (this_ptr->base).location.position.y = this_ptr->closest_distance_threshold;
      local_b0 = (this_ptr->base).location.position.y;
    }
  }
  else {
    (this_ptr->base).location.position.y = this_ptr->closest_distance_threshold;
  }
  (this_ptr->velocity).z = 0.0;
  (this_ptr->velocity).y = (this_ptr->velocity).z;
  (this_ptr->velocity).x = (this_ptr->velocity).y;
  pCVar6 = g_CDemonSetPtr;
  (this_ptr->velocity).y =
       ((this_ptr->base).location.position.y - local_b0) / g_CGamePtr->delta_time_float;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(pCVar6);
  return;
}
