// Name: core_stranger.cpp_staticInit_FUN_005bae80
// Address: 005bae80
// Address Range: [[005bae80, 005baedf]]
// Convention: __cdecl
// Signature: CDemonActorType * core_stranger.cpp_staticInit_FUN_005bae80(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActorType * __cdecl core_stranger_cpp_staticInit_FUN_005bae80(void)

{
  CDemonActorType *pCVar1;
  
  _DAT_03f6bab0 = 0x3f05e354;
  _DAT_03f6bab4 = 0x3d656042;
  _DAT_03f6bab8 = 0x3e010625;
  _DAT_03f6babc = 0xbf05e354;
  _DAT_03f6bac0 = 0x3d656042;
  _DAT_03f6bac4 = 0x3e010625;
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CStrangerClassInfo,"CStranger",core_stranger_cpp_FUN_005bb0e0,
                      &g_CStrangerClassVersion,9,&g_CHeroClassInfo);
  return pCVar1;
}
