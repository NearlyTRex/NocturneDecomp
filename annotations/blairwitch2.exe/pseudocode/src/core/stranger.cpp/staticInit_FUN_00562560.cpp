// Name: core_stranger.cpp_staticInit_FUN_00562560
// Address: 00562560
// Address Range: [[00562560, 005625bf]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_staticInit_FUN_00562560(void)

#include "nocturne.h"

void __cdecl core_stranger_cpp_staticInit_FUN_00562560(void)

{
  g_CVector3f_0264be14.x = 0.523;
  g_CVector3f_0264be14.y = 0.056;
  g_CVector3f_0264be14.z = 0.126;
  g_CVector3f_0264be20.x = -0.523;
  g_CVector3f_0264be20.y = 0.056;
  g_CVector3f_0264be20.z = 0.126;
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CStrangerClassInfo,"CStranger",
             core_stranger_cpp_factoryFuncStranger_FUN_005627c0,&g_CStrangerClassVersion,9,
             &g_CHeroClassInfo);
  return;
}
