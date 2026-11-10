// Name: core_weapon.cpp_CWeapon_renderAimBeam_FUN_0057bb60
// Address: 0057bb60
// Address Range: [[0057bb60, 0057bb9f] [0057bba1, 0057bd1f]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_renderAimBeam_FUN_0057bb60(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_renderAimBeam_FUN_0057bb60(CWeapon *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_1044 [971];
  uint uStack_c0;
  CDemonSet *this_ptr_00;
  SLaserInfo aSStack_b4 [4];
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  uint uStack_94;
  uint uStack_5c;
  uint auStack_58 [5];
  uint uStack_44;
  uint auStack_38 [3];
  uint uStack_2c;
  uint uStack_28;
  float fStack_24;
  uint uStack_20;
  uint auStack_1c [4];
  
  bVar4 = 0;
  core_fire_cpp_SLaserInfo_ctor_FUN_004a2de0(aSStack_b4);
  if ((*(int *)&this_ptr->field_0x57c != 0) && (*(int *)&g_CGamePtr->field_0xe4 != 0)) {
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
    if (iVar1 == 0) {
      uStack_c0 = 0x57bbcd;
      (*(((this_ptr->base).vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
      auStack_1c[1] = uStack_5c;
      auStack_1c[(uint)bVar4 * -2 + 2] = auStack_58[(uint)bVar4 * -2];
      auStack_1c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 3] =
           auStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      uStack_c0 = 0x57bbf0;
      core_actor_cpp_FUN_00408b80();
      auStack_38[0] = auStack_58[2];
      auStack_58[(uint)bVar4 * -2 + 9] = auStack_58[(uint)bVar4 * -2 + 3];
      auStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
           auStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      fStack_24 = this_ptr->bolt_velocity;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_c0 = 0x57bc30;
      core_actor_cpp_FUN_00408b00();
      uStack_20 = uStack_44;
      auStack_1c[(uint)bVar4 * -2] = auStack_58[(uint)bVar4 * -2 + 6];
      this_ptr_00 = g_CDemonSetPtr;
      auStack_1c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           auStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(this_ptr_00);
      uStack_c0 = 0x57bc55;
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&this_ptr->base);
      if (this_ptr->carried_by_actor != (CDemonActor *)0x0) {
        uStack_c0 = 0x57bc6f;
        core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,this_ptr->carried_by_actor);
      }
      uStack_a8 = 1;
      iStack_a4 = (this_ptr->muzzle_flash_color).r;
      iStack_a0 = (this_ptr->muzzle_flash_color).g;
      iStack_9c = (this_ptr->muzzle_flash_color).b;
      uStack_ac = 0;
      if (this_ptr->fire_cooldown_timer <= 0.0) {
        uStack_b0 = 0x3f800000;
      }
      else {
        uStack_b0 = 0x3f000000;
      }
      uStack_94 = 1;
      core_setcolid_cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0(g_CDemonSetPtr);
      puVar2 = &uStack_b0;
      puVar3 = (uint *)&stack0xfffffef4;
      for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
      }
      core_fire_cpp_FUN_004a2e20(0x01C73654,auStack_58 + 8,&uStack_20);
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      return;
    }
  }
  return;
}
