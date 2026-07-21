// Name: core_boneguy.cpp_CBoneGuy_dtor_FUN_0041a400
// Address: 0041a400
// Address Range: [[0041a400, 0041a4c8]]
// Convention: unknown
// Signature: int core_boneguy_cpp_CBoneGuy_dtor_FUN_0041a400(int param_1,byte param_2)

#include "nocturne.h"

int core_boneguy_cpp_CBoneGuy_dtor_FUN_0041a400(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = __vec_delete(param_1,&DAT_0059aa20);
    shape_memdbg_cpp_free_FUN_00564486(uVar2);
    return param_1;
  }
  iVar1 = core_boneguy_cpp_SBoneGuyBox_arrdtor_FUN_0041a4f0(param_1 + 0xbda4,0);
  iVar1 = core_armour_cpp_CFlame_arrdtor_FUN_0040fe50(iVar1 + -0x89e0,0);
  iVar1 = core_armour_cpp_SFire_arrdtor_FUN_0040fe30(iVar1 + -0x4b0,0);
  iVar1 = core_armour_cpp_CVector3f_arrdtor_FUN_0040fe10(iVar1 + -0x20c,0);
  iVar1 = core_armour_cpp_CVector3f_arrdtor_FUN_0040fe10(iVar1 + -0xb4,0);
  iVar1 = core_cloth_cpp_CClothList_dtor_FUN_00438250(iVar1 + -0x1c8,0);
  iVar1 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(iVar1 + -0x293c,0);
  iVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(iVar1 + -0x150,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
