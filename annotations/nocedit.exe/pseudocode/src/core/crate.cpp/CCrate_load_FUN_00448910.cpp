// Name: core_crate.cpp_CCrate_load_FUN_00448910
// Address: 00448910
// Address Range: [[00448910, 00448954]]
// Convention: unknown
// Signature: undefined core_crate.cpp_CCrate_load_FUN_00448910()
// Globals:
//   TerminatedCString s_modelName_00619b10
//   TerminatedCString s_lastPlatform_00619b1a
//   int g_CCrateClassVersion = 0x2
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0

#include "nocturne.h"

/* Signature: void actors_other_crate.cpp_CCrate_load(CCrate* pCrate, undefined4 param_2, char*
   param_3, char* param_4) */

void core_crate_cpp_CCrate_load_FUN_00448910(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),"modelName");
  if (g_CCrateClassVersion < 2) {
    return;
  }
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)&in_stack_00000004[2].location.area_id,"lastPlatform");
  return;
}


// Assembly code:
// 00448910: PUSH EBX
//   Label: core_crate.cpp_CCrate_load_FUN_00448910
// 00448911: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00448915: PUSH EBX
// 00448916: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 0044891b: ADD ESP,0x4
// 0044891e: PUSH 0x619b10
//   XREF to: 00619b10 (DATA)
// 00448923: LEA EAX,[EBX + 0x158]
// 00448929: PUSH EAX
// 0044892a: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 0044892f: MOV EDX,dword ptr [0x0066ec78]
//   XREF to: 0066ec78 (READ)
// 00448935: ADD ESP,0x8
// 00448938: CMP EDX,0x2
// 0044893b: JGE 0x0044893f
//   XREF to: 0044893f (CONDITIONAL_JUMP)
// 0044893d: POP EBX
// 0044893e: RET
// 0044893f: PUSH 0x619b1a
//   Label: LAB_0044893f
//   XREF to: 00619b1a (DATA)
// 00448944: LEA EAX,[EBX + 0x2dc]
// 0044894a: PUSH EAX
// 0044894b: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 00448950: ADD ESP,0x8
// 00448953: POP EBX
// 00448954: RET
