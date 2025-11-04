// Name: core_colonel.cpp_FUN_0043f850
// Address: 0043f850
// Address Range: [[0043f850, 0043f9e1]]
// Convention: unknown
// Signature: undefined core_colonel.cpp_FUN_0043f850()
// Globals:
//   TerminatedCString s_Bip01_head_00618b9a
//   TerminatedCString s_Bip01_L_Clavicle_00618ba5
//   TerminatedCString s_Bip01_R_Clavicle_00618bb6
//   string s_Bip01_L_UpperArm_00618bc7
//   TerminatedCString s_Bip01_R_UpperArm_00618bd8
//   TerminatedCString s_Bip01_L_ForeArm_00618be9
//   TerminatedCString s_Bip01_R_ForeArm_00618bf9
//   TerminatedCString s_Bip01_L_Foot_00618c09
//   TerminatedCString s_Bip01_R_Foot_00618c16
//   TerminatedCString s_Bip01_L_Thigh_00618c23
//   TerminatedCString s_Bip01_R_Thigh_00618c31
//   TerminatedCString s_Bip01_L_Calf_00618c3f
//   TerminatedCString s_Bip01_R_Calf_00618c4c
//   TerminatedCString s_Bip01_L_Hand_00618c59
//   TerminatedCString s_Bip01_R_Hand_00618c66
//   TerminatedCString s_Bip01_Spine2_00618c73
//   TerminatedCString s_Bip01_Spine_00618c80
//   undefined4 DAT_0083b124
//   undefined4 DAT_0083b128
//   undefined4 DAT_0083b12c
//   undefined4 DAT_0083b130
//   undefined4 DAT_0083b134
//   undefined4 DAT_0083b138
//   undefined4 DAT_0083b13c
//   undefined4 DAT_0083b140
//   undefined4 DAT_0083b144
//   undefined4 DAT_0083b148
//   undefined4 DAT_0083b14c
//   undefined4 DAT_0083b150
//   undefined4 DAT_0083b154
//   undefined4 DAT_0083b158
//   undefined4 DAT_0083b15c
//   undefined4 DAT_0083b160
//   undefined4 DAT_0083b164
// Function calls:
//   core_hero.cpp_CHero_FUN_004f2540
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_hero_colonel.cpp_FUN_0043f850(undefined4 param_1) */

void core_colonel_cpp_FUN_0043f850(void)

{
  CSkeleton *this_ptr;
  CHero *in_stack_00000004;
  
  core_hero_cpp_CHero_FUN_004f2540(in_stack_00000004);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                       (&(in_stack_00000004->base_character).model);
  DAT_0083b124 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 head");
  _DAT_0083b128 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Clavicle");
  _DAT_0083b12c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Clavicle");
  _DAT_0083b130 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L UpperArm");
  _DAT_0083b134 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R UpperArm");
  _DAT_0083b138 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L ForeArm");
  _DAT_0083b13c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R ForeArm");
  _DAT_0083b140 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Foot");
  _DAT_0083b144 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Foot");
  _DAT_0083b148 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Thigh");
  _DAT_0083b14c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Thigh");
  _DAT_0083b150 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Calf");
  _DAT_0083b154 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Calf");
  _DAT_0083b158 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Hand");
  _DAT_0083b15c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Hand");
  _DAT_0083b160 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 Spine2");
  _DAT_0083b164 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 Spine")
  ;
  in_stack_00000004 = in_stack_00000004 + 1;
  (in_stack_00000004->base_character).base_actor.actor_name[0] = '\0';
  (in_stack_00000004->base_character).base_actor.actor_name[1] = '\0';
  (in_stack_00000004->base_character).base_actor.actor_name[2] = '\0';
  (in_stack_00000004->base_character).base_actor.actor_name[3] = '\0';
  return;
}


// Assembly code:
// 0043f850: PUSH EBX
//   Label: core_colonel.cpp_FUN_0043f850
// 0043f851: PUSH ESI
// 0043f852: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0043f856: PUSH ESI
// 0043f857: CALL core_hero.cpp_CHero_FUN_004f2540
//   XREF to: 004f2540 (UNCONDITIONAL_CALL)
// 0043f85c: ADD ESP,0x4
// 0043f85f: LEA EAX,[ESI + 0x158]
// 0043f865: PUSH EAX
// 0043f866: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0043f86b: ADD ESP,0x4
// 0043f86e: PUSH 0x1
// 0043f870: PUSH 0x618b9a
//   XREF to: 00618b9a (DATA)
// 0043f875: PUSH EAX
// 0043f876: MOV EBX,EAX
// 0043f878: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0043f87d: ADD ESP,0xc
// 0043f880: PUSH 0x1
// 0043f882: PUSH 0x618ba5
//   XREF to: 00618ba5 (DATA)
// 0043f887: PUSH EBX
// 0043f888: MOV [0x0083b124],EAX
//   XREF to: 0083b124 (WRITE)
// 0043f88d: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0043f892: ADD ESP,0xc
// 0043f895: PUSH 0x1
// 0043f897: PUSH 0x618bb6
//   XREF to: 00618bb6 (DATA)
// 0043f89c: PUSH EBX
// 0043f89d: MOV [0x0083b128],EAX
//   XREF to: 0083b128 (WRITE)
// 0043f8a2: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0043f8a7: ADD ESP,0xc
// 0043f8aa: PUSH 0x1
// 0043f8ac: PUSH 0x618bc7
//   XREF to: 00618bc7 (DATA)
// 0043f8b1: PUSH EBX
// 0043f8b2: MOV [0x0083b12c],EAX
//   XREF to: 0083b12c (WRITE)
// 0043f8b7: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0043f8bc: ADD ESP,0xc
// 0043f8bf: PUSH 0x1
// 0043f8c1: PUSH 0x618bd8
//   XREF to: 00618bd8 (DATA)
// 0043f8c6: PUSH EBX
// 0043f8c7: MOV [0x0083b130],EAX
//   XREF to: 0083b130 (WRITE)
// 0043f8cc: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0043f8d1: ADD ESP,0xc
// 0043f8d4: PUSH 0x1
// 0043f8d6: PUSH 0x618be9
//   XREF to: 00618be9 (DATA)
// 0043f8db: PUSH EBX
// 0043f8dc: MOV [0x0083b134],EAX
//   XREF to: 0083b134 (WRITE)
// 0043f8e1: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0043f8e6: ADD ESP,0xc
// 0043f8e9: PUSH 0x1
// 0043f8eb: PUSH 0x618bf9
//   XREF to: 00618bf9 (DATA)
// 0043f8f0: PUSH EBX
// 0043f8f1: MOV [0x0083b138],EAX
//   XREF to: 0083b138 (WRITE)
// 0043f8f6: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0043f8fb: ADD ESP,0xc
// 0043f8fe: PUSH 0x1
// 0043f900: PUSH 0x618c09
//   XREF to: 00618c09 (DATA)
// 0043f905: PUSH EBX
// 0043f906: MOV [0x0083b13c],EAX
//   XREF to: 0083b13c (WRITE)
// 0043f90b: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0043f910: ADD ESP,0xc
// 0043f913: PUSH 0x1
// 0043f915: PUSH 0x618c16
//   XREF to: 00618c16 (DATA)
// 0043f91a: PUSH EBX
// 0043f91b: MOV [0x0083b140],EAX
//   XREF to: 0083b140 (WRITE)
// 0043f920: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0043f925: ADD ESP,0xc
// 0043f928: MOV [0x0083b144],EAX
//   XREF to: 0083b144 (WRITE)
// 0043f92d: PUSH 0x1
// 0043f92f: PUSH 0x618c23
//   XREF to: 00618c23 (DATA)
// 0043f934: PUSH EBX
// 0043f935: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0043f93a: ADD ESP,0xc
// 0043f93d: PUSH 0x1
// 0043f93f: PUSH 0x618c31
//   XREF to: 00618c31 (DATA)
// 0043f944: PUSH EBX
// 0043f945: MOV [0x0083b148],EAX
//   XREF to: 0083b148 (WRITE)
// 0043f94a: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0043f94f: ADD ESP,0xc
// 0043f952: PUSH 0x1
// 0043f954: PUSH 0x618c3f
//   XREF to: 00618c3f (DATA)
// 0043f959: PUSH EBX
// 0043f95a: MOV [0x0083b14c],EAX
//   XREF to: 0083b14c (WRITE)
// 0043f95f: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0043f964: ADD ESP,0xc
// 0043f967: PUSH 0x1
// 0043f969: PUSH 0x618c4c
//   XREF to: 00618c4c (DATA)
// 0043f96e: PUSH EBX
// 0043f96f: MOV [0x0083b150],EAX
//   XREF to: 0083b150 (WRITE)
// 0043f974: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0043f979: ADD ESP,0xc
// 0043f97c: PUSH 0x1
// 0043f97e: PUSH 0x618c59
//   XREF to: 00618c59 (DATA)
// 0043f983: PUSH EBX
// 0043f984: MOV [0x0083b154],EAX
//   XREF to: 0083b154 (WRITE)
// 0043f989: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0043f98e: ADD ESP,0xc
// 0043f991: PUSH 0x1
// 0043f993: PUSH 0x618c66
//   XREF to: 00618c66 (DATA)
// 0043f998: PUSH EBX
// 0043f999: MOV [0x0083b158],EAX
//   XREF to: 0083b158 (WRITE)
// 0043f99e: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0043f9a3: ADD ESP,0xc
// 0043f9a6: PUSH 0x1
// 0043f9a8: PUSH 0x618c73
//   XREF to: 00618c73 (DATA)
// 0043f9ad: PUSH EBX
// 0043f9ae: MOV [0x0083b15c],EAX
//   XREF to: 0083b15c (WRITE)
// 0043f9b3: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0043f9b8: ADD ESP,0xc
// 0043f9bb: PUSH 0x1
// 0043f9bd: PUSH 0x618c80
//   XREF to: 00618c80 (DATA)
// 0043f9c2: PUSH EBX
// 0043f9c3: MOV [0x0083b160],EAX
//   XREF to: 0083b160 (WRITE)
// 0043f9c8: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0043f9cd: ADD ESP,0xc
// 0043f9d0: MOV [0x0083b164],EAX
//   XREF to: 0083b164 (WRITE)
// 0043f9d5: MOV dword ptr [ESI + 0x1fbd4],0x0
// 0043f9df: POP ESI
// 0043f9e0: POP EBX
// 0043f9e1: RET
