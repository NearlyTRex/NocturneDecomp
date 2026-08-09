// Name: core_werewolf.cpp_staticInit_FUN_00555a00
// Address: 00555a00
// Address Range: [[00555a00, 00555a5f]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_staticInit_FUN_00555a00(void)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_staticInit_FUN_00555a00(void)

{
  CVector3f_02de0774.x = -0.28;
  CVector3f_02de0774.y = 0.42;
  CVector3f_02de0774.z = 0.6;
  CVector3f_02de0780.x = 0.35;
  CVector3f_02de0780.y = 0.42;
  CVector3f_02de0780.z = 0.6;
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CWerewolfActorType_02de078c,"CWerewolf",
             core_werewolf_cpp_factoryFuncWerewolf_FUN_00555a60,&INT_005c1614,6,
             &g_CEnemyActorType_01bcdebc);
  return;
}
