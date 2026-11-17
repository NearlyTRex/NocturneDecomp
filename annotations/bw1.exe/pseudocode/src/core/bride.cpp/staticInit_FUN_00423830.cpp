// Name: core_bride.cpp_staticInit_FUN_00423830
// Address: 00423830
// Address Range: [[00423830, 00423885]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_staticInit_FUN_00423830(void)

#include "nocturne.h"

void __cdecl core_bride_cpp_staticInit_FUN_00423830(void)

{
  g_CVector3f_007c5334.x = -0.6;
  g_CVector3f_007c5334.y = 0.0;
  g_CVector3f_007c5334.z = 0.0;
  g_CVector3f_007c5340.x = 0.6;
  g_CVector3f_007c5340.y = 0.0;
  g_CVector3f_007c5340.z = 0.0;
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CBrideClassInfo,"CBride",core_bride_cpp_factoryFuncBride_FUN_00423890,
             &g_CBrideClassVersion,4,&g_CEnemyClassInfo);
  return;
}
