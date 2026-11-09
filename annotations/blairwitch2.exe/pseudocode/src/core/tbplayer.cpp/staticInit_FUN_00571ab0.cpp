// Name: core_tbplayer.cpp_staticInit_FUN_00571ab0
// Address: 00571ab0
// Address Range: [[00571ab0, 00571af6]]
// Convention: unknown
// Signature: void core_tbplayer_cpp_staticInit_FUN_00571ab0(void)

#include "nocturne.h"

void core_tbplayer_cpp_staticInit_FUN_00571ab0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CBassPlayerClassInfo,"CBassPlayer",
             core_tbplayer_cpp_factoryFuncBassPlayer_FUN_00571b00,&g_CBassPlayerClassVersion,1,
             &g_CNPCClassInfo);
  core_actor_cpp_registerActorClass_FUN_0040c450
            ((CDemonActorType *)0x264bffc,"CDrummer",core_tbplayer_cpp_FUN_00571d80,
             (int *)0x61e344,1,&g_CNPCClassInfo);
  return;
}
