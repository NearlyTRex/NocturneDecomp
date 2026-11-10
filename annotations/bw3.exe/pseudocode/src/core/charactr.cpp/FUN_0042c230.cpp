// Name: core_charactr.cpp_FUN_0042c230
// Address: 0042c230
// Address Range: [[0042c230, 0042cce3]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_0042c230(CCharacter *this_ptr,CVector3f *velocity)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_FUN_0042c230(CCharacter *this_ptr,CVector3f *velocity)

{
  CLocation *pCVar1;
  UOrientationVector *pUVar2;
  float fVar3;
  float fVar4;
  SMotion SVar5;
  bool bVar6;
  CVector3f *pCVar7;
  SMotion *str1;
  uint uVar8;
  CVector3f *pCVar9;
  int iVar10;
  float *pfVar11;
  uint *puVar12;
  SMotion *pSVar13;
  int iVar14;
  byte bVar15;
  float afStackY_10e4 [1003];
  CDemonSet *pCVar16;
  CCharacter *actor;
  float local_104;
  float local_fc;
  float local_f8;
  float local_f4;
  CVector3f local_f0;
  float local_e4;
  float afStack_e0 [4];
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  CVector3f local_c0;
  float local_b4;
  float local_b0 [2];
  char local_a8 [4];
  float afStack_a4 [4];
  float local_94;
  CVector3f CStack_90;
  float local_84;
  float local_80 [5];
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  CVector3f *local_5c;
  int local_58;
  float fStack_54;
  CVector3f *local_50;
  CVector3f *local_4c;
  CVector3f *local_48;
  float fStack_44;
  float local_40;
  CVector3f *local_3c;
  int local_38;
  float local_34;
  CVector3f *local_30;
  CVector3f *local_2c;
  CVector3f *local_28;
  CVector3f *local_24;
  CLocation *local_20;
  float fStack_1c;
  float local_14;
  
  bVar15 = 0;
  DAT_007e2cf0 = (CDemonActor *)0x0;
  if ((((ABS(velocity->z) == 0.0) && (ABS(velocity->x) == 0.0)) && (velocity->y <= 0.0)) &&
     (((this_ptr->base).standing_platform == (CPlatform *)0x0 &&
      ((this_ptr->base).location.position.y == this_ptr->closest_distance_threshold)))) {
    core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
    (this_ptr->velocity).z = 0.0;
    (this_ptr->velocity).y = (this_ptr->velocity).z;
    (this_ptr->velocity).x = (this_ptr->velocity).y;
    return;
  }
  core_actor_cpp_FUN_00408b00(this_ptr,velocity);
  local_fc = local_80[2];
  *(float *)((int)&stack0xffffff08 + (uint)bVar15 * -8) = local_80[(uint)bVar15 * -2 + 3];
  *(float *)((int)&stack0xffffff0c + (uint)bVar15 * -8 + (uint)bVar15 * -8) =
       local_80[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
  if (*(int *)&this_ptr->field_0x27a8 != 0) {
    pCVar1 = &(this_ptr->base).location;
    (this_ptr->base).standing_platform = (CPlatform *)0x0;
    fVar3 = (this_ptr->base).location.position.y;
    fVar4 = (this_ptr->base).location.position.z;
    (pCVar1->position).x = (pCVar1->position).x + local_80[2];
    (this_ptr->base).location.position.y = fVar3 + local_f8;
    (this_ptr->base).location.position.z = fVar4 + local_f4;
    (this_ptr->velocity).z = 0.0;
    (this_ptr->velocity).y = (this_ptr->velocity).z;
    (this_ptr->velocity).x = (this_ptr->velocity).y;
    return;
  }
  if ((this_ptr->model).model_name[0] != '\0') {
    str1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&(this_ptr->model).base);
    uVar8 = 0xffffffff;
    pSVar13 = str1;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      SVar5 = *pSVar13;
      pSVar13 = pSVar13 + (uint)bVar15 * -2 + 1;
    } while (SVar5 != (SMotion)0x0);
    iVar10 = ~uVar8 - 0xc;
    local_a8[0] = "noCollision"[0];
    local_a8[1] = "noCollision"[1];
    local_a8[2] = "noCollision"[2];
    local_a8[3] = "noCollision"[3];
    afStack_a4[(uint)bVar15 * -2] = *(float *)("noCollision" + (uint)bVar15 * -8 + 4);
    afStack_a4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         *(float *)("noCollision" + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    iVar14 = 0;
    local_58 = iVar10;
    if (-1 < iVar10) {
      do {
        iVar10 = _strnicmp((char *)str1,local_a8,0xb);
        if (iVar10 == 0) {
          (this_ptr->velocity).z = 0.0;
          (this_ptr->velocity).y = (this_ptr->velocity).z;
          (this_ptr->velocity).x = (this_ptr->velocity).y;
          return;
        }
        iVar14 = iVar14 + 1;
        str1 = str1 + 1;
      } while (iVar14 <= local_58);
    }
  }
  if ((this_ptr->base).standing_platform != (CPlatform *)0x0) {
    local_fc = local_80[2] + (this_ptr->base).platform_position_delta.x;
    local_f4 = local_f4 + (this_ptr->base).platform_position_delta.z;
    (this_ptr->base).location.position.y =
         (this_ptr->base).platform_position_delta.y + (this_ptr->base).location.position.y;
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
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(&this_ptr->base);
  }
  local_5c = this_ptr->collision_test_points;
  iVar10 = 0;
  local_50 = this_ptr->collision_test_normals;
  local_4c = this_ptr->collision_test_points + 3;
  do {
    pCVar7 = local_5c + iVar10 * 3;
    pCVar9 = local_50;
    do {
      pCVar7->z = 0.0;
      pCVar7->y = pCVar7->z;
      pCVar7->x = pCVar7->y;
      pCVar9->z = 0.0;
      pCVar7 = pCVar7 + 1;
      pCVar9->y = pCVar9->z;
      pCVar9->x = pCVar9->y;
      pCVar9 = pCVar9 + 1;
    } while (pCVar7 != local_4c);
    iVar10 = iVar10 + 1;
    local_50 = local_50 + 3;
    local_4c = local_4c + 3;
  } while (iVar10 < 5);
  pfVar11 = (float *)((int)this_ptr + (uint)bVar15 * -8 + 0x24);
  local_e4 = (this_ptr->base).location.position.x;
  afStack_e0[(uint)bVar15 * -2] = *pfVar11;
  pCVar16 = g_CDemonSetPtr;
  actor = this_ptr;
  afStack_e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] = pfVar11[(uint)bVar15 * -2 + 1];
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(pCVar16,&actor->base);
  local_60 = velocity->y;
  local_20 = &(this_ptr->base).location;
  local_3c = this_ptr->collision_test_normals;
  local_48 = this_ptr->collision_test_points;
  local_28 = this_ptr->collision_test_points + 1;
  local_30 = this_ptr->collision_test_points + 2;
  local_24 = this_ptr->collision_test_normals + 1;
  local_2c = this_ptr->collision_test_normals + 2;
  local_38 = 0;
  do {
    local_34 = *(float *)&this_ptr->field_0x3280 * *(float *)&this_ptr->field_0x27b8;
    local_f8 = 0.0;
    if (local_34 < *(float *)&this_ptr->field_0x327c * *(float *)&this_ptr->field_0x27b8) {
      local_34 = (this_ptr->model).bounding_box.max.y;
    }
    fVar3 = *(float *)&this_ptr->field_0x327c * *(float *)&this_ptr->field_0x27b8;
    if (local_34 < fVar3) {
      local_34 = *(float *)&this_ptr->field_0x27b8 * (float)_DAT_005b822e + fVar3;
    }
    local_104 = (float)core_setcolid_cpp_FUN_0053de10
                                 (g_CDemonSetPtr,(this_ptr->base).location.position.x,
                                  (this_ptr->base).location.position.z,local_fc,local_f4,
                                  *(float *)&this_ptr->field_0x3270 *
                                  *(float *)&this_ptr->field_0x27b8,
                                  *(float *)&this_ptr->field_0x327c *
                                  *(float *)&this_ptr->field_0x27b8 +
                                  (this_ptr->base).location.position.y,
                                  (this_ptr->base).location.position.y + local_34);
    pCVar1 = local_20;
    local_14 = local_104;
    if (DAT_007e2cf0 == (CDemonActor *)0x0) {
      DAT_007e2cf0 = g_CDemonSetPtr->collision_actor;
    }
    pCVar9 = local_48 + local_38 * 3;
    if (pCVar9 != (CVector3f *)&DAT_01548b58) {
      pCVar9->x = _DAT_01548b58;
      pCVar9->y = _DAT_01548b5c;
      pCVar9->z = _DAT_01548b60;
    }
    if (local_28 != (CVector3f *)&DAT_01548b64) {
      local_28->x = _DAT_01548b64;
      local_28->y = _DAT_01548b68;
      local_28->z = _DAT_01548b6c;
    }
    if (local_30 != (CVector3f *)&DAT_01548b70) {
      local_30->x = _DAT_01548b70;
      local_30->y = _DAT_01548b74;
      local_30->z = _DAT_01548b78;
    }
    pCVar16 = g_CDemonSetPtr;
    if (0.0 <= local_104) {
      if (1.0 < local_104) {
        local_104 = 1.0;
      }
      local_b4 = local_fc * local_104;
      local_b0[0] = local_f8 * local_104;
      local_b0[1] = local_f4 * local_104;
      local_6c = local_fc * local_104;
      local_80[(uint)bVar15 * -2 + 6] = local_b0[(uint)bVar15 * -2];
      local_80[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
           local_b0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
      (pCVar1->position).x = (pCVar1->position).x + local_6c;
      (pCVar1->position).y = (pCVar1->position).y + local_68;
      (pCVar1->position).z = (pCVar1->position).z + local_64;
      pCVar9 = &local_f0;
      puVar12 = (uint *)((int)pCVar16 + (uint)bVar15 * -8 + 0x14d12c);
      local_c0.x = (pCVar16->collision_normal).x;
      *(uint *)((int)&local_c0 + (uint)bVar15 * -8 + 4) = *puVar12;
      *(uint *)((int)&local_c0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           puVar12[(uint)bVar15 * -2 + 1];
      local_14 = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                           (&this_ptr->base,*(float *)&this_ptr->field_0x326c,pCVar9);
      bVar6 = false;
      pCVar9 = local_3c + local_38 * 3;
      this_ptr->closest_distance_threshold = local_14;
      if (pCVar9 != (CVector3f *)&DAT_01548b58) {
        pCVar9->x = _DAT_01548b58;
        pCVar9->y = _DAT_01548b5c;
        pCVar9->z = _DAT_01548b60;
      }
      if (local_24 != (CVector3f *)&DAT_01548b64) {
        local_24->x = _DAT_01548b64;
        local_24->y = _DAT_01548b68;
        local_24->z = _DAT_01548b6c;
      }
      if (local_2c != (CVector3f *)&DAT_01548b70) {
        local_2c->x = _DAT_01548b70;
        local_2c->y = _DAT_01548b74;
        local_2c->z = _DAT_01548b78;
      }
      if (afStack_e0[0] < this_ptr->closest_distance_threshold) {
        if ((CVector3f *)(afStack_a4 + 5) != &local_f0) {
          CStack_90.x = local_f0.x;
          CStack_90.y = local_f0.y;
          CStack_90.z = local_f0.z;
        }
        fStack_54 = SQRT(CStack_90.z * CStack_90.z +
                         CStack_90.x * CStack_90.x + CStack_90.y * CStack_90.y);
        if (fStack_54 <= 0.0) {
          CStack_90.y = 0.0;
          CStack_90.x = 0.0;
          CStack_90.z = 0.0;
        }
        else {
          fVar3 = 1.0 / fStack_54;
          CStack_90.x = CStack_90.x * fVar3;
          CStack_90.y = CStack_90.y * fVar3;
          CStack_90.z = CStack_90.z * fVar3;
        }
        if (CStack_90.y < (float)_DAT_005b823e) {
          (this_ptr->base).location.position.x = local_e4;
          (this_ptr->base).location.position.y = afStack_e0[0];
          (this_ptr->base).location.position.z = afStack_e0[1];
          if (&local_c0 == &local_f0) {
            return;
          }
          return;
        }
      }
      if ((this_ptr->base).location.position.y < this_ptr->closest_distance_threshold) {
        (this_ptr->base).location.position.y = this_ptr->closest_distance_threshold;
        afStack_e0[0] = (this_ptr->base).location.position.y;
      }
      if ((float)_DAT_005b8246 < local_104) break;
      fVar3 = SQRT(local_c0.z * local_c0.z + local_c0.x * local_c0.x);
      local_c0.y = 0.0;
      if (0.0 < fVar3) {
        fStack_1c = 1.0 / fVar3;
        local_c0.x = local_c0.x * fStack_1c;
        local_c0.y = fStack_1c * 0.0;
        local_c0.z = local_c0.z * fStack_1c;
      }
      local_104 = (float)_DAT_005b8246 - local_104;
      fStack_44 = local_104;
      fVar3 = local_f8 * local_104;
      local_f8 = fVar3;
      local_f4 = local_f4 * local_104;
      fVar4 = local_c0.z * local_f4 + local_c0.x * local_fc * local_104 + local_c0.y * fVar3;
      if (0.0 <= fVar4) break;
      fVar4 = fVar4 * (float)_DAT_005b8236;
      afStack_e0[2] = local_c0.x * fVar4;
      afStack_e0[3] = local_c0.y * fVar4;
      fStack_d0 = local_c0.z * fVar4;
      fStack_cc = local_c0.x * fVar4;
      afStack_e0[(uint)bVar15 * -2 + 6] = afStack_e0[(uint)bVar15 * -2 + 3];
      afStack_e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
           afStack_e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
      local_fc = local_fc * local_104 - fStack_cc;
      local_f8 = fVar3 - fStack_c8;
      local_f4 = local_f4 - fStack_c4;
    }
    else {
      local_40 = local_104 + (float)_DAT_005b824e;
      afStack_a4[2] = (g_CDemonSetPtr->collision_normal).x * local_40;
      afStack_a4[3] = (g_CDemonSetPtr->collision_normal).y * local_40;
      local_94 = (g_CDemonSetPtr->collision_normal).z * local_40;
      local_84 = afStack_a4[2];
      local_80[(uint)bVar15 * -2] = afStack_a4[(uint)bVar15 * -2 + 3];
      local_80[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
           afStack_a4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
      bVar6 = true;
      (pCVar1->position).x = (pCVar1->position).x - local_84;
      (pCVar1->position).y = (pCVar1->position).y - local_80[0];
      (pCVar1->position).z = (pCVar1->position).z - local_80[1];
    }
    local_28 = local_28 + 3;
    local_30 = local_30 + 3;
    local_24 = local_24 + 3;
    local_2c = local_2c + 3;
    local_38 = local_38 + 1;
  } while (local_38 < 3);
  if (bVar6) {
    local_14 = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                         (&this_ptr->base,*(float *)&this_ptr->field_0x326c,(CVector3f *)0x0);
    this_ptr->closest_distance_threshold = local_14;
  }
  fVar3 = (this_ptr->base).location.position.y + local_60;
  (this_ptr->base).location.position.y = fVar3;
  if (this_ptr->closest_distance_threshold <= fVar3) {
    if ((this_ptr->is_on_ground != 0) &&
       ((this_ptr->base).location.position.y <
        this_ptr->closest_distance_threshold + (float)_DAT_005b822e)) {
      (this_ptr->base).location.position.y = this_ptr->closest_distance_threshold;
      afStack_e0[0] = (this_ptr->base).location.position.y;
    }
  }
  else {
    (this_ptr->base).location.position.y = this_ptr->closest_distance_threshold;
  }
  (this_ptr->velocity).z = 0.0;
  (this_ptr->velocity).y = (this_ptr->velocity).z;
  (this_ptr->velocity).x = (this_ptr->velocity).y;
  pCVar16 = g_CDemonSetPtr;
  (this_ptr->velocity).y =
       ((this_ptr->base).location.position.y - afStack_e0[0]) / g_CGamePtr->delta_time_float;
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(pCVar16);
  return;
}
