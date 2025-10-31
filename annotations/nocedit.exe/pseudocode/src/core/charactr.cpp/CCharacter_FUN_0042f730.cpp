// Name: core_charactr.cpp_CCharacter_FUN_0042f730
// Address: 0042f730
// Address Range: [[0042f730, 0042f7f4]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042f730(CCharacter * this_ptr)
// Cross-references:
//   core_enemy.cpp_CEnemy_FUN_004aa170 (004aa170) at 004aa17c [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHero_FUN_004f3f20 (004f3f20) at 004f3f2b [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_FUN_00544e40 (00544e40) at 00544e4d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_cloth_0061772e
//   TerminatedCString s_Items_Carried_00617734
//   TerminatedCString s_talkToMeEvent_00617742
//   TerminatedCString s_Etheral_00617750
//   TerminatedCString s_Descriptive_name_00617758
//   TerminatedCString s_Health_bar_0061777f
//   void* PTR_s_None_0066e758 = 00617769
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e290
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e480
//   core_actor.cpp_CActorPropertyList_FUN_0040e500
//   core_actor.cpp_CActorPropertyList_FUN_0040e640
//   core_actor.cpp_CActorPropertyList_FUN_0040e670
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042f730(CCharacter *this_ptr)

{
  int iVar1;
  CCharacter *pCVar2;
  int iVar3;
  CActorPropertyList *in_stack_00000008;
  int *piStack0000000c;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base_actor,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e500();
  iVar3 = 0;
  iVar1 = *(int *)this_ptr->carry_hands[0].field0_0x0;
  pCVar2 = this_ptr;
  while (iVar1 < 0) {
    iVar3 = iVar3 + 1;
    if (1 < iVar3) goto LAB_0042f793;
    iVar1 = *(int *)pCVar2->carry_hands[1].field0_0x0;
    pCVar2 = (CCharacter *)&(pCVar2->base_actor).orient_matrix.m[0].z;
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e670(in_stack_00000008);
LAB_0042f793:
  core_actor_cpp_CActorPropertyList_FUN_0040e480(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  piStack0000000c = &this_ptr->health_bar_mode;
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  return;
}


// Assembly code:
// 0042f730: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042f730
// 0042f731: PUSH ESI
// 0042f732: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0042f736: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0042f73a: PUSH ESI
// 0042f73b: PUSH EBX
// 0042f73c: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 0042f741: ADD ESP,0x8
// 0042f744: PUSH -0x1
// 0042f746: LEA EAX,[EBX + 0x2a94]
// 0042f74c: PUSH EAX
// 0042f74d: PUSH 0x61772e
//   XREF to: 0061772e (DATA)
// 0042f752: PUSH ESI
// 0042f753: CALL core_actor.cpp_CActorPropertyList_FUN_0040e500
//   XREF to: 0040e500 (UNCONDITIONAL_CALL)
// 0042f758: ADD ESP,0x10
// 0042f75b: MOV EAX,EBX
// 0042f75d: MOV ECX,dword ptr [EBX + 0x24ac]
// 0042f763: XOR EDX,EDX
// 0042f765: TEST ECX,ECX
// 0042f767: JGE 0x0042f77b
//   XREF to: 0042f77b (CONDITIONAL_JUMP)
// 0042f769: INC EDX
//   Label: LAB_0042f769
// 0042f76a: ADD EAX,0x44
// 0042f76d: CMP EDX,0x2
// 0042f770: JGE 0x0042f793
//   XREF to: 0042f793 (CONDITIONAL_JUMP)
// 0042f772: CMP dword ptr [EAX + 0x24ac],0x0
// 0042f779: JL 0x0042f769
//   XREF to: 0042f769 (CONDITIONAL_JUMP)
// 0042f77b: PUSH 0x42f3e0
//   Label: LAB_0042f77b
//   XREF to: 0042f3e0 (DATA)
// 0042f780: PUSH 0x42f340
//   XREF to: 0042f340 (DATA)
// 0042f785: PUSH 0x617734
//   XREF to: 00617734 (DATA)
// 0042f78a: PUSH ESI
// 0042f78b: CALL core_actor.cpp_CActorPropertyList_FUN_0040e670
//   XREF to: 0040e670 (UNCONDITIONAL_CALL)
// 0042f790: ADD ESP,0x10
// 0042f793: LEA EAX,[EBX + 0x2534]
//   Label: LAB_0042f793
// 0042f799: PUSH EAX
// 0042f79a: PUSH 0x617742
//   XREF to: 00617742 (DATA)
// 0042f79f: PUSH ESI
// 0042f7a0: CALL core_actor.cpp_CActorPropertyList_FUN_0040e480
//   XREF to: 0040e480 (UNCONDITIONAL_CALL)
// 0042f7a5: ADD ESP,0xc
// 0042f7a8: LEA EAX,[EBX + 0x2614]
// 0042f7ae: PUSH EAX
// 0042f7af: PUSH 0x617750
//   XREF to: 00617750 (DATA)
// 0042f7b4: PUSH ESI
// 0042f7b5: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 0042f7ba: ADD ESP,0xc
// 0042f7bd: PUSH 0x0
// 0042f7bf: PUSH 0x64
// 0042f7c1: LEA EAX,[EBX + 0x2448]
// 0042f7c7: PUSH EAX
// 0042f7c8: PUSH 0x617758
//   XREF to: 00617758 (DATA)
// 0042f7cd: PUSH ESI
// 0042f7ce: CALL core_actor.cpp_CActorPropertyList_FUN_0040e290
//   XREF to: 0040e290 (UNCONDITIONAL_CALL)
// 0042f7d3: ADD ESP,0x14
// 0042f7d6: ADD EBX,0x2444
// 0042f7dc: PUSH EBX
// 0042f7dd: PUSH 0x66e758
//   XREF to: 0066e758 (DATA)
// 0042f7e2: PUSH 0x3
// 0042f7e4: PUSH 0x61777f
//   XREF to: 0061777f (DATA)
// 0042f7e9: PUSH ESI
// 0042f7ea: CALL core_actor.cpp_CActorPropertyList_FUN_0040e640
//   XREF to: 0040e640 (UNCONDITIONAL_CALL)
// 0042f7ef: ADD ESP,0x14
// 0042f7f2: POP ESI
// 0042f7f3: POP EBX
// 0042f7f4: RET
