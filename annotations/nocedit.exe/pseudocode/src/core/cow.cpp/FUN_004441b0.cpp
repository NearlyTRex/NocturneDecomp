// Name: core_cow.cpp_FUN_004441b0
// Address: 004441b0
// Address Range: [[004441b0, 004442f0]]
// Convention: unknown
// Signature: undefined core_cow.cpp_FUN_004441b0()
// Globals:
//   TerminatedCString s_Bip01_Spine2_00619478
//   TerminatedCString s_Bip01_Head_00619485
//   TerminatedCString s_head01_00619490
//   TerminatedCString s_neck01_00619497
//   TerminatedCString s_lfrontleg01_0061949e
//   TerminatedCString s_rfrontleg01_006194aa
//   TerminatedCString s_rbackleg01_006194b6
//   TerminatedCString s_lbackleg01_006194c1
//   TerminatedCString s_torso01_006194cc
//   TerminatedCString s_utter01_006194d4
//   TerminatedCString s_back01_006194dc
//   TerminatedCString s_tail01_006194e3
// Function calls:
//   core_enemy.cpp_CEnemy_FUN_004a9650
//   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_cow.cpp_FUN_004441b0(undefined4 param_1) */

void core_cow_cpp_FUN_004441b0(void)

{
  CDeformableModelInstance *this_ptr;
  CSkeleton *this_ptr_00;
  int iVar1;
  CDeformableModel *this_ptr_01;
  float fVar2;
  CEnemy *in_stack_00000004;
  
  this_ptr = &(in_stack_00000004->base_character).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 Spine2");
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 8) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 Head");
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc) = iVar1;
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000004);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"head01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x14) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"neck01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x18) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"lfrontleg01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x1c) = iVar1;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"rfrontleg01",1);
  in_stack_00000004[1].base_character.base_actor.location.position.x = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"rbackleg01",1);
  in_stack_00000004[1].base_character.base_actor.location.position.y = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"lbackleg01",1);
  in_stack_00000004[1].base_character.base_actor.location.position.z = fVar2;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"torso01",1);
  in_stack_00000004[1].base_character.base_actor.location.area_id = iVar1;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"utter01",1);
  in_stack_00000004[1].base_character.base_actor.orient.pitch = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"back01",1);
  in_stack_00000004[1].base_character.base_actor.orient.bank = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"tail01",1);
  in_stack_00000004[1].base_character.base_actor.orient.heading = fVar2;
  return;
}


// Assembly code:
// 004441b0: PUSH EBX
//   Label: core_cow.cpp_FUN_004441b0
// 004441b1: PUSH ESI
// 004441b2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004441b6: PUSH EDI
// 004441b7: LEA ESI,[EBX + 0x158]
// 004441bd: PUSH ESI
// 004441be: CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 004441c3: ADD ESP,0x4
// 004441c6: PUSH ESI
// 004441c7: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 004441cc: ADD ESP,0x4
// 004441cf: PUSH 0x1
// 004441d1: PUSH 0x619478
//   XREF to: 00619478 (DATA)
// 004441d6: PUSH EAX
// 004441d7: MOV EDI,EAX
// 004441d9: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004441de: ADD ESP,0xc
// 004441e1: PUSH 0x1
// 004441e3: PUSH 0x619485
//   XREF to: 00619485 (DATA)
// 004441e8: PUSH EDI
// 004441e9: MOV dword ptr [EBX + 0xbebc],EAX
// 004441ef: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004441f4: ADD ESP,0xc
// 004441f7: PUSH EBX
// 004441f8: MOV dword ptr [EBX + 0xbec0],EAX
// 004441fe: CALL core_enemy.cpp_CEnemy_FUN_004a9650
//   XREF to: 004a9650 (UNCONDITIONAL_CALL)
// 00444203: ADD ESP,0x4
// 00444206: PUSH ESI
// 00444207: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 0044420c: ADD ESP,0x4
// 0044420f: PUSH 0x1
// 00444211: PUSH 0x619490
//   XREF to: 00619490 (DATA)
// 00444216: PUSH EAX
// 00444217: MOV ESI,EAX
// 00444219: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 0044421e: ADD ESP,0xc
// 00444221: PUSH 0x1
// 00444223: PUSH 0x619497
//   XREF to: 00619497 (DATA)
// 00444228: PUSH ESI
// 00444229: MOV dword ptr [EBX + 0xbec8],EAX
// 0044422f: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 00444234: ADD ESP,0xc
// 00444237: PUSH 0x1
// 00444239: PUSH 0x61949e
//   XREF to: 0061949e (DATA)
// 0044423e: PUSH ESI
// 0044423f: MOV dword ptr [EBX + 0xbecc],EAX
// 00444245: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 0044424a: ADD ESP,0xc
// 0044424d: PUSH 0x1
// 0044424f: PUSH 0x6194aa
//   XREF to: 006194aa (DATA)
// 00444254: PUSH ESI
// 00444255: MOV dword ptr [EBX + 0xbed0],EAX
// 0044425b: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 00444260: ADD ESP,0xc
// 00444263: PUSH 0x1
// 00444265: PUSH 0x6194b6
//   XREF to: 006194b6 (DATA)
// 0044426a: PUSH ESI
// 0044426b: MOV dword ptr [EBX + 0xbed4],EAX
// 00444271: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 00444276: ADD ESP,0xc
// 00444279: MOV dword ptr [EBX + 0xbed8],EAX
// 0044427f: POP EDI
// 00444280: PUSH 0x1
// 00444282: PUSH 0x6194c1
//   XREF to: 006194c1 (DATA)
// 00444287: PUSH ESI
// 00444288: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 0044428d: ADD ESP,0xc
// 00444290: PUSH 0x1
// 00444292: PUSH 0x6194cc
//   XREF to: 006194cc (DATA)
// 00444297: PUSH ESI
// 00444298: MOV dword ptr [EBX + 0xbedc],EAX
// 0044429e: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004442a3: ADD ESP,0xc
// 004442a6: PUSH 0x1
// 004442a8: PUSH 0x6194d4
//   XREF to: 006194d4 (DATA)
// 004442ad: PUSH ESI
// 004442ae: MOV dword ptr [EBX + 0xbee0],EAX
// 004442b4: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004442b9: ADD ESP,0xc
// 004442bc: PUSH 0x1
// 004442be: PUSH 0x6194dc
//   XREF to: 006194dc (DATA)
// 004442c3: PUSH ESI
// 004442c4: MOV dword ptr [EBX + 0xbee4],EAX
// 004442ca: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004442cf: ADD ESP,0xc
// 004442d2: PUSH 0x1
// 004442d4: PUSH 0x6194e3
//   XREF to: 006194e3 (DATA)
// 004442d9: PUSH ESI
// 004442da: MOV dword ptr [EBX + 0xbee8],EAX
// 004442e0: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004442e5: ADD ESP,0xc
// 004442e8: MOV dword ptr [EBX + 0xbeec],EAX
// 004442ee: POP ESI
// 004442ef: POP EBX
// 004442f0: RET
