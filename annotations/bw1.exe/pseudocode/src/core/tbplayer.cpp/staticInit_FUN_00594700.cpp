// Name: core_tbplayer.cpp_staticInit_FUN_00594700
// Address: 00594700
// Address Range: [[00594700, 00594746]]
// Convention: unknown
// Signature: void core_tbplayer_cpp_staticInit_FUN_00594700(void)

#include "nocturne.h"

void core_tbplayer_cpp_staticInit_FUN_00594700(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CBassPlayerClassInfo,"CBassPlayer",
             core_tbplayer_cpp_factoryFuncBassPlayer_FUN_00594750,&g_CBassPlayerClassVersion,1,
             &g_CNPCClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c160
            ((CDemonActorType *)0x2c837cc,"CDrummer",
             core_tbplayer_cpp_factoryFuncDrummer_FUN_005949d0,(int *)0x625994,1,&g_CNPCClassInfo);
  return;
}
