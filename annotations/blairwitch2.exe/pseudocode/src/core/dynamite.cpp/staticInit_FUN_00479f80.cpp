// Name: core_dynamite.cpp_staticInit_FUN_00479f80
// Address: 00479f80
// Address Range: [[00479f80, 00479fbc]]
// Convention: __cdecl
// Signature: void __cdecl core_dynamite_cpp_staticInit_FUN_00479f80(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dynamite_cpp_staticInit_FUN_00479f80(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CDynamiteClassInfo,"p@CDynamite" + 2,
             core_dynamite_cpp_factoryFuncDynamite_FUN_00479fc0,&g_CDynamiteClassVersion,1,
             &g_CWeaponClassInfo);
  _DAT_01c225dc = 0;
  _DAT_01c225e0 = 0xc2000000;
  _DAT_01c225e4 = 0;
  return;
}
