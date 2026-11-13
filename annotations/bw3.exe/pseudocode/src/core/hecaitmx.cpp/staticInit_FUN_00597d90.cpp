// Name: core_hecaitmx.cpp_staticInit_FUN_00597d90
// Address: 00597d90
// Address Range: [[00597d90, 00597db3]]
// Convention: __cdecl
// Signature: void __cdecl core_hecaitmx_cpp_staticInit_FUN_00597d90(void)

#include "nocturne.h"

void __cdecl core_hecaitmx_cpp_staticInit_FUN_00597d90(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CHecaitomixClassInfo,"CHecaitomix",
             core_hecaitmx_cpp_factoryFuncHecaitomix_FUN_00597dc0,&g_CHecaitomixClassVersion,1,
             &g_CEnemyClassInfo);
  return;
}
