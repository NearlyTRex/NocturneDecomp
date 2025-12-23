// Name: core_charactr.cpp_CCharacter_FUN_00428f40
// Address: 00428f40
// Address Range: [[00428f40, 004297d9]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_00428f40(CCharacter * this_ptr)

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
  uint uVar8;
  char *pcVar9;
  BADSPACEBASE *in_ESP;
  int iVar10;
  CVector3f *pCVar11;
  CVector3f *pCVar12;
  SMotion *pSVar13;
  int iVar14;
  byte bVar15;
  CVector3f *in_stack_00000008;
  float afStackY_1070 [992];
  float local_c0;
  float fStack_bc;
  float local_b0;
  CVector3f local_a8;
  float local_9c;
  CVector3f CStack_98;
  float local_8c;
  float local_88;
  float local_84 [4];
  float local_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_5c;
  float local_58;
  char *local_54;
  char *local_4c;
  char *local_48;
  float fStack_3c;
  int local_38;
  float local_34;
  CLocation *local_30;
  CVector3f *local_2c;
  CLocation *local_28;
  char *local_24;
  CVector3f *local_20;
  char *local_1c;
  float fStack_18;
  
  bVar15 = 0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (&this_ptr->base_actor,&local_a8,in_stack_00000008);
  if ((this_ptr->base_actor).field11_0xdc != 0) {
    (this_ptr->base_actor).location.position.y =
         (this_ptr->base_actor).field12_0xe0.y + (this_ptr->base_actor).location.position.y;
    local_a8.x = local_a8.x + (this_ptr->base_actor).field12_0xe0.z;
    (this_ptr->base_actor).field12_0xe0.z = 0.0;
    pCVar2 = &(this_ptr->base_actor).orient;
    (this_ptr->base_actor).field12_0xe0.y = (this_ptr->base_actor).field12_0xe0.z;
    (this_ptr->base_actor).field12_0xe0.x = (this_ptr->base_actor).field12_0xe0.y;
    pCVar11 = &(this_ptr->base_actor).field13_0xec;
    pCVar2->pitch = pCVar11->x + pCVar2->pitch;
    (this_ptr->base_actor).orient.bank =
         (this_ptr->base_actor).field13_0xec.y + (this_ptr->base_actor).orient.bank;
    (this_ptr->base_actor).orient.heading =
         (this_ptr->base_actor).field13_0xec.z + (this_ptr->base_actor).orient.heading;
    (this_ptr->base_actor).field13_0xec.z = 0.0;
    (this_ptr->base_actor).field13_0xec.y = (this_ptr->base_actor).field13_0xec.z;
    pCVar11->x = (this_ptr->base_actor).field13_0xec.y;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base_actor);
  }
  DAT_00823c50 = (CDemonActor *)0x0;
  if ((((ABS(in_stack_00000008->z) == 0.0) && (ABS(in_stack_00000008->x) == 0.0)) &&
      (in_stack_00000008->y <= 0.0)) &&
     (((this_ptr->base_actor).field11_0xdc == 0 &&
      ((this_ptr->base_actor).location.position.y == *(float *)(this_ptr->field2_0x240c + 8))))) {
    core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
    this_ptr->field2_0x240c[0x24] = '\0';
    this_ptr->field2_0x240c[0x25] = '\0';
    this_ptr->field2_0x240c[0x26] = '\0';
    this_ptr->field2_0x240c[0x27] = '\0';
    *(uint *)(this_ptr->field2_0x240c + 0x20) =
         *(uint *)(this_ptr->field2_0x240c + 0x24);
    *(uint *)(this_ptr->field2_0x240c + 0x1c) =
         *(uint *)(this_ptr->field2_0x240c + 0x20);
    return;
  }
  if ((this_ptr->model).model_name[0] != '\0') {
    str1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&(this_ptr->model).motion_controller);
    uVar8 = 0xffffffff;
    pSVar13 = str1;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar9 = pSVar13->motion_name;
      pSVar13 = (SMotion *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
    } while (*pcVar9 != '\0');
    iVar10 = ~uVar8 - 0xc;
    local_88 = (float)"noCollision"._0_4_;
    local_84[(uint)bVar15 * -2] = *(float *)("noCollision" + (uint)bVar15 * -8 + 4);
    local_84[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         *(float *)("noCollision" + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    iVar14 = 0;
    local_24 = (char *)iVar10;
    if (-1 < iVar10) {
      do {
        iVar10 = crt_string_c_strnicmp_FUN_005ff070(str1->motion_name,(char *)&local_88,0xb);
        if (iVar10 == 0) {
          this_ptr->field2_0x240c[0x24] = '\0';
          this_ptr->field2_0x240c[0x25] = '\0';
          this_ptr->field2_0x240c[0x26] = '\0';
          this_ptr->field2_0x240c[0x27] = '\0';
          *(uint *)(this_ptr->field2_0x240c + 0x20) =
               *(uint *)(this_ptr->field2_0x240c + 0x24);
          *(uint *)(this_ptr->field2_0x240c + 0x1c) =
               *(uint *)(this_ptr->field2_0x240c + 0x20);
          return;
        }
        iVar14 = iVar14 + 1;
        str1 = (SMotion *)(str1->motion_name + 1);
      } while (iVar14 <= (int)local_24);
    }
  }
  local_54 = this_ptr->cloth_data + 0x1c4;
  iVar10 = 0;
  local_48 = this_ptr->cloth_data + 0x278;
  local_4c = this_ptr->cloth_data + 0x1e8;
  do {
    pcVar5 = local_54 + iVar10 * 0x24;
    pcVar9 = local_48;
    do {
      pcVar5[8] = '\0';
      pcVar5[9] = '\0';
      pcVar5[10] = '\0';
      pcVar5[0xb] = '\0';
      *(uint *)(pcVar5 + 4) = *(uint *)(pcVar5 + 8);
      *(uint *)pcVar5 = *(uint *)(pcVar5 + 8);
      pcVar9[8] = '\0';
      pcVar9[9] = '\0';
      pcVar9[10] = '\0';
      pcVar9[0xb] = '\0';
      pcVar5 = pcVar5 + 0xc;
      *(uint *)(pcVar9 + 4) = *(uint *)(pcVar9 + 8);
      *(uint *)pcVar9 = *(uint *)(pcVar9 + 8);
      pcVar9 = pcVar9 + 0xc;
    } while (pcVar5 != local_4c);
    iVar10 = iVar10 + 1;
    local_48 = local_48 + 0x24;
    local_4c = local_4c + 0x24;
  } while (iVar10 < 5);
  pCVar1 = &(this_ptr->base_actor).location;
  local_b0 = (this_ptr->base_actor).location.position.z;
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&this_ptr->base_actor);
  local_38 = 0;
  local_54 = (char *)in_stack_00000008->y;
  local_4c = this_ptr->cloth_data + 0x278;
  local_1c = this_ptr->cloth_data + 0x1c4;
  local_24 = this_ptr->cloth_data + 0x1d0;
  pCVar11 = (CVector3f *)(this_ptr->cloth_data + 0x290);
  local_2c = (CVector3f *)(this_ptr->cloth_data + 0x284);
  pCVar12 = (CVector3f *)(this_ptr->cloth_data + 0x1dc);
  local_30 = pCVar1;
  local_28 = pCVar1;
  do {
    local_a8.y = 0.0;
    local_34 = *(float *)(this_ptr->cloth_data + 0x358) * this_ptr->size_scale;
    if (local_34 < *(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale) {
      local_34 = (this_ptr->model).bounding_box.max.y;
    }
    fVar7 = *(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale;
    if (local_34 < fVar7) {
      local_34 = this_ptr->size_scale * (float)0.5 + fVar7;
    }
    fStack_bc = core_setcolid_cpp_CDemonSet_testCapsuleCollision_FUN_00573470
                          (g_CDemonSetPtr,(this_ptr->base_actor).location.position.x,
                           (this_ptr->base_actor).location.position.z,local_a8.x,local_a8.z,
                           *(float *)(this_ptr->cloth_data + 0x348) * this_ptr->size_scale,
                           (void *)(*(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale
                                   + (this_ptr->base_actor).location.position.y),
                           (void *)((this_ptr->base_actor).location.position.y + local_34));
    if (DAT_00823c50 == (CDemonActor *)0x0) {
      DAT_00823c50 = g_CDemonSetPtr->collision_actor;
    }
    pCVar6 = (CVector3f *)((int)local_34 * 0x24 + (int)fStack_18);
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
    if (pCVar12 != &g_TempNormal2) {
      pCVar12->x = g_TempNormal2.x;
      pCVar12->y = g_TempNormal2.y;
      pCVar12->z = g_TempNormal2.z;
    }
    if (0.0 <= fStack_bc) {
      if (1.0 < fStack_bc) {
        fStack_bc = 1.0;
      }
      local_5c = local_a8.y * fStack_bc;
      local_58 = local_a8.z * fStack_bc;
      local_54 = (char *)(local_9c * fStack_bc);
      *(float *)local_24 = *(float *)local_24 + local_5c;
      *(float *)(local_24 + 4) = *(float *)(local_24 + 4) + local_58;
      pCVar4 = g_CDemonSetPtr;
      *(float *)(local_24 + 8) = *(float *)(local_24 + 8) + (float)local_54;
      local_74 = (pCVar4->collision_normal).x;
      local_70 = (pCVar4->collision_normal).y;
      fStack_6c = (pCVar4->collision_normal).z;
      fVar7 = (*((this_ptr->base_actor).vtable)->cylinderGroundCheck)
                        (&this_ptr->base_actor,*(float *)(this_ptr->cloth_data + 0x344),&CStack_98);
      bVar3 = false;
      pCVar6 = (CVector3f *)(local_4c + local_38 * 0x24);
      *(float *)(this_ptr->field2_0x240c + 8) = fVar7;
      if (pCVar6 != &g_TempNormal0) {
        pCVar6->x = g_TempNormal0.x;
        pCVar6->y = g_TempNormal0.y;
        pCVar6->z = g_TempNormal0.z;
      }
      if (local_2c != &g_TempNormal1) {
        local_2c->x = g_TempNormal1.x;
        local_2c->y = g_TempNormal1.y;
        local_2c->z = g_TempNormal1.z;
      }
      if (pCVar11 != &g_TempNormal2) {
        pCVar11->x = g_TempNormal2.x;
        pCVar11->y = g_TempNormal2.y;
        pCVar11->z = g_TempNormal2.z;
      }
      if ((this_ptr->base_actor).location.position.y < *(float *)(this_ptr->field2_0x240c + 8)) {
        (this_ptr->base_actor).location.position.y = *(float *)(this_ptr->field2_0x240c + 8);
        local_b0 = (this_ptr->base_actor).location.position.y;
      }
      if ((float)0.90000000000000002 < local_c0) break;
      fVar7 = SQRT(local_70 * local_70 + local_84[3] * local_84[3]);
      local_74 = 0.0;
      if (0.0 < fVar7) {
        fStack_18 = 1.0 / fVar7;
        local_84[3] = local_84[3] * fStack_18;
        local_74 = fStack_18 * 0.0;
        local_70 = local_70 * fStack_18;
      }
      fStack_3c = (float)0.90000000000000002 - local_c0;
      local_a8.x = local_a8.x * fStack_3c;
      local_a8.y = local_a8.y * fStack_3c;
      local_a8.z = local_a8.z * fStack_3c;
      fVar7 = local_70 * local_a8.z + local_84[3] * local_a8.x + local_74 * local_a8.y;
      if (0.0 <= fVar7) break;
      fVar7 = fVar7 * (float)1.2;
      fStack_6c = local_84[3] * fVar7;
      fStack_68 = local_74 * fVar7;
      fStack_64 = local_70 * fVar7;
      local_a8.x = local_a8.x - fStack_6c;
      local_a8.y = local_a8.y - fStack_68;
      local_a8.z = local_a8.z - fStack_64;
    }
    else {
      fStack_3c = fStack_bc + (float)-0.01;
      local_8c = (g_CDemonSetPtr->collision_normal).x * fStack_3c;
      local_88 = (g_CDemonSetPtr->collision_normal).y * fStack_3c;
      local_84[0] = (g_CDemonSetPtr->collision_normal).z * fStack_3c;
      local_2c->x = local_2c->x - local_8c;
      local_2c->y = local_2c->y - local_88;
      bVar3 = true;
      local_2c->z = local_2c->z - local_84[0];
    }
    pCVar12 = pCVar12 + 3;
    local_24 = local_24 + 0x24;
    pCVar11 = pCVar11 + 3;
    local_2c = local_2c + 3;
    local_38 = local_38 + 1;
  } while (local_38 < 3);
  if (bVar3) {
    fVar7 = (*((this_ptr->base_actor).vtable)->cylinderGroundCheck)
                      (&this_ptr->base_actor,*(float *)(this_ptr->cloth_data + 0x344),
                       (CVector3f *)0x0);
    *(float *)(this_ptr->field2_0x240c + 8) = fVar7;
  }
  fVar7 = (this_ptr->base_actor).location.position.y + (float)local_54;
  (this_ptr->base_actor).location.position.y = fVar7;
  if (*(float *)(this_ptr->field2_0x240c + 8) <= fVar7) {
    if ((*(int *)(this_ptr->field2_0x240c + 4) != 0) &&
       ((this_ptr->base_actor).location.position.y <
        *(float *)(this_ptr->field2_0x240c + 8) + (float)0.5)) {
      (this_ptr->base_actor).location.position.y = *(float *)(this_ptr->field2_0x240c + 8);
      local_b0 = (this_ptr->base_actor).location.position.y;
    }
  }
  else {
    (this_ptr->base_actor).location.position.y = *(float *)(this_ptr->field2_0x240c + 8);
  }
  this_ptr->field2_0x240c[0x24] = '\0';
  this_ptr->field2_0x240c[0x25] = '\0';
  this_ptr->field2_0x240c[0x26] = '\0';
  this_ptr->field2_0x240c[0x27] = '\0';
  *(uint *)(this_ptr->field2_0x240c + 0x20) = *(uint *)(this_ptr->field2_0x240c + 0x24);
  *(uint *)(this_ptr->field2_0x240c + 0x1c) = *(uint *)(this_ptr->field2_0x240c + 0x20);
  pCVar4 = g_CDemonSetPtr;
  *(float *)(this_ptr->field2_0x240c + 0x20) =
       ((this_ptr->base_actor).location.position.y - local_b0) / g_CGamePtr->delta_time_float;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(pCVar4);
  return;
}
