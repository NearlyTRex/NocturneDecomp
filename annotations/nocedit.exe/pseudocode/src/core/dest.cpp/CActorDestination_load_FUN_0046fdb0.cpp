// Name: core_dest.cpp_CActorDestination_load_FUN_0046fdb0
// Address: 0046fdb0
// Address Range: [[0046fdb0, 0046fe6c]]
// Convention: unknown
// Signature: undefined core_dest.cpp_CActorDestination_load_FUN_0046fdb0()
// Cross-references:
//   core_filmreel.cpp_serialize_FUN_004bede0 (004bede0) at 004bede6 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_whoGoesHere_0061e3f6
//   TerminatedCString s_whatEvent_0061e402
//   TerminatedCString s_destActor_0061e40c
//   TerminatedCString s_destClass_0061e416
//   TerminatedCString s_persistantEventFlag_0061e420
//   int g_CActorDestinationClassVersion = 0x4
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeString_FUN_0040b5c0

#include "nocturne.h"

/* Signature: int actors_other_dest.cpp_CActorDestination_load(CActorDestination* pActorDestination)
    */

void core_dest_cpp_CActorDestination_load_FUN_0046fdb0(void)

{
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  if (g_CActorDestinationClassVersion < 2) {
    core_actor_cpp_serializeString_FUN_0040b5c0((char **)&stack0xffffff00,"whoGoesHere");
    in_stack_00000004[1].actor_name[0] = '\0';
    in_stack_00000004[1].actor_name[1] = '\0';
    in_stack_00000004[1].actor_name[2] = '\0';
    in_stack_00000004[1].actor_name[3] = '\0';
  }
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[1].orient,"whatEvent");
  if (1 < g_CActorDestinationClassVersion) {
    core_actor_cpp_serializeActor_FUN_0040b870(in_stack_00000004 + 1,"destActor");
  }
  if (2 < g_CActorDestinationClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(in_stack_00000004[1].actor_name + 4),"destClass");
  }
  if (g_CActorDestinationClassVersion < 4) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[1].create_event + 0x1c),"persistantEventFlag");
  return;
}


// Assembly code:
// 0046fdb0: PUSH EBX
//   Label: core_dest.cpp_CActorDestination_load_FUN_0046fdb0
// 0046fdb1: SUB ESP,0x100
// 0046fdb7: MOV EBX,dword ptr [ESP + 0x108]
//   XREF to: Stack[0x4] (READ)
// 0046fdbe: PUSH EBX
// 0046fdbf: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 0046fdc4: MOV EDX,dword ptr [0x0066ef3c]
//   XREF to: 0066ef3c (READ)
// 0046fdca: ADD ESP,0x4
// 0046fdcd: CMP EDX,0x2
// 0046fdd0: JL 0x0046fe33
//   XREF to: 0046fe33 (CONDITIONAL_JUMP)
// 0046fdd2: PUSH 0x61e402
//   Label: LAB_0046fdd2
//   XREF to: 0061e402 (DATA)
// 0046fdd7: LEA EAX,[EBX + 0x188]
// 0046fddd: PUSH EAX
// 0046fdde: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0046fde3: MOV ECX,dword ptr [0x0066ef3c]
//   XREF to: 0066ef3c (READ)
// 0046fde9: ADD ESP,0x8
// 0046fdec: CMP ECX,0x2
// 0046fdef: JL 0x0046fe05
//   XREF to: 0046fe05 (CONDITIONAL_JUMP)
// 0046fdf1: PUSH 0x61e40c
//   XREF to: 0061e40c (DATA)
// 0046fdf6: LEA EAX,[EBX + 0x158]
// 0046fdfc: PUSH EAX
// 0046fdfd: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 0046fe02: ADD ESP,0x8
// 0046fe05: CMP dword ptr [0x0066ef3c],0x3
//   Label: LAB_0046fe05
//   XREF to: 0066ef3c (READ)
// 0046fe0c: JL 0x0046fe22
//   XREF to: 0046fe22 (CONDITIONAL_JUMP)
// 0046fe0e: PUSH 0x61e416
//   XREF to: 0061e416 (DATA)
// 0046fe13: LEA EAX,[EBX + 0x15c]
// 0046fe19: PUSH EAX
// 0046fe1a: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0046fe1f: ADD ESP,0x8
// 0046fe22: CMP dword ptr [0x0066ef3c],0x4
//   Label: LAB_0046fe22
//   XREF to: 0066ef3c (READ)
// 0046fe29: JGE 0x0046fe51
//   XREF to: 0046fe51 (CONDITIONAL_JUMP)
// 0046fe2b: ADD ESP,0x100
// 0046fe31: POP EBX
// 0046fe32: RET
// 0046fe33: PUSH 0x61e3f6
//   Label: LAB_0046fe33
//   XREF to: 0061e3f6 (DATA)
// 0046fe38: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x104] (DATA)
// 0046fe3c: PUSH EAX
// 0046fe3d: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0046fe42: ADD ESP,0x8
// 0046fe45: MOV dword ptr [EBX + 0x158],0x0
// 0046fe4f: JMP 0x0046fdd2
//   XREF to: 0046fdd2 (UNCONDITIONAL_JUMP)
// 0046fe51: PUSH 0x61e420
//   Label: LAB_0046fe51
//   XREF to: 0061e420 (DATA)
// 0046fe56: ADD EBX,0x1ec
// 0046fe5c: PUSH EBX
// 0046fe5d: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0046fe62: ADD ESP,0x8
// 0046fe65: ADD ESP,0x100
// 0046fe6b: POP EBX
// 0046fe6c: RET
