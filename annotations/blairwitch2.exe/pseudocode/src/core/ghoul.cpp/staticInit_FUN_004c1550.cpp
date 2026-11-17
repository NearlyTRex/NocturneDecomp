// Name: core_ghoul.cpp_staticInit_FUN_004c1550
// Address: 004c1550
// Address Range: [[004c1550, 004c15a5]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_staticInit_FUN_004c1550(void)

#include "nocturne.h"

void __cdecl core_ghoul_cpp_staticInit_FUN_004c1550(void)

{
  g_CVector3f_01cb81c8.x = -0.6;
  g_CVector3f_01cb81c8.y = 0.0;
  g_CVector3f_01cb81c8.z = 0.0;
  g_CVector3f_01cb81d4.x = 0.6;
  g_CVector3f_01cb81d4.y = 0.0;
  g_CVector3f_01cb81d4.z = 0.0;
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CGhoulClassInfo,"CGhoul",core_ghoul_cpp_factoryFuncGhoul_FUN_004c15b0,
             &g_CGhoulClassVersion,7,&g_CEnemyClassInfo);
  return;
}
