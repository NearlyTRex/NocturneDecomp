// Name: core_stranger.cpp_staticInit_FUN_00584fe0
// Address: 00584fe0
// Address Range: [[00584fe0, 0058503f]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_staticInit_FUN_00584fe0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_staticInit_FUN_00584fe0(void)

{
  _DAT_02c835e4 = 0x3f05e354;
  _DAT_02c835e8 = 0x3d656042;
  _DAT_02c835ec = 0x3e010625;
  _DAT_02c835f0 = 0xbf05e354;
  _DAT_02c835f4 = 0x3d656042;
  _DAT_02c835f8 = 0x3e010625;
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CStrangerClassInfo,"CStranger",
             core_stranger_cpp_factoryFuncStranger_FUN_00585240,&g_CStrangerClassVersion,9,
             &g_CHeroClassInfo);
  return;
}
