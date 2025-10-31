// Name: core_charactr.cpp_staticInit_FUN_00427d80
// Address: 00427d80
// Address Range: [[00427d80, 00427dad]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_staticInit_FUN_00427d80(void)
// Globals:
//   TerminatedCString s_CCharacter_00616ec2
//   int g_CCharacterClassVersion = 0x6
//   CDemonActorType g_CDemonActorClassInfo
//   CKeyFramedModelInstance DAT_00823a98
//   CDemonActorType g_CCharacterClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0

#include "nocturne.h"

void __cdecl core_charactr_cpp_staticInit_FUN_00427d80(void)

{
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&DAT_00823a98);
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CCharacterClassInfo,"CCharacter",(void *)0x0,&g_CCharacterClassVersion,6,
             &g_CDemonActorClassInfo);
  return;
}


// Assembly code:
// 00427d80: PUSH 0x823a98
//   Label: core_charactr.cpp_staticInit_FUN_00427d80
//   XREF to: 00823a98 (DATA)
// 00427d85: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 00427d8a: ADD ESP,0x4
// 00427d8d: PUSH 0x821ff8
//   XREF to: 00821ff8 (DATA)
// 00427d92: PUSH 0x6
// 00427d94: PUSH 0x66e770
//   XREF to: 0066e770 (DATA)
// 00427d99: PUSH 0x0
// 00427d9b: PUSH 0x616ec2
//   XREF to: 00616ec2 (DATA)
// 00427da0: PUSH 0x823c14
//   XREF to: 00823c14 (DATA)
// 00427da5: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00427daa: ADD ESP,0x18
// 00427dad: RET
