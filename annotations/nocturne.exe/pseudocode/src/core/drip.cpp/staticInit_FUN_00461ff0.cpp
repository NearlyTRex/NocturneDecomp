// Name: core_drip.cpp_staticInit_FUN_00461ff0
// Address: 00461ff0
// Address Range: [[00461ff0, 00462020]]
// Convention: __cdecl
// Signature: void __cdecl core_drip_cpp_staticInit_FUN_00461ff0(void)

#include "nocturne.h"

void __cdecl core_drip_cpp_staticInit_FUN_00461ff0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CDripActorType_01b7b2f4,"CDrip",core_drip_cpp_FUN_00462030,&g_INT_005b064c,
             6,&g_CDemonActorActorType_00763e48);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490((CKeyFramedModelInstance *)0x1b7b330);
  return;
}
