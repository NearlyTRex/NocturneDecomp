// Name: core_tbplayer.cpp_CBassPlayer_FUN_005da090
// Address: 005da090
// Address Range: [[005da090, 005da0f4]]
// Convention: __cdecl
// Signature: void core_tbplayer.cpp_CBassPlayer_FUN_005da090(CBassPlayer * this_ptr)
// Globals:
//   TerminatedCString s_Bip01_L_Hand_00654bbe
//   TerminatedCString s_Bip01_R_Hand_00654bcb
// Function calls:
//   core_npc.cpp_CNPC_FUN_00544870
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0

#include "nocturne.h"

void __cdecl core_tbplayer_cpp_CBassPlayer_FUN_005da090(CBassPlayer *this_ptr)

{
  CCharacter *pCVar1;
  int iVar2;
  
  core_npc_cpp_CNPC_FUN_00544870(&this_ptr->base_npc);
  core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820();
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  this_ptr->field1_0x1f708 = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  pCVar1 = &(this_ptr->base_npc).base_character;
  pCVar1->carry_hands[0].field0_0x0[4] = '\0';
  pCVar1->carry_hands[0].field0_0x0[5] = '\0';
  pCVar1->carry_hands[0].field0_0x0[6] = '\0';
  pCVar1->carry_hands[0].field0_0x0[7] = '\0';
  this_ptr->field2_0x1f70c = iVar2;
  *(int *)(this_ptr->base_npc).base_character.carry_hands[0].field0_0x0 = this_ptr->field1_0x1f708;
  return;
}


// Assembly code:
// 005da090: PUSH EBX
//   Label: core_tbplayer.cpp_CBassPlayer_FUN_005da090
// 005da091: PUSH ESI
// 005da092: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005da096: PUSH EBX
// 005da097: CALL core_npc.cpp_CNPC_FUN_00544870
//   XREF to: 00544870 (UNCONDITIONAL_CALL)
// 005da09c: ADD ESP,0x4
// 005da09f: LEA EAX,[EBX + 0x158]
// 005da0a5: PUSH EAX
// 005da0a6: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 005da0ab: ADD ESP,0x4
// 005da0ae: PUSH 0x1
// 005da0b0: PUSH 0x654bbe
//   XREF to: 00654bbe (DATA)
// 005da0b5: PUSH EAX
// 005da0b6: MOV ESI,EAX
// 005da0b8: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005da0bd: ADD ESP,0xc
// 005da0c0: PUSH 0x1
// 005da0c2: PUSH 0x654bcb
//   XREF to: 00654bcb (DATA)
// 005da0c7: PUSH ESI
// 005da0c8: MOV dword ptr [EBX + 0x1f708],EAX
// 005da0ce: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005da0d3: MOV dword ptr [EBX + 0x24b0],0x0
// 005da0dd: MOV dword ptr [EBX + 0x1f70c],EAX
// 005da0e3: MOV EAX,dword ptr [EBX + 0x1f708]
// 005da0e9: ADD ESP,0xc
// 005da0ec: MOV dword ptr [EBX + 0x24ac],EAX
// 005da0f2: POP ESI
// 005da0f3: POP EBX
// 005da0f4: RET
