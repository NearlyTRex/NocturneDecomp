// Name: core_ghoul.cpp_FUN_004e6160
// Address: 004e6160
// Address Range: [[004e6160, 004e63c1]]
// Convention: unknown
// Signature: undefined core_ghoul.cpp_FUN_004e6160()
// Globals:
//   undefined4 s_Bip01_Head_0062db12
//   TerminatedCString s_Bip01_L_ForeArm_0062db1d
//   TerminatedCString s_Bip01_R_ForeArm_0062db2d
//   TerminatedCString s_Bip01_L_UpperArm_0062db3d
//   TerminatedCString s_Bip01_R_UpperArm_0062db4e
//   TerminatedCString s_Bip01_L_Foot_0062db5f
//   TerminatedCString s_Bip01_R_Foot_0062db6c
//   TerminatedCString s_Bip01_L_Hand_0062db79
//   TerminatedCString s_Bip01_R_Hand_0062db86
//   TerminatedCString s_Bip01_Spine_0062db93
//   TerminatedCString s_Bip01_Spine2_0062db9f
//   TerminatedCString s_r_high_arm01_0062dbac
//   TerminatedCString s_r_lo_arm01_0062dbb9
//   TerminatedCString s_l_high_arm01_0062dbc4
//   TerminatedCString s_l_lo_arm01_0062dbd1
//   TerminatedCString s_r_thigh01_0062dbdc
//   TerminatedCString s_r_shin01_0062dbe6
//   TerminatedCString s_l_thigh01_0062dbef
//   TerminatedCString s_l_shin01_0062dbf9
//   TerminatedCString s_lo_torso01_0062dc02
//   TerminatedCString s_high_torso01_0062dc0d
//   TerminatedCString s_head01_0062dc1a
//   undefined4 DAT_02d832fc
//   undefined4 DAT_02d83300
//   undefined4 DAT_02d83304
//   undefined4 DAT_02d83308
//   undefined4 DAT_02d8330c
//   undefined4 DAT_02d83310
//   undefined4 DAT_02d83314
//   undefined4 DAT_02d83318
//   undefined4 DAT_02d8331c
//   undefined4 DAT_02d83320
//   undefined4 DAT_02d83324
// Function calls:
//   core_enemy.cpp_CEnemy_FUN_004a9650
//   core_skeleton.cpp_CDeformableModel_FindPartInModel_FUN_0059c240
//   core_skeleton.cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_ghoul.cpp_FUN_004e6160(undefined4 param_1) */

void core_ghoul_cpp_FUN_004e6160(void)

{
  int iVar1;
  float fVar2;
  CEnemy *in_stack_00000004;
  
  core_skeleton_cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450();
  core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820();
  DAT_02d832fc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_02d83308 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_02d8330c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_02d83310 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_02d83314 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02d83318 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02d8331c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_02d83300 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_02d83304 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_02d83320 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_02d83324 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0();
  iVar1 = core_skeleton_cpp_CDeformableModel_FindPartInModel_FUN_0059c240();
  in_stack_00000004[1].base_character.base_actor.location.area_id = iVar1;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_FindPartInModel_FUN_0059c240();
  in_stack_00000004[1].base_character.base_actor.orient.pitch = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_FindPartInModel_FUN_0059c240();
  in_stack_00000004[1].base_character.base_actor.orient.bank = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_FindPartInModel_FUN_0059c240();
  in_stack_00000004[1].base_character.base_actor.orient.heading = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_FindPartInModel_FUN_0059c240();
  in_stack_00000004[1].base_character.base_actor.orient_matrix.m[0].x = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_FindPartInModel_FUN_0059c240();
  in_stack_00000004[1].base_character.base_actor.orient_matrix.m[0].y = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_FindPartInModel_FUN_0059c240();
  in_stack_00000004[1].base_character.base_actor.orient_matrix.m[0].z = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_FindPartInModel_FUN_0059c240();
  in_stack_00000004[1].base_character.base_actor.orient_matrix.m[1].x = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_FindPartInModel_FUN_0059c240();
  in_stack_00000004[1].base_character.base_actor.orient_matrix.m[1].y = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_FindPartInModel_FUN_0059c240();
  in_stack_00000004[1].base_character.base_actor.orient_matrix.m[1].z = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_FindPartInModel_FUN_0059c240();
  in_stack_00000004[1].base_character.base_actor.orient_matrix.m[2].x = fVar2;
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000004);
  in_stack_00000004[1].base_character.base_actor.health = 0;
  in_stack_00000004[1].base_character.base_actor.field6_0x68 = 0;
  in_stack_00000004[1].base_character.base_actor.field7_0x6c = 0;
  in_stack_00000004[1].base_character.base_actor.was_created = 0;
  in_stack_00000004[1].base_character.base_actor.create_prob = 0.0;
  in_stack_00000004[1].base_character.base_actor.orient_matrix.m[2].y = 0.0;
  in_stack_00000004[1].base_character.base_actor.orient_matrix.m[2].z = 0.0;
  in_stack_00000004[1].base_character.base_actor.runtime_state = 0;
  return;
}


// Assembly code:
// 004e6160: PUSH EBX
//   Label: core_ghoul.cpp_FUN_004e6160
// 004e6161: PUSH ESI
// 004e6162: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004e6166: PUSH EDI
// 004e6167: LEA EDI,[EBX + 0x158]
// 004e616d: PUSH EDI
// 004e616e: CALL core_skeleton.cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 004e6173: ADD ESP,0x4
// 004e6176: PUSH EDI
// 004e6177: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 004e617c: ADD ESP,0x4
// 004e617f: PUSH 0x1
// 004e6181: PUSH 0x62db12
//   XREF to: 0062db12 (DATA)
// 004e6186: PUSH EAX
// 004e6187: MOV ESI,EAX
// 004e6189: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e618e: ADD ESP,0xc
// 004e6191: PUSH 0x1
// 004e6193: PUSH 0x62db1d
//   XREF to: 0062db1d (DATA)
// 004e6198: PUSH ESI
// 004e6199: MOV [0x02d832fc],EAX
//   XREF to: 02d832fc (WRITE)
// 004e619e: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e61a3: ADD ESP,0xc
// 004e61a6: PUSH 0x1
// 004e61a8: PUSH 0x62db2d
//   XREF to: 0062db2d (DATA)
// 004e61ad: PUSH ESI
// 004e61ae: MOV [0x02d83308],EAX
//   XREF to: 02d83308 (WRITE)
// 004e61b3: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e61b8: ADD ESP,0xc
// 004e61bb: PUSH 0x1
// 004e61bd: PUSH 0x62db3d
//   XREF to: 0062db3d (DATA)
// 004e61c2: PUSH ESI
// 004e61c3: MOV [0x02d8330c],EAX
//   XREF to: 02d8330c (WRITE)
// 004e61c8: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e61cd: ADD ESP,0xc
// 004e61d0: PUSH 0x1
// 004e61d2: PUSH 0x62db4e
//   XREF to: 0062db4e (DATA)
// 004e61d7: PUSH ESI
// 004e61d8: MOV [0x02d83310],EAX
//   XREF to: 02d83310 (WRITE)
// 004e61dd: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e61e2: ADD ESP,0xc
// 004e61e5: PUSH 0x1
// 004e61e7: PUSH 0x62db5f
//   XREF to: 0062db5f (DATA)
// 004e61ec: PUSH ESI
// 004e61ed: MOV [0x02d83314],EAX
//   XREF to: 02d83314 (WRITE)
// 004e61f2: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e61f7: ADD ESP,0xc
// 004e61fa: PUSH 0x1
// 004e61fc: PUSH 0x62db6c
//   XREF to: 0062db6c (DATA)
// 004e6201: PUSH ESI
// 004e6202: MOV [0x02d83318],EAX
//   XREF to: 02d83318 (WRITE)
// 004e6207: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e620c: ADD ESP,0xc
// 004e620f: PUSH 0x1
// 004e6211: PUSH 0x62db79
//   XREF to: 0062db79 (DATA)
// 004e6216: PUSH ESI
// 004e6217: MOV [0x02d8331c],EAX
//   XREF to: 02d8331c (WRITE)
// 004e621c: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e6221: ADD ESP,0xc
// 004e6224: PUSH 0x1
// 004e6226: PUSH 0x62db86
//   XREF to: 0062db86 (DATA)
// 004e622b: PUSH ESI
// 004e622c: MOV [0x02d83300],EAX
//   XREF to: 02d83300 (WRITE)
// 004e6231: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e6236: ADD ESP,0xc
// 004e6239: MOV [0x02d83304],EAX
//   XREF to: 02d83304 (WRITE)
// 004e623e: PUSH 0x1
// 004e6240: PUSH 0x62db93
//   XREF to: 0062db93 (DATA)
// 004e6245: PUSH ESI
// 004e6246: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e624b: ADD ESP,0xc
// 004e624e: PUSH 0x1
// 004e6250: PUSH 0x62db9f
//   XREF to: 0062db9f (DATA)
// 004e6255: PUSH ESI
// 004e6256: MOV [0x02d83320],EAX
//   XREF to: 02d83320 (WRITE)
// 004e625b: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e6260: ADD ESP,0xc
// 004e6263: PUSH EDI
// 004e6264: MOV [0x02d83324],EAX
//   XREF to: 02d83324 (WRITE)
// 004e6269: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 004e626e: ADD ESP,0x4
// 004e6271: PUSH 0x1
// 004e6273: PUSH 0x62dbac
//   XREF to: 0062dbac (DATA)
// 004e6278: PUSH EAX
// 004e6279: MOV ESI,EAX
// 004e627b: CALL core_skeleton.cpp_CDeformableModel_FindPartInModel_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004e6280: ADD ESP,0xc
// 004e6283: PUSH 0x1
// 004e6285: PUSH 0x62dbb9
//   XREF to: 0062dbb9 (DATA)
// 004e628a: PUSH ESI
// 004e628b: MOV dword ptr [EBX + 0xbee0],EAX
// 004e6291: CALL core_skeleton.cpp_CDeformableModel_FindPartInModel_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004e6296: ADD ESP,0xc
// 004e6299: PUSH 0x1
// 004e629b: PUSH 0x62dbc4
//   XREF to: 0062dbc4 (DATA)
// 004e62a0: PUSH ESI
// 004e62a1: MOV dword ptr [EBX + 0xbee4],EAX
// 004e62a7: CALL core_skeleton.cpp_CDeformableModel_FindPartInModel_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004e62ac: ADD ESP,0xc
// 004e62af: PUSH 0x1
// 004e62b1: PUSH 0x62dbd1
//   XREF to: 0062dbd1 (DATA)
// 004e62b6: PUSH ESI
// 004e62b7: MOV dword ptr [EBX + 0xbee8],EAX
// 004e62bd: CALL core_skeleton.cpp_CDeformableModel_FindPartInModel_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004e62c2: ADD ESP,0xc
// 004e62c5: PUSH 0x1
// 004e62c7: PUSH 0x62dbdc
//   XREF to: 0062dbdc (DATA)
// 004e62cc: PUSH ESI
// 004e62cd: MOV dword ptr [EBX + 0xbeec],EAX
// 004e62d3: CALL core_skeleton.cpp_CDeformableModel_FindPartInModel_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004e62d8: ADD ESP,0xc
// 004e62db: PUSH 0x1
// 004e62dd: PUSH 0x62dbe6
//   XREF to: 0062dbe6 (DATA)
// 004e62e2: PUSH ESI
// 004e62e3: MOV dword ptr [EBX + 0xbef0],EAX
// 004e62e9: CALL core_skeleton.cpp_CDeformableModel_FindPartInModel_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004e62ee: ADD ESP,0xc
// 004e62f1: PUSH 0x1
// 004e62f3: PUSH 0x62dbef
//   XREF to: 0062dbef (DATA)
// 004e62f8: PUSH ESI
// 004e62f9: MOV dword ptr [EBX + 0xbef4],EAX
// 004e62ff: CALL core_skeleton.cpp_CDeformableModel_FindPartInModel_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004e6304: ADD ESP,0xc
// 004e6307: MOV dword ptr [EBX + 0xbef8],EAX
// 004e630d: POP EDI
// 004e630e: PUSH 0x1
// 004e6310: PUSH 0x62dbf9
//   XREF to: 0062dbf9 (DATA)
// 004e6315: PUSH ESI
// 004e6316: CALL core_skeleton.cpp_CDeformableModel_FindPartInModel_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004e631b: ADD ESP,0xc
// 004e631e: PUSH 0x1
// 004e6320: PUSH 0x62dc02
//   XREF to: 0062dc02 (DATA)
// 004e6325: PUSH ESI
// 004e6326: MOV dword ptr [EBX + 0xbefc],EAX
// 004e632c: CALL core_skeleton.cpp_CDeformableModel_FindPartInModel_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004e6331: ADD ESP,0xc
// 004e6334: PUSH 0x1
// 004e6336: PUSH 0x62dc0d
//   XREF to: 0062dc0d (DATA)
// 004e633b: PUSH ESI
// 004e633c: MOV dword ptr [EBX + 0xbf00],EAX
// 004e6342: CALL core_skeleton.cpp_CDeformableModel_FindPartInModel_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004e6347: ADD ESP,0xc
// 004e634a: PUSH 0x1
// 004e634c: PUSH 0x62dc1a
//   XREF to: 0062dc1a (DATA)
// 004e6351: PUSH ESI
// 004e6352: MOV dword ptr [EBX + 0xbf04],EAX
// 004e6358: CALL core_skeleton.cpp_CDeformableModel_FindPartInModel_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004e635d: ADD ESP,0xc
// 004e6360: PUSH EBX
// 004e6361: MOV dword ptr [EBX + 0xbf08],EAX
// 004e6367: CALL core_enemy.cpp_CEnemy_FUN_004a9650
//   XREF to: 004a9650 (UNCONDITIONAL_CALL)
// 004e636c: MOV dword ptr [EBX + 0xbf18],0x0
// 004e6376: MOV dword ptr [EBX + 0xbf1c],0x0
// 004e6380: MOV dword ptr [EBX + 0xbf20],0x0
// 004e638a: MOV dword ptr [EBX + 0xbf24],0x0
// 004e6394: MOV dword ptr [EBX + 0xbf28],0x0
// 004e639e: MOV dword ptr [EBX + 0xbf0c],0x0
// 004e63a8: MOV dword ptr [EBX + 0xbf10],0x0
// 004e63b2: ADD ESP,0x4
// 004e63b5: MOV dword ptr [EBX + 0xbf14],0x0
// 004e63bf: POP ESI
// 004e63c0: POP EBX
// 004e63c1: RET
