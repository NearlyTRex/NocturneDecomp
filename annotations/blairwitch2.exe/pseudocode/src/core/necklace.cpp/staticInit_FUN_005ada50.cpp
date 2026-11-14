// Name: core_necklace.cpp_staticInit_FUN_005ada50
// Address: 005ada50
// Address Range: [[005ada50, 005ada73]]
// Convention: __cdecl
// Signature: void __cdecl core_necklace_cpp_staticInit_FUN_005ada50(void)

#include "nocturne.h"

void __cdecl core_necklace_cpp_staticInit_FUN_005ada50(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CNecklaceClassInfo,"CNecklace",
             core_necklace_cpp_factoryFuncNecklace_FUN_005ada80,&g_CNecklaceClassVersion,1,
             &g_CBoxActorClassInfo);
  return;
}
