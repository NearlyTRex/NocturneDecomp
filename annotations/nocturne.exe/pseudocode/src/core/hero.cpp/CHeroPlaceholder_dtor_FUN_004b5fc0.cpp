// Name: core_hero.cpp_CHeroPlaceholder_dtor_FUN_004b5fc0
// Address: 004b5fc0
// Address Range: [[004b5fc0, 004b6017]]
// Convention: unknown
// Signature: CDemonActor * core_hero_cpp_CHeroPlaceholder_dtor_FUN_004b5fc0(CDemonActor *param_1,byte param_2)

#include "nocturne.h"

CDemonActor * core_hero_cpp_CHeroPlaceholder_dtor_FUN_004b5fc0(CDemonActor *param_1,byte param_2)

{
  CDemonActor *pCVar1;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CHeroPlaceholderTypeInfo_0059ed60);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  (param_1->vtable)._ub =
       (CDemonActor_vtable *)&PTR_core_actor_cpp_CDemonActor_setup_FUN_00409fc0_0059ec84;
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(param_1,1);
  if ((param_2 & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
