// Name: core_scat.cpp_FUN_004fbc00
// Address: 004fbc00
// Address Range: [[004fbc00, 004fbcbe]]
// Convention: unknown
// Signature: int core_scat_cpp_FUN_004fbc00(undefined4 param_1)

#include "nocturne.h"

int core_scat_cpp_FUN_004fbc00(uint param_1)

{
  int iVar1;
  
  iVar1 = core_hero_cpp_FUN_004b46d0(param_1);
  *(byte ***)(iVar1 + 0x14c) = &PTR_core_scat_cpp_CScat_setup_FUN_004fbcc0_005a1554;
  *(uint *)(iVar1 + 0x1fa3c) = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(iVar1 + 0x150,"scat.dfm");
  *(uint *)(iVar1 + 0x1fa4c) = 0x3f800000;
  *(uint *)(iVar1 + 0x1fa48) = 0;
  *(uint *)(iVar1 + 0x1fa44) = *(uint *)(iVar1 + 0x1fa48);
  *(uint *)(iVar1 + 0x1fa40) = *(uint *)(iVar1 + 0x1fa44);
  core_scat_cpp_FUN_004fbe80(iVar1);
  *(uint *)(iVar1 + 0x1fa50) = 0;
  *(uint *)(iVar1 + 0x1fa58) = 0;
  *(uint *)(iVar1 + 0x1fa60) = 0;
  *(uint *)(iVar1 + 0x1fa64) = 0;
  *(uint *)(iVar1 + 0x1fa54) = *(uint *)(iVar1 + 0x1fa58);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            (iVar1,0,1,"draw_stand2coatPocket",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            (iVar1,1,2,"draw_coatPocket2aimPistols",0);
  return iVar1;
}
