// Name: core_haystack.cpp_CHaystack_dtor_FUN_004b4140
// Address: 004b4140
// Address Range: [[004b4140, 004b418d]]
// Convention: unknown
// Signature: CHero * core_haystack_cpp_CHaystack_dtor_FUN_004b4140(CHero *param_1,byte param_2)

#include "nocturne.h"

CHero * core_haystack_cpp_CHaystack_dtor_FUN_004b4140(CHero *param_1,byte param_2)

{
  CHero *pCVar1;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CHaystackTypeInfo_0059e9d0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  pCVar1 = core_hero_cpp_CHero_dtor_FUN_004b4800(param_1,1);
  if ((param_2 & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
