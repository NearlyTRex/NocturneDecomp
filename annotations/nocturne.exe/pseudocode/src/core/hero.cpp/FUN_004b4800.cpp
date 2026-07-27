// Name: core_hero.cpp_FUN_004b4800
// Address: 004b4800
// Address Range: [[004b4800, 004b48c5]]
// Convention: unknown
// Signature: void core_hero_cpp_FUN_004b4800(int param_1)

#include "nocturne.h"

void core_hero_cpp_FUN_004b4800(int param_1)

{
  int iVar1;
  
  *(byte ***)(param_1 + 0x14c) = &PTR_core_hero_cpp_FUN_004b48d0_0059eb34;
  iVar1 = 0;
  do {
    if (param_1 == *(int *)(iVar1 + 0x1cae0d8)) {
      *(uint *)(iVar1 + 0x1cae0d8) = 0;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x10);
  iVar1 = core_inv_cpp_FUN_004bee60(param_1 + 0x1f5a0,0);
  iVar1 = core_path_cpp_CPathMap_dtor_FUN_004efdd0(iVar1 + -0x138e0,0);
  iVar1 = core_armour_cpp_CFlame_arrdtor_FUN_0040fe50(iVar1 + -0x88fc,0);
  iVar1 = core_armour_cpp_SFire_arrdtor_FUN_0040fe30(iVar1 + -0x4b0,0);
  iVar1 = core_armour_cpp_CVector3f_arrdtor_FUN_0040fe10(iVar1 + -0x20c,0);
  iVar1 = core_armour_cpp_CVector3f_arrdtor_FUN_0040fe10(iVar1 + -0xb4,0);
  iVar1 = core_cloth_cpp_CClothList_dtor_FUN_00438250(iVar1 + -0x1c8,0);
  iVar1 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(iVar1 + -0x293c,0);
  core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(iVar1 + -0x150,1);
  return;
}
