// Name: core_icepick.cpp_CIcePick_dtor_FUN_004bb6b0
// Address: 004bb6b0
// Address Range: [[004bb6b0, 004bb6fd]]
// Convention: unknown
// Signature: CHero * core_icepick_cpp_CIcePick_dtor_FUN_004bb6b0(CHero *param_1,byte param_2)

#include "nocturne.h"

CHero * core_icepick_cpp_CIcePick_dtor_FUN_004bb6b0(CHero *param_1,byte param_2)

{
  CHero *pCVar1;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CIcePickTypeInfo_0059f530);
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
