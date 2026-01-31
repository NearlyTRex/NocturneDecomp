// Name: core_charactr.cpp_CCharacter_FUN_00428f40
// Address: 00428f40
// Address Range: [[00428f40, 004297d9]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_FUN_00428f40(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_00428f40(CCharacter *this_ptr)

{
  CLocation *pCVar1;
  COrientation *pCVar2;
  bool bVar3;
  CDemonSet *pCVar4;
  char *pcVar5;
  CVector3f *pCVar6;
  float fVar7;
  SMotion *str1;
  int iVar8;
  float fVar9;
  uint uVar10;
  CVector3f *pCVar11;
  char *pcVar12;
  int iVar13;
  CVector3f *pCVar14;
  SMotion *pSVar15;
  byte bVar16;
  CVector3f *in_stack_00000008;
  float afStackY_106c [991];
  float local_c0;
  CVector3f local_a8;
  CVector3f local_9c;
  float local_90;
  float local_8c;
  float local_88;
  char local_84 [4];
  float afStack_80 [4];
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  char *local_50;
  char *local_4c;
  char *local_48;
  char *local_44;
  float local_40;
  int local_38;
  float local_34;
  CLocation *local_30;
  char *local_2c;
  CLocation *local_28;
  CVector3f *local_24;
  CVector3f *local_20;
  char *local_1c;
  float local_14;
  
  bVar16 = 0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (&this_ptr->base,&local_a8,in_stack_00000008);
  if ((this_ptr->base).standing_platform != (CPlatform *)0x0) {
    (this_ptr->base).location.position.y =
         (this_ptr->base).unk3.y + (this_ptr->base).location.position.y;
    local_a8.x = local_a8.x + (this_ptr->base).unk3.x;
    local_a8.z = local_a8.z + (this_ptr->base).unk3.z;
    (this_ptr->base).unk3.z = 0.0;
    pCVar2 = &(this_ptr->base).orient;
    (this_ptr->base).unk3.y = (this_ptr->base).unk3.z;
    (this_ptr->base).unk3.x = (this_ptr->base).unk3.y;
    pCVar11 = &(this_ptr->base).unk4;
    pCVar2->pitch = pCVar11->x + pCVar2->pitch;
    (this_ptr->base).orient.bank = (this_ptr->base).unk4.y + (this_ptr->base).orient.bank;
    (this_ptr->base).orient.heading = (this_ptr->base).unk4.z + (this_ptr->base).orient.heading;
    (this_ptr->base).unk4.z = 0.0;
    (this_ptr->base).unk4.y = (this_ptr->base).unk4.z;
    pCVar11->x = (this_ptr->base).unk4.y;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  }
  DAT_00823c50 = (CDemonActor *)0x0;
  if ((((ABS(in_stack_00000008->z) == 0.0) && (ABS(in_stack_00000008->x) == 0.0)) &&
      (in_stack_00000008->y <= 0.0)) &&
     (((this_ptr->base).standing_platform == (CPlatform *)0x0 &&
      ((this_ptr->base).location.position.y == *(float *)(this_ptr->unk1 + 8))))) {
    core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
    this_ptr->unk1[0x24] = '\0';
    this_ptr->unk1[0x25] = '\0';
    this_ptr->unk1[0x26] = '\0';
    this_ptr->unk1[0x27] = '\0';
    *(uint *)(this_ptr->unk1 + 0x20) = *(uint *)(this_ptr->unk1 + 0x24);
    *(uint *)(this_ptr->unk1 + 0x1c) = *(uint *)(this_ptr->unk1 + 0x20);
    return;
  }
  if ((this_ptr->model).model_name[0] != '\0') {
    str1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&(this_ptr->model).motion_controller);
    uVar10 = 0xffffffff;
    pSVar15 = str1;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar12 = pSVar15->motion_name;
      pSVar15 = (SMotion *)((int)pSVar15 + (uint)bVar16 * -2 + 1);
    } while (*pcVar12 != '\0');
    pCVar11 = (CVector3f *)(~uVar10 - 0xc);
    local_84[0] = "noCollision"[0];
    local_84[1] = "noCollision"[1];
    local_84[2] = "noCollision"[2];
    local_84[3] = "noCollision"[3];
    afStack_80[(uint)bVar16 * -2] = *(float *)("noCollision" + (uint)bVar16 * -8 + 4);
    afStack_80[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
         *(float *)("noCollision" + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
    iVar13 = 0;
    local_20 = pCVar11;
    if (-1 < (int)pCVar11) {
      do {
        iVar8 = strnicmp(str1->motion_name,local_84,0xb);
        if (iVar8 == 0) {
          this_ptr->unk1[0x24] = '\0';
          this_ptr->unk1[0x25] = '\0';
          this_ptr->unk1[0x26] = '\0';
          this_ptr->unk1[0x27] = '\0';
          *(uint *)(this_ptr->unk1 + 0x20) = *(uint *)(this_ptr->unk1 + 0x24);
          *(uint *)(this_ptr->unk1 + 0x1c) = *(uint *)(this_ptr->unk1 + 0x20);
          return;
        }
        iVar13 = iVar13 + 1;
        str1 = (SMotion *)(str1->motion_name + 1);
      } while (iVar13 <= (int)local_20);
    }
  }
  local_50 = this_ptr->cloth_data + 0x1c4;
  iVar13 = 0;
  local_44 = this_ptr->cloth_data + 0x278;
  local_48 = this_ptr->cloth_data + 0x1e8;
  do {
    pcVar5 = local_50 + iVar13 * 0x24;
    pcVar12 = local_44;
    do {
      pcVar5[8] = '\0';
      pcVar5[9] = '\0';
      pcVar5[10] = '\0';
      pcVar5[0xb] = '\0';
      *(uint *)(pcVar5 + 4) = *(uint *)(pcVar5 + 8);
      *(uint *)pcVar5 = *(uint *)(pcVar5 + 8);
      pcVar12[8] = '\0';
      pcVar12[9] = '\0';
      pcVar12[10] = '\0';
      pcVar12[0xb] = '\0';
      pcVar5 = pcVar5 + 0xc;
      *(uint *)(pcVar12 + 4) = *(uint *)(pcVar12 + 8);
      *(uint *)pcVar12 = *(uint *)(pcVar12 + 8);
      pcVar12 = pcVar12 + 0xc;
    } while (pcVar5 != local_48);
    iVar13 = iVar13 + 1;
    local_44 = local_44 + 0x24;
    local_48 = local_48 + 0x24;
  } while (iVar13 < 5);
  pCVar1 = &(this_ptr->base).location;
  fVar7 = (pCVar1->position).x;
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&this_ptr->base);
  local_38 = 0;
  local_54 = in_stack_00000008->y;
  local_4c = this_ptr->cloth_data + 0x278;
  local_1c = this_ptr->cloth_data + 0x1c4;
  local_24 = (CVector3f *)(this_ptr->cloth_data + 0x1d0);
  pCVar11 = (CVector3f *)(this_ptr->cloth_data + 0x290);
  local_2c = this_ptr->cloth_data + 0x284;
  pCVar14 = (CVector3f *)(this_ptr->cloth_data + 0x1dc);
  local_30 = pCVar1;
  local_28 = pCVar1;
  do {
    local_a8.y = 0.0;
    local_34 = *(float *)(this_ptr->cloth_data + 0x358) * this_ptr->size_scale;
    if (local_34 < *(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale) {
      local_34 = (this_ptr->model).bounding_box.max.y;
    }
    fVar9 = *(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale;
    if (local_34 < fVar9) {
      local_34 = this_ptr->size_scale * (float)0.5 + fVar9;
    }
    local_14 = core_setcolid_cpp_CDemonSet_testCapsuleCollision_FUN_00573470
                         (g_CDemonSetPtr,(this_ptr->base).location.position.x,
                          (this_ptr->base).location.position.z,local_a8.x,local_a8.z,
                          *(float *)(this_ptr->cloth_data + 0x348) * this_ptr->size_scale,
                          (void *)(*(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale +
                                  (this_ptr->base).location.position.y),
                          (void *)((this_ptr->base).location.position.y + local_34));
    if (DAT_00823c50 == (CDemonActor *)0x0) {
      DAT_00823c50 = g_CDemonSetPtr->collision_actor;
    }
    pCVar6 = (CVector3f *)(local_1c + local_38 * 0x24);
    if (pCVar6 != &g_TempNormal0) {
      pCVar6->x = g_TempNormal0.x;
      pCVar6->y = g_TempNormal0.y;
      pCVar6->z = g_TempNormal0.z;
    }
    if (local_24 != &g_TempNormal1) {
      local_24->x = g_TempNormal1.x;
      local_24->y = g_TempNormal1.y;
      local_24->z = g_TempNormal1.z;
    }
    if (pCVar14 != &g_TempNormal2) {
      pCVar14->x = g_TempNormal2.x;
      pCVar14->y = g_TempNormal2.y;
      pCVar14->z = g_TempNormal2.z;
    }
    local_c0 = local_14;
    if (0.0 <= local_14) {
      if (1.0 < local_14) {
        local_c0 = 1.0;
      }
      local_60 = local_a8.x * local_c0;
      local_5c = local_a8.y * local_c0;
      local_58 = local_a8.z * local_c0;
      (local_28->position).x = (local_28->position).x + local_60;
      (local_28->position).y = (local_28->position).y + local_5c;
      pCVar4 = g_CDemonSetPtr;
      (local_28->position).z = (local_28->position).z + local_58;
      afStack_80[2] = (pCVar4->collision_normal).x;
      afStack_80[3] = (pCVar4->collision_normal).y;
      local_70 = (pCVar4->collision_normal).z;
      fVar9 = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                        (&this_ptr->base,*(float *)(this_ptr->cloth_data + 0x344),&local_9c);
      bVar3 = false;
      pCVar6 = (CVector3f *)((int)local_2c * 0x24 + (int)local_40);
      *(float *)(this_ptr->unk1 + 8) = fVar9;
      if (pCVar6 != &g_TempNormal0) {
        pCVar6->x = g_TempNormal0.x;
        pCVar6->y = g_TempNormal0.y;
        pCVar6->z = g_TempNormal0.z;
      }
      if (local_20 != &g_TempNormal1) {
        local_20->x = g_TempNormal1.x;
        local_20->y = g_TempNormal1.y;
        local_20->z = g_TempNormal1.z;
      }
      if (pCVar11 != &g_TempNormal2) {
        pCVar11->x = g_TempNormal2.x;
        pCVar11->y = g_TempNormal2.y;
        pCVar11->z = g_TempNormal2.z;
      }
      if ((this_ptr->base).location.position.y < *(float *)(this_ptr->unk1 + 8)) {
        (this_ptr->base).location.position.y = *(float *)(this_ptr->unk1 + 8);
        local_a8.y = (this_ptr->base).location.position.y;
      }
      if ((float)0.90000000000000002 < fVar7) break;
      fVar9 = SQRT(fStack_64 * fStack_64 + fStack_6c * fStack_6c);
      fStack_68 = 0.0;
      if (0.0 < fVar9) {
        fVar9 = 1.0 / fVar9;
        fStack_6c = fStack_6c * fVar9;
        fStack_68 = fVar9 * 0.0;
        fStack_64 = fStack_64 * fVar9;
      }
      local_30 = (CLocation *)((float)0.90000000000000002 - fVar7);
      local_9c.x = local_9c.x * (float)local_30;
      local_9c.y = local_9c.y * (float)local_30;
      local_9c.z = local_9c.z * (float)local_30;
      fVar9 = fStack_64 * local_9c.z + fStack_6c * local_9c.x + fStack_68 * local_9c.y;
      if (0.0 <= fVar9) break;
      fVar9 = fVar9 * (float)1.2;
      local_60 = fStack_6c * fVar9;
      local_5c = fStack_68 * fVar9;
      local_58 = fStack_64 * fVar9;
      local_9c.x = local_9c.x - local_60;
      local_9c.y = local_9c.y - local_5c;
      local_9c.z = local_9c.z - local_58;
    }
    else {
      local_40 = local_14 + (float)-0.01;
      local_90 = (g_CDemonSetPtr->collision_normal).x * local_40;
      local_8c = (g_CDemonSetPtr->collision_normal).y * local_40;
      local_88 = (g_CDemonSetPtr->collision_normal).z * local_40;
      (local_30->position).x = (local_30->position).x - local_90;
      (local_30->position).y = (local_30->position).y - local_8c;
      bVar3 = true;
      (local_30->position).z = (local_30->position).z - local_88;
    }
    pCVar14 = pCVar14 + 3;
    local_24 = local_24 + 3;
    pCVar11 = pCVar11 + 3;
    local_2c = local_2c + 0x24;
    local_38 = local_38 + 1;
  } while (local_38 < 3);
  if (bVar3) {
    fVar7 = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                      (&this_ptr->base,*(float *)(this_ptr->cloth_data + 0x344),(CVector3f *)0x0);
    *(float *)(this_ptr->unk1 + 8) = fVar7;
  }
  fVar7 = (this_ptr->base).location.position.y + (float)local_48;
  (this_ptr->base).location.position.y = fVar7;
  if (*(float *)(this_ptr->unk1 + 8) <= fVar7) {
    if ((*(int *)(this_ptr->unk1 + 4) != 0) &&
       ((this_ptr->base).location.position.y <
        *(float *)(this_ptr->unk1 + 8) + (float)0.5)) {
      (this_ptr->base).location.position.y = *(float *)(this_ptr->unk1 + 8);
      local_a8.y = (this_ptr->base).location.position.y;
    }
  }
  else {
    (this_ptr->base).location.position.y = *(float *)(this_ptr->unk1 + 8);
  }
  this_ptr->unk1[0x24] = '\0';
  this_ptr->unk1[0x25] = '\0';
  this_ptr->unk1[0x26] = '\0';
  this_ptr->unk1[0x27] = '\0';
  *(uint *)(this_ptr->unk1 + 0x20) = *(uint *)(this_ptr->unk1 + 0x24);
  *(uint *)(this_ptr->unk1 + 0x1c) = *(uint *)(this_ptr->unk1 + 0x20);
  pCVar4 = g_CDemonSetPtr;
  *(float *)(this_ptr->unk1 + 0x20) =
       ((this_ptr->base).location.position.y - local_a8.y) / g_CGamePtr->delta_time_float;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(pCVar4);
  return;
}
