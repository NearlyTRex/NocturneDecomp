// Name: core_flies.cpp_FUN_004cbe60
// Address: 004cbe60
// Address Range: [[004cbe60, 004cbef4]]
// Convention: unknown
// Signature: undefined core_flies.cpp_FUN_004cbe60()
// Globals:
//   TerminatedCString s_count_0062a3ef
//   TerminatedCString s_followActor_0062a3f5
//   TerminatedCString s_gatherCount_0062a401
//   TerminatedCString s_gatherTime_0062a40d
//   TerminatedCString s_boxSize_0062a418
//   int g_CFliesClassVersion = 0x3
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeVector_FUN_0040b340

#include "nocturne.h"

void core_flies_cpp_FUN_004cbe60(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[1].actor_name + 0xc),"count");
  if (g_CFliesClassVersion < 2) {
    if (g_CFliesClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)&in_stack_00000004[0x1f].runtime_state,"followActor");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&in_stack_00000004[0x1f].health,"gatherCount");
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)&in_stack_00000004[0x1f].field7_0x6c,"gatherTime");
    if (g_CFliesClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_serializeVector_FUN_0040b340
            ((CVector3f *)(in_stack_00000004 + 1),"boxSize");
  return;
}


// Assembly code:
// 004cbe60: PUSH EBX
//   Label: core_flies.cpp_FUN_004cbe60
// 004cbe61: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004cbe65: PUSH EBX
// 004cbe66: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 004cbe6b: ADD ESP,0x4
// 004cbe6e: PUSH 0x62a3ef
//   XREF to: 0062a3ef (DATA)
// 004cbe73: LEA EAX,[EBX + 0x164]
// 004cbe79: PUSH EAX
// 004cbe7a: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004cbe7f: MOV EDX,dword ptr [0x0067b510]
//   XREF to: 0067b510 (READ)
// 004cbe85: ADD ESP,0x8
// 004cbe88: CMP EDX,0x2
// 004cbe8b: JGE 0x004cbe98
//   XREF to: 004cbe98 (CONDITIONAL_JUMP)
// 004cbe8d: CMP dword ptr [0x0067b510],0x3
//   XREF to: 0067b510 (READ)
// 004cbe94: JGE 0x004cbedf
//   XREF to: 004cbedf (CONDITIONAL_JUMP)
// 004cbe96: POP EBX
// 004cbe97: RET
// 004cbe98: PUSH 0x62a3f5
//   Label: LAB_004cbe98
//   XREF to: 0062a3f5 (DATA)
// 004cbe9d: LEA EAX,[EBX + 0x2a08]
// 004cbea3: PUSH EAX
// 004cbea4: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 004cbea9: ADD ESP,0x8
// 004cbeac: PUSH 0x62a401
//   XREF to: 0062a401 (DATA)
// 004cbeb1: LEA EAX,[EBX + 0x2a0c]
// 004cbeb7: PUSH EAX
// 004cbeb8: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004cbebd: ADD ESP,0x8
// 004cbec0: PUSH 0x62a40d
//   XREF to: 0062a40d (DATA)
// 004cbec5: LEA EAX,[EBX + 0x2a14]
// 004cbecb: PUSH EAX
// 004cbecc: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004cbed1: ADD ESP,0x8
// 004cbed4: CMP dword ptr [0x0067b510],0x3
//   XREF to: 0067b510 (READ)
// 004cbedb: JGE 0x004cbedf
//   XREF to: 004cbedf (CONDITIONAL_JUMP)
// 004cbedd: POP EBX
// 004cbede: RET
// 004cbedf: PUSH 0x62a418
//   Label: LAB_004cbedf
//   XREF to: 0062a418 (DATA)
// 004cbee4: ADD EBX,0x158
// 004cbeea: PUSH EBX
// 004cbeeb: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 004cbef0: ADD ESP,0x8
// 004cbef3: POP EBX
// 004cbef4: RET
