// Name: core_gabriela.cpp_staticInit_FUN_004954a0
// Address: 004954a0
// Address Range: [[004954a0, 00495579]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_staticInit_FUN_004954a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_staticInit_FUN_004954a0(void)

{
  _DAT_01c71358 = 0.1414286f * 30.0f;
  _DAT_01c7135c = 0.4074074f * 30.0f;
  _DAT_01c71360 = 0.1052632f * 20.0f;
  CVector3f_01c71364.x = 0.51;
  CVector3f_01c71364.y = -0.02;
  CVector3f_01c71364.z = 0.09;
  CVector3f_01c71370.x = 0.2;
  CVector3f_01c71370.y = -0.315;
  CVector3f_01c71370.z = 0.0;
  CVector3f_01c7137c.x = 1.5707964;
  CVector3f_01c7137c.y = 0.0;
  CVector3f_01c71388.z = 0.0;
  CVector3f_01c7137c.z = 0.35;
  CVector3f_01c71388.x = 2.3;
  CVector3f_01c71388.y = 4.4;
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CGabriellaActorType_01c713e8,"CGabriella",
             core_gabriela_cpp_factoryFunc_FUN_00495670,&INT_005b92a8,3,&g_CHeroActorType_01cae0ec);
  return;
}
