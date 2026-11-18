// Name: core_dynamite.cpp_staticInit_FUN_00479f80
// Address: 00479f80
// Address Range: [[00479f80, 00479fbc]]
// Convention: __cdecl
// Signature: void __cdecl core_dynamite_cpp_staticInit_FUN_00479f80(void)

#include "nocturne.h"

void __cdecl core_dynamite_cpp_staticInit_FUN_00479f80(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CDynamiteClassInfo,"CDynamite",
             core_dynamite_cpp_factoryFuncDynamite_FUN_00479fc0,&g_CDynamiteClassVersion,1,
             &g_CWeaponClassInfo);
  g_CVector3f_01c225dc.x = 0.0;
  g_CVector3f_01c225dc.y = -32.0;
  g_CVector3f_01c225dc.z = 0.0;
  return;
}
