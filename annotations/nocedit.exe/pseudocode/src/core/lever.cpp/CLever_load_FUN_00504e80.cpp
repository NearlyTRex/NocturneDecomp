// Name: core_lever.cpp_CLever_load_FUN_00504e80
// Address: 00504e80
// Address Range: [[00504e80, 0050505a]]
// Convention: unknown
// Signature: undefined core_lever.cpp_CLever_load_FUN_00504e80()
// Globals:
//   TerminatedCString s_modelName_006310c0
//   TerminatedCString s_modelName_006310ca
//   TerminatedCString s_leverType_006310d4
//   TerminatedCString s_onEvent_006310de
//   TerminatedCString s_offEvent_006310e6
//   TerminatedCString s_sound_006310ef
//   TerminatedCString s_param_006310f5
//   TerminatedCString s_momentaryFlag_006310fb
//   TerminatedCString s_linkedLever_00631109
//   TerminatedCString s_endVertexIndex_00631115
//   TerminatedCString s_moving_00631124
//   TerminatedCString s_moveToPct_0063112b
//   TerminatedCString s_rules_00631135
//   TerminatedCString s_allowedSides_0063113b
//   TerminatedCString s_enableCollision_00631148
//   undefined4 g_CLeverClassVersion
//   int g_ActorReadingMode
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeRules_FUN_0040c000
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

/* Signature: undefined1 actors_other_lever.cpp_CLever_load(CLever* pLever) */

void core_lever_cpp_CLever_load_FUN_00504e80(void)

{
  char cVar1;
  BADSPACEBASE *in_ESP;
  char *pcVar2;
  char *pcVar3;
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  pcVar3 = &stack0xffffff30;
  if (g_ActorReadingMode == 1) {
    core_actor_cpp_serializeString_FUN_0040b5c0((char **)&stack0xffffff30,"modelName");
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),&stack0xffffff34);
  }
  else {
    pcVar2 = in_stack_00000004[1].create_event;
    do {
      cVar1 = *pcVar2;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    core_actor_cpp_serializeString_FUN_0040b5c0((char **)&stack0xffffff30,"modelName");
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[2].location.position.z,"leverType");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[2].orient,"onEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[2].create_event + 0x1c),"offEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[2].field14_0xf8,"sound");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)&in_stack_00000004[2].location.area_id,"param");
  if (1 < g_CLeverClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[3].actor_name + 4),"momentaryFlag");
  }
  if (2 < g_CLeverClassVersion) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)(in_stack_00000004[3].actor_name + 8),"linkedLever");
  }
  if (3 < g_CLeverClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[3].actor_name + 0xc),"endVertexIndex");
  }
  if (4 < g_CLeverClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[3].actor_name + 0x10),"moving");
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)(in_stack_00000004[3].actor_name + 0x14),"moveToPct");
  }
  if (5 < g_CLeverClassVersion) {
    core_actor_cpp_serializeRules_FUN_0040c000
              (in_stack_00000004[3].actor_name + 0x18,"rules");
  }
  if (6 < g_CLeverClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[5].metadata.vtable,"allowedSides");
  }
  if (g_CLeverClassVersion < 8) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004 + 6),"enableCollision");
  return;
}


// Assembly code:
// 00504e80: PUSH EBX
//   Label: core_lever.cpp_CLever_load_FUN_00504e80
// 00504e81: PUSH ESI
// 00504e82: PUSH EDI
// 00504e83: SUB ESP,0xc8
// 00504e89: MOV EBX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[0x4] (READ)
// 00504e90: PUSH EBX
// 00504e91: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 00504e96: MOV EDX,dword ptr [0x00822038]
//   XREF to: 00822038 (READ)
// 00504e9c: ADD ESP,0x4
// 00504e9f: LEA EDI,[EBX + 0x158]
// 00504ea5: CMP EDX,0x1
// 00504ea8: JZ 0x0050501d
//   XREF to: 0050501d (CONDITIONAL_JUMP)
// 00504eae: MOV EDI,ESP
// 00504eb0: LEA ESI,[EBX + 0x1d0]
// 00504eb6: PUSH EDI
// 00504eb7: MOV AL,byte ptr [ESI]
//   Label: LAB_00504eb7
// 00504eb9: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xd4] (DATA)
// 00504ebb: CMP AL,0x0
// 00504ebd: JZ 0x00504ecf
//   XREF to: 00504ecf (CONDITIONAL_JUMP)
// 00504ebf: MOV AL,byte ptr [ESI + 0x1]
// 00504ec2: ADD ESI,0x2
// 00504ec5: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xd3] (WRITE)
// 00504ec8: ADD EDI,0x2
// 00504ecb: CMP AL,0x0
// 00504ecd: JNZ 0x00504eb7
//   XREF to: 00504eb7 (CONDITIONAL_JUMP)
// 00504ecf: POP EDI
//   Label: LAB_00504ecf
// 00504ed0: PUSH 0x6310ca
//   XREF to: 006310ca (DATA)
// 00504ed5: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0xd4] (DATA)
// 00504ed9: PUSH ESI
// 00504eda: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00504edf: ADD ESP,0x8
//   Label: LAB_00504edf
// 00504ee2: PUSH 0x6310d4
//   XREF to: 006310d4 (DATA)
// 00504ee7: LEA ESI,[EBX + 0x2d8]
// 00504eed: PUSH ESI
// 00504eee: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00504ef3: ADD ESP,0x8
// 00504ef6: PUSH 0x6310de
//   XREF to: 006310de (DATA)
// 00504efb: LEA ESI,[EBX + 0x2e0]
// 00504f01: PUSH ESI
// 00504f02: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00504f07: ADD ESP,0x8
// 00504f0a: PUSH 0x6310e6
//   XREF to: 006310e6 (DATA)
// 00504f0f: LEA ESI,[EBX + 0x344]
// 00504f15: PUSH ESI
// 00504f16: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00504f1b: ADD ESP,0x8
// 00504f1e: PUSH 0x6310ef
//   XREF to: 006310ef (DATA)
// 00504f23: LEA ESI,[EBX + 0x3a8]
// 00504f29: PUSH ESI
// 00504f2a: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00504f2f: ADD ESP,0x8
// 00504f32: PUSH 0x6310f5
//   XREF to: 006310f5 (DATA)
// 00504f37: LEA ESI,[EBX + 0x2dc]
// 00504f3d: PUSH ESI
// 00504f3e: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00504f43: MOV ECX,dword ptr [0x0067cfb4]
//   XREF to: 0067cfb4 (READ)
// 00504f49: ADD ESP,0x8
// 00504f4c: CMP ECX,0x2
// 00504f4f: JL 0x00504f65
//   XREF to: 00504f65 (CONDITIONAL_JUMP)
// 00504f51: PUSH 0x6310fb
//   XREF to: 006310fb (DATA)
// 00504f56: LEA ESI,[EBX + 0x40c]
// 00504f5c: PUSH ESI
// 00504f5d: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00504f62: ADD ESP,0x8
// 00504f65: CMP dword ptr [0x0067cfb4],0x3
//   Label: LAB_00504f65
//   XREF to: 0067cfb4 (READ)
// 00504f6c: JL 0x00504f82
//   XREF to: 00504f82 (CONDITIONAL_JUMP)
// 00504f6e: PUSH 0x631109
//   XREF to: 00631109 (DATA)
// 00504f73: LEA ESI,[EBX + 0x410]
// 00504f79: PUSH ESI
// 00504f7a: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 00504f7f: ADD ESP,0x8
// 00504f82: CMP dword ptr [0x0067cfb4],0x4
//   Label: LAB_00504f82
//   XREF to: 0067cfb4 (READ)
// 00504f89: JL 0x00504f9f
//   XREF to: 00504f9f (CONDITIONAL_JUMP)
// 00504f8b: PUSH 0x631115
//   XREF to: 00631115 (DATA)
// 00504f90: LEA ESI,[EBX + 0x414]
// 00504f96: PUSH ESI
// 00504f97: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00504f9c: ADD ESP,0x8
// 00504f9f: CMP dword ptr [0x0067cfb4],0x5
//   Label: LAB_00504f9f
//   XREF to: 0067cfb4 (READ)
// 00504fa6: JL 0x00504fd0
//   XREF to: 00504fd0 (CONDITIONAL_JUMP)
// 00504fa8: PUSH 0x631124
//   XREF to: 00631124 (DATA)
// 00504fad: LEA ESI,[EBX + 0x418]
// 00504fb3: PUSH ESI
// 00504fb4: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00504fb9: ADD ESP,0x8
// 00504fbc: PUSH 0x63112b
//   XREF to: 0063112b (DATA)
// 00504fc1: LEA ESI,[EBX + 0x41c]
// 00504fc7: PUSH ESI
// 00504fc8: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00504fcd: ADD ESP,0x8
// 00504fd0: CMP dword ptr [0x0067cfb4],0x6
//   Label: LAB_00504fd0
//   XREF to: 0067cfb4 (READ)
// 00504fd7: JL 0x00504fed
//   XREF to: 00504fed (CONDITIONAL_JUMP)
// 00504fd9: PUSH 0x631135
//   XREF to: 00631135 (DATA)
// 00504fde: LEA ESI,[EBX + 0x420]
// 00504fe4: PUSH ESI
// 00504fe5: CALL core_actor.cpp_serializeRules_FUN_0040c000
//   XREF to: 0040c000 (UNCONDITIONAL_CALL)
// 00504fea: ADD ESP,0x8
// 00504fed: CMP dword ptr [0x0067cfb4],0x7
//   Label: LAB_00504fed
//   XREF to: 0067cfb4 (READ)
// 00504ff4: JL 0x0050500a
//   XREF to: 0050500a (CONDITIONAL_JUMP)
// 00504ff6: PUSH 0x63113b
//   XREF to: 0063113b (DATA)
// 00504ffb: LEA ESI,[EBX + 0x80c]
// 00505001: PUSH ESI
// 00505002: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00505007: ADD ESP,0x8
// 0050500a: CMP dword ptr [0x0067cfb4],0x8
//   Label: LAB_0050500a
//   XREF to: 0067cfb4 (READ)
// 00505011: JGE 0x0050503d
//   XREF to: 0050503d (CONDITIONAL_JUMP)
// 00505013: ADD ESP,0xc8
// 00505019: POP EDI
// 0050501a: POP ESI
// 0050501b: POP EBX
// 0050501c: RET
// 0050501d: PUSH 0x6310c0
//   Label: LAB_0050501d
//   XREF to: 006310c0 (DATA)
// 00505022: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0xd4] (DATA)
// 00505026: PUSH ESI
// 00505027: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0050502c: ADD ESP,0x8
// 0050502f: MOV ESI,ESP
// 00505031: PUSH ESI
// 00505032: PUSH EDI
// 00505033: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 00505038: JMP 0x00504edf
//   XREF to: 00504edf (UNCONDITIONAL_JUMP)
// 0050503d: PUSH 0x631148
//   Label: LAB_0050503d
//   XREF to: 00631148 (DATA)
// 00505042: ADD EBX,0x810
// 00505048: PUSH EBX
// 00505049: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0050504e: ADD ESP,0x8
// 00505051: ADD ESP,0xc8
// 00505057: POP EDI
// 00505058: POP ESI
// 00505059: POP EBX
// 0050505a: RET
