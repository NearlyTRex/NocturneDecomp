// Name: core_stranger.cpp_staticInit_FUN_005bae80
// Address: 005bae80
// Address Range: [[005bae80, 005baedf]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_staticInit_FUN_005bae80(void)

#include "nocturne.h"

void __cdecl core_stranger_cpp_staticInit_FUN_005bae80(void)

{
  g_StrangerWeaponEulerPlusX.x = 0.523;
  g_StrangerWeaponEulerPlusX.y = 0.056;
  g_StrangerWeaponEulerPlusX.z = 0.126;
  g_StrangerWeaponEulerMinusX.x = -0.523;
  g_StrangerWeaponEulerMinusX.y = 0.056;
  g_StrangerWeaponEulerMinusX.z = 0.126;
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CStrangerClassInfo,"CStranger",
             core_stranger_cpp_factoryFuncStranger_FUN_005bb0e0,&g_CStrangerClassVersion,9,
             &g_CHeroClassInfo);
  return;
}
