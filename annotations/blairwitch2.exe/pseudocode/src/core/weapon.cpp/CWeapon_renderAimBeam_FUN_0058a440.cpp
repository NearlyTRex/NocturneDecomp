// Name: core_weapon.cpp_CWeapon_renderAimBeam_FUN_0058a440
// Address: 0058a440
// Address Range: [[0058a440, 0058a46f] [0058a471, 0058a5e6]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_renderAimBeam_FUN_0058a440(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_renderAimBeam_FUN_0058a440(CWeapon *this_ptr)

{
  SLaserInfo laser_info;
  int iVar1;
  CDemonActor *pCVar2;
  SLaserInfo *pSVar3;
  float *pfVar4;
  byte bVar5;
  float afStackY_1040 [970];
  byte auVar6 [12];
  byte auVar7 [12];
  byte auVar8 [12];
  byte auVar9 [12];
  byte in_stack_fffffef4 [76];
  uint uVar10;
  CDemonActor *actor_ptr;
  int recursion_depth;
  SLaserInfo SStack_ac;
  CVector3f CStack_58;
  float afStack_4c [3];
  CVector3f CStack_40;
  float fStack_34;
  float afStack_30 [5];
  float fStack_1c;
  float afStack_18 [4];
  
  bVar5 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (iVar1 != 0) {
    return;
  }
  (*(((this_ptr->base).vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  CStack_58.z = fStack_34;
  afStack_4c[(uint)bVar5 * -2] = afStack_30[(uint)bVar5 * -2];
  afStack_4c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  core_actor_cpp_FUN_00408d70();
  CStack_58.x = afStack_18[2];
  afStack_4c[(uint)bVar5 * -2 + -2] = afStack_18[(uint)bVar5 * -2 + 3];
  afStack_4c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -1] =
       *(float *)(&stack0xfffffff8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  afStack_30[4] = this_ptr->bolt_velocity;
  afStack_30[2] = 0.0;
  afStack_30[3] = 0.0;
  core_actor_cpp_FUN_00408cf0();
  CStack_40.x = fStack_1c;
  *(float *)((int)&CStack_40 + (uint)bVar5 * -8 + 4) = afStack_18[(uint)bVar5 * -2];
  *(float *)((int)&CStack_40 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       afStack_18[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,&this_ptr->base);
  if (this_ptr->carried_by_actor != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,this_ptr->carried_by_actor);
  }
  core_fire_cpp_SLaserInfo_ctor_FUN_0049dae0(&SStack_ac);
  SStack_ac.laser_type = 1;
  SStack_ac.color.r = (this_ptr->muzzle_flash_color).r;
  SStack_ac.color.g = (this_ptr->muzzle_flash_color).g;
  SStack_ac.color.b = (this_ptr->muzzle_flash_color).b;
  SStack_ac.intensity = 10.0;
  actor_ptr = this_ptr->carried_by_actor;
  uVar10 = 0x58a587;
  pCVar2 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c8f0(actor_ptr,g_CHeroClassInfo.name_hash);
  recursion_depth = 0;
  SStack_ac.is_damaging = 1;
  SStack_ac.is_hero_weapon = (uint)(pCVar2 != (CDemonActor *)0x0);
  pSVar3 = &SStack_ac;
  pfVar4 = (float *)&stack0xfffffef4;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar4 = pSVar3->intensity;
    pSVar3 = (SLaserInfo *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  laser_info.stored_angle = (float)uVar10;
  auVar6 = in_stack_fffffef4._12_12_;
  auVar7 = in_stack_fffffef4._32_12_;
  auVar8 = in_stack_fffffef4._44_12_;
  auVar9 = in_stack_fffffef4._56_12_;
  laser_info.intensity = (float)in_stack_fffffef4._0_4_;
  laser_info.beam_width = (float)in_stack_fffffef4._4_4_;
  laser_info.laser_type = in_stack_fffffef4._8_4_;
  laser_info.color.r = auVar6._0_4_;
  laser_info.color.g = auVar6._4_4_;
  laser_info.color.b = auVar6._8_4_;
  laser_info.is_hero_weapon = in_stack_fffffef4._24_4_;
  laser_info.is_damaging = in_stack_fffffef4._28_4_;
  laser_info.local_origin.x = (float)auVar7._0_4_;
  laser_info.local_origin.y = (float)auVar7._4_4_;
  laser_info.local_origin.z = (float)auVar7._8_4_;
  laser_info.local_hit_position.x = (float)auVar8._0_4_;
  laser_info.local_hit_position.y = (float)auVar8._4_4_;
  laser_info.local_hit_position.z = (float)auVar8._8_4_;
  laser_info.local_normal.x = (float)auVar9._0_4_;
  laser_info.local_normal.y = (float)auVar9._4_4_;
  laser_info.local_normal.z = (float)auVar9._8_4_;
  laser_info.incidence_angle = (float)in_stack_fffffef4._68_4_;
  laser_info.reflectivity = (float)in_stack_fffffef4._72_4_;
  laser_info.transparency = (float)actor_ptr;
  core_fire_cpp_CFireEffect_traceLaser_FUN_0049db20
            (0x01C3DEB4,&CStack_58,&CStack_40,laser_info,recursion_depth);
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  return;
}
