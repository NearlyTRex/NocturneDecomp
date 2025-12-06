// Name: core_charactr.cpp_staticInit_FUN_00427d80
// Address: 00427d80
// Address Range: [[00427d80, 00427dad]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_staticInit_FUN_00427d80(void)

#include "nocturne.h"

void __cdecl core_charactr_cpp_staticInit_FUN_00427d80(void)

{
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&DAT_00823a98);
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CCharacterClassInfo,"CCharacter",(CDemonActor_FactoryFunc *)0x0,
             &g_CCharacterClassVersion,6,&g_CDemonActorClassInfo);
  return;
}
