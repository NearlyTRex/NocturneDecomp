// Name: core_bride.cpp_FUN_00423810
// Address: 00423810
// Address Range: [[00423810, 00423a04]]
// Convention: unknown
// Signature: undefined core_bride.cpp_FUN_00423810()
// Globals:
//   TerminatedCString s_Bip01_Head_00616ac0
//   TerminatedCString s_Bip01_L_ForeArm_00616acb
//   TerminatedCString s_Bip01_R_ForeArm_00616adb
//   TerminatedCString s_Bip01_L_Foot_00616aeb
//   TerminatedCString s_Bip01_R_Foot_00616af8
//   TerminatedCString s_Bip01_L_Hand_00616b05
//   TerminatedCString s_Bip01_R_Hand_00616b12
//   TerminatedCString s_Bip01_L_UpperArm_00616b1f
//   TerminatedCString s_Bip01_R_UpperArm_00616b30
//   TerminatedCString s_Bip01_Spine_00616b41
//   TerminatedCString s_Bip01_Spine2_00616b4d
//   TerminatedCString s_lshoulderpiece_00616b5a
//   TerminatedCString s_l4armpiece_00616b69
//   TerminatedCString s_rshoulderpiece_00616b74
//   TerminatedCString s_r4armpiece_00616b83
//   TerminatedCString s_lshinpiece_00616b8e
//   TerminatedCString s_rshinpiece_00616b99
//   TerminatedCString s_torsopiece_00616ba4
//   TerminatedCString s_lowerbodypiece_00616baf
//   TerminatedCString s_headpiece_00616bbe
//   undefined4 DAT_00822cdc
//   undefined4 DAT_00822ce0
//   undefined4 DAT_00822ce4
//   undefined4 DAT_00822ce8
//   undefined4 DAT_00822cec
//   undefined4 DAT_00822cf0
//   undefined4 DAT_00822cf4
//   undefined4 DAT_00822cf8
//   undefined4 DAT_00822cfc
//   undefined4 DAT_00822d00
//   undefined4 DAT_00822d04
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_enemy.cpp_CEnemy_FUN_004a9650
//   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_bride.cpp_FUN_00423810(undefined4 param_1) */

void core_bride_cpp_FUN_00423810(void)

{
  CDeformableModelInstance *this_ptr;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar1;
  float fVar2;
  CEnemy *in_stack_00000004;
  
  this_ptr = &(in_stack_00000004->base_character).model;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0450(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0820(this_ptr);
  DAT_00822cdc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Head");
  DAT_00822ce8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L ForeArm");
  DAT_00822cec = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R ForeArm");
  _DAT_00822cf8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Foot");
  _DAT_00822cfc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R Foot");
  DAT_00822ce0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Hand");
  DAT_00822ce4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Hand");
  DAT_00822cf0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L UpperArm");
  DAT_00822cf4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm");
  DAT_00822d00 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  _DAT_00822d04 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 Spine2");
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"lshoulderpiece",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 8) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"l4armpiece",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"rshoulderpiece",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"r4armpiece",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x14) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"lshinpiece",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x18) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"rshinpiece",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x1c) = iVar1;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"torsopiece",1);
  in_stack_00000004[1].base_character.base_actor.location.position.x = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"lowerbodypiece",1);
  in_stack_00000004[1].base_character.base_actor.location.position.y = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"headpiece",1);
  in_stack_00000004[1].base_character.base_actor.location.position.z = fVar2;
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000004);
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,20.0);
  in_stack_00000004[1].base_character.base_actor.orient.pitch = 0.0;
  in_stack_00000004[1].base_character.base_actor.orient.bank = 0.0;
  in_stack_00000004[1].base_character.base_actor.location.area_id = (int)fVar2;
  return;
}


// Assembly code:
// 00423810: PUSH EBX
//   Label: core_bride.cpp_FUN_00423810
// 00423811: PUSH ESI
// 00423812: SUB ESP,0x4
// 00423815: MOV EBX,dword ptr [ESP + 0x10]
// 00423819: PUSH EDI
// 0042381a: LEA EDI,[EBX + 0x158]
// 00423820: PUSH EDI
// 00423821: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 00423826: ADD ESP,0x4
// 00423829: PUSH EDI
// 0042382a: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0042382f: ADD ESP,0x4
// 00423832: PUSH 0x1
// 00423834: PUSH 0x616ac0
//   XREF to: 00616ac0 (DATA)
// 00423839: PUSH EAX
// 0042383a: MOV ESI,EAX
// 0042383c: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00423841: ADD ESP,0xc
// 00423844: PUSH 0x1
// 00423846: PUSH 0x616acb
//   XREF to: 00616acb (DATA)
// 0042384b: PUSH ESI
// 0042384c: MOV [0x00822cdc],EAX
//   XREF to: 00822cdc (WRITE)
// 00423851: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00423856: ADD ESP,0xc
// 00423859: PUSH 0x1
// 0042385b: PUSH 0x616adb
//   XREF to: 00616adb (DATA)
// 00423860: PUSH ESI
// 00423861: MOV [0x00822ce8],EAX
//   XREF to: 00822ce8 (WRITE)
// 00423866: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0042386b: ADD ESP,0xc
// 0042386e: PUSH 0x1
// 00423870: PUSH 0x616aeb
//   XREF to: 00616aeb (DATA)
// 00423875: PUSH ESI
// 00423876: MOV [0x00822cec],EAX
//   XREF to: 00822cec (WRITE)
// 0042387b: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00423880: ADD ESP,0xc
// 00423883: PUSH 0x1
// 00423885: PUSH 0x616af8
//   XREF to: 00616af8 (DATA)
// 0042388a: PUSH ESI
// 0042388b: MOV [0x00822cf8],EAX
//   XREF to: 00822cf8 (WRITE)
// 00423890: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00423895: ADD ESP,0xc
// 00423898: PUSH 0x1
// 0042389a: PUSH 0x616b05
//   XREF to: 00616b05 (DATA)
// 0042389f: PUSH ESI
// 004238a0: MOV [0x00822cfc],EAX
//   XREF to: 00822cfc (WRITE)
// 004238a5: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004238aa: ADD ESP,0xc
// 004238ad: PUSH 0x1
// 004238af: PUSH 0x616b12
//   XREF to: 00616b12 (DATA)
// 004238b4: PUSH ESI
// 004238b5: MOV [0x00822ce0],EAX
//   XREF to: 00822ce0 (WRITE)
// 004238ba: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004238bf: ADD ESP,0xc
// 004238c2: PUSH 0x1
// 004238c4: PUSH 0x616b1f
//   XREF to: 00616b1f (DATA)
// 004238c9: PUSH ESI
// 004238ca: MOV [0x00822ce4],EAX
//   XREF to: 00822ce4 (WRITE)
// 004238cf: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004238d4: ADD ESP,0xc
// 004238d7: PUSH 0x1
// 004238d9: PUSH 0x616b30
//   XREF to: 00616b30 (DATA)
// 004238de: PUSH ESI
// 004238df: MOV [0x00822cf0],EAX
//   XREF to: 00822cf0 (WRITE)
// 004238e4: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004238e9: ADD ESP,0xc
// 004238ec: MOV [0x00822cf4],EAX
//   XREF to: 00822cf4 (WRITE)
// 004238f1: PUSH 0x1
// 004238f3: PUSH 0x616b41
//   XREF to: 00616b41 (DATA)
// 004238f8: PUSH ESI
// 004238f9: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004238fe: ADD ESP,0xc
// 00423901: PUSH 0x1
// 00423903: PUSH 0x616b4d
//   XREF to: 00616b4d (DATA)
// 00423908: PUSH ESI
// 00423909: MOV [0x00822d00],EAX
//   XREF to: 00822d00 (WRITE)
// 0042390e: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00423913: ADD ESP,0xc
// 00423916: PUSH EDI
// 00423917: MOV [0x00822d04],EAX
//   XREF to: 00822d04 (WRITE)
// 0042391c: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 00423921: ADD ESP,0x4
// 00423924: PUSH 0x1
// 00423926: PUSH 0x616b5a
//   XREF to: 00616b5a (DATA)
// 0042392b: PUSH EAX
// 0042392c: MOV ESI,EAX
// 0042392e: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 00423933: ADD ESP,0xc
// 00423936: PUSH 0x1
// 00423938: PUSH 0x616b69
//   XREF to: 00616b69 (DATA)
// 0042393d: PUSH ESI
// 0042393e: MOV dword ptr [EBX + 0xbebc],EAX
// 00423944: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 00423949: ADD ESP,0xc
// 0042394c: PUSH 0x1
// 0042394e: PUSH 0x616b74
//   XREF to: 00616b74 (DATA)
// 00423953: PUSH ESI
// 00423954: MOV dword ptr [EBX + 0xbec0],EAX
// 0042395a: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 0042395f: ADD ESP,0xc
// 00423962: PUSH 0x1
// 00423964: PUSH 0x616b83
//   XREF to: 00616b83 (DATA)
// 00423969: PUSH ESI
// 0042396a: MOV dword ptr [EBX + 0xbec4],EAX
// 00423970: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 00423975: ADD ESP,0xc
// 00423978: PUSH 0x1
// 0042397a: PUSH 0x616b8e
//   XREF to: 00616b8e (DATA)
// 0042397f: PUSH ESI
// 00423980: MOV dword ptr [EBX + 0xbec8],EAX
// 00423986: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 0042398b: ADD ESP,0xc
// 0042398e: PUSH 0x1
// 00423990: PUSH 0x616b99
//   XREF to: 00616b99 (DATA)
// 00423995: PUSH ESI
// 00423996: MOV dword ptr [EBX + 0xbecc],EAX
// 0042399c: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004239a1: ADD ESP,0xc
// 004239a4: PUSH 0x1
// 004239a6: PUSH 0x616ba4
//   XREF to: 00616ba4 (DATA)
// 004239ab: PUSH ESI
// 004239ac: MOV dword ptr [EBX + 0xbed0],EAX
// 004239b2: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004239b7: ADD ESP,0xc
// 004239ba: MOV dword ptr [EBX + 0xbed4],EAX
// 004239c0: POP EDI
// 004239c1: PUSH 0x1
// 004239c3: PUSH 0x616baf
//   XREF to: 00616baf (DATA)
// 004239c8: PUSH ESI
// 004239c9: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004239ce: ADD ESP,0xc
// 004239d1: PUSH 0x1
// 004239d3: PUSH 0x616bbe
//   XREF to: 00616bbe (DATA)
// 004239d8: PUSH ESI
// 004239d9: MOV dword ptr [EBX + 0xbed8],EAX
// 004239df: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004239e4: ADD ESP,0xc
// 004239e7: PUSH EBX
// 004239e8: MOV dword ptr [EBX + 0xbedc],EAX
// 004239ee: CALL core_enemy.cpp_CEnemy_FUN_004a9650
//   XREF to: 004a9650 (UNCONDITIONAL_CALL)
// 004239f3: ADD ESP,0x4
// 004239f6: PUSH 0x41a00000
// 004239fb: PUSH 0x40000000
// 00423a00: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
