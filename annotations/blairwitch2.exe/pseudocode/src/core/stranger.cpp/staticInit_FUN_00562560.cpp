// Name: core_stranger.cpp_staticInit_FUN_00562560
// Address: 00562560
// Address Range: [[00562560, 005625bf]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_staticInit_FUN_00562560(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_staticInit_FUN_00562560(void)

{
  _DAT_0264be14 = 0x3f05e354;
  _DAT_0264be18 = 0x3d656042;
  _DAT_0264be1c = 0x3e010625;
  _DAT_0264be20 = 0xbf05e354;
  _DAT_0264be24 = 0x3d656042;
  _DAT_0264be28 = 0x3e010625;
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CStrangerClassInfo,"CStranger",
             core_stranger_cpp_factoryFuncStranger_FUN_005627c0,&g_CStrangerClassVersion,9,
             &g_CHeroClassInfo);
  return;
}
