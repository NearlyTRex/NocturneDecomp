// Name: core_scat.cpp_FUN_00556f90
// Address: 00556f90
// Address Range: [[00556f90, 0055714c]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_00556f90()
// Globals:
//   TerminatedCString s_Bip01_head_0064124b
//   string s_Bip01_L_Clavicle_00641256
//   TerminatedCString s_Bip01_R_Clavicle_00641267
//   TerminatedCString s_Bip01_L_UpperArm_00641278
//   string s_Bip01_R_UpperArm_00641289
//   TerminatedCString s_Bip01_L_ForeArm_0064129a
//   TerminatedCString s_Bip01_R_ForeArm_006412aa
//   TerminatedCString s_Bip01_L_Foot_006412ba
//   TerminatedCString s_Bip01_R_Foot_006412c7
//   TerminatedCString s_Bip01_L_Thigh_006412d4
//   TerminatedCString s_Bip01_R_Thigh_006412e2
//   TerminatedCString s_Bip01_L_Calf_006412f0
//   TerminatedCString s_Bip01_R_Calf_006412fd
//   TerminatedCString s_Bip01_L_Hand_0064130a
//   TerminatedCString s_Bip01_R_Hand_00641317
//   TerminatedCString s_Bip01_Spine2_00641324
//   TerminatedCString s_Bip01_Spine_00641331
//   TerminatedCString s_Bip01_Spine1_0064133d
//   TerminatedCString s_Bip01_Spine1_0064134a
//   undefined4 DAT_0310615c
//   undefined4 DAT_03106160
//   undefined4 DAT_03106164
//   undefined4 DAT_03106168
//   undefined4 DAT_0310616c
//   undefined4 DAT_03106170
//   undefined4 DAT_03106174
//   undefined4 DAT_03106178
//   undefined4 DAT_0310617c
//   undefined4 DAT_03106180
//   undefined4 DAT_03106184
//   undefined4 DAT_03106188
//   undefined4 DAT_0310618c
//   undefined4 DAT_03106190
//   undefined4 DAT_03106194
//   undefined4 DAT_03106198
//   undefined4 DAT_0310619c
//   undefined4 DAT_031061a0
// Function calls:
//   core_hero.cpp_CHero_FUN_004f2540
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_hero_scat.cpp_FUN_00556f90(undefined4 param_1) */

void core_scat_cpp_FUN_00556f90(void)

{
  CHero *pCVar1;
  undefined4 uVar2;
  CHero *in_stack_00000004;
  
  core_hero_cpp_CHero_FUN_004f2540(in_stack_00000004);
  core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820();
  DAT_0310615c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_03106160 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_03106164 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_03106168 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_0310616c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_03106170 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_03106174 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_03106178 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_0310617c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_03106180 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_03106184 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_03106188 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_0310618c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_03106190 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_03106194 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_03106198 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_031061a0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_0310619c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  uVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  pCVar1 = in_stack_00000004 + 1;
  (pCVar1->base_character).base_actor.actor_name[0] = '\0';
  (pCVar1->base_character).base_actor.actor_name[1] = '\0';
  (pCVar1->base_character).base_actor.actor_name[2] = '\0';
  (pCVar1->base_character).base_actor.actor_name[3] = '\0';
  *(undefined4 *)((in_stack_00000004->base_character).field11_0x25a0 + 0x24) = uVar2;
  return;
}


// Assembly code:
// 00556f90: PUSH EBX
//   Label: core_scat.cpp_FUN_00556f90
// 00556f91: PUSH ESI
// 00556f92: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00556f96: PUSH ESI
// 00556f97: CALL core_hero.cpp_CHero_FUN_004f2540
//   XREF to: 004f2540 (UNCONDITIONAL_CALL)
// 00556f9c: ADD ESP,0x4
// 00556f9f: LEA EAX,[ESI + 0x158]
// 00556fa5: PUSH EAX
// 00556fa6: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 00556fab: ADD ESP,0x4
// 00556fae: PUSH 0x1
// 00556fb0: PUSH 0x64124b
//   XREF to: 0064124b (DATA)
// 00556fb5: PUSH EAX
// 00556fb6: MOV EBX,EAX
// 00556fb8: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00556fbd: ADD ESP,0xc
// 00556fc0: PUSH 0x1
// 00556fc2: PUSH 0x641256
//   XREF to: 00641256 (DATA)
// 00556fc7: PUSH EBX
// 00556fc8: MOV [0x0310615c],EAX
//   XREF to: 0310615c (WRITE)
// 00556fcd: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00556fd2: ADD ESP,0xc
// 00556fd5: PUSH 0x1
// 00556fd7: PUSH 0x641267
//   XREF to: 00641267 (DATA)
// 00556fdc: PUSH EBX
// 00556fdd: MOV [0x03106160],EAX
//   XREF to: 03106160 (WRITE)
// 00556fe2: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00556fe7: ADD ESP,0xc
// 00556fea: PUSH 0x1
// 00556fec: PUSH 0x641278
//   XREF to: 00641278 (DATA)
// 00556ff1: PUSH EBX
// 00556ff2: MOV [0x03106164],EAX
//   XREF to: 03106164 (WRITE)
// 00556ff7: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00556ffc: ADD ESP,0xc
// 00556fff: PUSH 0x1
// 00557001: PUSH 0x641289
//   XREF to: 00641289 (DATA)
// 00557006: PUSH EBX
// 00557007: MOV [0x03106168],EAX
//   XREF to: 03106168 (WRITE)
// 0055700c: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00557011: ADD ESP,0xc
// 00557014: PUSH 0x1
// 00557016: PUSH 0x64129a
//   XREF to: 0064129a (DATA)
// 0055701b: PUSH EBX
// 0055701c: MOV [0x0310616c],EAX
//   XREF to: 0310616c (WRITE)
// 00557021: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00557026: ADD ESP,0xc
// 00557029: PUSH 0x1
// 0055702b: PUSH 0x6412aa
//   XREF to: 006412aa (DATA)
// 00557030: PUSH EBX
// 00557031: MOV [0x03106170],EAX
//   XREF to: 03106170 (WRITE)
// 00557036: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0055703b: ADD ESP,0xc
// 0055703e: PUSH 0x1
// 00557040: PUSH 0x6412ba
//   XREF to: 006412ba (DATA)
// 00557045: PUSH EBX
// 00557046: MOV [0x03106174],EAX
//   XREF to: 03106174 (WRITE)
// 0055704b: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00557050: ADD ESP,0xc
// 00557053: PUSH 0x1
// 00557055: PUSH 0x6412c7
//   XREF to: 006412c7 (DATA)
// 0055705a: PUSH EBX
// 0055705b: MOV [0x03106178],EAX
//   XREF to: 03106178 (WRITE)
// 00557060: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00557065: ADD ESP,0xc
// 00557068: MOV [0x0310617c],EAX
//   XREF to: 0310617c (WRITE)
// 0055706d: PUSH 0x1
// 0055706f: PUSH 0x6412d4
//   XREF to: 006412d4 (DATA)
// 00557074: PUSH EBX
// 00557075: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0055707a: ADD ESP,0xc
// 0055707d: PUSH 0x1
// 0055707f: PUSH 0x6412e2
//   XREF to: 006412e2 (DATA)
// 00557084: PUSH EBX
// 00557085: MOV [0x03106180],EAX
//   XREF to: 03106180 (WRITE)
// 0055708a: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0055708f: ADD ESP,0xc
// 00557092: PUSH 0x1
// 00557094: PUSH 0x6412f0
//   XREF to: 006412f0 (DATA)
// 00557099: PUSH EBX
// 0055709a: MOV [0x03106184],EAX
//   XREF to: 03106184 (WRITE)
// 0055709f: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005570a4: ADD ESP,0xc
// 005570a7: PUSH 0x1
// 005570a9: PUSH 0x6412fd
//   XREF to: 006412fd (DATA)
// 005570ae: PUSH EBX
// 005570af: MOV [0x03106188],EAX
//   XREF to: 03106188 (WRITE)
// 005570b4: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005570b9: ADD ESP,0xc
// 005570bc: PUSH 0x1
// 005570be: PUSH 0x64130a
//   XREF to: 0064130a (DATA)
// 005570c3: PUSH EBX
// 005570c4: MOV [0x0310618c],EAX
//   XREF to: 0310618c (WRITE)
// 005570c9: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005570ce: ADD ESP,0xc
// 005570d1: PUSH 0x1
// 005570d3: PUSH 0x641317
//   XREF to: 00641317 (DATA)
// 005570d8: PUSH EBX
// 005570d9: MOV [0x03106190],EAX
//   XREF to: 03106190 (WRITE)
// 005570de: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005570e3: ADD ESP,0xc
// 005570e6: PUSH 0x1
// 005570e8: PUSH 0x641324
//   XREF to: 00641324 (DATA)
// 005570ed: PUSH EBX
// 005570ee: MOV [0x03106194],EAX
//   XREF to: 03106194 (WRITE)
// 005570f3: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005570f8: ADD ESP,0xc
// 005570fb: PUSH 0x1
// 005570fd: PUSH 0x641331
//   XREF to: 00641331 (DATA)
// 00557102: PUSH EBX
// 00557103: MOV [0x03106198],EAX
//   XREF to: 03106198 (WRITE)
// 00557108: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0055710d: ADD ESP,0xc
// 00557110: PUSH 0x1
// 00557112: PUSH 0x64133d
//   XREF to: 0064133d (DATA)
// 00557117: PUSH EBX
// 00557118: MOV [0x031061a0],EAX
//   XREF to: 031061a0 (WRITE)
// 0055711d: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00557122: ADD ESP,0xc
// 00557125: PUSH 0x1
// 00557127: PUSH 0x64134a
//   XREF to: 0064134a (DATA)
// 0055712c: PUSH EBX
// 0055712d: MOV [0x0310619c],EAX
//   XREF to: 0310619c (WRITE)
// 00557132: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00557137: MOV dword ptr [ESI + 0x1fbd4],0x0
// 00557141: ADD ESP,0xc
// 00557144: MOV dword ptr [ESI + 0x25c4],EAX
// 0055714a: POP ESI
// 0055714b: POP EBX
// 0055714c: RET
