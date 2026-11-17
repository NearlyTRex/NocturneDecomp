// Name: core_werewolf.cpp_staticInit_FUN_005af240
// Address: 005af240
// Address Range: [[005af240, 005af29f]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_staticInit_FUN_005af240(void)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_staticInit_FUN_005af240(void)

{
  g_CVector3f_02c9a544.x = -0.28;
  g_CVector3f_02c9a544.y = 0.42;
  g_CVector3f_02c9a544.z = 0.6;
  g_CVector3f_02c9a550.x = 0.35;
  g_CVector3f_02c9a550.y = 0.42;
  g_CVector3f_02c9a550.z = 0.6;
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CWerewolfClassInfo,"CWerewolf",
             core_werewolf_cpp_factoryFuncWerewolf_FUN_005af2a0,&g_CWerewolfClassVersion,6,
             &g_CEnemyClassInfo);
  return;
}
