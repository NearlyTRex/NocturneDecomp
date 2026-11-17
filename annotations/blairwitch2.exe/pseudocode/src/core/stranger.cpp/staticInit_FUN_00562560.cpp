// Name: core_stranger.cpp_staticInit_FUN_00562560
// Address: 00562560
// Address Range: [[00562560, 005625bf]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_staticInit_FUN_00562560(void)

#include "nocturne.h"

void __cdecl core_stranger_cpp_staticInit_FUN_00562560(void)

{
  g_StrangerWeaponEulerPlusX.x = 0.523;
  g_StrangerWeaponEulerPlusX.y = 0.056;
  g_StrangerWeaponEulerPlusX.z = 0.126;
  g_StrangerWeaponEulerMinusX.x = -0.523;
  g_StrangerWeaponEulerMinusX.y = 0.056;
  g_StrangerWeaponEulerMinusX.z = 0.126;
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CStrangerClassInfo,"CStranger",
             core_stranger_cpp_factoryFuncStranger_FUN_005627c0,&g_CStrangerClassVersion,9,
             &g_CHeroClassInfo);
  return;
}
