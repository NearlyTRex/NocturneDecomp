// Name: core_werewolf.cpp_staticInit_FUN_005efb70
// Address: 005efb70
// Address Range: [[005efb70, 005efbcf]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_staticInit_FUN_005efb70(void)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_staticInit_FUN_005efb70(void)

{
  g_WerewolfEyeGlowOffsetLeft.x = -0.28;
  g_WerewolfEyeGlowOffsetLeft.y = 0.42;
  g_WerewolfEyeGlowOffsetLeft.z = 0.6;
  g_WerewolfEyeGlowOffsetRight.x = 0.35;
  g_WerewolfEyeGlowOffsetRight.y = 0.42;
  g_WerewolfEyeGlowOffsetRight.z = 0.6;
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CWerewolfClassInfo,"CWerewolf",
             core_werewolf_cpp_factoryFuncWerewolf_FUN_005efbd0,&g_CWerewolfClassVersion,6,
             &g_CEnemyClassInfo);
  return;
}
