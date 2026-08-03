// Name: core_dynamite.cpp_staticInit_FUN_0046eb60
// Address: 0046eb60
// Address Range: [[0046eb60, 0046eb9c]]
// Convention: __cdecl
// Signature: void __cdecl core_dynamite_cpp_staticInit_FUN_0046eb60(void)

#include "nocturne.h"

void __cdecl core_dynamite_cpp_staticInit_FUN_0046eb60(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CDynamiteActorType_01bca088,"CDynamite",
             core_dynamite_cpp_factoryFunc_FUN_0046eba0,&INT_005b6d24,1,&g_CWeaponActorType_02ddf970
            );
  g_CVector3f_01bca0c4.x = 0.0;
  g_CVector3f_01bca0c4.y = -32.0;
  g_CVector3f_01bca0c4.z = 0.0;
  return;
}
