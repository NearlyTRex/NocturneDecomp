// Name: core_stranger.cpp_FUN_00540a90
// Address: 00540a90
// Address Range: [[00540a90, 00540add]]
// Convention: unknown
// Signature: undefined4 core_stranger_cpp_FUN_00540a90(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint core_stranger_cpp_FUN_00540a90(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = __vec_delete(param_1,&g_CStrangerTypeInfo_005a2890);
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
