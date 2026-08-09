// Name: core_stranger.cpp_staticInit_FUN_00534e30
// Address: 00534e30
// Address Range: [[00534e30, 00534e8f]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_staticInit_FUN_00534e30(void)

#include "nocturne.h"

void __cdecl core_stranger_cpp_staticInit_FUN_00534e30(void)

{
  CVector3f_02dc9f34.x = 0.523;
  CVector3f_02dc9f34.y = 0.056;
  CVector3f_02dc9f34.z = 0.126;
  CVector3f_02dc9f40.x = -0.523;
  CVector3f_02dc9f40.y = 0.056;
  CVector3f_02dc9f40.z = 0.126;
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CStrangerActorType_02dc9fac,"CStranger",
             core_stranger_cpp_factoryFuncStranger_FUN_00535090,&INT_005c0ff0,9,
             &g_CHeroActorType_01cae0ec);
  return;
}
