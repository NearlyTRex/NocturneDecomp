// Name: core_drip.cpp_staticInit_FUN_0046e9e0
// Address: 0046e9e0
// Address Range: [[0046e9e0, 0046ea10]]
// Convention: __cdecl
// Signature: void __cdecl core_drip_cpp_staticInit_FUN_0046e9e0(void)

#include "nocturne.h"

void __cdecl core_drip_cpp_staticInit_FUN_0046e9e0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CDripClassInfo,(char *)0x5bc6fd,core_drip_cpp_factoryFuncDrip_FUN_0046ea20,
             &g_CDripClassVersion,6,&g_CDemonActorClassInfo);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500((CKeyFramedModelInstance *)0x1c0b3dc);
  return;
}
