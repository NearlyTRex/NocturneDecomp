// Name: core_imp.cpp_staticInit_FUN_004bb700
// Address: 004bb700
// Address Range: [[004bb700, 004bb723]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_staticInit_FUN_004bb700(void)

#include "nocturne.h"

void __cdecl core_imp_cpp_staticInit_FUN_004bb700(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CImpClassInfo,"CImp",core_imp_cpp_factoryFuncImp_FUN_004bb730,
             &g_CImpClassVersion,1,&g_CEnemyClassInfo);
  return;
}
