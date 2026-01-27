// Name: core_biggs.cpp_staticInit_FUN_00418550
// Address: 00418550
// Address Range: [[00418550, 00418573]]
// Convention: __cdecl
// Signature: void core_biggs.cpp_staticInit_FUN_00418550(void)

#include "nocturne.h"

void __cdecl core_biggs_cpp_staticInit_FUN_00418550(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CBiggsClassInfo,"CBiggs",core_biggs_cpp_factoryFunc_FUN_00418580,
             &g_CBiggsClassVersion,1,&g_CEnemyClassInfo);
  return;
}
