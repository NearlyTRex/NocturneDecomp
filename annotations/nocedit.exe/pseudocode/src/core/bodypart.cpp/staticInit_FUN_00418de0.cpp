// Name: core_bodypart.cpp_staticInit_FUN_00418de0
// Address: 00418de0
// Address Range: [[00418de0, 00418e03]]
// Convention: __cdecl
// Signature: void core_bodypart.cpp_staticInit_FUN_00418de0(void)
// Globals:
//   TerminatedCString s_CBodyPart_00615b6c
//   undefined4 g_CBodyPartClassVersion
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CBodyPartClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

void __cdecl core_bodypart_cpp_staticInit_FUN_00418de0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CBodyPartClassInfo,"CBodyPart",core_bodypart_cpp_FUN_00418fd0,
             &g_CBodyPartClassVersion,5,&g_CDemonActorClassInfo);
  return;
}


// Assembly code:
// 00418de0: PUSH 0x821ff8
//   Label: core_bodypart.cpp_staticInit_FUN_00418de0
//   XREF to: 00821ff8 (DATA)
// 00418de5: PUSH 0x5
// 00418de7: PUSH 0x66e52c
//   XREF to: 0066e52c (DATA)
// 00418dec: PUSH 0x418fd0
//   XREF to: 00418fd0 (DATA)
// 00418df1: PUSH 0x615b6c
//   XREF to: 00615b6c (DATA)
// 00418df6: PUSH 0x822908
//   XREF to: 00822908 (DATA)
// 00418dfb: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00418e00: ADD ESP,0x18
// 00418e03: RET
