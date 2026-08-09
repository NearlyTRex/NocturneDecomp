// Name: core_imp.cpp_staticInit_FUN_004f9830
// Address: 004f9830
// Address Range: [[004f9830, 004f9853]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_staticInit_FUN_004f9830(void)

#include "nocturne.h"

void __cdecl core_imp_cpp_staticInit_FUN_004f9830(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CImpClassInfo,"CImp",core_imp_cpp_factoryFuncImp_FUN_004f9860,
             &g_CImpClassVersion,1,&g_CEnemyClassInfo);
  return;
}
