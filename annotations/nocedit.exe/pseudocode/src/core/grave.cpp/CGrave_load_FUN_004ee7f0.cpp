// Name: core_grave.cpp_CGrave_load_FUN_004ee7f0
// Address: 004ee7f0
// Address Range: [[004ee7f0, 004ee8e9]]
// Convention: unknown
// Signature: undefined core_grave.cpp_CGrave_load_FUN_004ee7f0()
// Globals:
//   TerminatedCString s_model_name_0062e48c
//   TerminatedCString s_fps_0062e497
//   TerminatedCString s_active_0062e49b
//   TerminatedCString s_graveState_0062e4a2
//   TerminatedCString s_curFrame_0062e4ad
//   TerminatedCString s_hideOnFirstFrame_0062e4b6
//   TerminatedCString s_startCondition_0062e4c7
//   TerminatedCString s_startSound_0062e4d6
//   int g_CGraveClassVersion = 0x4
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   core_actor.cpp_serializeString_FUN_0040b5c0

#include "nocturne.h"

/* Signature: undefined1 actors_other_grave.cpp_CGrave_load(CGrave* pGrave) */

void core_grave_cpp_CGrave_load_FUN_004ee7f0(void)

{
  CDemonActor *pCVar1;
  BADSPACEBASE *in_ESP;
  char *in_stack_00000004;
  char *in_stack_00000008;
  char *in_stack_0000000c;
  
  pCVar1 = (CDemonActor *)in_stack_00000004;
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0((CDemonActor *)in_stack_00000004);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(pCVar1 + 1),"model name");
  core_actor_cpp_serializeFloat_FUN_0040b770(&pCVar1[2].location.position.z,"fps");
  if (g_CGraveClassVersion < 2) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)&stack0x00000000,"active");
    pCVar1[2].orient.pitch = 0.0;
    if ((CDemonActor *)in_stack_00000004 != (CDemonActor *)0x0) {
      pCVar1[2].orient.pitch = 1.4013e-45;
    }
  }
  else {
    core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)&pCVar1[2].orient,"graveState");
  }
  core_actor_cpp_serializeFloat_FUN_0040b770(&pCVar1[2].location.position.y,"curFrame");
  if (2 < g_CGraveClassVersion) {
    in_stack_00000004 = "hideOnFirstFrame";
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&pCVar1[2].orient.bank,"hideOnFirstFrame");
    in_stack_00000008 = "startCondition";
    in_stack_00000004 = (char *)&pCVar1[2].orient.heading;
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)in_stack_00000004,"startCondition");
  }
  if (g_CGraveClassVersion < 4) {
    return;
  }
  in_stack_0000000c = "startSound";
  in_stack_00000008 = pCVar1[2].create_event + 0x24;
  in_stack_00000004 = (char *)0x4ee8e1;
  core_actor_cpp_serializeString_FUN_0040b5c0((char **)in_stack_00000008,"startSound");
  return;
}


// Assembly code:
// 004ee7f0: PUSH EBX
//   Label: core_grave.cpp_CGrave_load_FUN_004ee7f0
// 004ee7f1: PUSH ESI
// 004ee7f2: SUB ESP,0x4
// 004ee7f5: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004ee7f9: PUSH EBX
// 004ee7fa: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 004ee7ff: ADD ESP,0x4
// 004ee802: PUSH 0x62e48c
//   XREF to: 0062e48c (DATA)
// 004ee807: LEA EAX,[EBX + 0x158]
// 004ee80d: PUSH EAX
// 004ee80e: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 004ee813: ADD ESP,0x8
// 004ee816: PUSH 0x62e497
//   XREF to: 0062e497 (DATA)
// 004ee81b: LEA EAX,[EBX + 0x2d8]
// 004ee821: PUSH EAX
// 004ee822: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004ee827: MOV EDX,dword ptr [0x0067cba4]
//   XREF to: 0067cba4 (READ)
// 004ee82d: ADD ESP,0x8
// 004ee830: CMP EDX,0x2
// 004ee833: JL 0x004ee89f
//   XREF to: 004ee89f (CONDITIONAL_JUMP)
// 004ee835: PUSH 0x62e4a2
//   XREF to: 0062e4a2 (DATA)
// 004ee83a: LEA EAX,[EBX + 0x2e0]
// 004ee840: PUSH EAX
// 004ee841: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004ee846: ADD ESP,0x8
// 004ee849: PUSH 0x62e4ad
//   Label: LAB_004ee849
//   XREF to: 0062e4ad (DATA)
// 004ee84e: LEA EAX,[EBX + 0x2d4]
// 004ee854: PUSH EAX
// 004ee855: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004ee85a: MOV ESI,dword ptr [0x0067cba4]
//   XREF to: 0067cba4 (READ)
// 004ee860: ADD ESP,0x8
// 004ee863: CMP ESI,0x3
// 004ee866: JL 0x004ee890
//   XREF to: 004ee890 (CONDITIONAL_JUMP)
// 004ee868: PUSH 0x62e4b6
//   XREF to: 0062e4b6 (DATA)
// 004ee86d: LEA EAX,[EBX + 0x2e4]
// 004ee873: PUSH EAX
// 004ee874: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004ee879: ADD ESP,0x8
// 004ee87c: PUSH 0x62e4c7
//   XREF to: 0062e4c7 (DATA)
// 004ee881: LEA EAX,[EBX + 0x2e8]
// 004ee887: PUSH EAX
// 004ee888: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004ee88d: ADD ESP,0x8
// 004ee890: CMP dword ptr [0x0067cba4],0x4
//   Label: LAB_004ee890
//   XREF to: 0067cba4 (READ)
// 004ee897: JGE 0x004ee8d0
//   XREF to: 004ee8d0 (CONDITIONAL_JUMP)
// 004ee899: ADD ESP,0x4
// 004ee89c: POP ESI
// 004ee89d: POP EBX
// 004ee89e: RET
// 004ee89f: PUSH 0x62e49b
//   Label: LAB_004ee89f
//   XREF to: 0062e49b (DATA)
// 004ee8a4: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xc] (DATA)
// 004ee8a8: PUSH EAX
// 004ee8a9: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004ee8ae: ADD ESP,0x8
// 004ee8b1: MOV dword ptr [EBX + 0x2e0],0x0
// 004ee8bb: CMP dword ptr [ESP],0x0
//   XREF to: Stack[-0xc] (DATA)
// 004ee8bf: JZ 0x004ee849
//   XREF to: 004ee849 (CONDITIONAL_JUMP)
// 004ee8c1: MOV dword ptr [EBX + 0x2e0],0x1
// 004ee8cb: JMP 0x004ee849
//   XREF to: 004ee849 (UNCONDITIONAL_JUMP)
// 004ee8d0: PUSH 0x62e4d6
//   Label: LAB_004ee8d0
//   XREF to: 0062e4d6 (DATA)
// 004ee8d5: ADD EBX,0x34c
// 004ee8db: PUSH EBX
// 004ee8dc: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004ee8e1: ADD ESP,0x8
// 004ee8e4: ADD ESP,0x4
// 004ee8e7: POP ESI
// 004ee8e8: POP EBX
// 004ee8e9: RET
