// Name: core_colonel.cpp_staticInit_FUN_004442d0
// Address: 004442d0
// Address Range: [[004442d0, 004442f3]]
// Convention: __cdecl
// Signature: void __cdecl core_colonel_cpp_staticInit_FUN_004442d0(void)

#include "nocturne.h"

void __cdecl core_colonel_cpp_staticInit_FUN_004442d0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CColonelClassInfo,"CColonel",
             core_colonel_cpp_factoryFuncColonel_FUN_00444300,&g_CColonelClassVersion,1,
             &g_CHeroClassInfo);
  return;
}
