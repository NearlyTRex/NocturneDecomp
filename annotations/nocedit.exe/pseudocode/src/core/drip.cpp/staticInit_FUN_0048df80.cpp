// Name: core_drip.cpp_staticInit_FUN_0048df80
// Address: 0048df80
// Address Range: [[0048df80, 0048dfb0]]
// Convention: __cdecl
// Signature: void __cdecl core_drip_cpp_staticInit_FUN_0048df80(void)

#include "nocturne.h"

void __cdecl core_drip_cpp_staticInit_FUN_0048df80(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CDripClassInfo,"CDrip",core_drip_cpp_factoryFuncDrip_FUN_0048dfc0,
             &g_CDripClassVersion,6,&g_CDemonActorClassInfo);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&CKeyFramedModelInstance_02c9b170);
  return;
}
