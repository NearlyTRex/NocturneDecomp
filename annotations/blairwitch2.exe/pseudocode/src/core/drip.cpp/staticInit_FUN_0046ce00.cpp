// Name: core_drip.cpp_staticInit_FUN_0046ce00
// Address: 0046ce00
// Address Range: [[0046ce00, 0046ce30]]
// Convention: __cdecl
// Signature: void __cdecl core_drip_cpp_staticInit_FUN_0046ce00(void)

#include "nocturne.h"

void __cdecl core_drip_cpp_staticInit_FUN_0046ce00(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CDripClassInfo,(char *)0x5d176d,core_drip_cpp_factoryFuncDrip_FUN_0046ce40,
             &g_CDripClassVersion,6,&g_CDemonActorClassInfo);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80((CKeyFramedModelInstance *)0x1bd3848);
  return;
}
