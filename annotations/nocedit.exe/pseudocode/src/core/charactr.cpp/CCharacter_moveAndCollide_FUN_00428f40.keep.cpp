// Name: core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40
// Address: 00428f40
// MANUAL RECONSTRUCTION
// Address Range: [[00428f40, 004297d9] [0060cad8, 0060caf9]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter *this_ptr,CVector3f *velocity)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter *this_ptr,CVector3f *velocity)

{
  CLocation *pCVar2;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  CDemonSet *pCVar11;
  CVector3f *pCVar7;
  CVector3f *pCVar8;
  float fVar12;
  SMotion *str1;
  int iVar14;
  CVector3f *pCVar15;
  CVector3f *pCVar10;
  int iVar11;
  CVector3f *pCVar16;
  CVector3f *pCVar17;
  int iVar13;
  float local_c0;
  float local_b0;
  CVector3f local_a8;
  CVector3f local_9c;
  float afStack_80 [5];
  CVector3f *local_48;
  CVector3f *local_44;
  int local_38;
  float local_34;
  CVector3f *local_2c;
  CVector3f *local_24;
  float fVar3;
  bool bVar4;
  UOrientationVector *pUVar2;
  CDemonSet *pCVar6;
  byte bVar14;
  
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
    pCVar16 = &(this_ptr->base).platform_orientation_delta;
    (pUVar2->vec).x = pCVar16->x + (pUVar2->vec).x;
    (this_ptr->base).orient.vec.y =
         (this_ptr->base).platform_orientation_delta.y + (this_ptr->base).orient.vec.y;
    (this_ptr->base).orient.vec.z =
         (this_ptr->base).platform_orientation_delta.z + (this_ptr->base).orient.vec.z;
    (this_ptr->base).platform_orientation_delta.z = 0.0;
    (this_ptr->base).platform_orientation_delta.y = (this_ptr->base).platform_orientation_delta.z;
    pCVar16->x = (this_ptr->base).platform_orientation_delta.y;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  }
  g_LastCollisionActor = (CDemonActor *)0x0;
  if ((((ABS(velocity->z) == 0.0) && (ABS(velocity->x) == 0.0)) && (velocity->y <= 0.0)) &&
     (((this_ptr->base).standing_platform == (CPlatform *)0x0 &&
      ((this_ptr->base).location.position.y == this_ptr->closest_distance_threshold)))) {
    core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
    (this_ptr->velocity).z = 0.0;
    (this_ptr->velocity).y = (this_ptr->velocity).z;
    (this_ptr->velocity).x = (this_ptr->velocity).y;
    return;
  }
  if ((this_ptr->model).model_name[0] != '\0') {
    str1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&(this_ptr->model).motion_controller);
    iVar11 = (int)strlen(str1->motion_name) - 0xb;
    iVar13 = 0;
    while (iVar13 <= iVar11) {
      iVar14 = _strnicmp(str1->motion_name,(char *)"noCollision",0xb);
      if (iVar14 == 0) {
        (this_ptr->velocity).z = 0.0;
        (this_ptr->velocity).y = (this_ptr->velocity).z;
        (this_ptr->velocity).x = (this_ptr->velocity).y;
        return;
      }
      iVar13 = iVar13 + 1;
      str1 = (SMotion *)(str1->motion_name + 1);
    }
  }
  iVar11 = 0;
  local_44 = this_ptr->collision_test_normals;
  local_48 = this_ptr->collision_test_points;
  do {
    local_48 = local_48 + 3;
    pCVar7 = this_ptr->collision_test_points + iVar11 * 3;
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
  } while (iVar11 < 5);
  pCVar2 = &(this_ptr->base).location;
  local_b0 = (this_ptr->base).location.position.y;
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&this_ptr->base);
  local_38 = 0;
  fVar7 = velocity->y;
  local_24 = this_ptr->collision_test_points + 1;
  pCVar16 = this_ptr->collision_test_normals + 2;
  local_2c = this_ptr->collision_test_normals + 1;
  pCVar17 = this_ptr->collision_test_points + 2;
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
    local_c0 = core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00573470
                         (g_CDemonSetPtr,(this_ptr->base).location.position.x,
                          (this_ptr->base).location.position.z,local_a8.x,local_a8.z,
                          this_ptr->collision_cylinder_radius * this_ptr->size_scale,
                          this_ptr->collision_cylinder_bottom * this_ptr->size_scale +
                          (this_ptr->base).location.position.y,
                          (this_ptr->base).location.position.y + local_34);
    if (g_LastCollisionActor == (CDemonActor *)0x0) {
      g_LastCollisionActor = g_CDemonSetPtr->collision_actor;
    }
    pCVar8 = this_ptr->collision_test_points + local_38 * 3;
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
    if (pCVar17 != &g_TempNormal2) {
      pCVar17->x = g_TempNormal2.x;
      pCVar17->y = g_TempNormal2.y;
      pCVar17->z = g_TempNormal2.z;
    }
    if (0.0 <= local_c0) {
      if (1.0 < local_c0) {
        local_c0 = 1.0;
      }
      fVar12 = (this_ptr->base).location.position.y;
      (pCVar2->position).x = (pCVar2->position).x + local_a8.x * local_c0;
      fVar4 = (this_ptr->base).location.position.z;
      (this_ptr->base).location.position.y = fVar12 + local_a8.y * local_c0;
      pCVar11 = g_CDemonSetPtr;
      (this_ptr->base).location.position.z = fVar4 + local_a8.z * local_c0;
      afStack_80[2] = (pCVar11->collision_normal).x;
      afStack_80[4] = (pCVar11->collision_normal).z;
      fVar12 = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                         (&this_ptr->base,this_ptr->collision_cylinder_height,&local_9c);
      bVar4 = false;
      pCVar15 = this_ptr->collision_test_normals + local_38 * 3;
      this_ptr->closest_distance_threshold = fVar12;
      if (pCVar15 != &g_TempNormal0) {
        pCVar15->x = g_TempNormal0.x;
        pCVar15->y = g_TempNormal0.y;
        pCVar15->z = g_TempNormal0.z;
      }
      if (local_2c != &g_TempNormal1) {
        local_2c->x = g_TempNormal1.x;
        local_2c->y = g_TempNormal1.y;
        local_2c->z = g_TempNormal1.z;
      }
      if (pCVar16 != &g_TempNormal2) {
        pCVar16->x = g_TempNormal2.x;
        pCVar16->y = g_TempNormal2.y;
        pCVar16->z = g_TempNormal2.z;
      }
      if ((this_ptr->base).location.position.y < this_ptr->closest_distance_threshold) {
        (this_ptr->base).location.position.y = this_ptr->closest_distance_threshold;
        local_b0 = (this_ptr->base).location.position.y;
      }
      if ((float)0.90000000000000002 < local_c0) break;
      fVar12 = SQRT(afStack_80[4] * afStack_80[4] + afStack_80[2] * afStack_80[2]);
      afStack_80[3] = 0.0;
      if (0.0 < fVar12) {
        fVar12 = 1.0 / fVar12;
        afStack_80[2] = afStack_80[2] * fVar12;
        afStack_80[3] = fVar12 * 0.0;
        afStack_80[4] = afStack_80[4] * fVar12;
      }
      fVar12 = (float)0.90000000000000002 - local_c0;
      local_a8.x = local_a8.x * fVar12;
      local_a8.y = local_a8.y * fVar12;
      local_a8.z = local_a8.z * fVar12;
      fVar12 = afStack_80[4] * local_a8.z + afStack_80[2] * local_a8.x + afStack_80[3] * local_a8.y;
      if (0.0 <= fVar12) break;
      fVar12 = fVar12 * (float)1.2;
      local_a8.x = local_a8.x - afStack_80[2] * fVar12;
      local_a8.y = local_a8.y - afStack_80[3] * fVar12;
      local_a8.z = local_a8.z - afStack_80[4] * fVar12;
    }
    else {
      fVar8 = local_c0 + (float)-0.01;
      fVar12 = (g_CDemonSetPtr->collision_normal).y;
      fVar4 = (g_CDemonSetPtr->collision_normal).z;
      fVar5 = (this_ptr->base).location.position.y;
      (pCVar2->position).x = (pCVar2->position).x - (g_CDemonSetPtr->collision_normal).x * fVar8;
      fVar6 = (this_ptr->base).location.position.z;
      (this_ptr->base).location.position.y = fVar5 - fVar12 * fVar8;
      bVar4 = true;
      (this_ptr->base).location.position.z = fVar6 - fVar4 * fVar8;
    }
    pCVar17 = pCVar17 + 3;
    local_24 = local_24 + 3;
    pCVar16 = pCVar16 + 3;
    local_2c = local_2c + 3;
    local_38 = local_38 + 1;
  } while (local_38 < 3);
  if (bVar4) {
    fVar12 = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                       (&this_ptr->base,this_ptr->collision_cylinder_height,(CVector3f *)0x0);
    this_ptr->closest_distance_threshold = fVar12;
  }
  fVar7 = (this_ptr->base).location.position.y + fVar7;
  (this_ptr->base).location.position.y = fVar7;
  if (this_ptr->closest_distance_threshold <= fVar7) {
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
  core_setcolid_cpp_CDemonSet_init_FUN_00574180(pCVar6);
  return;
}
