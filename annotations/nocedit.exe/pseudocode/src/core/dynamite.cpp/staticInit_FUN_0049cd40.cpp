// Name: core_dynamite.cpp_staticInit_FUN_0049cd40
// Address: 0049cd40
// Address Range: [[0049cd40, 0049cd7c]]
// Convention: __cdecl
// Signature: void __cdecl core_dynamite_cpp_staticInit_FUN_0049cd40(void)

#include "nocturne.h"

void __cdecl core_dynamite_cpp_staticInit_FUN_0049cd40(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CDynamiteClassInfo,"CDynamite",
             core_dynamite_cpp_factoryFuncDynamite_FUN_0049cd80,&g_CDynamiteClassVersion,1,
             &g_CWeaponClassInfo);
  CVector3f_02ceed24.x = 0.0;
  CVector3f_02ceed24.y = -32.0;
  CVector3f_02ceed24.z = 0.0;
  return;
}
