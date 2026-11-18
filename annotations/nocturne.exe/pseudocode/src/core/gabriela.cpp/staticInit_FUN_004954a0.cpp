// Name: core_gabriela.cpp_staticInit_FUN_004954a0
// Address: 004954a0
// Address Range: [[004954a0, 00495579]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_staticInit_FUN_004954a0(void)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_staticInit_FUN_004954a0(void)

{
  g_FLOAT_01c71358 = 0.1414286f * 30.0f;
  g_FLOAT_01c7135c = 0.4074074f * 30.0f;
  g_FLOAT_01c71360 = 0.1052632f * 20.0f;
  g_GabriellaWeaponEuler.x = 0.51;
  g_GabriellaWeaponEuler.y = -0.02;
  g_GabriellaWeaponEuler.z = 0.09;
  g_GabriellaWeaponAttachEuler.x = 0.2;
  g_GabriellaWeaponAttachEuler.y = -0.315;
  g_GabriellaWeaponAttachEuler.z = 0.0;
  g_GabriellaWeaponAttachOffset.x = 1.5707964;
  g_GabriellaWeaponAttachOffset.y = 0.0;
  CVector3f_01c71388.z = 0.0;
  g_GabriellaWeaponAttachOffset.z = 0.35;
  CVector3f_01c71388.x = 2.3;
  CVector3f_01c71388.y = 4.4;
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CGabriellaClassInfo,"CGabriella",
             core_gabriela_cpp_factoryFuncGabriella_FUN_00495670,&g_CGabriellaClassVersion,3,
             &g_CHeroClassInfo);
  return;
}
