// Name: core_charactr.cpp_staticInit_FUN_00423ea0
// Address: 00423ea0
// Address Range: [[00423ea0, 00423ecd]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_staticInit_FUN_00423ea0(void)

#include "nocturne.h"

void __cdecl core_charactr_cpp_staticInit_FUN_00423ea0(void)

{
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(&DAT_007658e4);
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CCharacterActorType_00765a60,"CCharacter",(CDemonActor_FactoryFunc *)0x0,
             &g_INT_005ad1e8,6,&g_CDemonActorActorType_00763e48);
  return;
}
