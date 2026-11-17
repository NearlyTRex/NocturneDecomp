// Name: core_biggs.cpp_staticInit_FUN_00414990
// Address: 00414990
// Address Range: [[00414990, 004149b3]]
// Convention: __cdecl
// Signature: void __cdecl core_biggs_cpp_staticInit_FUN_00414990(void)

#include "nocturne.h"

void __cdecl core_biggs_cpp_staticInit_FUN_00414990(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CBiggsClassInfo,"CBiggs",core_biggs_cpp_factoryFuncBiggs_FUN_004149c0,
             &g_CBiggsClassVersion,1,&g_CEnemyClassInfo);
  return;
}
