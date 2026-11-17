// Name: core_stranger.cpp_staticInit_FUN_00584fe0
// Address: 00584fe0
// Address Range: [[00584fe0, 0058503f]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_staticInit_FUN_00584fe0(void)

#include "nocturne.h"

void __cdecl core_stranger_cpp_staticInit_FUN_00584fe0(void)

{
  g_StrangerWeaponEulerPlusX.x = 0.523;
  g_StrangerWeaponEulerPlusX.y = 0.056;
  g_StrangerWeaponEulerPlusX.z = 0.126;
  g_StrangerWeaponEulerMinusX.x = -0.523;
  g_StrangerWeaponEulerMinusX.y = 0.056;
  g_StrangerWeaponEulerMinusX.z = 0.126;
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CStrangerClassInfo,"CStranger",
             core_stranger_cpp_factoryFuncStranger_FUN_00585240,&g_CStrangerClassVersion,9,
             &g_CHeroClassInfo);
  return;
}
