// Name: core_bride.cpp_staticInit_FUN_00423700
// Address: 00423700
// Address Range: [[00423700, 00423755]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_staticInit_FUN_00423700(void)

#include "nocturne.h"

void __cdecl core_bride_cpp_staticInit_FUN_00423700(void)

{
  CVector3f_00822c88.x = -0.6;
  CVector3f_00822c88.y = 0.0;
  CVector3f_00822c88.z = 0.0;
  CVector3f_00822c94.x = 0.6;
  CVector3f_00822c94.y = 0.0;
  CVector3f_00822c94.z = 0.0;
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CBrideClassInfo,"CBride",core_bride_cpp_factoryFuncBride_FUN_00423760,
             &g_CBrideClassVersion,4,&g_CEnemyClassInfo);
  return;
}
