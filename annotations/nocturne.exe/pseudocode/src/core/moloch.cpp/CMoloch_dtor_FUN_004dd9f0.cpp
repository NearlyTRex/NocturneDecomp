// Name: core_moloch.cpp_CMoloch_dtor_FUN_004dd9f0
// Address: 004dd9f0
// Address Range: [[004dd9f0, 004dda6e]]
// Convention: unknown
// Signature: int core_moloch_cpp_CMoloch_dtor_FUN_004dd9f0(int param_1,byte param_2)

#include "nocturne.h"

int core_moloch_cpp_CMoloch_dtor_FUN_004dd9f0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = __vec_delete(param_1,&g_CMolochTypeInfo_005a0c10);
    shape_memdbg_cpp_free_FUN_00564486(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x14c) = &PTR_core_moloch_cpp_CMoloch_setup_FUN_004dda70_005a0ac4;
  iVar1 = core_morph_cpp_CMorph_dtor_FUN_004e0070(param_1 + 0x21dc4,0);
  iVar1 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(iVar1 + -0x2388,0);
  iVar1 = core_hero_cpp_FUN_004b4800(iVar1 + -0x1fa3c,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
