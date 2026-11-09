// Name: core_charactr.cpp_staticInit_FUN_0042bfe0
// Address: 0042bfe0
// Address Range: [[0042bfe0, 0042c00d]]
// Convention: unknown
// Signature: void core_charactr_cpp_staticInit_FUN_0042bfe0(void)

#include "nocturne.h"

void core_charactr_cpp_staticInit_FUN_0042bfe0(void)

{
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860
            ((CKeyFramedModelInstance *)&DAT_007c61c4);
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CCharacterClassInfo,"CCharacter",(CDemonActor_FactoryFunc *)0x0,
             &g_CCharacterClassVersion,0xb,&g_CDemonActorClassInfo);
  return;
}
