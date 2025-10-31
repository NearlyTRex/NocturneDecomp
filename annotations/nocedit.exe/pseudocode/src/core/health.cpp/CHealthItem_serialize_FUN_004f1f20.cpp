// Name: core_health.cpp_CHealthItem_serialize_FUN_004f1f20
// Address: 004f1f20
// Address Range: [[004f1f20, 004f1f9f]]
// Convention: unknown
// Signature: undefined core_health.cpp_CHealthItem_serialize_FUN_004f1f20()
// Globals:
//   TerminatedCString s_modelName_0062e9fb
//   TerminatedCString s_useCount_0062ea05
//   TerminatedCString s_hpRestored_0062ea0e
//   TerminatedCString s_descriptiveName_0062ea19
//   undefined4 g_CHealthItemClassVersion
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   core_actor.cpp_serializeLocalizedString_FUN_0040b6e0

#include "nocturne.h"

void core_health_cpp_CHealthItem_serialize_FUN_004f1f20(void)

{
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  char *apcStack_f4 [60];
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),"modelName");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[2].location.position.y,"useCount");
  core_actor_cpp_serializeFloat_FUN_0040b770
            (&in_stack_00000004[2].location.position.z,"hpRestored");
  if (g_CHealthItemClassVersion != 2) {
    return;
  }
  core_actor_cpp_serializeLocalizedString_FUN_0040b6e0(apcStack_f4,"descriptiveName");
  return;
}


// Assembly code:
// 004f1f20: PUSH EBX
//   Label: core_health.cpp_CHealthItem_serialize_FUN_004f1f20
// 004f1f21: SUB ESP,0x100
// 004f1f27: MOV EBX,dword ptr [ESP + 0x108]
//   XREF to: Stack[0x4] (READ)
// 004f1f2e: PUSH EBX
// 004f1f2f: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 004f1f34: ADD ESP,0x4
// 004f1f37: PUSH 0x62e9fb
//   XREF to: 0062e9fb (DATA)
// 004f1f3c: LEA EAX,[EBX + 0x158]
// 004f1f42: PUSH EAX
// 004f1f43: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 004f1f48: ADD ESP,0x8
// 004f1f4b: PUSH 0x62ea05
//   XREF to: 0062ea05 (DATA)
// 004f1f50: LEA EAX,[EBX + 0x2d4]
// 004f1f56: PUSH EAX
// 004f1f57: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004f1f5c: ADD ESP,0x8
// 004f1f5f: PUSH 0x62ea0e
//   XREF to: 0062ea0e (DATA)
// 004f1f64: ADD EBX,0x2d8
// 004f1f6a: PUSH EBX
// 004f1f6b: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004f1f70: MOV EDX,dword ptr [0x0067cc04]
//   XREF to: 0067cc04 (READ)
// 004f1f76: ADD ESP,0x8
// 004f1f79: CMP EDX,0x2
// 004f1f7c: JZ 0x004f1f86
//   XREF to: 004f1f86 (CONDITIONAL_JUMP)
// 004f1f7e: ADD ESP,0x100
// 004f1f84: POP EBX
// 004f1f85: RET
// 004f1f86: PUSH 0x62ea19
//   Label: LAB_004f1f86
//   XREF to: 0062ea19 (DATA)
// 004f1f8b: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x104] (DATA)
// 004f1f8f: PUSH EAX
// 004f1f90: CALL core_actor.cpp_serializeLocalizedString_FUN_0040b6e0
//   XREF to: 0040b6e0 (UNCONDITIONAL_CALL)
// 004f1f95: ADD ESP,0x8
// 004f1f98: ADD ESP,0x100
// 004f1f9e: POP EBX
// 004f1f9f: RET
