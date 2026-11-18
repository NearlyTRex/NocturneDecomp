// Name: core_werewolf.cpp_staticInit_FUN_00555a00
// Address: 00555a00
// Address Range: [[00555a00, 00555a5f]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_staticInit_FUN_00555a00(void)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_staticInit_FUN_00555a00(void)

{
  g_WerewolfEyeGlowOffsetLeft.x = -0.28;
  g_WerewolfEyeGlowOffsetLeft.y = 0.42;
  g_WerewolfEyeGlowOffsetLeft.z = 0.6;
  g_WerewolfEyeGlowOffsetRight.x = 0.35;
  g_WerewolfEyeGlowOffsetRight.y = 0.42;
  g_WerewolfEyeGlowOffsetRight.z = 0.6;
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CWerewolfClassInfo,"CWerewolf",
             core_werewolf_cpp_factoryFuncWerewolf_FUN_00555a60,&g_CWerewolfClassVersion,6,
             &g_CEnemyClassInfo);
  return;
}
