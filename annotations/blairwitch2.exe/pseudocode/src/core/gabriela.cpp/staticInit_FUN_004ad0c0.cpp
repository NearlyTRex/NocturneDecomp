// Name: core_gabriela.cpp_staticInit_FUN_004ad0c0
// Address: 004ad0c0
// Address Range: [[004ad0c0, 004ad199]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_staticInit_FUN_004ad0c0(void)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_staticInit_FUN_004ad0c0(void)

{
  g_FLOAT_01cb0638 = 0.1414286f * 30.0f;
  g_FLOAT_01cb063c = 0.4074074f * 30.0f;
  g_FLOAT_01cb0640 = 0.1052632f * 20.0f;
  g_GabriellaWeaponEuler.i.x = 0x3f028f5c;
  g_GabriellaWeaponEuler.i.y = -0x435c28f6;
  g_GabriellaWeaponEuler.i.z = 0x3db851ec;
  g_GabriellaWeaponAttachEuler.i.x = 0x3e4ccccd;
  g_GabriellaWeaponAttachEuler.i.y = -0x415eb852;
  g_GabriellaWeaponAttachEuler.f.z = 0.0;
  g_GabriellaWeaponAttachOffset.i.x = 0x3fc90fdb;
  g_GabriellaWeaponAttachOffset.f.y = 0.0;
  g_FLOAT_01cb0670 = 0.0;
  g_GabriellaWeaponAttachOffset.i.z = 0x3eb33333;
  g_FLOAT_01cb0668 = 2.3;
  g_FLOAT_01cb066c = 4.4;
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CGabriellaClassInfo,"CGabriella",
             core_gabriela_cpp_factoryFuncGabriella_FUN_004ad290,&g_CGabriellaClassVersion,3,
             &g_CHeroClassInfo);
  return;
}
