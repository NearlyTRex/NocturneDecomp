// Name: core_dynamite.cpp_staticInit_FUN_0049cd40
// Address: 0049cd40
// Address Range: [[0049cd40, 0049cd7c]]
// Convention: __cdecl
// Signature: void __cdecl core_dynamite_cpp_staticInit_FUN_0049cd40(void)

#include "nocturne.h"

void __cdecl core_dynamite_cpp_staticInit_FUN_0049cd40(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CDynamiteClassInfo,"CDynamite",core_dynamite_cpp_factoryFunc_FUN_0049cd80,
             &g_CDynamiteClassVersion,1,&g_CWeaponClassInfo);
  DAT_02ceed24 = 0;
  DAT_02ceed28 = -0x3e000000;
  DAT_02ceed2c = 0;
  return;
}
