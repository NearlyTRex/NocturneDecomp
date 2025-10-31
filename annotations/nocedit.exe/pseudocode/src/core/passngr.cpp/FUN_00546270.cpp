// Name: core_passngr.cpp_FUN_00546270
// Address: 00546270
// Address Range: [[00546270, 005462e4]]
// Convention: unknown
// Signature: undefined core_passngr.cpp_FUN_00546270()
// Globals:
//   TerminatedCString s_Wolf_model_name_0063e837
//   TerminatedCString s_Transform_condition_0063e847
//   TerminatedCString s_Wolf_size_scale_0063e85b
//   TerminatedCString s_Name_of_wolf_0063e86b
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e290
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_npc.cpp_CNPC_FUN_00544e40

#include "nocturne.h"

/* Signature: undefined1 actors_npc_passenger.cpp_FUN_00546270(undefined4 param_1, undefined4
   param_2) */

void core_passngr_cpp_FUN_00546270(void)

{
  CNPC *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_npc_cpp_CNPC_FUN_00544e40(in_stack_00000004);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  return;
}


// Assembly code:
// 00546270: PUSH EBX
//   Label: core_passngr.cpp_FUN_00546270
// 00546271: PUSH ESI
// 00546272: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00546276: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0054627a: PUSH ESI
// 0054627b: PUSH EBX
// 0054627c: CALL core_npc.cpp_CNPC_FUN_00544e40
//   XREF to: 00544e40 (UNCONDITIONAL_CALL)
// 00546281: ADD ESP,0x8
// 00546284: PUSH 0x0
// 00546286: PUSH 0x1f
// 00546288: LEA EAX,[EBX + 0x1f76c]
// 0054628e: PUSH EAX
// 0054628f: PUSH 0x63e837
//   XREF to: 0063e837 (DATA)
// 00546294: PUSH ESI
// 00546295: CALL core_actor.cpp_CActorPropertyList_FUN_0040e290
//   XREF to: 0040e290 (UNCONDITIONAL_CALL)
// 0054629a: ADD ESP,0x14
// 0054629d: LEA EAX,[EBX + 0x1f708]
// 005462a3: PUSH EAX
// 005462a4: PUSH 0x63e847
//   XREF to: 0063e847 (DATA)
// 005462a9: PUSH ESI
// 005462aa: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 005462af: ADD ESP,0xc
// 005462b2: PUSH 0x0
// 005462b4: LEA EAX,[EBX + 0x20444]
// 005462ba: PUSH EAX
// 005462bb: PUSH 0x63e85b
//   XREF to: 0063e85b (DATA)
// 005462c0: PUSH ESI
// 005462c1: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 005462c6: ADD ESP,0x10
// 005462c9: PUSH 0x0
// 005462cb: PUSH 0x1d
// 005462cd: ADD EBX,0x1f78c
// 005462d3: PUSH EBX
// 005462d4: PUSH 0x63e86b
//   XREF to: 0063e86b (DATA)
// 005462d9: PUSH ESI
// 005462da: CALL core_actor.cpp_CActorPropertyList_FUN_0040e290
//   XREF to: 0040e290 (UNCONDITIONAL_CALL)
// 005462df: ADD ESP,0x14
// 005462e2: POP ESI
// 005462e3: POP EBX
// 005462e4: RET
