// Name: core_weapon.cpp_CWeapon_renderAimBeam_FUN_0057bb60
// Address: 0057bb60
// Address Range: [[0057bb60, 0057bb9f] [0057bba1, 0057bd1f]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_renderAimBeam_FUN_0057bb60(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_renderAimBeam_FUN_0057bb60(CWeapon *this_ptr)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_1044 [971];
  uint uStack_c0;
  CDemonSet *this_ptr_00;
  SLaserInfo SStack_b4;
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
  core_fire_cpp_SLaserInfo_ctor_FUN_004a2de0(&SStack_b4);
  if ((this_ptr->draw_crosshair != 0) && (g_CGamePtr->show_crosshair != 0)) {
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
      SStack_b4.color.r = 1;
      SStack_b4.color.g = (this_ptr->muzzle_flash_color).r;
      SStack_b4.color.b = (this_ptr->muzzle_flash_color).g;
      SStack_b4.is_hero_weapon = (this_ptr->muzzle_flash_color).b;
      SStack_b4.laser_type = 0;
      if (this_ptr->fire_cooldown_timer <= 0.0) {
        SStack_b4.beam_width = 1.0;
      }
      else {
        SStack_b4.beam_width = 0.5;
      }
      SStack_b4.local_origin.x = 1.4013e-45;
      core_setcolid_cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0(g_CDemonSetPtr);
      pfVar2 = &SStack_b4.beam_width;
      pfVar3 = (float *)&stack0xfffffef4;
      for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pfVar3 = *pfVar2;
        pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
        pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
      }
      core_fire_cpp_FUN_004a2e20(0x01C73654,auStack_58 + 8,&uStack_20);
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      return;
    }
  }
  return;
}
