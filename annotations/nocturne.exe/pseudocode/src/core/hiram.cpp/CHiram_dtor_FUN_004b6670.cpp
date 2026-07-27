// Name: core_hiram.cpp_CHiram_dtor_FUN_004b6670
// Address: 004b6670
// Address Range: [[004b6670, 004b6742]]
// Convention: unknown
// Signature: int core_hiram_cpp_CHiram_dtor_FUN_004b6670(int param_1,byte param_2)

#include "nocturne.h"

int core_hiram_cpp_CHiram_dtor_FUN_004b6670(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = __vec_delete(param_1,&g_CHiramTypeInfo_0059eee0);
    shape_memdbg_cpp_free_FUN_00564486(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x14c) = &PTR_core_hiram_cpp_FUN_004b6750_0059eda4;
  iVar1 = core_path_cpp_CPathMap_dtor_FUN_004efdd0(param_1 + 0xbc8c,0);
  iVar1 = core_armour_cpp_CFlame_arrdtor_FUN_0040fe50(iVar1 + -0x88c8,0);
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
