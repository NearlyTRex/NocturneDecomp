// Name: core_npc.cpp_CNPC_FUN_00544e40
// Address: 00544e40
// Address Range: [[00544e40, 00544eaa]]
// Convention: __cdecl
// Signature: void core_npc.cpp_CNPC_FUN_00544e40(CNPC * this_ptr)
// Cross-references:
//   core_hiram.cpp_FUN_004f46a0 (004f46a0) at 004f46ab [UNCONDITIONAL_CALL]
//   core_hostage.cpp_FUN_004f69c0 (004f69c0) at 004f69cc [UNCONDITIONAL_CALL]
//   core_hpriest.cpp_CHighPriestOfGardath_FUN_004f7c70 (004f7c70) at 004f7c7b [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_00546270 (00546270) at 0054627c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Model_0063e3cd
//   TerminatedCString s_State_0063e3d3
//   TerminatedCString s_Shoot_me_0063e3d9
//   TerminatedCString s_Hit_points_0063e3e2
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   core_charactr.cpp_CCharacter_FUN_0042f730

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_FUN_00544e40(CNPC *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  
  core_charactr_cpp_CCharacter_FUN_0042f730(&this_ptr->base_character);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  return;
}


// Assembly code:
// 00544e40: PUSH EBX
//   Label: core_npc.cpp_CNPC_FUN_00544e40
// 00544e41: PUSH ESI
// 00544e42: PUSH EDI
// 00544e43: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00544e47: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00544e4b: PUSH EBX
// 00544e4c: PUSH ESI
// 00544e4d: CALL core_charactr.cpp_CCharacter_FUN_0042f730
//   XREF to: 0042f730 (UNCONDITIONAL_CALL)
// 00544e52: ADD ESP,0x8
// 00544e55: PUSH 0x0
// 00544e57: LEA EDI,[ESI + 0x158]
// 00544e5d: PUSH EDI
// 00544e5e: PUSH 0x63e3cd
//   XREF to: 0063e3cd (DATA)
// 00544e63: PUSH EBX
// 00544e64: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
// 00544e69: ADD ESP,0x10
// 00544e6c: PUSH EDI
// 00544e6d: PUSH 0x63e3d3
//   XREF to: 0063e3d3 (DATA)
// 00544e72: PUSH EBX
// 00544e73: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
// 00544e78: ADD ESP,0xc
// 00544e7b: LEA EDI,[ESI + 0x1f700]
// 00544e81: PUSH EDI
// 00544e82: PUSH 0x63e3d9
//   XREF to: 0063e3d9 (DATA)
// 00544e87: PUSH EBX
// 00544e88: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 00544e8d: ADD ESP,0xc
// 00544e90: PUSH 0x0
// 00544e92: ADD ESI,0x243c
// 00544e98: PUSH ESI
// 00544e99: PUSH 0x63e3e2
//   XREF to: 0063e3e2 (DATA)
// 00544e9e: PUSH EBX
// 00544e9f: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 00544ea4: ADD ESP,0x10
// 00544ea7: POP EDI
// 00544ea8: POP ESI
// 00544ea9: POP EBX
// 00544eaa: RET
