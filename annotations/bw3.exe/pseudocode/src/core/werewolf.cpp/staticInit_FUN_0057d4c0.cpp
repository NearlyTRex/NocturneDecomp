// Name: core_werewolf.cpp_staticInit_FUN_0057d4c0
// Address: 0057d4c0
// Address Range: [[0057d4c0, 0057d51f]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_staticInit_FUN_0057d4c0(void)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_staticInit_FUN_0057d4c0(void)

{
  g_CVector3f_02d2025c.x = -0.28;
  g_CVector3f_02d2025c.y = 0.42;
  g_CVector3f_02d2025c.z = 0.6;
  g_CVector3f_02d20268.x = 0.35;
  g_CVector3f_02d20268.y = 0.42;
  g_CVector3f_02d20268.z = 0.6;
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CWerewolfClassInfo,"CWerewolf",
             core_werewolf_cpp_factoryFuncWerewolf_FUN_0057d520,&g_CWerewolfClassVersion,6,
             &g_CEnemyClassInfo);
  return;
}
