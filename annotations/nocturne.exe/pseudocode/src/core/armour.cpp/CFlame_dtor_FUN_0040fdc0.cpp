// Name: core_armour.cpp_CFlame_dtor_FUN_0040fdc0
// Address: 0040fdc0
// Address Range: [[0040fdc0, 0040fe0d]]
// Convention: unknown
// Signature: CDemonActor * core_armour_cpp_CFlame_dtor_FUN_0040fdc0(CDemonActor *param_1,byte param_2)

#include "nocturne.h"

CDemonActor * core_armour_cpp_CFlame_dtor_FUN_0040fdc0(CDemonActor *param_1,byte param_2)

{
  CDemonActor *pCVar1;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CFlameTypeInfo_00599940);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(param_1,1);
  if ((param_2 & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
