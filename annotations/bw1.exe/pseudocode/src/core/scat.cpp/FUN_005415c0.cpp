// Name: core_scat.cpp_FUN_005415c0
// Address: 005415c0
// Address Range: [[005415c0, 00541ae6]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_FUN_005415c0(CScat *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_scat_cpp_FUN_005415c0(CScat *this_ptr,float delta_time)

{
  float fVar1;
  int iVar2;
  SMotion *pSVar3;
  CPathMap *this_ptr_00;
  byte bVar4;
  float afStackY_109c [1013];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a4;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  byte auStack_54 [12];
  float local_48;
  float afStack_44 [2];
  float local_3c [2];
  float fStack_34;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  int local_1c;
  float local_14;
  
  bVar4 = 0;
  local_24 = 0.25;
  local_1c = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  local_28 = 0.7853982;
  if (*(int *)&this_ptr->field_0x1ffa8 == 0) {
    return;
  }
  memset(&this_ptr->field_0xc1d8,0,0x30);
  iVar2 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  local_60 = *(float *)&this_ptr->field_0x20 - *(float *)(iVar2 + 0x20);
  local_5c = *(float *)&this_ptr->field_0x24 - *(float *)(iVar2 + 0x24);
  local_58 = *(float *)&this_ptr->field_0x28 - *(float *)(iVar2 + 0x28);
  local_9c = local_60;
  (&stack0xffffff68)[(uint)bVar4 * -2] = afStack_44[(uint)bVar4 * -2 + -6];
  (&stack0xffffff68)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(float *)(auStack_54 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + -4);
  local_2c = 0;
  if ((((*(int *)&this_ptr->field_0x1ffa8 == 2) || (*(int *)&this_ptr->field_0x1ffa8 == 3)) &&
      (*(int *)&this_ptr->field_0x1fe20 != 0)) &&
     (0 < *(int *)(*(int *)&this_ptr->field_0x1fe20 + 0x568))) {
    local_3c[0] = 9999.9;
    iVar2 = core_hero_cpp_FUN_004ec350(this_ptr,afStack_44 + 2);
    if ((iVar2 != 0) && ((int)local_3c[0] < 0x41f00000)) {
      local_1c = iVar2;
      local_2c = 1;
    }
  }
  if (local_2c != *(int *)&this_ptr->field_0x1ffac) {
    *(uint *)&this_ptr->field_0xc1f0 = 1;
  }
  local_6c = *(float *)(local_1c + 0x20) - *(float *)&this_ptr->field_0x20;
  local_68 = *(float *)(local_1c + 0x24) - *(float *)&this_ptr->field_0x24;
  local_64 = *(float *)(local_1c + 0x28) - *(float *)&this_ptr->field_0x28;
  local_b4 = local_6c;
  (&stack0xffffff50)[(uint)bVar4 * -2] = (&stack0xffffff68)[(uint)bVar4 * 0xfffffffe + 0xc];
  (&stack0xffffff50)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_44[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -8];
  if (&stack0xffffff64 != &stack0xffffff4c) {
    local_9c = local_b4;
    local_98 = local_b0;
    local_94 = local_ac;
  }
  local_b8 = SQRT(local_94 * local_94 + local_9c * local_9c + local_98 * local_98);
  if (*(int *)&this_ptr->field_0x1ffa8 == 3) {
    local_b8 = 0.0;
  }
  if (*(int *)&this_ptr->field_0x1ffc0 != 0) {
    if (*(int *)(*(int *)&this_ptr->field_0x1ffc0 + 0x2e0) == 8) {
      if (local_b8 < (float)_DAT_005ede6f) {
        pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                           ((CMotionController *)&this_ptr->field_0x158);
        if ((*(int *)(pSVar3 + 0x24) == 7) && (*(int *)&this_ptr->field_0x1ffac != 0)) {
          *(uint *)&this_ptr->field_0xc1e4 = 1;
        }
        goto LAB_005418bc;
      }
    }
    else if (local_b8 < (float)_DAT_005ede5f) {
      if ((*(int *)&this_ptr->field_0x1ffac != 0) && (local_2c != 0)) {
        if (((float)_DAT_005ede67 < *(float *)&this_ptr->field_0x2c9c) &&
           (*(int *)&this_ptr->field_0x1ffd4 != 0)) {
          *(uint *)&this_ptr->field_0xc1e4 = 1;
        }
        core_charactr_cpp_CCharacter_turnTowardPoint_FUN_0042d540
                  ((CCharacter *)this_ptr,(CVector3f *)(local_1c + 0x20));
      }
      *(uint *)&this_ptr->field_0xc1e0 = 0;
      *(uint *)&this_ptr->field_0xc1d8 = 0;
      goto LAB_005418bc;
    }
    this_ptr_00 = (CPathMap *)(**(code **)(*(int *)(local_1c + 0x154) + 0xc4))(local_1c);
    if (this_ptr_00 == (CPathMap *)0x0) {
      this_ptr_00 = core_path_cpp_getPathMap_FUN_005351f0((CLocation *)(local_1c + 0x20));
    }
    iVar2 = core_path_cpp_CPathMap_findPathWithRetry_FUN_005349a0
                      (this_ptr_00,(CVector3f *)&this_ptr->field_0x20,(CVector3f *)auStack_54,
                       *(int *)&this_ptr->field_0x6c);
    if (iVar2 != 0) {
      local_14 = (float)core_actor_cpp_FUN_0040cd60
                                  ((float)auStack_54._4_4_ - *(float *)&this_ptr->field_0x34);
      fVar1 = local_14 * _DAT_005ede77 * (float)_DAT_005ede7f;
      fStack_34 = -local_24;
      *(float *)&this_ptr->field_0xc200 = fVar1;
      if (fVar1 < fStack_34) {
        *(float *)&this_ptr->field_0xc200 = fStack_34;
      }
      if (local_24 < *(float *)&this_ptr->field_0xc200) {
        *(float *)&this_ptr->field_0xc200 = local_24;
      }
      if ((float)_DAT_005ede87 <= local_b8) {
        *(uint *)&this_ptr->field_0xc1e0 = 1;
      }
      *(uint *)&this_ptr->field_0xc1d8 = 1;
    }
  }
LAB_005418bc:
  local_84 = *(float *)(local_1c + 0x20) - *(float *)&this_ptr->field_0x20;
  local_80 = *(float *)(local_1c + 0x24) - *(float *)&this_ptr->field_0x24;
  local_7c = *(float *)(local_1c + 0x28) - *(float *)&this_ptr->field_0x28;
  local_90 = local_84;
  (&stack0xffffff68)[(uint)bVar4 * 0xfffffffe + 3] =
       (&stack0xffffff68)[(uint)bVar4 * 0xfffffffe + 6];
  (&stack0xffffff68)[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 4] =
       (&stack0xffffff68)[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 7];
  if (&stack0xffffff64 != &stack0xffffff70) {
    local_9c = local_90;
    local_98 = local_8c;
    local_94 = local_88;
  }
  core_vecdir_cpp_FUN_005a7520(&stack0xffffff64);
  local_78 = local_48;
  (&stack0xffffff68)[(uint)bVar4 * 0xfffffffe + 9] = afStack_44[(uint)bVar4 * -2];
  *(float *)(auStack_54 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + -0x1c) =
       afStack_44[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  if (&stack0xffffff64 != &stack0xffffff88) {
    local_9c = local_78;
    local_98 = local_74;
    local_94 = local_70;
  }
  local_a4 = (float)core_actor_cpp_FUN_0040cd60(local_98 - *(float *)&this_ptr->field_0x34);
  if (local_28 < local_a4) {
    local_a4 = local_28;
  }
  if (local_a4 < -local_28) {
    local_a4 = -local_28;
  }
  local_20 = local_a4 - *(float *)&this_ptr->field_0x1ffb4;
  if (delta_time * _DAT_005ede8f < local_20) {
    local_20 = delta_time * _DAT_005ede8f;
  }
  if (local_20 < delta_time * _DAT_005ede93) {
    local_20 = delta_time * _DAT_005ede93;
  }
  *(float *)&this_ptr->field_0x1ffb4 = *(float *)&this_ptr->field_0x1ffb4 + local_20;
  return;
}
