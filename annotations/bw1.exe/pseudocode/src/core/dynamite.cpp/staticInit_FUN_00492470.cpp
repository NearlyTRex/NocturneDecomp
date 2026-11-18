// Name: core_dynamite.cpp_staticInit_FUN_00492470
// Address: 00492470
// Address Range: [[00492470, 004924ac]]
// Convention: __cdecl
// Signature: void __cdecl core_dynamite_cpp_staticInit_FUN_00492470(void)

#include "nocturne.h"

void __cdecl core_dynamite_cpp_staticInit_FUN_00492470(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CDynamiteClassInfo,"CDynamite",
             core_dynamite_cpp_factoryFuncDynamite_FUN_004924b0,&g_CDynamiteClassVersion,1,
             &g_CWeaponClassInfo);
  g_CVector3f_01c3db98.x = 0.0;
  g_CVector3f_01c3db98.y = -32.0;
  g_CVector3f_01c3db98.z = 0.0;
  return;
}
