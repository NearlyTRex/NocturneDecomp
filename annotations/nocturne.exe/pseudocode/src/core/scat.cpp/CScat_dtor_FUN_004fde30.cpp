// Name: core_scat.cpp_CScat_dtor_FUN_004fde30
// Address: 004fde30
// Address Range: [[004fde30, 004fde7d]]
// Convention: unknown
// Signature: undefined4 core_scat_cpp_CScat_dtor_FUN_004fde30(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint core_scat_cpp_CScat_dtor_FUN_004fde30(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = __vec_delete(param_1,&g_CScatTypeInfo_005a16a0);
    shape_memdbg_cpp_free_FUN_00564486(uVar1);
    return param_1;
  }
  uVar1 = core_hero_cpp_FUN_004b4800(param_1,1);
  if ((param_2 & 2) == 0) {
    return uVar1;
  }
  FUN_00564494(uVar1);
  return uVar1;
}
