// Name: core_imp.cpp_staticInit_FUN_004f2790
// Address: 004f2790
// Address Range: [[004f2790, 004f27b3]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_staticInit_FUN_004f2790(void)

#include "nocturne.h"

void __cdecl core_imp_cpp_staticInit_FUN_004f2790(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CImpClassInfo,"CImp",core_imp_cpp_factoryFuncImp_FUN_004f27c0,
             &g_CImpClassVersion,1,&g_CEnemyClassInfo);
  return;
}
