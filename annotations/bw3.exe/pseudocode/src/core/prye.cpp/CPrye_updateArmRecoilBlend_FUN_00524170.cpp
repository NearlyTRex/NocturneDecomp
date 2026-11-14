// Name: core_prye.cpp_CPrye_updateArmRecoilBlend_FUN_00524170
// Address: 00524170
// Address Range: [[00524170, 005247a7]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_updateArmRecoilBlend_FUN_00524170(CPrye *this_ptr,float delta_time,int is_weapon_active)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_prye_cpp_CPrye_updateArmRecoilBlend_FUN_00524170(CPrye *this_ptr,float delta_time,int is_weapon_active)

{
  CPrye *this_ptr_00;
  EWeaponType EVar1;
  float fVar2;
  EDeathState EVar3;
  ECollisionType EVar4;
  byte bVar5;
  float afStackY_1100 [991];
  float *pfVar6;
  float local_15c;
  float local_158;
  float fStack_150;
  SCollisionInfo SStack_14c;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114 [4];
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4 [3];
  float local_e8;
  uint local_e4;
  uint local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  CVector3f local_d0;
  float local_c4;
  float afStack_c0 [6];
  float afStack_a8 [4];
  float local_98;
  float local_94;
  uint local_90;
  uint local_8c;
  float local_88;
  float afStack_84 [4];
  float local_74;
  float local_70;
  float afStack_6c [4];
  uint local_5c;
  CVector3f local_58;
  float local_4c;
  float local_48 [8];
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar5 = 0;
  if (this_ptr->weapon == (CWeapon *)0x0) {
    is_weapon_active = 0;
  }
  else {
    EVar1 = this_ptr->weapon->weapon_type;
    if ((EVar1 == WEAPON_TYPE_GUN) || (EVar1 == WEAPON_TYPE_FLASHLIGHT)) {
      is_weapon_active = 1;
    }
  }
  local_158 = 0.0;
  if (is_weapon_active != 0) {
    local_1c = 0;
    for (local_20 = 0; local_20 < g_CDemonSetPtr->character_count; local_20 = local_20 + 1) {
      this_ptr_00 = *(CPrye **)((int)g_CDemonSetPtr->characters + local_1c);
      core_actor_cpp_FUN_00408bf0(this_ptr,&(this_ptr_00->base).base.base.location);
      local_100 = local_70;
      local_114[(uint)bVar5 * -2 + 6] = afStack_6c[(uint)bVar5 * -2];
      local_114[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
           afStack_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      if (((ABS(local_100) <= (float)_DAT_005cd767) && (ABS(local_fc) <= (float)_DAT_005cd76f)) &&
         ((0.0 <= local_f8 &&
          ((((int)local_f8 < 0x40c00001 && (this_ptr_00 != this_ptr)) &&
           (EVar3 = (*(((this_ptr_00->base).base.base.vtable._uc)->_uc).getDeathState)
                              ((CCharacter *)this_ptr_00), EVar3 == DEATH_STATE_ALIVE)))))) {
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_0053ed80(&SStack_14c);
        EVar4 = (*((this_ptr_00->base).base.base.vtable._ub)->getCollisionType)
                          ((CDemonActor *)this_ptr_00,&SStack_14c);
        if ((EVar4 == COLLISION_TYPE_CYLINDER) &&
           (fStack_150 = 1.0 - ((local_f8 - SStack_14c.cylinder_radius) + (float)_DAT_005cd777) *
                               (float)_DAT_005cd75f, local_158 <= fStack_150)) {
          if (fStack_150 < 0.0) {
            fStack_150 = 0.0;
          }
          local_158 = fStack_150;
        }
      }
      local_1c = local_1c + 4;
    }
    core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)this_ptr);
    local_28 = 1.5;
    local_24 = 3.5;
    afStack_c0[2] = 0.0;
    afStack_c0[3] = 0.0;
    afStack_c0[4] = 3.5;
    core_actor_cpp_FUN_00408b00(this_ptr,afStack_c0 + 2);
    local_4c = afStack_c0[5];
    local_48[(uint)bVar5 * -2] = afStack_a8[(uint)bVar5 * -2];
    local_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    if (afStack_84 + 2 != &local_4c) {
      afStack_84[2] = local_4c;
      afStack_84[3] = local_48[0];
      local_74 = local_48[1];
    }
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
              (&(this_ptr->base).base.model,_DAT_01ed36e0,&local_d0);
    pfVar6 = local_114 + 8;
    local_f4[0] = local_d0.x;
    local_114[(uint)bVar5 * -2 + 9] = *(float *)((int)&local_d0 + (uint)bVar5 * -8 + 4);
    local_114[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
         *(float *)((int)&local_d0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    core_actor_cpp_FUN_00408b80(this_ptr,pfVar6);
    local_118 = local_48[2];
    local_114[(uint)bVar5 * -2] = local_48[(uint)bVar5 * -2 + 3];
    local_114[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         local_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    if (&local_124 != &local_118) {
      local_124 = local_118;
      local_120 = local_114[0];
      local_11c = local_114[1];
    }
    local_d8 = local_120 + afStack_84[3];
    local_d4 = local_11c + local_74;
    local_dc = local_124 + afStack_84[2];
    afStack_6c[2] = local_124 + afStack_84[2];
    afStack_6c[(uint)bVar5 * -2 + 3] = local_114[(uint)bVar5 * -2 + 0xf];
    afStack_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         local_114[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
    if (afStack_a8 + 5 != afStack_6c + 2) {
      local_94 = afStack_6c[2];
      local_90 = afStack_6c[3];
      local_8c = local_5c;
    }
    local_18 = (float)core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr,&local_124,afStack_a8 + 5);
    if (((0.0 <= local_18) && (local_18 < 1.0)) &&
       (fVar2 = 1.0 - (local_18 * local_24 - local_28) / (local_24 - local_28), local_158 < fVar2))
    {
      local_158 = fVar2;
    }
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
              (&(this_ptr->base).base.model,_DAT_01ed36e4,&local_58);
    pfVar6 = &local_88;
    local_88 = local_58.x;
    afStack_84[(uint)bVar5 * -2] = *(float *)((int)&local_58 + (uint)bVar5 * -8 + 4);
    afStack_84[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         *(float *)((int)&local_58 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    core_actor_cpp_FUN_00408b80(this_ptr,pfVar6);
    afStack_a8[2] = local_c4;
    afStack_a8[(uint)bVar5 * -2 + 3] = afStack_c0[(uint)bVar5 * -2];
    afStack_a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    if (&local_124 != afStack_a8 + 2) {
      local_124 = afStack_a8[2];
      local_120 = afStack_a8[3];
      local_11c = local_98;
    }
    local_114[3] = local_120 + afStack_84[3];
    local_104 = local_11c + local_74;
    local_114[2] = local_124 + afStack_84[2];
    local_e8 = local_124 + afStack_84[2];
    local_114[(uint)bVar5 * -2 + 0xc] = local_114[(uint)bVar5 * -2 + 3];
    local_114[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
         local_114[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    if (afStack_a8 + 5 != local_114 + 0xb) {
      local_94 = local_e8;
      local_90 = local_e4;
      local_8c = local_e0;
    }
    local_18 = (float)core_setcolid_cpp_FUN_0053ccc0(g_CDemonSetPtr,&local_124,afStack_a8 + 5);
    if (((0.0 <= local_18) && (local_18 < 1.0)) &&
       (fVar2 = 1.0 - (local_18 * local_24 - local_28) / (local_24 - local_28), local_158 < fVar2))
    {
      local_158 = fVar2;
    }
    core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  }
  if (1.0 < local_158) {
    local_158 = 1.0;
  }
  local_15c = local_158 - this_ptr->arm_recoil_blend;
  if (0.0 <= local_15c) {
    if ((0.0 < local_15c) && (delta_time / _DAT_005e34fc < local_15c)) {
      local_15c = delta_time / _DAT_005e34fc;
    }
  }
  else {
    fVar2 = -delta_time * (1.0 / _DAT_005e3500);
    if (local_15c < fVar2) {
      local_15c = fVar2;
    }
  }
  this_ptr->arm_recoil_blend = this_ptr->arm_recoil_blend + local_15c;
  return;
}
