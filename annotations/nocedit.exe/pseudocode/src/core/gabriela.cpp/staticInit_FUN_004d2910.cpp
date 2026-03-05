// Name: core_gabriela.cpp_staticInit_FUN_004d2910
// Address: 004d2910
// Address Range: [[004d2910, 004d29e9]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_staticInit_FUN_004d2910(void)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_staticInit_FUN_004d2910(void)

{
  FLOAT_02d7b808 = 0.1414286f * 30.0f;
  FLOAT_02d7b80c = 0.4074074f * 30.0f;
  FLOAT_02d7b810 = 0.1052632f * 20.0f;
  UNION_UVector3_02d7b814.i.x = 0x3f028f5c;
  UNION_UVector3_02d7b814.i.y = -0x435c28f6;
  UNION_UVector3_02d7b814.i.z = 0x3db851ec;
  UNION_UVector3_02d7b820.i.x = 0x3e4ccccd;
  UNION_UVector3_02d7b820.i.y = -0x415eb852;
  UNION_UVector3_02d7b820.f.z = 0.0;
  UNION_UVector3_02d7b82c.i.x = 0x3fc90fdb;
  UNION_UVector3_02d7b82c.f.y = 0.0;
  FLOAT_02d7b840 = 0.0;
  UNION_UVector3_02d7b82c.i.z = 0x3eb33333;
  FLOAT_02d7b838 = 2.3;
  FLOAT_02d7b83c = 4.4;
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CGabriellaClassInfo,"CGabriella",core_gabriela_cpp_factoryFunc_FUN_004d2ae0
             ,&g_CGabriellaClassVersion,3,&g_CHeroClassInfo);
  return;
}
