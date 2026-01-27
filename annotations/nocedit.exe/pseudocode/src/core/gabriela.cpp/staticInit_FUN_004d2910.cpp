// Name: core_gabriela.cpp_staticInit_FUN_004d2910
// Address: 004d2910
// Address Range: [[004d2910, 004d29e9]]
// Convention: __cdecl
// Signature: void core_gabriela.cpp_staticInit_FUN_004d2910(void)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_staticInit_FUN_004d2910(void)

{
  FLOAT_02d7b808 = 0.1414286f * 30.0f;
  FLOAT_02d7b80c = 0.4074074f * 30.0f;
  FLOAT_02d7b810 = 0.1052632f * 20.0f;
  FLOAT_02d7b814 = 0.51;
  FLOAT_02d7b818 = -0.02;
  FLOAT_02d7b81c = 0.09;
  FLOAT_02d7b820 = 0.2;
  FLOAT_02d7b824 = -0.315;
  FLOAT_02d7b828 = 0.0;
  FLOAT_02d7b82c = 1.5707964;
  FLOAT_02d7b830 = 0.0;
  FLOAT_02d7b840 = 0.0;
  FLOAT_02d7b834 = 0.35;
  FLOAT_02d7b838 = 2.3;
  FLOAT_02d7b83c = 4.4;
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CGabriellaClassInfo,"CGabriella",core_gabriela_cpp_factoryFunc_FUN_004d2ae0
             ,&g_CGabriellaClassVersion,3,&g_CHeroClassInfo);
  return;
}
