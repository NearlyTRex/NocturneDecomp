// Name: core_bride.cpp_staticInit_FUN_0041fb20
// Address: 0041fb20
// Address Range: [[0041fb20, 0041fb75]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_staticInit_FUN_0041fb20(void)

#include "nocturne.h"

void __cdecl core_bride_cpp_staticInit_FUN_0041fb20(void)

{
  CVector3f_00764ad8.x = -0.6;
  CVector3f_00764ad8.y = 0.0;
  CVector3f_00764ad8.z = 0.0;
  CVector3f_00764ae4.x = 0.6;
  CVector3f_00764ae4.y = 0.0;
  CVector3f_00764ae4.z = 0.0;
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CBrideActorType_00764af0,"CBride",core_bride_cpp_FUN_0041fb80,
             &g_INT_005ad0e0,4,&g_CEnemyActorType_01bcdebc);
  return;
}
