// Name: core_turret.cpp_staticInit_FUN_00549440
// Address: 00549440
// Address Range: [[00549440, 00549463]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_staticInit_FUN_00549440(void)

#include "nocturne.h"

void __cdecl core_turret_cpp_staticInit_FUN_00549440(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CTurretActorType_02dd10d0,"CTurret",
             core_turret_cpp_factoryFuncTurret_FUN_00549470,&INT_005c1160,2,
             &g_CWeaponActorType_02ddf970);
  return;
}
