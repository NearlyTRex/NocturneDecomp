// Name: core_stone.cpp_FUN_00534d00
// Address: 00534d00
// Address Range: [[00534d00, 00534d21]]
// Convention: unknown
// Signature: void core_stone_cpp_FUN_00534d00(CBoxActor *param_1)

#include "nocturne.h"

void core_stone_cpp_FUN_00534d00(CBoxActor *param_1)

{
  CBoxActor *pCVar1;
  
  pCVar1 = core_boxactor_cpp_CBoxActor_ctor_FUN_0041e300(param_1);
  (pCVar1->base).vtable._ub =
       (CDemonActor_vtable *)&PTR_core_boxactor_cpp_CBoxActor_setup_FUN_0041e430_005a25d4;
  pCVar1[1].base.actor_name[0] = '\0';
  pCVar1[1].base.actor_name[1] = '\0';
  pCVar1[1].base.actor_name[2] = '\0';
  pCVar1[1].base.actor_name[3] = '\0';
  return;
}
