// Name: core_bride.cpp_staticInit_FUN_0041d8c0
// Address: 0041d8c0
// Address Range: [[0041d8c0, 0041d915]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_staticInit_FUN_0041d8c0(void)

#include "nocturne.h"

void __cdecl core_bride_cpp_staticInit_FUN_0041d8c0(void)

{
  g_CVector3f_007bcc88.x = -0.6;
  g_CVector3f_007bcc88.y = 0.0;
  g_CVector3f_007bcc88.z = 0.0;
  g_CVector3f_007bcc94.x = 0.6;
  g_CVector3f_007bcc94.y = 0.0;
  g_CVector3f_007bcc94.z = 0.0;
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CBrideClassInfo,"CBride",core_bride_cpp_factoryFuncBride_FUN_0041d920,
             &g_CBrideClassVersion,4,&g_CEnemyClassInfo);
  return;
}
