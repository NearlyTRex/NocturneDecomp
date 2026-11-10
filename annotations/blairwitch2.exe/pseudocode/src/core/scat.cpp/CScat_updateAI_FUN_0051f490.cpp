// Name: core_scat.cpp_CScat_updateAI_FUN_0051f490
// Address: 0051f490
// Address Range: [[0051f490, 0051f9bb]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_updateAI_FUN_0051f490(CScat *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_scat_cpp_CScat_updateAI_FUN_0051f490(CScat *this_ptr,float delta_time)

{
  float fVar1;
  int iVar2;
  CPathMap *this_ptr_00;
  byte bVar3;
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
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  CVector3f aCStack_48 [2];
  float fStack_30;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar3 = 0;
  local_24 = 0.25;
  local_1c = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  local_28 = 0.7853982;
  if (*(int *)&this_ptr->field_0x25638 == 0) {
    return;
  }
  memset(&this_ptr->field_0x10a68,0,0x34);
  iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  local_9c = *(float *)&this_ptr->field_0x20 - *(float *)(iVar2 + 0x20);
  local_98 = *(float *)&this_ptr->field_0x24 - *(float *)(iVar2 + 0x24);
  local_94 = *(float *)&this_ptr->field_0x28 - *(float *)(iVar2 + 0x28);
  local_54 = local_9c;
  (&stack0xffffffb0)[(uint)bVar3 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffff68 + (uint)bVar3 * -8);
  *(uint *)((int)aCStack_48 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + -4) =
       *(uint *)((int)&stack0xffffff6c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  local_2c = 0;
  if ((((*(int *)&this_ptr->field_0x25638 == 2) || (*(int *)&this_ptr->field_0x25638 == 3)) &&
      (*(int *)(&this_ptr->field_0x2498c + *(int *)&this_ptr->field_0x247e4 * 4) != 0)) &&
     (0 < *(int *)(*(int *)(&this_ptr->field_0x2498c + *(int *)&this_ptr->field_0x247e4 * 4) + 0x6c4
                  ))) {
    local_18 = 0x461c3f9a;
    iVar2 = core_hero_cpp_FUN_004d00c0(this_ptr,&local_18);
    if ((iVar2 != 0) && (local_18 < 0x41f00000)) {
      local_1c = iVar2;
      local_2c = 1;
    }
  }
  if (local_2c != this_ptr->guns_drawn) {
    *(uint *)&this_ptr->field_0x10a80 = 1;
  }
  local_60 = *(float *)(local_1c + 0x20) - *(float *)&this_ptr->field_0x20;
  local_5c = *(float *)(local_1c + 0x24) - *(float *)&this_ptr->field_0x24;
  local_58 = *(float *)(local_1c + 0x28) - *(float *)&this_ptr->field_0x28;
  local_84 = local_60;
  (&stack0xffffff80)[(uint)bVar3 * 0xfffffffe] =
       (float)*(uint *)((int)aCStack_48 + (uint)bVar3 * -8 + -0x14);
  *(uint *)((int)&stack0xffffff84 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)((int)aCStack_48 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + -0x10);
  if (&stack0xffffffac != &stack0xffffff7c) {
    local_54 = local_84;
    local_50 = local_80;
    local_4c = local_7c;
  }
  local_b8 = SQRT(local_4c * local_4c + local_54 * local_54 + local_50 * local_50);
  if (*(int *)&this_ptr->field_0x25638 == 3) {
    local_b8 = 0.0;
  }
  if (this_ptr->weapon_actor != (CWeapon *)0x0) {
    if (this_ptr->weapon_actor->weapon_type == (WEAPON_TYPE_BARON|WEAPON_TYPE_SHOTGUN)) {
      if (local_b8 < (float)_DAT_005e2b63) {
        iVar2 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
        if ((*(int *)(iVar2 + 0x24) == 7) && (this_ptr->guns_drawn != 0)) {
          *(uint *)&this_ptr->field_0x10a74 = 1;
        }
        goto LAB_0051f79a;
      }
    }
    else if (local_b8 < (float)_DAT_005e2b53) {
      if ((this_ptr->guns_drawn != 0) && (local_2c != 0)) {
        if (((float)_DAT_005e2b5b < *(float *)&this_ptr->field_0x2d08) &&
           (this_ptr->aim_converged != 0)) {
          *(uint *)&this_ptr->field_0x10a74 = 1;
        }
        core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
                  ((CCharacter *)this_ptr,(CVector3f *)(local_1c + 0x20));
      }
      *(uint *)&this_ptr->field_0x10a70 = 0;
      *(uint *)&this_ptr->field_0x10a68 = 0;
      goto LAB_0051f79a;
    }
    this_ptr_00 = (CPathMap *)(**(code **)(*(int *)(local_1c + 0x2b0) + 0xcc))(local_1c);
    if (this_ptr_00 == (CPathMap *)0x0) {
      this_ptr_00 = core_path_cpp_getPathMap_FUN_00513ea0((CLocation *)(local_1c + 0x20));
    }
    iVar2 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00513650
                      (this_ptr_00,(CVector3f *)&this_ptr->field_0x20,aCStack_48,
                       *(int *)&this_ptr->field_0x6c);
    if (iVar2 != 0) {
      local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                  (aCStack_48[0].y - *(float *)&this_ptr->field_0x34);
      fVar1 = local_14 * _DAT_005e2b6b * (float)_DAT_005e2b73;
      fStack_30 = -local_24;
      *(float *)&this_ptr->field_0x10a90 = fVar1;
      if (fVar1 < fStack_30) {
        *(float *)&this_ptr->field_0x10a90 = fStack_30;
      }
      if (local_24 < *(float *)&this_ptr->field_0x10a90) {
        *(float *)&this_ptr->field_0x10a90 = local_24;
      }
      if ((float)_DAT_005e2b7b <= local_b8) {
        *(uint *)&this_ptr->field_0x10a70 = 1;
      }
      *(uint *)&this_ptr->field_0x10a68 = 1;
    }
  }
LAB_0051f79a:
  local_b4 = *(float *)(local_1c + 0x20) - *(float *)&this_ptr->field_0x20;
  local_b0 = *(float *)(local_1c + 0x24) - *(float *)&this_ptr->field_0x24;
  local_ac = *(float *)(local_1c + 0x28) - *(float *)&this_ptr->field_0x28;
  local_90 = local_b4;
  (&stack0xffffff74)[(uint)bVar3 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffff50 + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffff78 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffff54 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if (&stack0xffffffac != &stack0xffffff70) {
    local_54 = local_90;
    local_50 = local_8c;
    local_4c = local_88;
  }
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&stack0xffffffac);
  local_78 = local_6c;
  (&stack0xffffff8c)[(uint)bVar3 * 0xfffffffe] =
       (float)*(uint *)((int)aCStack_48 + (uint)bVar3 * -8 + -0x20);
  *(uint *)((int)&stack0xffffff90 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)((int)aCStack_48 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + -0x1c);
  if (&stack0xffffffac != &stack0xffffff88) {
    local_54 = local_78;
    local_50 = local_74;
    local_4c = local_70;
  }
  local_a4 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                              (local_50 - *(float *)&this_ptr->field_0x34);
  if (local_28 < local_a4) {
    local_a4 = local_28;
  }
  if (local_a4 < -local_28) {
    local_a4 = -local_28;
  }
  local_20 = local_a4 - (this_ptr->head_euler_angles).y;
  if (delta_time * _DAT_005e2b83 < local_20) {
    local_20 = delta_time * _DAT_005e2b83;
  }
  if (local_20 < delta_time * _DAT_005e2b87) {
    local_20 = delta_time * _DAT_005e2b87;
  }
  (this_ptr->head_euler_angles).y = (this_ptr->head_euler_angles).y + local_20;
  return;
}
