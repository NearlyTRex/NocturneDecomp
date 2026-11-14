// Name: core_charactr.cpp_FUN_00423a60
// Address: 00423a60
// Address Range: [[00423a60, 0042442c]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00423a60(CCharacter *this_ptr,CVector3f *velocity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_FUN_00423a60(CCharacter *this_ptr,CVector3f *velocity)

{
  CLocation *pCVar1;
  UOrientationVector *pUVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  float fVar6;
  bool bVar7;
  CVector3f *pCVar8;
  char *str1;
  uint uVar9;
  CVector3f *pCVar10;
  int iVar11;
  float *pfVar12;
  uint *puVar13;
  char *pcVar14;
  int iVar15;
  byte bVar16;
  float afStackY_10d4 [1003];
  CDemonSet *pCVar17;
  CCharacter *actor;
  float local_f8;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  CVector3f local_bc;
  float local_b0;
  float afStack_ac [4];
  float fStack_9c;
  float local_98;
  float local_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  char local_80 [4];
  float afStack_7c [4];
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  CVector3f *local_5c;
  CVector3f *local_58;
  CVector3f *local_54;
  float local_50;
  float fStack_4c;
  float local_48;
  CVector3f *local_44;
  float fStack_40;
  float local_3c;
  CVector3f *local_38;
  CVector3f *local_34;
  CVector3f *local_30;
  CVector3f *local_2c;
  CLocation *local_28;
  CVector3f *local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar16 = 0;
  DAT_007bdc98 = (CDemonActor *)0x0;
  if ((((ABS(velocity->z) == 0.0) && (ABS(velocity->x) == 0.0)) && (velocity->y <= 0.0)) &&
     (((this_ptr->base).standing_platform == (CPlatform *)0x0 &&
      ((this_ptr->base).location.position.y == this_ptr->closest_distance_threshold)))) {
    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    (this_ptr->velocity).z = 0.0;
    (this_ptr->velocity).y = (this_ptr->velocity).z;
    (this_ptr->velocity).x = (this_ptr->velocity).y;
    return;
  }
  core_actor_cpp_FUN_00408cf0(this_ptr,velocity);
  local_68 = local_b0;
  afStack_7c[(uint)bVar16 * -2 + 6] = afStack_ac[(uint)bVar16 * -2];
  afStack_7c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
       afStack_ac[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
  if (this_ptr->is_spectral != 0) {
    pCVar1 = &(this_ptr->base).location;
    (this_ptr->base).standing_platform = (CPlatform *)0x0;
    fVar3 = (this_ptr->base).location.position.y;
    fVar4 = (this_ptr->base).location.position.z;
    (pCVar1->position).x = (pCVar1->position).x + local_68;
    (this_ptr->base).location.position.y = fVar3 + local_64;
    (this_ptr->base).location.position.z = fVar4 + local_60;
    (this_ptr->velocity).z = 0.0;
    (this_ptr->velocity).y = (this_ptr->velocity).z;
    (this_ptr->velocity).x = (this_ptr->velocity).y;
    return;
  }
  if ((this_ptr->model).model_name[0] != '\0') {
    str1 = (char *)core_motion_cpp_FUN_005035c0(&this_ptr->model);
    uVar9 = 0xffffffff;
    pcVar14 = str1;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar5 = *pcVar14;
      pcVar14 = pcVar14 + (uint)bVar16 * -2 + 1;
    } while (cVar5 != '\0');
    iVar11 = ~uVar9 - 0xc;
    local_80[0] = "noCollision"[0];
    local_80[1] = "noCollision"[1];
    local_80[2] = "noCollision"[2];
    local_80[3] = "noCollision"[3];
    afStack_7c[(uint)bVar16 * -2] = *(float *)("noCollision" + (uint)bVar16 * -8 + 4);
    afStack_7c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
         *(float *)("noCollision" + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
    iVar15 = 0;
    local_20 = iVar11;
    if (-1 < iVar11) {
      do {
        iVar11 = _strnicmp(str1,local_80,0xb);
        if (iVar11 == 0) {
          (this_ptr->velocity).z = 0.0;
          (this_ptr->velocity).y = (this_ptr->velocity).z;
          (this_ptr->velocity).x = (this_ptr->velocity).y;
          return;
        }
        iVar15 = iVar15 + 1;
        str1 = str1 + 1;
      } while (iVar15 <= local_20);
    }
  }
  if ((this_ptr->base).standing_platform != (CPlatform *)0x0) {
    local_68 = local_68 + (this_ptr->base).platform_position_delta.x;
    local_60 = local_60 + (this_ptr->base).platform_position_delta.z;
    (this_ptr->base).location.position.y =
         (this_ptr->base).platform_position_delta.y + (this_ptr->base).location.position.y;
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
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(&this_ptr->base);
  }
  local_24 = this_ptr->collision_test_points;
  iVar11 = 0;
  local_54 = this_ptr->collision_test_normals;
  local_58 = this_ptr->collision_test_points + 3;
  do {
    pCVar8 = local_24 + iVar11 * 3;
    pCVar10 = local_54;
    do {
      pCVar8->z = 0.0;
      pCVar8->y = pCVar8->z;
      pCVar8->x = pCVar8->y;
      pCVar10->z = 0.0;
      pCVar8 = pCVar8 + 1;
      pCVar10->y = pCVar10->z;
      pCVar10->x = pCVar10->y;
      pCVar10 = pCVar10 + 1;
    } while (pCVar8 != local_58);
    iVar11 = iVar11 + 1;
    local_54 = local_54 + 3;
    local_58 = local_58 + 3;
  } while (iVar11 < 5);
  pfVar12 = (float *)((int)this_ptr + (uint)bVar16 * -8 + 0x24);
  local_c8 = (this_ptr->base).location.position.x;
  afStack_ac[(uint)bVar16 * -2 + -6] = *pfVar12;
  pCVar17 = g_CDemonSetPtr;
  actor = this_ptr;
  *(float *)(&stack0xffffff40 + (uint)bVar16 * -8 + (uint)bVar16 * -8) =
       pfVar12[(uint)bVar16 * -2 + 1];
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(pCVar17,&actor->base);
  local_48 = velocity->y;
  local_28 = &(this_ptr->base).location;
  local_5c = this_ptr->collision_test_normals;
  local_44 = this_ptr->collision_test_points;
  local_30 = this_ptr->collision_test_points + 1;
  local_34 = this_ptr->collision_test_points + 2;
  local_2c = this_ptr->collision_test_normals + 1;
  local_38 = this_ptr->collision_test_normals + 2;
  local_1c = 0;
  do {
    local_3c = this_ptr->collision_cylinder_top * this_ptr->size_scale;
    local_64 = 0.0;
    if (local_3c < this_ptr->collision_cylinder_bottom * this_ptr->size_scale) {
      local_3c = (this_ptr->model).bounding_box.max.y;
    }
    fVar3 = this_ptr->collision_cylinder_bottom * this_ptr->size_scale;
    if (local_3c < fVar3) {
      local_3c = this_ptr->size_scale * (float)_DAT_005ccc7e + fVar3;
    }
    local_f8 = (float)core_setcolid_cpp_FUN_00537030
                                (g_CDemonSetPtr,(this_ptr->base).location.position.x,
                                 (this_ptr->base).location.position.z,local_68,local_60,
                                 this_ptr->collision_cylinder_radius * this_ptr->size_scale,
                                 this_ptr->collision_cylinder_bottom * this_ptr->size_scale +
                                 (this_ptr->base).location.position.y,
                                 (this_ptr->base).location.position.y + local_3c);
    pCVar1 = local_28;
    local_18 = local_f8;
    if (DAT_007bdc98 == (CDemonActor *)0x0) {
      DAT_007bdc98 = g_CDemonSetPtr->collision_actor;
    }
    pCVar10 = local_44 + local_1c * 3;
    if (pCVar10 != (CVector3f *)&DAT_01510da8) {
      pCVar10->x = _DAT_01510da8;
      pCVar10->y = _DAT_01510dac;
      pCVar10->z = _DAT_01510db0;
    }
    if (local_30 != (CVector3f *)&DAT_01510db4) {
      local_30->x = _DAT_01510db4;
      local_30->y = _DAT_01510db8;
      local_30->z = _DAT_01510dbc;
    }
    if (local_34 != (CVector3f *)&DAT_01510dc0) {
      local_34->x = _DAT_01510dc0;
      local_34->y = _DAT_01510dc4;
      local_34->z = _DAT_01510dc8;
    }
    pCVar17 = g_CDemonSetPtr;
    if (0.0 <= local_f8) {
      if (1.0 < local_f8) {
        local_f8 = 1.0;
      }
      local_e0 = local_68 * local_f8;
      local_dc = local_64 * local_f8;
      local_d8 = local_60 * local_f8;
      local_98 = local_68 * local_f8;
      afStack_ac[(uint)bVar16 * -2 + 6] = *(float *)((int)&stack0xffffff24 + (uint)bVar16 * -8);
      afStack_ac[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
           *(float *)((int)&stack0xffffff28 + (uint)bVar16 * -8 + (uint)bVar16 * -8);
      (pCVar1->position).x = (pCVar1->position).x + local_98;
      (pCVar1->position).y = (pCVar1->position).y + local_94;
      (pCVar1->position).z = (pCVar1->position).z + local_90;
      pCVar10 = &local_bc;
      puVar13 = (uint *)((int)pCVar17 + (uint)bVar16 * -8 + 0x14d12c);
      local_d4 = (pCVar17->collision_normal).x;
      *(uint *)((int)&stack0xffffff30 + (uint)bVar16 * -8) = *puVar13;
      *(uint *)((int)&stack0xffffff34 + (uint)bVar16 * -8 + (uint)bVar16 * -8) =
           puVar13[(uint)bVar16 * -2 + 1];
      local_18 = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                           (&this_ptr->base,this_ptr->collision_cylinder_height,pCVar10);
      bVar7 = false;
      pCVar10 = local_5c + local_1c * 3;
      this_ptr->closest_distance_threshold = local_18;
      if (pCVar10 != (CVector3f *)&DAT_01510da8) {
        pCVar10->x = _DAT_01510da8;
        pCVar10->y = _DAT_01510dac;
        pCVar10->z = _DAT_01510db0;
      }
      if (local_2c != (CVector3f *)&DAT_01510db4) {
        local_2c->x = _DAT_01510db4;
        local_2c->y = _DAT_01510db8;
        local_2c->z = _DAT_01510dbc;
      }
      if (local_38 != (CVector3f *)&DAT_01510dc0) {
        local_38->x = _DAT_01510dc0;
        local_38->y = _DAT_01510dc4;
        local_38->z = _DAT_01510dc8;
      }
      if ((this_ptr->base).location.position.y < this_ptr->closest_distance_threshold) {
        (this_ptr->base).location.position.y = this_ptr->closest_distance_threshold;
        fStack_c4 = (this_ptr->base).location.position.y;
      }
      if ((float)_DAT_005ccc8e < local_f8) break;
      fVar3 = SQRT(fStack_cc * fStack_cc + local_d4 * local_d4);
      fStack_d0 = 0.0;
      if (0.0 < fVar3) {
        fStack_40 = 1.0 / fVar3;
        local_d4 = local_d4 * fStack_40;
        fStack_d0 = fStack_40 * 0.0;
        fStack_cc = fStack_cc * fStack_40;
      }
      fStack_4c = (float)_DAT_005ccc8e - local_f8;
      fVar3 = local_68 * fStack_4c;
      fVar4 = local_64 * fStack_4c;
      local_64 = fVar4;
      local_68 = fVar3;
      local_60 = local_60 * fStack_4c;
      fVar6 = fStack_cc * local_60 + local_d4 * fVar3 + fStack_d0 * fVar4;
      if (0.0 <= fVar6) break;
      fVar6 = fVar6 * (float)_DAT_005ccc86;
      fStack_8c = local_d4 * fVar6;
      fStack_88 = fStack_d0 * fVar6;
      fStack_84 = fStack_cc * fVar6;
      afStack_ac[2] = local_d4 * fVar6;
      afStack_ac[(uint)bVar16 * -2 + 3] = afStack_ac[(uint)bVar16 * -2 + 9];
      afStack_ac[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
           afStack_ac[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10];
      local_68 = fVar3 - afStack_ac[2];
      local_64 = fVar4 - afStack_ac[3];
      local_60 = local_60 - fStack_9c;
    }
    else {
      local_50 = local_f8 + (float)_DAT_005ccc96;
      local_e8 = (g_CDemonSetPtr->collision_normal).y * local_50;
      local_e4 = (g_CDemonSetPtr->collision_normal).z * local_50;
      afStack_7c[2] = (g_CDemonSetPtr->collision_normal).x * local_50;
      afStack_7c[(uint)bVar16 * -2 + 3] = *(float *)((int)&stack0xffffff18 + (uint)bVar16 * -8);
      afStack_7c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
           *(float *)((int)&stack0xffffff1c + (uint)bVar16 * -8 + (uint)bVar16 * -8);
      bVar7 = true;
      (pCVar1->position).x = (pCVar1->position).x - afStack_7c[2];
      (pCVar1->position).y = (pCVar1->position).y - afStack_7c[3];
      (pCVar1->position).z = (pCVar1->position).z - local_6c;
    }
    local_30 = local_30 + 3;
    local_34 = local_34 + 3;
    local_2c = local_2c + 3;
    local_38 = local_38 + 3;
    local_1c = local_1c + 1;
  } while (local_1c < 3);
  if (bVar7) {
    local_18 = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                         (&this_ptr->base,this_ptr->collision_cylinder_height,(CVector3f *)0x0);
    this_ptr->closest_distance_threshold = local_18;
  }
  fVar3 = (this_ptr->base).location.position.y + local_48;
  (this_ptr->base).location.position.y = fVar3;
  if (this_ptr->closest_distance_threshold <= fVar3) {
    if ((this_ptr->is_on_ground != 0) &&
       ((this_ptr->base).location.position.y <
        this_ptr->closest_distance_threshold + (float)_DAT_005ccc7e)) {
      (this_ptr->base).location.position.y = this_ptr->closest_distance_threshold;
      fStack_c4 = (this_ptr->base).location.position.y;
    }
  }
  else {
    (this_ptr->base).location.position.y = this_ptr->closest_distance_threshold;
  }
  (this_ptr->velocity).z = 0.0;
  (this_ptr->velocity).y = (this_ptr->velocity).z;
  (this_ptr->velocity).x = (this_ptr->velocity).y;
  pCVar17 = g_CDemonSetPtr;
  (this_ptr->velocity).y =
       ((this_ptr->base).location.position.y - fStack_c4) / g_CGamePtr->delta_time_float;
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(pCVar17);
  return;
}
