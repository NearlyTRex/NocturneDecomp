// Name: core_barrier.cpp_CBarrier_serialize_FUN_00414340
// Address: 00414340
// Address Range: [[00414340, 00414398]]
// Convention: __cdecl
// Signature: void core_barrier.cpp_CBarrier_serialize_FUN_00414340(CBarrier * this_ptr)
// Globals:
//   TerminatedCString s_size_0061516f
//   TerminatedCString s_effectClassNameList_00615174
//   TerminatedCString s_addToPathGrid_00615188
//   int g_CBarrierClassVersion = 0x2
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_actor.cpp_serializeVector_FUN_0040b340

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_serialize_FUN_00414340(CBarrier *this_ptr)

{
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base_actor);
  core_actor_cpp_serializeVector_FUN_0040b340((CVector3f *)this_ptr->field1_0x158,"size");
  if (g_CBarrierClassVersion < 2) {
    return;
  }
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(this_ptr->field1_0x158 + 0x10),"effectClassNameList");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(this_ptr->field1_0x158 + 0xc),"addToPathGrid");
  return;
}


// Assembly code:
// 00414340: PUSH EBX
//   Label: core_barrier.cpp_CBarrier_serialize_FUN_00414340
// 00414341: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00414345: PUSH EBX
// 00414346: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 0041434b: ADD ESP,0x4
// 0041434e: PUSH 0x61516f
//   XREF to: 0061516f (DATA)
// 00414353: LEA EAX,[EBX + 0x158]
// 00414359: PUSH EAX
// 0041435a: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 0041435f: MOV EDX,dword ptr [0x0066e4a0]
//   XREF to: 0066e4a0 (READ)
// 00414365: ADD ESP,0x8
// 00414368: CMP EDX,0x2
// 0041436b: JGE 0x0041436f
//   XREF to: 0041436f (CONDITIONAL_JUMP)
// 0041436d: POP EBX
// 0041436e: RET
// 0041436f: PUSH 0x615174
//   Label: LAB_0041436f
//   XREF to: 00615174 (DATA)
// 00414374: LEA EAX,[EBX + 0x168]
// 0041437a: PUSH EAX
// 0041437b: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00414380: ADD ESP,0x8
// 00414383: PUSH 0x615188
//   XREF to: 00615188 (DATA)
// 00414388: ADD EBX,0x164
// 0041438e: PUSH EBX
// 0041438f: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00414394: ADD ESP,0x8
// 00414397: POP EBX
// 00414398: RET
