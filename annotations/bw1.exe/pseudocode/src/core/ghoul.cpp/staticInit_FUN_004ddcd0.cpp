// Name: core_ghoul.cpp_staticInit_FUN_004ddcd0
// Address: 004ddcd0
// Address Range: [[004ddcd0, 004ddd25]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_staticInit_FUN_004ddcd0(void)

#include "nocturne.h"

void __cdecl core_ghoul_cpp_staticInit_FUN_004ddcd0(void)

{
  g_CVector3f_01cd0d44.x = -0.6;
  g_CVector3f_01cd0d44.y = 0.0;
  g_CVector3f_01cd0d44.z = 0.0;
  g_CVector3f_01cd0d50.x = 0.6;
  g_CVector3f_01cd0d50.y = 0.0;
  g_CVector3f_01cd0d50.z = 0.0;
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CGhoulClassInfo,"CGhoul",core_ghoul_cpp_factoryFuncGhoul_FUN_004ddd30,
             &g_CGhoulClassVersion,7,&g_CEnemyClassInfo);
  return;
}
