// Name: core_gabriela.cpp_staticInit_FUN_004c6070
// Address: 004c6070
// Address Range: [[004c6070, 004c6149]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_staticInit_FUN_004c6070(void)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_staticInit_FUN_004c6070(void)

{
  g_FLOAT_01cc90c8 = 0.1414286f * 30.0f;
  g_FLOAT_01cc90cc = 0.4074074f * 30.0f;
  g_FLOAT_01cc90d0 = 0.1052632f * 20.0f;
  g_GabriellaWeaponEuler.i.x = 0x3f028f5c;
  g_GabriellaWeaponEuler.i.y = -0x435c28f6;
  g_GabriellaWeaponEuler.i.z = 0x3db851ec;
  g_GabriellaWeaponAttachEuler.i.x = 0x3e4ccccd;
  g_GabriellaWeaponAttachEuler.i.y = -0x415eb852;
  g_GabriellaWeaponAttachEuler.f.z = 0.0;
  g_GabriellaWeaponAttachOffset.i.x = 0x3fc90fdb;
  g_GabriellaWeaponAttachOffset.f.y = 0.0;
  g_FLOAT_01cc9100 = 0.0;
  g_GabriellaWeaponAttachOffset.i.z = 0x3eb33333;
  g_FLOAT_01cc90f8 = 2.3;
  g_FLOAT_01cc90fc = 4.4;
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CGabriellaClassInfo,"CGabriella",
             core_gabriela_cpp_factoryFuncGabriella_FUN_004c6240,&g_CGabriellaClassVersion,3,
             &g_CHeroClassInfo);
  return;
}
