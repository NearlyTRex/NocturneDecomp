// Name: core_colonel.cpp_staticInit_FUN_00439cd0
// Address: 00439cd0
// Address Range: [[00439cd0, 00439cf3]]
// Convention: __cdecl
// Signature: void __cdecl core_colonel_cpp_staticInit_FUN_00439cd0(void)

#include "nocturne.h"

void __cdecl core_colonel_cpp_staticInit_FUN_00439cd0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CColonelClassInfo,"CColonel",
             core_colonel_cpp_factoryFuncColonel_FUN_00439d00,&g_CColonelClassVersion,1,
             &g_CHeroClassInfo);
  return;
}
