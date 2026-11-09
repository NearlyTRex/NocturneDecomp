// Name: core_mobster.cpp_CMobster_aimTommyGun_FUN_004fef30
// Address: 004fef30
// Address Range: [[004fef30, 004ff2f6]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_aimTommyGun_FUN_004fef30(CMobster *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mobster_cpp_CMobster_aimTommyGun_FUN_004fef30(CMobster *this_ptr,float delta_time)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  float afStackY_188c [1519];
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  code *blend_callback;
  float local_b8;
  float local_b4;
  uint local_b0;
  float afStack_ac [7];
  uint local_90;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_68 [3];
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  uint local_44;
  float local_38;
  float local_2c;
  float local_20;
  float local_1c;
  CDeformableModelInstance *local_18;
  
  bVar3 = 0;
  if (*(int *)&this_ptr->field_0x2698 == 0) {
    *(uint *)&this_ptr->field_0x10bc8 = 0;
  }
  else {
    if (*(int *)&this_ptr->field_0x10a78 != 0) {
      iVar2 = core_enemy_cpp_FUN_00488320(this_ptr,*(int *)&this_ptr->field_0x10a78);
      if ((iVar2 == 0) && (*(int *)&this_ptr->field_0x10b24 == 0)) {
        *(uint *)&this_ptr->field_0x10bc8 = 0;
        return;
      }
      iVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                        (*(uint *)&this_ptr->field_0x2698,g_CWeaponClassInfo.name_hash);
      if (iVar2 == 0) {
        _DAT_01d046a0 = "..\\core\\mobster.cpp";
        _DAT_01d046a4 = 0x323;
        core_main_c_FUN_004e4500("CMobster::aimTommyGun - I'm not carrying one!");
      }
      local_b4 = 0.7853982;
      if (*(int *)&this_ptr->field_0x10b1c != 0) {
        local_b4 = 1.5707964;
      }
      core_xform_cpp_FUN_00591530(&DAT_0265370c,&this_ptr->field_0x1134 + _DAT_01d1c718 * 0x30);
      pfVar6 = afStack_ac + 0x11;
      local_68[0] = (float)local_44;
      afStack_ac[(uint)bVar3 * -2 + 0x12] = afStack_ac[(uint)bVar3 * -2 + 0x1b];
      afStack_ac[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x13] =
           afStack_ac[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x1c];
      core_actor_cpp_FUN_00408d70(this_ptr,pfVar6);
      local_80 = local_2c;
      afStack_ac[(uint)bVar3 * -2 + 0xc] = afStack_ac[(uint)bVar3 * -2 + 0x21];
      afStack_ac[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd] =
           afStack_ac[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x22];
      iVar2 = *(int *)&this_ptr->field_0x10a78;
      local_50 = *(float *)(iVar2 + 0x20) - local_80;
      local_4c = *(float *)(iVar2 + 0x24) - local_7c;
      local_48 = *(float *)(iVar2 + 0x28) - local_78;
      local_5c = local_50;
      afStack_ac[(uint)bVar3 * -2 + 0x15] = afStack_ac[(uint)bVar3 * -2 + 0x18];
      afStack_ac[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x16] =
           afStack_ac[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x19];
      iVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                        (*(uint *)&this_ptr->field_0x10a78,g_CHeroClassInfo.name_hash);
      fVar1 = _DAT_005dee11;
      if (iVar2 != 0) {
        fVar1 = _DAT_005dee15;
      }
      local_58 = local_58 + fVar1;
      core_vecdir_cpp_FUN_005838f0(afStack_ac + 0x14);
      local_74 = local_38;
      afStack_ac[(uint)bVar3 * -2 + 0xf] = afStack_ac[(uint)bVar3 * -2 + 0x1e];
      afStack_ac[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x10] =
           afStack_ac[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x1f];
      local_18 = (CDeformableModelInstance *)
                 core_actor_cpp_FUN_0040d0c0(local_70 - *(float *)&this_ptr->field_0x34);
      local_b8 = SQRT(local_54 * local_54 + local_5c * local_5c + local_58 * local_58);
      if ((local_b4 <= ABS((float)local_18)) || (local_b8 <= (float)_DAT_005dee1d)) {
        fVar1 = *(float *)&this_ptr->field_0x10bc8 - delta_time;
        *(float *)&this_ptr->field_0x10bc8 = fVar1;
        if (fVar1 < 0.0) {
          *(uint *)&this_ptr->field_0x10bc8 = 0;
        }
      }
      else {
        fVar1 = *(float *)&this_ptr->field_0x10bc8 + delta_time;
        *(float *)&this_ptr->field_0x10bc8 = fVar1;
        if (1.0 < fVar1) {
          *(uint *)&this_ptr->field_0x10bc8 = 0x3f800000;
        }
      }
      local_1c = -local_b4;
      if (local_74 < local_1c) {
        local_74 = local_1c;
      }
      if (local_b4 < local_74) {
        local_74 = local_b4;
      }
      local_20 = -local_b4;
      local_70 = (float)local_18;
      if ((float)local_18 < local_20) {
        local_70 = local_20;
      }
      if (local_b4 < local_70) {
        local_70 = local_b4;
      }
      if (*(int *)&this_ptr->field_0x2620 == 0) {
        uVar5 = *(uint *)&this_ptr->field_0x10bc8;
        uVar4 = 2;
      }
      else {
        uVar5 = *(uint *)&this_ptr->field_0x10bc8;
        uVar4 = 6;
      }
      core_skeleton_cpp_FUN_00545a60
                (&this_ptr->field_0x2b4,uVar4,0x40c00000,uVar5,_DAT_01d1c738,
                 core_skeleton_cpp_FUN_00544cc0);
      core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(local_74);
      local_b0 = afStack_ac[3];
      afStack_ac[(uint)bVar3 * -2] = afStack_ac[(uint)bVar3 * -2 + 4];
      afStack_ac[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
           afStack_ac[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 5];
      (afStack_ac + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
           (afStack_ac + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 5)[(uint)bVar3 * -2 + 1];
      local_18 = (CDeformableModelInstance *)&this_ptr->field_0x2b4;
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (local_18,(CQuaternion4f *)&local_b0,*(float *)&this_ptr->field_0x10bc8,
                 _DAT_01d1c738,core_skeleton_cpp_FUN_00544cc0);
      core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_70);
      blend_callback = core_skeleton_cpp_FUN_00544cc0;
      local_b0 = local_90;
      afStack_ac[(uint)bVar3 * -2] = afStack_ac[(uint)bVar3 * -2 + 8];
      iVar2 = _DAT_01d1c738;
      afStack_ac[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
           afStack_ac[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 9];
      (afStack_ac + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
           (afStack_ac + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 9)[(uint)bVar3 * -2 + 1];
      core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
                (local_18,(CQuaternion4f *)&local_b0,*(float *)&this_ptr->field_0x10bc8,iVar2,
                 blend_callback);
      return;
    }
    *(uint *)&this_ptr->field_0x10bc8 = 0;
  }
  return;
}
