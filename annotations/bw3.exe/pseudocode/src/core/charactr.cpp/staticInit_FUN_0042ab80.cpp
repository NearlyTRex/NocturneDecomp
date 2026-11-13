// Name: core_charactr.cpp_staticInit_FUN_0042ab80
// Address: 0042ab80
// Address Range: [[0042ab80, 0042abad]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_staticInit_FUN_0042ab80(void)

#include "nocturne.h"

void __cdecl core_charactr_cpp_staticInit_FUN_0042ab80(void)

{
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500
            ((CKeyFramedModelInstance *)&DAT_007e2b34);
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CCharacterClassInfo,"CCharacter",(CDemonActor_FactoryFunc *)0x0,
             &g_CCharacterClassVersion,0xe,&g_CDemonActorClassInfo);
  return;
}
