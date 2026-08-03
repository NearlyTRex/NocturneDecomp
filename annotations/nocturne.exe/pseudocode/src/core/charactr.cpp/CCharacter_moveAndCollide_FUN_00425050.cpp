// Name: core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
// Address: 00425050
// Address Range: [[00425050, 0042595a]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(CCharacter *this_ptr,CVector3f *velocity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(CCharacter *this_ptr,CVector3f *velocity)

{
  CLocation *pCVar1;
  UOrientationVector *pUVar2;
  CCharacter *this_ptr_00;
  float fVar3;
  char *pcVar4;
  CDemonSet *pCVar5;
  CVector3f *pCVar6;
  CVector3f *pCVar7;
  SMotion *str1;
  uint uVar8;
  CVector3f *pCVar9;
  int iVar10;
  SMotion *pSVar11;
  int iVar12;
  byte bVar13;
  float afStackY_1064 [985];
  float local_c8;
  CVector3f CStack_c4;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  CVector3f local_94;
  CVector3f local_88;
  char local_7c [4];
  float afStack_78 [4];
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  CVector3f *local_58;
  int local_54;
  CVector3f *local_50;
  CVector3f *local_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  int local_3c;
  float local_38;
  CLocation *local_34;
  CLocation *local_30;
  CVector3f *local_2c;
  CVector3f *local_28;
  CVector3f *local_24;
  float local_20;
  CVector3f *local_1c;
  int local_18;
  float local_14;
  
  bVar13 = 0;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(&this_ptr->base,&local_94,velocity);
  if ((this_ptr->base).standing_platform != (CPlatform *)0x0) {
    (this_ptr->base).location.position.y =
         (this_ptr->base).platform_position_delta.y + (this_ptr->base).location.position.y;
    local_94.x = local_94.x + (this_ptr->base).platform_position_delta.x;
    local_94.z = local_94.z + (this_ptr->base).platform_position_delta.z;
    (this_ptr->base).platform_position_delta.z = 0.0;
    pUVar2 = &(this_ptr->base).orient;
    (this_ptr->base).platform_position_delta.y = (this_ptr->base).platform_position_delta.z;
    (this_ptr->base).platform_position_delta.x = (this_ptr->base).platform_position_delta.y;
    pCVar9 = &(this_ptr->base).platform_orientation_delta;
    (pUVar2->vec).x = pCVar9->x + (pUVar2->vec).x;
    (this_ptr->base).orient.vec.y =
         (this_ptr->base).platform_orientation_delta.y + (this_ptr->base).orient.vec.y;
    (this_ptr->base).orient.vec.z =
         (this_ptr->base).platform_orientation_delta.z + (this_ptr->base).orient.vec.z;
    (this_ptr->base).platform_orientation_delta.z = 0.0;
    (this_ptr->base).platform_orientation_delta.y = (this_ptr->base).platform_orientation_delta.z;
    pCVar9->x = (this_ptr->base).platform_orientation_delta.y;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(&this_ptr->base);
  }
  DAT_00765a9c = (CDemonActor *)0x0;
  if ((((ABS(velocity->z) == 0.0) && (ABS(velocity->x) == 0.0)) && (velocity->y <= 0.0)) &&
     (((this_ptr->base).standing_platform == (CPlatform *)0x0 &&
      ((this_ptr->base).location.position.y == this_ptr->closest_distance_threshold)))) {
    core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
    (this_ptr->velocity).z = 0.0;
    (this_ptr->velocity).y = (this_ptr->velocity).z;
    (this_ptr->velocity).x = (this_ptr->velocity).y;
    return;
  }
  if ((this_ptr->model).model_name[0] != '\0') {
    str1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&(this_ptr->model).motion_controller);
    uVar8 = 0xffffffff;
    pSVar11 = str1;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar4 = pSVar11->motion_name;
      pSVar11 = (SMotion *)((int)pSVar11 + (uint)bVar13 * -2 + 1);
    } while (*pcVar4 != '\0');
    iVar10 = ~uVar8 - 0xc;
    local_7c[0] = "noCollision"[0];
    local_7c[1] = "noCollision"[1];
    local_7c[2] = "noCollision"[2];
    local_7c[3] = "noCollision"[3];
    afStack_78[(uint)bVar13 * -2] = *(float *)("noCollision" + (uint)bVar13 * -8 + 4);
    afStack_78[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         *(float *)("noCollision" + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
    iVar12 = 0;
    local_18 = iVar10;
    if (-1 < iVar10) {
      do {
        iVar10 = _strnicmp(str1->motion_name,local_7c,0xb);
        if (iVar10 == 0) {
          (this_ptr->velocity).z = 0.0;
          (this_ptr->velocity).y = (this_ptr->velocity).z;
          (this_ptr->velocity).x = (this_ptr->velocity).y;
          return;
        }
        iVar12 = iVar12 + 1;
        str1 = (SMotion *)(str1->motion_name + 1);
      } while (iVar12 <= local_18);
    }
  }
  local_1c = this_ptr->collision_test_points;
  iVar10 = 0;
  local_4c = this_ptr->collision_test_normals;
  local_50 = this_ptr->collision_test_points + 3;
  do {
    pCVar6 = local_1c + iVar10 * 3;
    pCVar9 = local_4c;
    do {
      pCVar6->z = 0.0;
      pCVar6->y = pCVar6->z;
      pCVar6->x = pCVar6->z;
      pCVar9->z = 0.0;
      pCVar6 = pCVar6 + 1;
      pCVar9->y = pCVar9->z;
      pCVar9->x = pCVar9->z;
      pCVar9 = pCVar9 + 1;
    } while (pCVar6 != local_50);
    iVar10 = iVar10 + 1;
    local_4c = local_4c + 3;
    local_50 = local_50 + 3;
  } while (iVar10 < 5);
  pCVar1 = &(this_ptr->base).location;
  local_ac = (pCVar1->position).x;
  local_a8 = (this_ptr->base).location.position.y;
  local_a4 = (this_ptr->base).location.position.z;
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(g_CDemonSet_PTR_005be368,&this_ptr->base);
  local_3c = 0;
  local_20 = velocity->y;
  local_24 = this_ptr->collision_test_normals;
  local_58 = this_ptr->collision_test_points;
  local_28 = this_ptr->collision_test_points + 1;
  pCVar9 = this_ptr->collision_test_normals + 1;
  local_2c = this_ptr->collision_test_normals + 2;
  pCVar6 = this_ptr->collision_test_points + 2;
  local_34 = pCVar1;
  local_30 = pCVar1;
  do {
    local_94.y = 0.0;
    local_38 = this_ptr->collision_cylinder_top * this_ptr->size_scale;
    if (local_38 < this_ptr->collision_cylinder_bottom * this_ptr->size_scale) {
      local_38 = (this_ptr->model).bounding_box.max.y;
    }
    fVar3 = this_ptr->collision_cylinder_bottom * this_ptr->size_scale;
    if (local_38 < fVar3) {
      local_38 = this_ptr->size_scale * (float)0.5 + fVar3;
    }
    local_14 = core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00510a40
                         (g_CDemonSet_PTR_005be368,(this_ptr->base).location.position.x,
                          (this_ptr->base).location.position.z,local_94.x,local_94.z,
                          this_ptr->collision_cylinder_radius * this_ptr->size_scale,
                          this_ptr->collision_cylinder_bottom * this_ptr->size_scale +
                          (this_ptr->base).location.position.y,
                          (this_ptr->base).location.position.y + local_38);
    if (DAT_00765a9c == (CDemonActor *)0x0) {
      DAT_00765a9c = g_CDemonSet_PTR_005be368->collision_actor;
    }
    pCVar7 = local_58 + local_3c * 3;
    if (pCVar7 != (CVector3f *)&DAT_014b89e8) {
      pCVar7->x = _DAT_014b89e8;
      pCVar7->y = _DAT_014b89ec;
      pCVar7->z = _DAT_014b89f0;
    }
    if (local_28 != (CVector3f *)&DAT_014b89f4) {
      local_28->x = _DAT_014b89f4;
      local_28->y = _DAT_014b89f8;
      local_28->z = _DAT_014b89fc;
    }
    if (pCVar6 != (CVector3f *)&DAT_014b8a00) {
      pCVar6->x = _DAT_014b8a00;
      pCVar6->y = _DAT_014b8a04;
      pCVar6->z = _DAT_014b8a08;
    }
    if (0.0 <= local_14) {
      local_c8 = local_14;
      if (1.0 < local_14) {
        local_c8 = 1.0;
      }
      afStack_78[2] = local_94.x * local_c8;
      afStack_78[3] = local_94.y * local_c8;
      local_68 = local_94.z * local_c8;
      (local_34->position).x = (local_34->position).x + afStack_78[2];
      (local_34->position).y = (local_34->position).y + afStack_78[3];
      pCVar5 = g_CDemonSet_PTR_005be368;
      (local_34->position).z = (local_34->position).z + local_68;
      local_b8 = (pCVar5->collision_normal).x;
      local_b4 = (pCVar5->collision_normal).y;
      local_b0 = (pCVar5->collision_normal).z;
      local_14 = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                           (&this_ptr->base,this_ptr->collision_cylinder_height,&local_88);
      local_54 = 0;
      pCVar7 = local_24 + local_3c * 3;
      this_ptr->closest_distance_threshold = local_14;
      if (pCVar7 != (CVector3f *)&DAT_014b89e8) {
        pCVar7->x = _DAT_014b89e8;
        pCVar7->y = _DAT_014b89ec;
        pCVar7->z = _DAT_014b89f0;
      }
      if (pCVar9 != (CVector3f *)&DAT_014b89f4) {
        pCVar9->x = _DAT_014b89f4;
        pCVar9->y = _DAT_014b89f8;
        pCVar9->z = _DAT_014b89fc;
      }
      if (local_2c != (CVector3f *)&DAT_014b8a00) {
        local_2c->x = _DAT_014b8a00;
        local_2c->y = _DAT_014b8a04;
        local_2c->z = _DAT_014b8a08;
      }
      this_ptr_00 = *(CCharacter **)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
      if ((this_ptr == this_ptr_00) && (local_c8 < 1.0)) {
        core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                  (&this_ptr_00->base,&CStack_c4,&g_CDemonSet_PTR_005be368->collision_normal);
        xxx_unk_c_FUN_004940d0(PTR_DAT_005b9284,CStack_c4.x,CStack_c4.z);
      }
      if ((this_ptr->base).location.position.y < this_ptr->closest_distance_threshold) {
        (this_ptr->base).location.position.y = this_ptr->closest_distance_threshold;
        local_a8 = (this_ptr->base).location.position.y;
      }
      if ((float)0.90000000000000002 < local_c8) break;
      local_b4 = 0.0;
      fVar3 = SQRT(local_b0 * local_b0 + local_b8 * local_b8);
      if (0.0 < fVar3) {
        fStack_40 = 1.0 / fVar3;
        local_b8 = local_b8 * fStack_40;
        local_b4 = fStack_40 * 0.0;
        local_b0 = local_b0 * fStack_40;
      }
      fStack_44 = (float)0.90000000000000002 - local_c8;
      local_94.x = local_94.x * fStack_44;
      local_94.y = local_94.y * fStack_44;
      local_94.z = local_94.z * fStack_44;
      fVar3 = local_b0 * local_94.z + local_b8 * local_94.x + local_b4 * local_94.y;
      if (0.0 <= fVar3) break;
      fVar3 = fVar3 * (float)1.2;
      fStack_64 = local_b8 * fVar3;
      fStack_60 = local_b4 * fVar3;
      fStack_5c = local_b0 * fVar3;
      local_94.x = local_94.x - fStack_64;
      local_94.y = local_94.y - fStack_60;
      local_94.z = local_94.z - fStack_5c;
    }
    else {
      local_48 = local_14 + (float)-0.01;
      local_a0 = (g_CDemonSet_PTR_005be368->collision_normal).x * local_48;
      local_9c = (g_CDemonSet_PTR_005be368->collision_normal).y * local_48;
      local_98 = (g_CDemonSet_PTR_005be368->collision_normal).z * local_48;
      (local_30->position).x = (local_30->position).x - local_a0;
      (local_30->position).y = (local_30->position).y - local_9c;
      local_54 = 1;
      (local_30->position).z = (local_30->position).z - local_98;
    }
    pCVar6 = pCVar6 + 3;
    pCVar9 = pCVar9 + 3;
    local_2c = local_2c + 3;
    local_3c = local_3c + 1;
    local_28 = local_28 + 3;
  } while (local_3c < 3);
  if (local_54 != 0) {
    local_14 = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                         (&this_ptr->base,this_ptr->collision_cylinder_height,(CVector3f *)0x0);
    this_ptr->closest_distance_threshold = local_14;
  }
  fVar3 = (this_ptr->base).location.position.y + local_20;
  (this_ptr->base).location.position.y = fVar3;
  if (this_ptr->closest_distance_threshold <= fVar3) {
    if ((this_ptr->is_on_ground != 0) &&
       ((this_ptr->base).location.position.y <
        this_ptr->closest_distance_threshold + (float)0.5)) {
      (this_ptr->base).location.position.y = this_ptr->closest_distance_threshold;
      local_a8 = (this_ptr->base).location.position.y;
    }
  }
  else {
    (this_ptr->base).location.position.y = this_ptr->closest_distance_threshold;
  }
  (this_ptr->velocity).z = 0.0;
  (this_ptr->velocity).y = (this_ptr->velocity).z;
  (this_ptr->velocity).x = (this_ptr->velocity).y;
  pCVar5 = g_CDemonSet_PTR_005be368;
  (this_ptr->velocity).y =
       ((this_ptr->base).location.position.y - local_a8) / g_CGame_PTR_005b9354->delta_time_float;
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(pCVar5);
  return;
}
