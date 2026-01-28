// Name: core_stranger.cpp_staticInit_FUN_005bae80
// Address: 005bae80
// Address Range: [[005bae80, 005baedf]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_staticInit_FUN_005bae80(void)

#include "nocturne.h"

void __cdecl core_stranger_cpp_staticInit_FUN_005bae80(void)

{
  FLOAT_03f6bab0 = 0.523;
  FLOAT_03f6bab4 = 0.056;
  FLOAT_03f6bab8 = 0.126;
  FLOAT_03f6babc = -0.523;
  FLOAT_03f6bac0 = 0.056;
  FLOAT_03f6bac4 = 0.126;
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CStrangerClassInfo,"CStranger",core_stranger_cpp_factoryFunc_FUN_005bb0e0,
             &g_CStrangerClassVersion,9,&g_CHeroClassInfo);
  return;
}
