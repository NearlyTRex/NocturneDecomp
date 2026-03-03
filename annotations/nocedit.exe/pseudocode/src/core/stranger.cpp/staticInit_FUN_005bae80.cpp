// Name: core_stranger.cpp_staticInit_FUN_005bae80
// Address: 005bae80
// Address Range: [[005bae80, 005baedf]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_staticInit_FUN_005bae80(void)

#include "nocturne.h"

void __cdecl core_stranger_cpp_staticInit_FUN_005bae80(void)

{
  CVector3f_03f6bab0.x = 0.523;
  CVector3f_03f6bab0.y = 0.056;
  CVector3f_03f6bab0.z = 0.126;
  CVector3f_03f6babc.x = -0.523;
  CVector3f_03f6babc.y = 0.056;
  CVector3f_03f6babc.z = 0.126;
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CStrangerClassInfo,"CStranger",core_stranger_cpp_factoryFunc_FUN_005bb0e0,
             &g_CStrangerClassVersion,9,&g_CHeroClassInfo);
  return;
}
