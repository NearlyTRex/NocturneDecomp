// Name: core_ghoul.cpp_staticInit_FUN_004c6850
// Address: 004c6850
// Address Range: [[004c6850, 004c68a5]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_staticInit_FUN_004c6850(void)

#include "nocturne.h"

void __cdecl core_ghoul_cpp_staticInit_FUN_004c6850(void)

{
  g_CVector3f_01d22d4c.x = -0.6;
  g_CVector3f_01d22d4c.y = 0.0;
  g_CVector3f_01d22d4c.z = 0.0;
  g_CVector3f_01d22d58.x = 0.6;
  g_CVector3f_01d22d58.y = 0.0;
  g_CVector3f_01d22d58.z = 0.0;
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CGhoulClassInfo,"CGhoul",core_ghoul_cpp_factoryFuncGhoul_FUN_004c68b0,
             &g_CGhoulClassVersion,7,&g_CEnemyClassInfo);
  return;
}
