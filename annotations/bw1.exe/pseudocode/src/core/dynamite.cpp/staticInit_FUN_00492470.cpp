// Name: core_dynamite.cpp_staticInit_FUN_00492470
// Address: 00492470
// Address Range: [[00492470, 004924ac]]
// Convention: __cdecl
// Signature: void __cdecl core_dynamite_cpp_staticInit_FUN_00492470(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dynamite_cpp_staticInit_FUN_00492470(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CDynamiteClassInfo,"p@CDynamite" + 2,
             core_dynamite_cpp_factoryFuncDynamite_FUN_004924b0,&g_CDynamiteClassVersion,1,
             &g_CWeaponClassInfo);
  _DAT_01c3db98 = 0;
  _DAT_01c3db9c = 0xc2000000;
  _DAT_01c3dba0 = 0;
  return;
}
