// Name: core_weapon.cpp_CWeapon_renderAimBeam_FUN_0057bb60
// Address: 0057bb60
// Address Range: [[0057bb60, 0057bb9f] [0057bba1, 0057bd1f]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_renderAimBeam_FUN_0057bb60(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_renderAimBeam_FUN_0057bb60(CWeapon *this_ptr)

{
  SLaserInfo laser_info;
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_1044 [971];
  byte auVar5 [12];
  byte auVar6 [12];
  byte auVar7 [12];
  byte auVar8 [12];
  byte in_stack_fffffef4 [76];
  uint uVar9;
  float fVar10;
  CDemonSet *this_ptr_00;
  int recursion_depth;
  SLaserInfo SStack_b4;
  float fStack_5c;
  float afStack_58 [5];
  float fStack_44;
  CVector3f CStack_38;
  uint uStack_2c;
  uint uStack_28;
  float fStack_24;
  CVector3f CStack_20;
  float afStack_14 [2];
  
  bVar4 = 0;
  core_fire_cpp_SLaserInfo_ctor_FUN_004a2de0(&SStack_b4);
  if ((this_ptr->draw_crosshair != 0) && (g_CGamePtr->show_crosshair != 0)) {
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
    if (iVar1 == 0) {
      (*(((this_ptr->base).vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
      CStack_20.z = fStack_5c;
      afStack_14[(uint)bVar4 * -2] = afStack_58[(uint)bVar4 * -2];
      afStack_14[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      core_actor_cpp_FUN_00408b80();
      CStack_38.x = afStack_58[2];
      *(float *)((int)&CStack_38 + (uint)bVar4 * -8 + 4) = afStack_58[(uint)bVar4 * -2 + 3];
      *(float *)((int)&CStack_38 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      fStack_24 = this_ptr->bolt_velocity;
      uStack_2c = 0;
      uStack_28 = 0;
      core_actor_cpp_FUN_00408b00();
      CStack_20.x = fStack_44;
      afStack_14[(uint)bVar4 * -2 + -2] = afStack_58[(uint)bVar4 * -2 + 6];
      this_ptr_00 = g_CDemonSetPtr;
      afStack_14[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -1] =
           afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(this_ptr_00);
      uVar9 = 0x57bc55;
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&this_ptr->base);
      if (this_ptr->carried_by_actor != (CDemonActor *)0x0) {
        uVar9 = 0x57bc6f;
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
      fVar10 = 8.05741e-39;
      core_setcolid_cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0(g_CDemonSetPtr);
      recursion_depth = 0;
      pfVar2 = &SStack_b4.beam_width;
      pfVar3 = (float *)&stack0xfffffef4;
      for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pfVar3 = *pfVar2;
        pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
        pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
      }
      laser_info.stored_angle = (float)uVar9;
      auVar5 = in_stack_fffffef4._12_12_;
      auVar6 = in_stack_fffffef4._32_12_;
      auVar7 = in_stack_fffffef4._44_12_;
      auVar8 = in_stack_fffffef4._56_12_;
      laser_info.intensity = (float)in_stack_fffffef4._0_4_;
      laser_info.beam_width = (float)in_stack_fffffef4._4_4_;
      laser_info.laser_type = in_stack_fffffef4._8_4_;
      laser_info.color.r = auVar5._0_4_;
      laser_info.color.g = auVar5._4_4_;
      laser_info.color.b = auVar5._8_4_;
      laser_info.is_hero_weapon = in_stack_fffffef4._24_4_;
      laser_info.is_damaging = in_stack_fffffef4._28_4_;
      laser_info.local_origin.x = (float)auVar6._0_4_;
      laser_info.local_origin.y = (float)auVar6._4_4_;
      laser_info.local_origin.z = (float)auVar6._8_4_;
      laser_info.local_hit_position.x = (float)auVar7._0_4_;
      laser_info.local_hit_position.y = (float)auVar7._4_4_;
      laser_info.local_hit_position.z = (float)auVar7._8_4_;
      laser_info.local_normal.x = (float)auVar8._0_4_;
      laser_info.local_normal.y = (float)auVar8._4_4_;
      laser_info.local_normal.z = (float)auVar8._8_4_;
      laser_info.incidence_angle = (float)in_stack_fffffef4._68_4_;
      laser_info.reflectivity = (float)in_stack_fffffef4._72_4_;
      laser_info.transparency = fVar10;
      core_fire_cpp_CFireEffect_traceLaser_FUN_004a2e20
                (0x01C73654,&CStack_38,&CStack_20,laser_info,recursion_depth);
      core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
      return;
    }
  }
  return;
}
