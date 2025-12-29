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
  double dVar5;
  double dVar6;
  char *pcVar7;
  float fVar8;
  CVector3f *pCVar9;
  SMotion *str1;
  int iVar10;
  uint uVar11;
  CVector3f *pCVar12;
  char *pcVar13;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar14;
  int unaff_EDI;
  CVector3f *pCVar15;
  SMotion *pSVar16;
  byte bVar17;
  CVector3f *unaff_retaddr;
  CVector3f *in_stack_00000008;
  float afStackY_1060 [991];
  double local_9c;
  float fStack_94;
  float local_90;
  CVector3f local_8c;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float local_74 [4];
  float fStack_64;
  float local_60;
  float local_50;
  float local_4c;
  char *local_48;
  float local_44;
  char *local_40;
  char *pcStack_3c;
  float local_38;
  float local_30;
  int local_2c;
  float local_28;
  CLocation *local_24;
  char *local_20;
  CLocation *local_1c;
  char *pcStack_18;
  CVector3f *local_14;
  
  bVar17 = 0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (&this_ptr->base_actor,(CVector3f *)&stack0xffffff58,in_stack_00000008);
  if ((this_ptr->base_actor).field11_0xdc != 0) {
    (this_ptr->base_actor).location.position.y =
         (this_ptr->base_actor).field12_0xe0.y + (this_ptr->base_actor).location.position.y;
    local_9c = (double)(ulonglong)(uint)(local_9c._0_4_ + (this_ptr->base_actor).field12_0xe0.z);
    (this_ptr->base_actor).field12_0xe0.z = 0.0;
    pCVar2 = &(this_ptr->base_actor).orient;
    (this_ptr->base_actor).field12_0xe0.y = (this_ptr->base_actor).field12_0xe0.z;
    (this_ptr->base_actor).field12_0xe0.x = (this_ptr->base_actor).field12_0xe0.y;
    pCVar12 = &(this_ptr->base_actor).field13_0xec;
    pCVar2->pitch = pCVar12->x + pCVar2->pitch;
    (this_ptr->base_actor).orient.bank =
         (this_ptr->base_actor).field13_0xec.y + (this_ptr->base_actor).orient.bank;
    (this_ptr->base_actor).orient.heading =
         (this_ptr->base_actor).field13_0xec.z + (this_ptr->base_actor).orient.heading;
    (this_ptr->base_actor).field13_0xec.z = 0.0;
    (this_ptr->base_actor).field13_0xec.y = (this_ptr->base_actor).field13_0xec.z;
    pCVar12->x = (this_ptr->base_actor).field13_0xec.y;
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
    uVar11 = 0xffffffff;
    pSVar16 = str1;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar13 = pSVar16->motion_name;
      pSVar16 = (SMotion *)((int)pSVar16 + (uint)bVar17 * -2 + 1);
    } while (*pcVar13 != '\0');
    pCVar12 = (CVector3f *)(~uVar11 - 0xc);
    local_78 = (float)"noCollision"._0_4_;
    local_74[(uint)bVar17 * -2] = *(float *)("noCollision" + (uint)bVar17 * -8 + 4);
    local_74[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
         *(float *)("noCollision" + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
    iVar14 = 0;
    local_14 = pCVar12;
    if (-1 < (int)pCVar12) {
      do {
        iVar10 = crt_string_c_strnicmp_FUN_005ff070(str1->motion_name,(char *)&local_78,0xb);
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
      } while (iVar14 <= unaff_EBP);
    }
  }
  local_48 = this_ptr->cloth_data + 0x1c4;
  iVar14 = 0;
  pcStack_3c = this_ptr->cloth_data + 0x278;
  local_40 = this_ptr->cloth_data + 0x1e8;
  do {
    pcVar7 = local_48 + iVar14 * 0x24;
    pcVar13 = pcStack_3c;
    do {
      pcVar7[8] = '\0';
      pcVar7[9] = '\0';
      pcVar7[10] = '\0';
      pcVar7[0xb] = '\0';
      *(uint *)(pcVar7 + 4) = *(uint *)(pcVar7 + 8);
      *(uint *)pcVar7 = *(uint *)(pcVar7 + 8);
      pcVar13[8] = '\0';
      pcVar13[9] = '\0';
      pcVar13[10] = '\0';
      pcVar13[0xb] = '\0';
      pcVar7 = pcVar7 + 0xc;
      *(uint *)(pcVar13 + 4) = *(uint *)(pcVar13 + 8);
      *(uint *)pcVar13 = *(uint *)(pcVar13 + 8);
      pcVar13 = pcVar13 + 0xc;
    } while (pcVar7 != local_40);
    iVar14 = iVar14 + 1;
    pcStack_3c = pcStack_3c + 0x24;
    local_40 = local_40 + 0x24;
  } while (iVar14 < 5);
  pCVar1 = &(this_ptr->base_actor).location;
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&this_ptr->base_actor);
  local_2c = 0;
  local_48 = (char *)in_stack_00000008->y;
  local_40 = this_ptr->cloth_data + 0x278;
  pcStack_18 = this_ptr->cloth_data + 0x1d0;
  pCVar12 = (CVector3f *)(this_ptr->cloth_data + 0x290);
  local_20 = this_ptr->cloth_data + 0x284;
  pCVar15 = (CVector3f *)(this_ptr->cloth_data + 0x1dc);
  local_24 = pCVar1;
  local_1c = pCVar1;
  do {
    dVar5 = local_9c;
    local_9c = (double)((ulonglong)local_9c & 0xffffffff);
    dVar6 = local_9c;
    local_28 = *(float *)(this_ptr->cloth_data + 0x358) * this_ptr->size_scale;
    if (local_28 < *(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale) {
      local_28 = (this_ptr->model).bounding_box.max.y;
    }
    fVar8 = *(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale;
    if (local_28 < fVar8) {
      local_28 = this_ptr->size_scale * (float)0.5 + fVar8;
    }
    local_9c._0_4_ = SUB84 /* extract 2-byte value */(dVar5,0);
    fVar8 = core_setcolid_cpp_CDemonSet_testCapsuleCollision_FUN_00573470
                      (g_CDemonSetPtr,(this_ptr->base_actor).location.position.x,
                       (this_ptr->base_actor).location.position.z,local_9c._0_4_,fStack_94,
                       *(float *)(this_ptr->cloth_data + 0x348) * this_ptr->size_scale,
                       (void *)(*(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale +
                               (this_ptr->base_actor).location.position.y),
                       (void *)((this_ptr->base_actor).location.position.y + local_28));
    if (DAT_00823c50 == (CDemonActor *)0x0) {
      DAT_00823c50 = g_CDemonSetPtr->collision_actor;
    }
    pCVar9 = (CVector3f *)((int)local_28 * 0x24 + unaff_EDI);
    if (pCVar9 != &g_TempNormal0) {
      pCVar9->x = g_TempNormal0.x;
      pCVar9->y = g_TempNormal0.y;
      pCVar9->z = g_TempNormal0.z;
    }
    if (local_14 != &g_TempNormal1) {
      local_14->x = g_TempNormal1.x;
      local_14->y = g_TempNormal1.y;
      local_14->z = g_TempNormal1.z;
    }
    if (pCVar15 != &g_TempNormal2) {
      pCVar15->x = g_TempNormal2.x;
      pCVar15->y = g_TempNormal2.y;
      pCVar15->z = g_TempNormal2.z;
    }
    if (0.0 <= fVar8) {
      if (1.0 < fVar8) {
        fVar8 = 1.0;
      }
      local_50 = fVar8 * 0.0;
      local_4c = fStack_94 * fVar8;
      local_48 = (char *)(local_90 * fVar8);
      *(float *)pcStack_18 = *(float *)pcStack_18 + local_50;
      *(float *)(pcStack_18 + 4) = *(float *)(pcStack_18 + 4) + local_4c;
      pCVar4 = g_CDemonSetPtr;
      *(float *)(pcStack_18 + 8) = *(float *)(pcStack_18 + 8) + (float)local_48;
      local_74[3] = (pCVar4->collision_normal).x;
      fStack_64 = (pCVar4->collision_normal).y;
      local_60 = (pCVar4->collision_normal).z;
      fVar8 = (*((this_ptr->base_actor).vtable)->cylinderGroundCheck)
                        (&this_ptr->base_actor,*(float *)(this_ptr->cloth_data + 0x344),&local_8c);
      bVar3 = false;
      pCVar9 = (CVector3f *)(local_20 + unaff_EDI * 0x24);
      *(float *)(this_ptr->field2_0x240c + 8) = fVar8;
      if (pCVar9 != &g_TempNormal0) {
        pCVar9->x = g_TempNormal0.x;
        pCVar9->y = g_TempNormal0.y;
        pCVar9->z = g_TempNormal0.z;
      }
      if (unaff_retaddr != &g_TempNormal1) {
        unaff_retaddr->x = g_TempNormal1.x;
        unaff_retaddr->y = g_TempNormal1.y;
        unaff_retaddr->z = g_TempNormal1.z;
      }
      if (pCVar12 != &g_TempNormal2) {
        pCVar12->x = g_TempNormal2.x;
        pCVar12->y = g_TempNormal2.y;
        pCVar12->z = g_TempNormal2.z;
      }
      if ((this_ptr->base_actor).location.position.y < *(float *)(this_ptr->field2_0x240c + 8)) {
        (this_ptr->base_actor).location.position.y = *(float *)(this_ptr->field2_0x240c + 8);
        local_8c.z = (this_ptr->base_actor).location.position.y;
      }
      if ((float)0.90000000000000002 < fStack_94) break;
      local_90 = SQRT(local_44 * local_44 + local_4c * local_4c);
      local_48 = (char *)0x0;
      if (0.0 < local_90) {
        fVar8 = 1.0 / local_90;
        local_4c = local_4c * fVar8;
        local_48 = (char *)(fVar8 * 0.0);
        local_44 = local_44 * fVar8;
      }
      fVar8 = (float)0.90000000000000002 - fStack_94;
      fStack_7c = fStack_7c * fVar8;
      local_78 = local_78 * fVar8;
      local_74[0] = local_74[0] * fVar8;
      fVar8 = local_44 * local_74[0] + local_4c * fStack_7c + (float)local_48 * local_78;
      local_9c = (double)fVar8;
      if (0.0 <= local_9c) break;
      fVar8 = fVar8 * (float)1.2;
      local_40 = (char *)(local_4c * fVar8);
      pcStack_3c = (char *)((float)local_48 * fVar8);
      local_38 = local_44 * fVar8;
      fStack_7c = fStack_7c - (float)local_40;
      local_78 = local_78 - (float)pcStack_3c;
      local_74[0] = local_74[0] - local_38;
    }
    else {
      local_30 = fVar8 + (float)-0.01;
      fStack_80 = (g_CDemonSetPtr->collision_normal).x * local_30;
      fStack_7c = (g_CDemonSetPtr->collision_normal).y * local_30;
      local_78 = (g_CDemonSetPtr->collision_normal).z * local_30;
      *(float *)local_20 = *(float *)local_20 - fStack_80;
      *(float *)(local_20 + 4) = *(float *)(local_20 + 4) - fStack_7c;
      bVar3 = true;
      *(float *)(local_20 + 8) = *(float *)(local_20 + 8) - local_78;
      local_9c = dVar6;
    }
    pCVar15 = pCVar15 + 3;
    pcStack_18 = pcStack_18 + 0x24;
    pCVar12 = pCVar12 + 3;
    local_20 = local_20 + 0x24;
    local_2c = local_2c + 1;
  } while (local_2c < 3);
  if (bVar3) {
    fVar8 = (*((this_ptr->base_actor).vtable)->cylinderGroundCheck)
                      (&this_ptr->base_actor,*(float *)(this_ptr->cloth_data + 0x344),
                       (CVector3f *)0x0);
    *(float *)(this_ptr->field2_0x240c + 8) = fVar8;
  }
  fVar8 = (this_ptr->base_actor).location.position.y + local_28;
  (this_ptr->base_actor).location.position.y = fVar8;
  if (*(float *)(this_ptr->field2_0x240c + 8) <= fVar8) {
    if ((*(int *)(this_ptr->field2_0x240c + 4) != 0) &&
       ((this_ptr->base_actor).location.position.y <
        *(float *)(this_ptr->field2_0x240c + 8) + (float)0.5)) {
      (this_ptr->base_actor).location.position.y = *(float *)(this_ptr->field2_0x240c + 8);
      local_8c.z = (this_ptr->base_actor).location.position.y;
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
       ((this_ptr->base_actor).location.position.y - local_8c.z) / g_CGamePtr->delta_time_float;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(pCVar4);
  return;
}
