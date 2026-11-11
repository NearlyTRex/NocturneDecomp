// Name: core_weapon.cpp_CWeapon_renderAimBeam_FUN_0058a440
// Address: 0058a440
// Address Range: [[0058a440, 0058a46f] [0058a471, 0058a5e6]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_renderAimBeam_FUN_0058a440(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_renderAimBeam_FUN_0058a440(CWeapon *this_ptr)

{
  int iVar1;
  SLaserInfo *pSVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_1040 [970];
  uint uStack_c0;
  SLaserInfo SStack_ac;
  uint uStack_58;
  uint auStack_54 [5];
  uint auStack_40 [3];
  uint uStack_34;
  uint uStack_28;
  uint uStack_24;
  float fStack_20;
  uint uStack_1c;
  uint auStack_18 [4];
  
  bVar4 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (iVar1 != 0) {
    return;
  }
  uStack_c0 = 0x58a48b;
  (*(((this_ptr->base).vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  auStack_54[1] = uStack_34;
  auStack_54[(uint)bVar4 * -2 + 2] = auStack_54[(uint)bVar4 * -2 + 9];
  auStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 3] =
       auStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  uStack_c0 = 0x58a4ae;
  core_actor_cpp_FUN_00408d70();
  uStack_58 = auStack_18[2];
  auStack_54[(uint)bVar4 * -2] = auStack_18[(uint)bVar4 * -2 + 3];
  auStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(uint *)(&stack0xfffffff8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fStack_20 = this_ptr->bolt_velocity;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_c0 = 0x58a4f1;
  core_actor_cpp_FUN_00408cf0();
  auStack_40[0] = uStack_1c;
  auStack_54[(uint)bVar4 * -2 + 6] = auStack_18[(uint)bVar4 * -2];
  auStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       auStack_18[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  uStack_c0 = 0x58a51a;
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,&this_ptr->base);
  if (this_ptr->carried_by_actor != (CDemonActor *)0x0) {
    uStack_c0 = 0x58a534;
    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,this_ptr->carried_by_actor);
  }
  core_fire_cpp_SLaserInfo_ctor_FUN_0049dae0(&SStack_ac);
  SStack_ac.laser_type = 1;
  SStack_ac.color.r = (this_ptr->muzzle_flash_color).r;
  SStack_ac.color.g = (this_ptr->muzzle_flash_color).g;
  SStack_ac.color.b = (this_ptr->muzzle_flash_color).b;
  SStack_ac.intensity = 10.0;
  uStack_c0 = 0x58a587;
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0();
  SStack_ac.is_damaging = 1;
  SStack_ac.is_hero_weapon = (uint)(iVar1 != 0);
  pSVar2 = &SStack_ac;
  pfVar3 = (float *)&stack0xfffffef4;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = pSVar2->intensity;
    pSVar2 = (SLaserInfo *)((int)pSVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
  }
  core_fire_cpp_FUN_0049db20(0x01C3DEB4,&uStack_58,auStack_54 + 5);
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  return;
}
