// Name: core_charactr.cpp_staticInit_FUN_004222a0
// Address: 004222a0
// Address Range: [[004222a0, 004222cd]]
// Convention: unknown
// Signature: void core_charactr_cpp_staticInit_FUN_004222a0(void)

#include "nocturne.h"

void core_charactr_cpp_staticInit_FUN_004222a0(void)

{
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
            ((CKeyFramedModelInstance *)&DAT_007bdadc);
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CCharacterClassInfo,"CCharacter",(CDemonActor_FactoryFunc *)0x0,
             &g_CCharacterClassVersion,9,&g_CDemonActorClassInfo);
  return;
}
