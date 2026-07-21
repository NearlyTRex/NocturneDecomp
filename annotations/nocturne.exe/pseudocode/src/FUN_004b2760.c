// Name: FUN_004b2760
// Address: 004b2760
// Address Range: [[004b2760, 004b27bf]]
// Convention: unknown
// Signature: int FUN_004b2760(undefined4 param_1)

#include "nocturne.h"

int FUN_004b2760(uint param_1)

{
  int iVar1;
  
  iVar1 = core_weapon_cpp_CWeapon_ctor_FUN_00553d90(param_1);
  *(byte ***)(iVar1 + 0x14c) = &PTR_core_weapon_cpp_CWeapon_setup_FUN_00553f10_0059e744;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (iVar1 + 0x150,"gat.kfm");
  *(uint *)(iVar1 + 0x2d0) = 0;
  *(uint *)(iVar1 + 0x2d4) = 1;
  *(uint *)(iVar1 + 0x2dc) = 1;
  *(uint *)(iVar1 + 0x2e0) = 0x42480000;
  *(uint *)(iVar1 + 0x2e4) = 0;
  return iVar1;
}
