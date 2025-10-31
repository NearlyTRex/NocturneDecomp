// Name: core_chain.cpp_FUN_0042fcc0
// Address: 0042fcc0
// Address Range: [[0042fcc0, 0042fd18]]
// Convention: unknown
// Signature: undefined core_chain.cpp_FUN_0042fcc0()
// Cross-references:
//   core_chain.cpp_FUN_004300d0 (004300d0) at 004301d7 [UNCONDITIONAL_CALL]
// Globals:
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0

#include "nocturne.h"

/* Signature: undefined1 actors_other_chain.cpp_FUN_0042fcc0(undefined4 param_1, undefined4 param_2)
    */

undefined4 core_chain_cpp_FUN_0042fcc0(void)

{
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  CVector3f local_14;
  
  local_14.x = (float)core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                (&local_14,&g_ZeroVector,
                                 (CMatrix3x4f *)
                                 (*(int *)(in_stack_00000004 + 0x168) * 0x30 +
                                 *(int *)(in_stack_00000004 + 0x164) + 0xfd8));
  core_actor_cpp_CDemonActor_FUN_00408ec0(*(CDemonActor **)(in_stack_00000004 + 0x164));
  return in_stack_00000008;
}


// Assembly code:
// 0042fcc0: PUSH EBX
//   Label: core_chain.cpp_FUN_0042fcc0
// 0042fcc1: PUSH ESI
// 0042fcc2: SUB ESP,0xc
// 0042fcc5: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0042fcc9: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0042fccd: MOV EDX,dword ptr [ESI + 0x168]
// 0042fcd3: LEA EAX,[EDX*0x4 + 0x0]
// 0042fcda: SUB EAX,EDX
// 0042fcdc: MOV ECX,dword ptr [ESI + 0x164]
// 0042fce2: SHL EAX,0x4
// 0042fce5: LEA EDX,[ECX + 0xfd8]
// 0042fceb: ADD EAX,EDX
// 0042fced: PUSH EAX
// 0042fcee: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0042fcf3: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x14] (DATA)
// 0042fcf7: PUSH EAX
// 0042fcf8: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0042fcfd: ADD ESP,0xc
// 0042fd00: PUSH EAX
// 0042fd01: PUSH EBX
// 0042fd02: MOV EDX,dword ptr [ESI + 0x164]
// 0042fd08: PUSH EDX
// 0042fd09: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0042fd0e: ADD ESP,0xc
// 0042fd11: MOV EAX,EBX
// 0042fd13: ADD ESP,0xc
// 0042fd16: POP ESI
// 0042fd17: POP EBX
// 0042fd18: RET
