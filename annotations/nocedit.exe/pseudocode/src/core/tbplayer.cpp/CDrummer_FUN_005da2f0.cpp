// Name: core_tbplayer.cpp_CDrummer_FUN_005da2f0
// Address: 005da2f0
// Address Range: [[005da2f0, 005da36a]]
// Convention: __cdecl
// Signature: void core_tbplayer.cpp_CDrummer_FUN_005da2f0(CDrummer * this_ptr)
// Globals:
//   TerminatedCString s_Bip01_L_Hand_00654bf9
//   TerminatedCString s_Bip01_R_Hand_00654c06
// Function calls:
//   core_npc.cpp_CNPC_FUN_00544870
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0

#include "nocturne.h"

void __cdecl core_tbplayer_cpp_CDrummer_FUN_005da2f0(CDrummer *this_ptr)

{
  CCharacter *pCVar1;
  SCarryHand *pSVar2;
  CSkeleton *this_ptr_00;
  int iVar3;
  
  core_npc_cpp_CNPC_FUN_00544870(&this_ptr->base_npc);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                          (&(this_ptr->base_npc).base_character.model);
  iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Hand");
  this_ptr->field1_0x1f708 = iVar3;
  iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R Hand");
  pCVar1 = &(this_ptr->base_npc).base_character;
  pCVar1->carry_hands[0].field0_0x0[4] = '\0';
  pCVar1->carry_hands[0].field0_0x0[5] = '\0';
  pCVar1->carry_hands[0].field0_0x0[6] = '\0';
  pCVar1->carry_hands[0].field0_0x0[7] = '\0';
  pSVar2 = (this_ptr->base_npc).base_character.carry_hands;
  pSVar2[1].field0_0x0[4] = '\0';
  pSVar2[1].field0_0x0[5] = '\0';
  pSVar2[1].field0_0x0[6] = '\0';
  pSVar2[1].field0_0x0[7] = '\0';
  this_ptr->field2_0x1f70c = iVar3;
  *(int *)(this_ptr->base_npc).base_character.carry_hands[0].field0_0x0 = this_ptr->field1_0x1f708;
  *(int *)(this_ptr->base_npc).base_character.carry_hands[1].field0_0x0 = this_ptr->field2_0x1f70c;
  return;
}


// Assembly code:
// 005da2f0: PUSH EBX
//   Label: core_tbplayer.cpp_CDrummer_FUN_005da2f0
// 005da2f1: PUSH ESI
// 005da2f2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005da2f6: PUSH EBX
// 005da2f7: CALL core_npc.cpp_CNPC_FUN_00544870
//   XREF to: 00544870 (UNCONDITIONAL_CALL)
// 005da2fc: ADD ESP,0x4
// 005da2ff: LEA EAX,[EBX + 0x158]
// 005da305: PUSH EAX
// 005da306: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 005da30b: ADD ESP,0x4
// 005da30e: PUSH 0x1
// 005da310: PUSH 0x654bf9
//   XREF to: 00654bf9 (DATA)
// 005da315: PUSH EAX
// 005da316: MOV ESI,EAX
// 005da318: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005da31d: ADD ESP,0xc
// 005da320: PUSH 0x1
// 005da322: PUSH 0x654c06
//   XREF to: 00654c06 (DATA)
// 005da327: PUSH ESI
// 005da328: MOV dword ptr [EBX + 0x1f708],EAX
// 005da32e: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005da333: MOV dword ptr [EBX + 0x24b0],0x0
// 005da33d: MOV dword ptr [EBX + 0x24f4],0x0
// 005da347: MOV dword ptr [EBX + 0x1f70c],EAX
// 005da34d: MOV EAX,dword ptr [EBX + 0x1f708]
// 005da353: MOV dword ptr [EBX + 0x24ac],EAX
// 005da359: MOV EAX,dword ptr [EBX + 0x1f70c]
// 005da35f: ADD ESP,0xc
// 005da362: MOV dword ptr [EBX + 0x24f0],EAX
// 005da368: POP ESI
// 005da369: POP EBX
// 005da36a: RET
