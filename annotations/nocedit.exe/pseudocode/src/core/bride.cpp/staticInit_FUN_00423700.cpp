// Name: core_bride.cpp_staticInit_FUN_00423700
// Address: 00423700
// Address Range: [[00423700, 00423755]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_staticInit_FUN_00423700(void)

#include "nocturne.h"

void __cdecl core_bride_cpp_staticInit_FUN_00423700(void)

{
  FLOAT_00822c88 = -0.6;
  FLOAT_00822c8c = 0.0;
  FLOAT_00822c90 = 0.0;
  FLOAT_00822c94 = 0.6;
  FLOAT_00822c98 = 0.0;
  FLOAT_00822c9c = 0.0;
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CBrideClassInfo,"CBride",core_bride_cpp_factoryFunc_FUN_00423760,
             &g_CBrideClassVersion,4,&g_CEnemyClassInfo);
  return;
}
