// Name: core_smiley.cpp_FUN_005a24d0
// Address: 005a24d0
// Address Range: [[005a24d0, 005a27cf]]
// Convention: unknown
// Signature: undefined core_smiley.cpp_FUN_005a24d0()
// Globals:
//   TerminatedCString s_Bip01_Head_0064f170
//   TerminatedCString s_Bip01_L_ForeArm_0064f17b
//   TerminatedCString s_Bip01_R_ForeArm_0064f18b
//   TerminatedCString s_Bip01_L_UpperArm_0064f19b
//   TerminatedCString s_Bip01_R_UpperArm_0064f1ac
//   TerminatedCString s_Bip01_L_Foot_0064f1bd
//   TerminatedCString s_Bip01_R_Foot_0064f1ca
//   TerminatedCString s_Bip01_L_Hand_0064f1d7
//   TerminatedCString s_Bip01_R_Hand_0064f1e4
//   TerminatedCString s_Bip01_Spine_0064f1f1
//   TerminatedCString s_Bip01_Spine1_0064f1fd
//   TerminatedCString s_Bip01_Spine2_0064f20a
//   TerminatedCString s_Bip01_Head_0064f217
//   TerminatedCString s_Bip01_L_UpperArm_0064f222
//   TerminatedCString s_Bip01_R_UpperArm_0064f233
//   TerminatedCString s_Bip01_Spine_0064f244
//   TerminatedCString s_Bip01_Spine2_0064f250
//   TerminatedCString s_larm01_0064f25d
//   TerminatedCString s_l4arm01_0064f264
//   TerminatedCString s_rarm01_0064f26c
//   TerminatedCString s_r4arm01_0064f273
//   TerminatedCString s_rthigh01_0064f27b
//   TerminatedCString s_rshin01_0064f284
//   TerminatedCString s_lthigh01_0064f28c
//   TerminatedCString s_lshin01_0064f295
//   TerminatedCString s_ass01_0064f29d
//   TerminatedCString s_torso01_0064f2a3
//   TerminatedCString s_head01_0064f2ab
//   TerminatedCString s_smiley2_dfm_0064f2b2
//   TerminatedCString s_smiley3_dfm_0064f2be
//   undefined4 DAT_03f48fa0
//   undefined4 DAT_03f48fa4
//   undefined4 DAT_03f48fa8
//   undefined4 DAT_03f48fac
//   undefined4 DAT_03f48fb0
//   undefined4 DAT_03f48fb4
//   undefined4 DAT_03f48fb8
//   undefined4 DAT_03f48fbc
//   undefined4 DAT_03f48fc0
//   undefined4 DAT_03f48fc4
//   undefined4 DAT_03f48fc8
//   undefined4 DAT_03f48fcc
// Function calls:
//   core_enemy.cpp_CEnemy_FUN_004a9650
//   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_smiley.cpp_FUN_005a24d0(undefined4 param_1) */

void core_smiley_cpp_FUN_005a24d0(void)

{
  CDeformableModelInstance *this_ptr;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar1;
  float fVar2;
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000004);
  this_ptr = &(in_stack_00000004->base_character).model;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0450(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0820(this_ptr);
  DAT_03f48fa0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Head");
  _DAT_03f48fac =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L ForeArm");
  _DAT_03f48fb0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R ForeArm");
  DAT_03f48fb4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L UpperArm");
  DAT_03f48fb8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm");
  _DAT_03f48fbc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Foot");
  _DAT_03f48fc0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R Foot");
  _DAT_03f48fa4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Hand");
  DAT_03f48fa8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Hand");
  DAT_03f48fc4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  _DAT_03f48fc8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 Spine1");
  DAT_03f48fcc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2");
  DAT_03f48fa0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Head");
  DAT_03f48fb4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L UpperArm");
  DAT_03f48fb8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm");
  DAT_03f48fc4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  DAT_03f48fcc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2");
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"larm01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"l4arm01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x14) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"rarm01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x18) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"r4arm01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x1c) = iVar1;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"rthigh01",1);
  in_stack_00000004[1].base_character.base_actor.location.position.x = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"rshin01",1);
  in_stack_00000004[1].base_character.base_actor.location.position.y = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"lthigh01",1);
  in_stack_00000004[1].base_character.base_actor.location.position.z = fVar2;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"lshin01",1);
  in_stack_00000004[1].base_character.base_actor.location.area_id = iVar1;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"ass01",1);
  in_stack_00000004[1].base_character.base_actor.orient.pitch = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"torso01",1);
  in_stack_00000004[1].base_character.base_actor.orient.bank = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"head01",1);
  in_stack_00000004[1].base_character.base_actor.orient_matrix.m[0].x = 0.0;
  in_stack_00000004[1].base_character.base_actor.orient.heading = fVar2;
  in_stack_00000004[1].base_character.base_actor.orient_matrix.m[0].y = 0.0;
  in_stack_00000004[1].base_character.base_actor.orient_matrix.m[1].x = 1.4013e-45;
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0
                    ((in_stack_00000004->base_character).model.field11_0x2260,"smiley2.dfm"
                    );
  if (iVar1 == 0) {
    in_stack_00000004[1].base_character.base_actor.orient_matrix.m[1].x = 2.8026e-45;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0
                    ((in_stack_00000004->base_character).model.field11_0x2260,"smiley3.dfm"
                    );
  if (iVar1 != 0) {
    return;
  }
  in_stack_00000004[1].base_character.base_actor.orient_matrix.m[1].x = 4.2039e-45;
  (in_stack_00000004->base_character).field13_0x2620[4] = '\0';
  (in_stack_00000004->base_character).field13_0x2620[5] = '\0';
  (in_stack_00000004->base_character).field13_0x2620[6] = '\0';
  (in_stack_00000004->base_character).field13_0x2620[7] = '\0';
  return;
}


// Assembly code:
// 005a24d0: PUSH EBX
//   Label: core_smiley.cpp_FUN_005a24d0
// 005a24d1: PUSH ESI
// 005a24d2: PUSH EDI
// 005a24d3: PUSH EBP
// 005a24d4: MOV EBP,ESP
// 005a24d6: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a24d9: PUSH EBX
// 005a24da: CALL core_enemy.cpp_CEnemy_FUN_004a9650
//   XREF to: 004a9650 (UNCONDITIONAL_CALL)
// 005a24df: ADD ESP,0x4
// 005a24e2: LEA EDI,[EBX + 0x158]
// 005a24e8: PUSH EDI
// 005a24e9: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 005a24ee: ADD ESP,0x4
// 005a24f1: PUSH EDI
// 005a24f2: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 005a24f7: ADD ESP,0x4
// 005a24fa: PUSH 0x1
// 005a24fc: PUSH 0x64f170
//   XREF to: 0064f170 (DATA)
// 005a2501: PUSH EAX
// 005a2502: MOV ESI,EAX
// 005a2504: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005a2509: ADD ESP,0xc
// 005a250c: PUSH 0x1
// 005a250e: PUSH 0x64f17b
//   XREF to: 0064f17b (DATA)
// 005a2513: PUSH ESI
// 005a2514: MOV [0x03f48fa0],EAX
//   XREF to: 03f48fa0 (WRITE)
// 005a2519: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005a251e: ADD ESP,0xc
// 005a2521: PUSH 0x1
// 005a2523: PUSH 0x64f18b
//   XREF to: 0064f18b (DATA)
// 005a2528: PUSH ESI
// 005a2529: MOV [0x03f48fac],EAX
//   XREF to: 03f48fac (WRITE)
// 005a252e: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005a2533: ADD ESP,0xc
// 005a2536: PUSH 0x1
// 005a2538: PUSH 0x64f19b
//   XREF to: 0064f19b (DATA)
// 005a253d: PUSH ESI
// 005a253e: MOV [0x03f48fb0],EAX
//   XREF to: 03f48fb0 (WRITE)
// 005a2543: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005a2548: ADD ESP,0xc
// 005a254b: PUSH 0x1
// 005a254d: PUSH 0x64f1ac
//   XREF to: 0064f1ac (DATA)
// 005a2552: PUSH ESI
// 005a2553: MOV [0x03f48fb4],EAX
//   XREF to: 03f48fb4 (WRITE)
// 005a2558: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005a255d: ADD ESP,0xc
// 005a2560: PUSH 0x1
// 005a2562: PUSH 0x64f1bd
//   XREF to: 0064f1bd (DATA)
// 005a2567: PUSH ESI
// 005a2568: MOV [0x03f48fb8],EAX
//   XREF to: 03f48fb8 (WRITE)
// 005a256d: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005a2572: ADD ESP,0xc
// 005a2575: PUSH 0x1
// 005a2577: PUSH 0x64f1ca
//   XREF to: 0064f1ca (DATA)
// 005a257c: PUSH ESI
// 005a257d: MOV [0x03f48fbc],EAX
//   XREF to: 03f48fbc (WRITE)
// 005a2582: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005a2587: ADD ESP,0xc
// 005a258a: PUSH 0x1
// 005a258c: PUSH 0x64f1d7
//   XREF to: 0064f1d7 (DATA)
// 005a2591: PUSH ESI
// 005a2592: MOV [0x03f48fc0],EAX
//   XREF to: 03f48fc0 (WRITE)
// 005a2597: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005a259c: ADD ESP,0xc
// 005a259f: MOV [0x03f48fa4],EAX
//   XREF to: 03f48fa4 (WRITE)
// 005a25a4: PUSH 0x1
// 005a25a6: PUSH 0x64f1e4
//   XREF to: 0064f1e4 (DATA)
// 005a25ab: PUSH ESI
// 005a25ac: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005a25b1: ADD ESP,0xc
// 005a25b4: PUSH 0x1
// 005a25b6: PUSH 0x64f1f1
//   XREF to: 0064f1f1 (DATA)
// 005a25bb: PUSH ESI
// 005a25bc: MOV [0x03f48fa8],EAX
//   XREF to: 03f48fa8 (WRITE)
// 005a25c1: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005a25c6: ADD ESP,0xc
// 005a25c9: PUSH 0x1
// 005a25cb: PUSH 0x64f1fd
//   XREF to: 0064f1fd (DATA)
// 005a25d0: PUSH ESI
// 005a25d1: MOV [0x03f48fc4],EAX
//   XREF to: 03f48fc4 (WRITE)
// 005a25d6: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005a25db: ADD ESP,0xc
// 005a25de: PUSH 0x1
// 005a25e0: PUSH 0x64f20a
//   XREF to: 0064f20a (DATA)
// 005a25e5: PUSH ESI
// 005a25e6: MOV [0x03f48fc8],EAX
//   XREF to: 03f48fc8 (WRITE)
// 005a25eb: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005a25f0: ADD ESP,0xc
// 005a25f3: PUSH 0x1
// 005a25f5: PUSH 0x64f217
//   XREF to: 0064f217 (DATA)
// 005a25fa: PUSH ESI
// 005a25fb: MOV [0x03f48fcc],EAX
//   XREF to: 03f48fcc (WRITE)
// 005a2600: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005a2605: ADD ESP,0xc
// 005a2608: PUSH 0x1
// 005a260a: PUSH 0x64f222
//   XREF to: 0064f222 (DATA)
// 005a260f: PUSH ESI
// 005a2610: MOV [0x03f48fa0],EAX
//   XREF to: 03f48fa0 (WRITE)
// 005a2615: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005a261a: ADD ESP,0xc
// 005a261d: PUSH 0x1
// 005a261f: PUSH 0x64f233
//   XREF to: 0064f233 (DATA)
// 005a2624: PUSH ESI
// 005a2625: MOV [0x03f48fb4],EAX
//   XREF to: 03f48fb4 (WRITE)
// 005a262a: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005a262f: ADD ESP,0xc
// 005a2632: PUSH 0x1
// 005a2634: PUSH 0x64f244
//   XREF to: 0064f244 (DATA)
// 005a2639: PUSH ESI
// 005a263a: MOV [0x03f48fb8],EAX
//   XREF to: 03f48fb8 (WRITE)
// 005a263f: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005a2644: ADD ESP,0xc
// 005a2647: PUSH 0x1
// 005a2649: PUSH 0x64f250
//   XREF to: 0064f250 (DATA)
// 005a264e: PUSH ESI
// 005a264f: MOV [0x03f48fc4],EAX
//   XREF to: 03f48fc4 (WRITE)
// 005a2654: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005a2659: ADD ESP,0xc
// 005a265c: PUSH EDI
// 005a265d: MOV [0x03f48fcc],EAX
//   XREF to: 03f48fcc (WRITE)
// 005a2662: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 005a2667: MOV ESI,EAX
// 005a2669: ADD ESP,0x4
// 005a266c: PUSH 0x1
// 005a266e: PUSH 0x64f25d
//   XREF to: 0064f25d (DATA)
// 005a2673: PUSH EAX
// 005a2674: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 005a2679: ADD ESP,0xc
// 005a267c: PUSH 0x1
// 005a267e: PUSH 0x64f264
//   XREF to: 0064f264 (DATA)
// 005a2683: PUSH ESI
// 005a2684: MOV dword ptr [EBX + 0xbec4],EAX
// 005a268a: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 005a268f: ADD ESP,0xc
// 005a2692: PUSH 0x1
// 005a2694: PUSH 0x64f26c
//   XREF to: 0064f26c (DATA)
// 005a2699: PUSH ESI
// 005a269a: MOV dword ptr [EBX + 0xbec8],EAX
// 005a26a0: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 005a26a5: ADD ESP,0xc
// 005a26a8: PUSH 0x1
// 005a26aa: PUSH 0x64f273
//   XREF to: 0064f273 (DATA)
// 005a26af: PUSH ESI
// 005a26b0: MOV dword ptr [EBX + 0xbecc],EAX
// 005a26b6: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 005a26bb: ADD ESP,0xc
// 005a26be: PUSH 0x1
// 005a26c0: PUSH 0x64f27b
//   XREF to: 0064f27b (DATA)
// 005a26c5: PUSH ESI
// 005a26c6: MOV dword ptr [EBX + 0xbed0],EAX
// 005a26cc: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 005a26d1: ADD ESP,0xc
// 005a26d4: PUSH 0x1
// 005a26d6: PUSH 0x64f284
//   XREF to: 0064f284 (DATA)
// 005a26db: PUSH ESI
// 005a26dc: MOV dword ptr [EBX + 0xbed4],EAX
// 005a26e2: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 005a26e7: ADD ESP,0xc
// 005a26ea: PUSH 0x1
// 005a26ec: PUSH 0x64f28c
//   XREF to: 0064f28c (DATA)
// 005a26f1: PUSH ESI
// 005a26f2: MOV dword ptr [EBX + 0xbed8],EAX
// 005a26f8: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 005a26fd: ADD ESP,0xc
// 005a2700: PUSH 0x1
// 005a2702: PUSH 0x64f295
//   XREF to: 0064f295 (DATA)
// 005a2707: PUSH ESI
// 005a2708: MOV dword ptr [EBX + 0xbedc],EAX
// 005a270e: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 005a2713: ADD ESP,0xc
// 005a2716: PUSH 0x1
// 005a2718: PUSH 0x64f29d
//   XREF to: 0064f29d (DATA)
// 005a271d: PUSH ESI
// 005a271e: MOV dword ptr [EBX + 0xbee0],EAX
// 005a2724: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 005a2729: ADD ESP,0xc
// 005a272c: MOV dword ptr [EBX + 0xbee4],EAX
// 005a2732: PUSH 0x1
// 005a2734: PUSH 0x64f2a3
//   XREF to: 0064f2a3 (DATA)
// 005a2739: PUSH ESI
// 005a273a: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 005a273f: ADD ESP,0xc
// 005a2742: PUSH 0x1
// 005a2744: PUSH 0x64f2ab
//   XREF to: 0064f2ab (DATA)
// 005a2749: PUSH ESI
// 005a274a: MOV dword ptr [EBX + 0xbee8],EAX
// 005a2750: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 005a2755: MOV dword ptr [EBX + 0xbef0],0x0
// 005a275f: ADD ESP,0xc
// 005a2762: MOV dword ptr [EBX + 0xbeec],EAX
// 005a2768: PUSH 0x64f2b2
//   XREF to: 0064f2b2 (DATA)
// 005a276d: LEA EAX,[EBX + 0x23b8]
// 005a2773: MOV dword ptr [EBX + 0xbef4],0x0
// 005a277d: PUSH EAX
// 005a277e: MOV dword ptr [EBX + 0xbefc],0x1
// 005a2788: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005a278d: ADD ESP,0x8
// 005a2790: TEST EAX,EAX
// 005a2792: JNZ 0x005a279e
//   XREF to: 005a279e (CONDITIONAL_JUMP)
// 005a2794: MOV dword ptr [EBX + 0xbefc],0x2
// 005a279e: PUSH 0x64f2be
//   Label: LAB_005a279e
//   XREF to: 0064f2be (DATA)
// 005a27a3: LEA EAX,[EBX + 0x23b8]
// 005a27a9: PUSH EAX
// 005a27aa: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005a27af: ADD ESP,0x8
// 005a27b2: TEST EAX,EAX
// 005a27b4: JZ 0x005a27bb
//   XREF to: 005a27bb (CONDITIONAL_JUMP)
// 005a27b6: POP EBP
// 005a27b7: POP EDI
// 005a27b8: POP ESI
// 005a27b9: POP EBX
// 005a27ba: RET
// 005a27bb: MOV dword ptr [EBX + 0xbefc],0x3
//   Label: LAB_005a27bb
// 005a27c5: MOV dword ptr [EBX + 0x2624],EAX
// 005a27cb: POP EBP
// 005a27cc: POP EDI
// 005a27cd: POP ESI
// 005a27ce: POP EBX
// 005a27cf: RET
