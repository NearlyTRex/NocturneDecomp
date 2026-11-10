// Name: core_svetlana.cpp_CSvetlana_processAI_FUN_005938c0
// Address: 005938c0
// Address Range: [[005938c0, 00594096]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_CSvetlana_processAI_FUN_005938c0(CSvetlana *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_svetlana_cpp_CSvetlana_processAI_FUN_005938c0(CSvetlana *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  int iVar3;
  SMotion *pSVar4;
  uint uVar5;
  CPathMap *this_ptr_00;
  byte bVar6;
  float afStackY_10c4 [1009];
  float local_dc;
  float local_d8;
  float local_d4;
  CVector3f CStack_d0;
  float fStack_c0;
  uint uStack_b8;
  float afStack_b4 [5];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float local_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  uint uStack_64;
  float fStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_3c;
  float local_38;
  float local_34;
  int local_30;
  float fStack_2c;
  int local_28;
  float local_24;
  float fStack_20;
  float local_1c;
  float fStack_14;
  
  bVar6 = 0;
  local_30 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  local_28 = 0;
  local_24 = 0.25;
  local_34 = 0.7853982;
  memset(&this_ptr->field_0xc1d8,0,0x30);
  if (*(int *)&this_ptr->field_0x1ffa8 != 0) {
    iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    local_88 = *(float *)&this_ptr->field_0x20 - *(float *)(iVar3 + 0x20);
    local_84 = *(float *)&this_ptr->field_0x24 - *(float *)(iVar3 + 0x24);
    local_80 = *(float *)&this_ptr->field_0x28 - *(float *)(iVar3 + 0x28);
    local_dc = local_88;
    (&stack0xffffff28)[(uint)bVar6 * 0xfffffffe] = afStack_b4[(uint)bVar6 * -2 + 0xc];
    afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -8] =
         afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    local_1c = SQRT(local_d4 * local_d4 + local_dc * local_dc + local_d8 * local_d8);
    if (*(int *)&this_ptr->field_0x1ffa8 == 3) {
      local_1c = 0.0;
    }
    iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    local_38 = 20.0;
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x148))(iVar3);
    if (iVar3 != 0) {
      local_38 = 30.0;
    }
    if ((local_1c < local_38) &&
       ((*(int *)&this_ptr->field_0x1ffa8 == 2 || (*(int *)&this_ptr->field_0x1ffa8 == 3)))) {
      fStack_4c = 9999.9;
      iVar3 = core_hero_cpp_FUN_004ec350(this_ptr,afStack_b4 + 0x1a);
      if ((iVar3 == 0) || (local_38 <= fStack_4c)) {
        if (this_ptr->blades_drawn != 0) {
          *(uint *)&this_ptr->field_0xc1f0 = 1;
        }
      }
      else {
        local_30 = iVar3;
        local_28 = 1;
      }
    }
    fStack_58 = *(float *)(local_30 + 0x20) - *(float *)&this_ptr->field_0x20;
    fStack_54 = *(float *)(local_30 + 0x24) - *(float *)&this_ptr->field_0x24;
    fStack_50 = *(float *)(local_30 + 0x28) - *(float *)&this_ptr->field_0x28;
    fStack_a0 = fStack_58;
    afStack_b4[(uint)bVar6 * -2 + 6] = afStack_b4[(uint)bVar6 * -2 + 0x18];
    afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
    if (&stack0xffffff24 != afStack_b4 + 5) {
      local_dc = fStack_a0;
      local_d8 = fStack_9c;
      local_d4 = fStack_98;
    }
    fVar1 = SQRT(local_d4 * local_d4 + local_dc * local_dc + local_d8 * local_d8);
    *(uint *)&this_ptr->field_0x2508 = 0;
    fStack_20 = fVar1;
    if ((float)_DAT_005f758f <= fVar1) {
      this_ptr_00 = (CPathMap *)0x0;
      if (local_28 == 0) {
        iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        this_ptr_00 = (CPathMap *)(**(code **)(*(int *)(iVar3 + 0x154) + 0xc4))(iVar3);
        iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x148))(iVar3);
        if ((iVar3 == 0) &&
           (uVar5 = core_charactr_cpp_FUN_00434c60(this_ptr,delta_time), uVar5 != 0)) {
          if (uVar5 < 2) {
            *(uint *)&this_ptr->field_0xc1d8 = 1;
          }
          else if (uVar5 == 2) {
            *(uint *)&this_ptr->field_0xc1e0 = 1;
            *(uint *)&this_ptr->field_0xc1d8 = 1;
          }
        }
      }
      else {
        *(uint *)&this_ptr->field_0x2fd0 = 0;
      }
      if (this_ptr_00 == (CPathMap *)0x0) {
        this_ptr_00 = core_path_cpp_getPathMap_FUN_005351f0((CLocation *)(local_30 + 0x20));
      }
      iVar3 = core_path_cpp_CPathMap_findPathWithRetry_FUN_005349a0
                        (this_ptr_00,(CVector3f *)&this_ptr->field_0x20,&CStack_d0,
                         *(int *)&this_ptr->field_0x6c);
      if (iVar3 != 0) {
        fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                     (CStack_d0.y - *(float *)&this_ptr->field_0x34);
        fVar2 = fStack_14 * _DAT_005f7597 * (float)_DAT_005f759f;
        fStack_3c = -local_24;
        *(float *)&this_ptr->field_0xc200 = fVar2;
        if (fVar2 < fStack_3c) {
          *(float *)&this_ptr->field_0xc200 = fStack_3c;
        }
        if (local_24 < *(float *)&this_ptr->field_0xc200) {
          *(float *)&this_ptr->field_0xc200 = local_24;
        }
        if (((float)_DAT_005f75a7 <= fVar1) || (local_28 == 1)) {
          *(uint *)&this_ptr->field_0xc1e0 = 1;
          *(uint *)&this_ptr->field_0xc1d8 = 1;
        }
        else {
          *(uint *)&this_ptr->field_0xc1d8 = 1;
        }
      }
    }
    else {
      if (local_28 == 1) {
        if (this_ptr->blades_drawn == 0) {
          *(uint *)&this_ptr->field_0xc1f0 = 1;
        }
        else {
          pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                             ((CMotionController *)&this_ptr->field_0x158);
          if ((*(int *)(pSVar4 + 0x24) != 2) && (*(int *)(pSVar4 + 0x24) != 1)) {
            *(uint *)&this_ptr->field_0xc1e4 = 1;
          }
        }
        *(uint *)&this_ptr->field_0x2fd0 = 0;
      }
      else {
        pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                           ((CMotionController *)&this_ptr->field_0x158);
        if ((*(int *)(pSVar4 + 0x24) == 10) && (this_ptr->blades_drawn != 0)) {
          *(uint *)&this_ptr->field_0xc1f0 = 1;
        }
        iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x148))(iVar3);
        if ((iVar3 == 0) &&
           (uVar5 = core_charactr_cpp_FUN_00434c60(this_ptr,delta_time), uVar5 != 0)) {
          if (uVar5 < 2) {
            *(uint *)&this_ptr->field_0xc1d8 = 1;
          }
          else if (uVar5 == 2) {
            *(uint *)&this_ptr->field_0xc1e0 = 1;
            *(uint *)&this_ptr->field_0xc1d8 = 1;
          }
        }
      }
      if (local_28 == 1) {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&stack0xffffff24);
        uStack_64 = uStack_b8;
        afStack_b4[(uint)bVar6 * -2 + 0x15] = afStack_b4[(uint)bVar6 * -2];
        afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
             afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                     (fStack_60 - *(float *)&this_ptr->field_0x34);
        fVar1 = fStack_14 * _DAT_005f7597 * (float)_DAT_005f759f;
        fStack_48 = -local_24;
        *(float *)&this_ptr->field_0xc200 = fVar1;
        if (fVar1 < fStack_48) {
          *(float *)&this_ptr->field_0xc200 = fStack_48;
        }
        if (local_24 < *(float *)&this_ptr->field_0xc200) {
          *(float *)&this_ptr->field_0xc200 = local_24;
        }
        if ((((float)_DAT_005f75af < *(float *)&this_ptr->field_0xc200) &&
            ((double)*(float *)&this_ptr->field_0xc200 < _DAT_005f75b7)) &&
           (*(int *)&this_ptr->field_0xc1e4 != 0)) {
          *(uint *)&this_ptr->field_0xc200 = 0;
        }
      }
    }
    if (*(float *)&this_ptr->field_0x2508 <= 0.0) {
      if (*(float *)&this_ptr->field_0x2508 < 0.0) {
        *(uint *)&this_ptr->field_0x2508 = 0;
        *(float *)&this_ptr->field_0xc200 = -local_24;
      }
    }
    else {
      *(uint *)&this_ptr->field_0x2508 = 0;
      *(float *)&this_ptr->field_0xc200 = local_24;
    }
    fStack_7c = *(float *)(local_30 + 0x20) - *(float *)&this_ptr->field_0x20;
    fStack_78 = *(float *)(local_30 + 0x24) - *(float *)&this_ptr->field_0x24;
    fStack_74 = *(float *)(local_30 + 0x28) - *(float *)&this_ptr->field_0x28;
    fStack_94 = fStack_7c;
    afStack_b4[(uint)bVar6 * -2 + 9] = afStack_b4[(uint)bVar6 * -2 + 0xf];
    afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
         afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
    if (&stack0xffffff24 != afStack_b4 + 8) {
      local_dc = fStack_94;
      local_d8 = fStack_90;
      local_d4 = fStack_8c;
    }
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&stack0xffffff24);
    fStack_70 = afStack_b4[2];
    afStack_b4[(uint)bVar6 * -2 + 0x12] = afStack_b4[(uint)bVar6 * -2 + 3];
    afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
         afStack_b4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    if (&stack0xffffff24 != afStack_b4 + 0x11) {
      local_dc = fStack_70;
      local_d8 = fStack_6c;
      local_d4 = fStack_68;
    }
    fStack_c0 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                 (local_d8 - *(float *)&this_ptr->field_0x34);
    if (local_34 < fStack_c0) {
      fStack_c0 = local_34;
    }
    if (fStack_c0 < -local_34) {
      fStack_c0 = -local_34;
    }
    fStack_2c = fStack_c0 - (this_ptr->head_euler_angles).y;
    if (delta_time * _DAT_005f75bf < fStack_2c) {
      fStack_2c = delta_time * _DAT_005f75bf;
    }
    if (fStack_2c < delta_time * _DAT_005f75c3) {
      fStack_2c = delta_time * _DAT_005f75c3;
    }
    (this_ptr->head_euler_angles).y = (this_ptr->head_euler_angles).y + fStack_2c;
  }
  return;
}
