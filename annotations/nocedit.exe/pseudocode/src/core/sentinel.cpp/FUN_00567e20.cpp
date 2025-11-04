// Name: core_sentinel.cpp_FUN_00567e20
// Address: 00567e20
// Address Range: [[00567e20, 00567fcf]]
// Convention: unknown
// Signature: undefined core_sentinel.cpp_FUN_00567e20()
// Globals:
//   TerminatedCString s_Bip01_Head_00645726
//   TerminatedCString s_Bip01_L_ForeArm_00645731
//   TerminatedCString s_Bip01_R_ForeArm_00645741
//   TerminatedCString s_Bip01_L_UpperArm_00645751
//   TerminatedCString s_Bip01_R_UpperArm_00645762
//   TerminatedCString s_Bip01_L_Foot_00645773
//   TerminatedCString s_Bip01_R_Foot_00645780
//   TerminatedCString s_Bip01_L_Hand_0064578d
//   TerminatedCString s_Bip01_R_Hand_0064579a
//   TerminatedCString s_Bip01_Spine_006457a7
//   TerminatedCString s_Bip01_Spine1_006457b3
//   TerminatedCString s_Bip01_Spine2_006457c0
//   TerminatedCString s_Bip01_Head_006457cd
//   TerminatedCString s_Bip01_L_UpperArm_006457d8
//   TerminatedCString s_Bip01_R_UpperArm_006457e9
//   TerminatedCString s_Bip01_Spine_006457fa
//   TerminatedCString s_Bip01_Spine2_00645806
//   undefined4 DAT_0311420c
//   undefined4 DAT_03114210
//   undefined4 DAT_03114214
//   undefined4 DAT_03114218
//   undefined4 DAT_0311421c
//   undefined4 DAT_03114220
//   undefined4 DAT_03114224
//   undefined4 DAT_03114228
//   undefined4 DAT_0311422c
//   undefined4 DAT_03114230
//   undefined4 DAT_03114234
//   undefined4 DAT_03114238
// Function calls:
//   core_enemy.cpp_CEnemy_FUN_004a9650
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_sentinel.cpp_FUN_00567e20(undefined4 param_1) */

void core_sentinel_cpp_FUN_00567e20(void)

{
  CDeformableModelInstance *this_ptr;
  CCharacter *pCVar1;
  CSkeleton *this_ptr_00;
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000004);
  this_ptr = &(in_stack_00000004->base_character).model;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0450(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  DAT_0311420c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Head");
  _DAT_03114218 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L ForeArm");
  _DAT_0311421c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R ForeArm");
  DAT_03114220 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L UpperArm");
  DAT_03114224 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm");
  _DAT_03114228 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Foot");
  _DAT_0311422c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R Foot");
  DAT_03114210 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Hand");
  DAT_03114214 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Hand");
  DAT_03114230 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  _DAT_03114234 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 Spine1");
  DAT_03114238 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2");
  DAT_0311420c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Head");
  DAT_03114220 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L UpperArm");
  DAT_03114224 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm");
  DAT_03114230 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  DAT_03114238 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2");
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  pCVar1 = &in_stack_00000004[1].base_character;
  (pCVar1->base_actor).actor_name[0xc] = '\0';
  (pCVar1->base_actor).actor_name[0xd] = '\0';
  (pCVar1->base_actor).actor_name[0xe] = '\0';
  (pCVar1->base_actor).actor_name[0xf] = '\0';
  pCVar1 = &in_stack_00000004[1].base_character;
  (pCVar1->base_actor).actor_name[8] = '\0';
  (pCVar1->base_actor).actor_name[9] = '\0';
  (pCVar1->base_actor).actor_name[10] = '\0';
  (pCVar1->base_actor).actor_name[0xb] = '\0';
  return;
}


// Assembly code:
// 00567e20: PUSH EBX
//   Label: core_sentinel.cpp_FUN_00567e20
// 00567e21: PUSH ESI
// 00567e22: PUSH EDI
// 00567e23: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00567e27: PUSH EDI
// 00567e28: CALL core_enemy.cpp_CEnemy_FUN_004a9650
//   XREF to: 004a9650 (UNCONDITIONAL_CALL)
// 00567e2d: ADD ESP,0x4
// 00567e30: LEA ESI,[EDI + 0x158]
// 00567e36: PUSH ESI
// 00567e37: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 00567e3c: ADD ESP,0x4
// 00567e3f: PUSH ESI
// 00567e40: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 00567e45: ADD ESP,0x4
// 00567e48: PUSH 0x1
// 00567e4a: PUSH 0x645726
//   XREF to: 00645726 (DATA)
// 00567e4f: PUSH EAX
// 00567e50: MOV EBX,EAX
// 00567e52: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00567e57: ADD ESP,0xc
// 00567e5a: PUSH 0x1
// 00567e5c: PUSH 0x645731
//   XREF to: 00645731 (DATA)
// 00567e61: PUSH EBX
// 00567e62: MOV [0x0311420c],EAX
//   XREF to: 0311420c (WRITE)
// 00567e67: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00567e6c: ADD ESP,0xc
// 00567e6f: PUSH 0x1
// 00567e71: PUSH 0x645741
//   XREF to: 00645741 (DATA)
// 00567e76: PUSH EBX
// 00567e77: MOV [0x03114218],EAX
//   XREF to: 03114218 (WRITE)
// 00567e7c: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00567e81: ADD ESP,0xc
// 00567e84: PUSH 0x1
// 00567e86: PUSH 0x645751
//   XREF to: 00645751 (DATA)
// 00567e8b: PUSH EBX
// 00567e8c: MOV [0x0311421c],EAX
//   XREF to: 0311421c (WRITE)
// 00567e91: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00567e96: ADD ESP,0xc
// 00567e99: PUSH 0x1
// 00567e9b: PUSH 0x645762
//   XREF to: 00645762 (DATA)
// 00567ea0: PUSH EBX
// 00567ea1: MOV [0x03114220],EAX
//   XREF to: 03114220 (WRITE)
// 00567ea6: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00567eab: ADD ESP,0xc
// 00567eae: PUSH 0x1
// 00567eb0: PUSH 0x645773
//   XREF to: 00645773 (DATA)
// 00567eb5: PUSH EBX
// 00567eb6: MOV [0x03114224],EAX
//   XREF to: 03114224 (WRITE)
// 00567ebb: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00567ec0: ADD ESP,0xc
// 00567ec3: PUSH 0x1
// 00567ec5: PUSH 0x645780
//   XREF to: 00645780 (DATA)
// 00567eca: PUSH EBX
// 00567ecb: MOV [0x03114228],EAX
//   XREF to: 03114228 (WRITE)
// 00567ed0: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00567ed5: ADD ESP,0xc
// 00567ed8: PUSH 0x1
// 00567eda: PUSH 0x64578d
//   XREF to: 0064578d (DATA)
// 00567edf: PUSH EBX
// 00567ee0: MOV [0x0311422c],EAX
//   XREF to: 0311422c (WRITE)
// 00567ee5: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00567eea: ADD ESP,0xc
// 00567eed: MOV [0x03114210],EAX
//   XREF to: 03114210 (WRITE)
// 00567ef2: PUSH 0x1
// 00567ef4: PUSH 0x64579a
//   XREF to: 0064579a (DATA)
// 00567ef9: PUSH EBX
// 00567efa: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00567eff: ADD ESP,0xc
// 00567f02: PUSH 0x1
// 00567f04: PUSH 0x6457a7
//   XREF to: 006457a7 (DATA)
// 00567f09: PUSH EBX
// 00567f0a: MOV [0x03114214],EAX
//   XREF to: 03114214 (WRITE)
// 00567f0f: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00567f14: ADD ESP,0xc
// 00567f17: PUSH 0x1
// 00567f19: PUSH 0x6457b3
//   XREF to: 006457b3 (DATA)
// 00567f1e: PUSH EBX
// 00567f1f: MOV [0x03114230],EAX
//   XREF to: 03114230 (WRITE)
// 00567f24: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00567f29: ADD ESP,0xc
// 00567f2c: PUSH 0x1
// 00567f2e: PUSH 0x6457c0
//   XREF to: 006457c0 (DATA)
// 00567f33: PUSH EBX
// 00567f34: MOV [0x03114234],EAX
//   XREF to: 03114234 (WRITE)
// 00567f39: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00567f3e: ADD ESP,0xc
// 00567f41: PUSH 0x1
// 00567f43: PUSH 0x6457cd
//   XREF to: 006457cd (DATA)
// 00567f48: PUSH EBX
// 00567f49: MOV [0x03114238],EAX
//   XREF to: 03114238 (WRITE)
// 00567f4e: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00567f53: ADD ESP,0xc
// 00567f56: PUSH 0x1
// 00567f58: PUSH 0x6457d8
//   XREF to: 006457d8 (DATA)
// 00567f5d: PUSH EBX
// 00567f5e: MOV [0x0311420c],EAX
//   XREF to: 0311420c (WRITE)
// 00567f63: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00567f68: ADD ESP,0xc
// 00567f6b: PUSH 0x1
// 00567f6d: PUSH 0x6457e9
//   XREF to: 006457e9 (DATA)
// 00567f72: PUSH EBX
// 00567f73: MOV [0x03114220],EAX
//   XREF to: 03114220 (WRITE)
// 00567f78: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00567f7d: ADD ESP,0xc
// 00567f80: PUSH 0x1
// 00567f82: PUSH 0x6457fa
//   XREF to: 006457fa (DATA)
// 00567f87: PUSH EBX
// 00567f88: MOV [0x03114224],EAX
//   XREF to: 03114224 (WRITE)
// 00567f8d: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00567f92: ADD ESP,0xc
// 00567f95: PUSH 0x1
// 00567f97: PUSH 0x645806
//   XREF to: 00645806 (DATA)
// 00567f9c: PUSH EBX
// 00567f9d: MOV [0x03114230],EAX
//   XREF to: 03114230 (WRITE)
// 00567fa2: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00567fa7: ADD ESP,0xc
// 00567faa: PUSH ESI
// 00567fab: MOV [0x03114238],EAX
//   XREF to: 03114238 (WRITE)
// 00567fb0: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 00567fb5: MOV dword ptr [EDI + 0xbec0],0x0
// 00567fbf: ADD ESP,0x4
// 00567fc2: MOV dword ptr [EDI + 0xbebc],0x0
// 00567fcc: POP EDI
// 00567fcd: POP ESI
// 00567fce: POP EBX
// 00567fcf: RET
