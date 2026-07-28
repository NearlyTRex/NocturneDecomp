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
  CCharacter *pCVar3;
  float fVar4;
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
  float afStackY_1064 [985];
  float local_c8;
  uint uStack_c4;
  uint uStack_bc;
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
  
  bVar14 = 0;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(this_ptr,&stack0xffffff6c,velocity);
  if ((this_ptr->base).standing_platform != (CPlatform *)0x0) {
    (this_ptr->base).location.position.y =
         (this_ptr->base).platform_position_delta.y + (this_ptr->base).location.position.y;
    local_94 = local_94 + (this_ptr->base).platform_position_delta.x;
    local_8c = local_8c + (this_ptr->base).platform_position_delta.z;
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
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(&this_ptr->base);
  }
  DAT_00765a9c = 0;
  if ((((ABS(velocity->z) == 0.0) && (ABS(velocity->x) == 0.0)) && (velocity->y <= 0.0)) &&
     (((this_ptr->base).standing_platform == (CPlatform *)0x0 &&
      ((this_ptr->base).location.position.y == this_ptr->closest_distance_threshold)))) {
    core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
    (this_ptr->velocity).z = 0.0;
    (this_ptr->velocity).y = (this_ptr->velocity).z;
    (this_ptr->velocity).x = (this_ptr->velocity).y;
    return;
  }
  if ((this_ptr->model).model_name[0] != '\0') {
    str1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
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
    local_7c[0] = "noCollision"[0];
    local_7c[1] = "noCollision"[1];
    local_7c[2] = "noCollision"[2];
    local_7c[3] = "noCollision"[3];
    afStack_78[(uint)bVar14 * -2] = *(float *)("noCollision" + (uint)bVar14 * -8 + 4);
    afStack_78[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         *(float *)("noCollision" + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
    iVar13 = 0;
    local_18 = iVar11;
    if (-1 < iVar11) {
      do {
        iVar11 = _strnicmp(str1->motion_name,local_7c,0xb);
        if (iVar11 == 0) {
          (this_ptr->velocity).z = 0.0;
          (this_ptr->velocity).y = (this_ptr->velocity).z;
          (this_ptr->velocity).x = (this_ptr->velocity).y;
          return;
        }
        iVar13 = iVar13 + 1;
        str1 = (SMotion *)(str1->motion_name + 1);
      } while (iVar13 <= local_18);
    }
  }
  local_1c = this_ptr->collision_test_points;
  iVar11 = 0;
  local_4c = this_ptr->collision_test_normals;
  local_50 = this_ptr->collision_test_points + 3;
  do {
    pCVar7 = local_1c + iVar11 * 3;
    pCVar10 = local_4c;
    do {
      pCVar7->z = 0.0;
      pCVar7->y = pCVar7->z;
      pCVar7->x = pCVar7->z;
      pCVar10->z = 0.0;
      pCVar7 = pCVar7 + 1;
      pCVar10->y = pCVar10->z;
      pCVar10->x = pCVar10->z;
      pCVar10 = pCVar10 + 1;
    } while (pCVar7 != local_50);
    iVar11 = iVar11 + 1;
    local_4c = local_4c + 3;
    local_50 = local_50 + 3;
  } while (iVar11 < 5);
  pCVar1 = &(this_ptr->base).location;
  local_ac = (pCVar1->position).x;
  local_a8 = (this_ptr->base).location.position.y;
  local_a4 = (this_ptr->base).location.position.z;
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,&this_ptr->base);
  local_3c = 0;
  local_20 = velocity->y;
  local_24 = this_ptr->collision_test_normals;
  local_58 = this_ptr->collision_test_points;
  local_28 = this_ptr->collision_test_points + 1;
  pCVar10 = this_ptr->collision_test_normals + 1;
  local_2c = this_ptr->collision_test_normals + 2;
  pCVar7 = this_ptr->collision_test_points + 2;
  local_34 = pCVar1;
  local_30 = pCVar1;
  do {
    local_90 = 0.0;
    local_38 = this_ptr->collision_cylinder_top * this_ptr->size_scale;
    if (local_38 < this_ptr->collision_cylinder_bottom * this_ptr->size_scale) {
      local_38 = (this_ptr->model).bounding_box.max.y;
    }
    fVar4 = this_ptr->collision_cylinder_bottom * this_ptr->size_scale;
    if (local_38 < fVar4) {
      local_38 = this_ptr->size_scale * (float)0.5 + fVar4;
    }
    local_14 = (float)core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_00510a40
                                (0x01E57284,(this_ptr->base).location.position.x,
                                 (this_ptr->base).location.position.z,local_94,local_8c,
                                 this_ptr->collision_cylinder_radius * this_ptr->size_scale,
                                 this_ptr->collision_cylinder_bottom * this_ptr->size_scale +
                                 (this_ptr->base).location.position.y,
                                 (this_ptr->base).location.position.y + local_38);
    if (DAT_00765a9c == 0) {
      DAT_00765a9c = *(int *)(0x01E57284->lights[199].filter_names[0x13] + 0x18);
    }
    pCVar8 = local_58 + local_3c * 3;
    if (pCVar8 != (CVector3f *)&DAT_014b89e8) {
      pCVar8->x = _DAT_014b89e8;
      pCVar8->y = _DAT_014b89ec;
      pCVar8->z = _DAT_014b89f0;
    }
    if (local_28 != (CVector3f *)&DAT_014b89f4) {
      local_28->x = _DAT_014b89f4;
      local_28->y = _DAT_014b89f8;
      local_28->z = _DAT_014b89fc;
    }
    if (pCVar7 != (CVector3f *)&DAT_014b8a00) {
      pCVar7->x = _DAT_014b8a00;
      pCVar7->y = _DAT_014b8a04;
      pCVar7->z = _DAT_014b8a08;
    }
    if (0.0 <= local_14) {
      local_c8 = local_14;
      if (1.0 < local_14) {
        local_c8 = 1.0;
      }
      afStack_78[2] = local_94 * local_c8;
      afStack_78[3] = local_90 * local_c8;
      local_68 = local_8c * local_c8;
      (local_34->position).x = (local_34->position).x + afStack_78[2];
      (local_34->position).y = (local_34->position).y + afStack_78[3];
      pCVar6 = 0x01E57284;
      (local_34->position).z = (local_34->position).z + local_68;
      local_b8 = *(float *)(pCVar6->lights[199].filter_names[0x12] + 0x24);
      local_b4 = *(float *)pCVar6->lights[199].filter_names[0x13];
      local_b0 = *(float *)(pCVar6->lights[199].filter_names[0x13] + 4);
      local_14 = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                           (&this_ptr->base,this_ptr->collision_cylinder_height,&local_88);
      local_54 = 0;
      pCVar8 = local_24 + local_3c * 3;
      this_ptr->closest_distance_threshold = local_14;
      if (pCVar8 != (CVector3f *)&DAT_014b89e8) {
        pCVar8->x = _DAT_014b89e8;
        pCVar8->y = _DAT_014b89ec;
        pCVar8->z = _DAT_014b89f0;
      }
      if (pCVar10 != (CVector3f *)&DAT_014b89f4) {
        pCVar10->x = _DAT_014b89f4;
        pCVar10->y = _DAT_014b89f8;
        pCVar10->z = _DAT_014b89fc;
      }
      if (local_2c != (CVector3f *)&DAT_014b8a00) {
        local_2c->x = _DAT_014b8a00;
        local_2c->y = _DAT_014b8a04;
        local_2c->z = _DAT_014b8a08;
      }
      pCVar3 = *(CCharacter **)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
      if ((this_ptr == pCVar3) && (local_c8 < 1.0)) {
        core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                  (pCVar3,&stack0xffffff3c,0x01E57284->lights[199].filter_names[0x12] + 0x24);
        xxx_unk_c_FUN_004940d0(INT_005b9284,uStack_c4,uStack_bc);
      }
      if ((this_ptr->base).location.position.y < this_ptr->closest_distance_threshold) {
        (this_ptr->base).location.position.y = this_ptr->closest_distance_threshold;
        local_a8 = (this_ptr->base).location.position.y;
      }
      if ((float)0.90000000000000002 < local_c8) break;
      local_b4 = 0.0;
      fVar4 = SQRT(local_b0 * local_b0 + local_b8 * local_b8);
      if (0.0 < fVar4) {
        fStack_40 = 1.0 / fVar4;
        local_b8 = local_b8 * fStack_40;
        local_b4 = fStack_40 * 0.0;
        local_b0 = local_b0 * fStack_40;
      }
      fStack_44 = (float)0.90000000000000002 - local_c8;
      local_94 = local_94 * fStack_44;
      local_90 = local_90 * fStack_44;
      local_8c = local_8c * fStack_44;
      fVar4 = local_b0 * local_8c + local_b8 * local_94 + local_b4 * local_90;
      if (0.0 <= fVar4) break;
      fVar4 = fVar4 * (float)1.2;
      fStack_64 = local_b8 * fVar4;
      fStack_60 = local_b4 * fVar4;
      fStack_5c = local_b0 * fVar4;
      local_94 = local_94 - fStack_64;
      local_90 = local_90 - fStack_60;
      local_8c = local_8c - fStack_5c;
    }
    else {
      local_48 = local_14 + (float)-0.01;
      local_a0 = *(float *)(0x01E57284->lights[199].filter_names[0x12] + 0x24) * local_48;
      local_9c = *(float *)0x01E57284->lights[199].filter_names[0x13] * local_48;
      local_98 = *(float *)(0x01E57284->lights[199].filter_names[0x13] + 4) * local_48;
      (local_30->position).x = (local_30->position).x - local_a0;
      (local_30->position).y = (local_30->position).y - local_9c;
      local_54 = 1;
      (local_30->position).z = (local_30->position).z - local_98;
    }
    pCVar7 = pCVar7 + 3;
    pCVar10 = pCVar10 + 3;
    local_2c = local_2c + 3;
    local_3c = local_3c + 1;
    local_28 = local_28 + 3;
  } while (local_3c < 3);
  if (local_54 != 0) {
    local_14 = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                         (&this_ptr->base,this_ptr->collision_cylinder_height,(CVector3f *)0x0);
    this_ptr->closest_distance_threshold = local_14;
  }
  fVar4 = (this_ptr->base).location.position.y + local_20;
  (this_ptr->base).location.position.y = fVar4;
  if (this_ptr->closest_distance_threshold <= fVar4) {
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
  pCVar6 = 0x01E57284;
  (this_ptr->velocity).y =
       ((this_ptr->base).location.position.y - local_a8) / *(float *)(0x01C775EC + 0x264);
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(pCVar6);
  return;
}
