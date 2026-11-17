// Name: core_werewolf.cpp_staticInit_FUN_0058b6f0
// Address: 0058b6f0
// Address Range: [[0058b6f0, 0058b74f]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_staticInit_FUN_0058b6f0(void)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_staticInit_FUN_0058b6f0(void)

{
  g_CVector3f_02662d04.x = -0.28;
  g_CVector3f_02662d04.y = 0.42;
  g_CVector3f_02662d04.z = 0.6;
  g_CVector3f_02662d10.x = 0.35;
  g_CVector3f_02662d10.y = 0.42;
  g_CVector3f_02662d10.z = 0.6;
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CWerewolfClassInfo,"CWerewolf",
             core_werewolf_cpp_factoryFuncWerewolf_FUN_0058b750,&g_CWerewolfClassVersion,6,
             &g_CEnemyClassInfo);
  return;
}
