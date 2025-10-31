// Name: core_zombie.cpp_CZombie_FUN_005f9140
// Address: 005f9140
// Address Range: [[005f9140, 005f93b1]]
// Convention: __cdecl
// Signature: void core_zombie.cpp_CZombie_FUN_005f9140(CZombie * this_ptr)
// Globals:
//   TerminatedCString s_Bip01_Head_006584a2
//   TerminatedCString s_Bip01_L_ForeArm_006584ad
//   TerminatedCString s_Bip01_R_ForeArm_006584bd
//   TerminatedCString s_Bip01_L_UpperArm_006584cd
//   TerminatedCString s_Bip01_R_UpperArm_006584de
//   TerminatedCString s_Bip01_L_Foot_006584ef
//   TerminatedCString s_Bip01_R_Foot_006584fc
//   TerminatedCString s_Bip01_L_Hand_00658509
//   TerminatedCString s_Bip01_R_Hand_00658516
//   TerminatedCString s_Bip01_Spine_00658523
//   TerminatedCString s_Bip01_Spine2_0065852f
//   TerminatedCString s_larm01_0065853c
//   TerminatedCString s_l4arm01_00658543
//   TerminatedCString s_rarm01_0065854b
//   TerminatedCString s_r4arm01_00658552
//   TerminatedCString s_waist01_0065855a
//   TerminatedCString s_torso01_00658562
//   TerminatedCString s_head01_0065856a
//   TerminatedCString s_newzomb1_dfm_00658571
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_enemy.cpp_CEnemy_FUN_004a9650
//   core_skeleton.cpp_CDeformableModel_FindPartInModel_FUN_0059c240
//   core_skeleton.cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_zombie_cpp_CZombie_FUN_005f9140(CZombie *this_ptr)

{
  char *str1;
  CCharacter *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  char *pcStack00000008;
  char *pcStack0000000c;
  char *pcStack00000010;
  char *pcStack00000014;
  undefined4 uStack00000018;
  char *pcStack0000001c;
  char *pcStack00000020;
  char *pcStack00000024;
  char *pcStack00000028;
  char *pcStack0000002c;
  char *pcStack00000030;
  char *pcStack00000034;
  
  core_skeleton_cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450();
  uVar2 = core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820();
  uVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  *(undefined4 *)(this_ptr->field4_0xbf48 + 4) = uVar3;
  uVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  *(undefined4 *)(this_ptr->field4_0xbf48 + 0x10) = uVar3;
  uVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  *(undefined4 *)(this_ptr->field4_0xbf48 + 0x14) = uVar3;
  uVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  *(undefined4 *)(this_ptr->field4_0xbf48 + 0x18) = uVar3;
  uVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  *(undefined4 *)(this_ptr->field4_0xbf48 + 0x1c) = uVar3;
  uVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  pcStack00000008 = (char *)0x1;
  *(undefined4 *)(this_ptr->field4_0xbf48 + 0x20) = uVar3;
  uVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  pcStack0000000c = (char *)0x1;
  pcStack00000008 = "Bip01 L Hand";
  *(undefined4 *)(this_ptr->field4_0xbf48 + 0x24) = uVar3;
  uVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  *(undefined4 *)(this_ptr->field4_0xbf48 + 8) = uVar3;
  pcStack00000010 = (char *)0x1;
  pcStack0000000c = "Bip01 R Hand";
  pcStack00000008 = (char *)uVar2;
  uVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  pcStack00000014 = (char *)0x1;
  pcStack00000010 = "Bip01 Spine";
  *(undefined4 *)(this_ptr->field4_0xbf48 + 0xc) = uVar3;
  pcStack00000008 = (char *)0x5f9239;
  pcStack0000000c = (char *)uVar2;
  uVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  uStack00000018 = 1;
  pcStack00000014 = "Bip01 Spine2";
  *(undefined4 *)(this_ptr->field4_0xbf48 + 0x28) = uVar3;
  pcStack0000000c = (char *)0x5f924f;
  pcStack00000010 = (char *)uVar2;
  uVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  *(undefined4 *)(this_ptr->field4_0xbf48 + 0x2c) = uVar2;
  uStack00000018 = 0x5f925e;
  pcStack0000001c = (this_ptr->base_enemy).base_character.model.padding_0x0;
  uVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0();
  pcStack00000020 = (char *)0x1;
  pcStack0000001c = "larm01";
  pcStack00000014 = (char *)0x5f9272;
  uStack00000018 = uVar2;
  uVar3 = core_skeleton_cpp_CDeformableModel_FindPartInModel_FUN_0059c240();
  pcStack00000024 = (char *)0x1;
  pcStack00000020 = "l4arm01";
  *(undefined4 *)(this_ptr->field4_0xbf48 + 0x30) = uVar3;
  uStack00000018 = 0x5f9288;
  pcStack0000001c = (char *)uVar2;
  uVar3 = core_skeleton_cpp_CDeformableModel_FindPartInModel_FUN_0059c240();
  pcStack00000028 = (char *)0x1;
  pcStack00000024 = "rarm01";
  *(undefined4 *)(this_ptr->field4_0xbf48 + 0x34) = uVar3;
  pcStack0000001c = (char *)0x5f929e;
  pcStack00000020 = (char *)uVar2;
  uVar3 = core_skeleton_cpp_CDeformableModel_FindPartInModel_FUN_0059c240();
  pcStack0000002c = (char *)0x0;
  pcStack00000028 = "r4arm01";
  *(undefined4 *)(this_ptr->field4_0xbf48 + 0x38) = uVar3;
  pcStack00000020 = (char *)0x5f92b4;
  pcStack00000024 = (char *)uVar2;
  iVar4 = core_skeleton_cpp_CDeformableModel_FindPartInModel_FUN_0059c240();
  *(int *)(this_ptr->field4_0xbf48 + 0x3c) = iVar4;
  if (iVar4 < 0) {
    this_ptr->field4_0xbf48[0x3c] = '\x1d';
    this_ptr->field4_0xbf48[0x3d] = '\0';
    this_ptr->field4_0xbf48[0x3e] = '\0';
    this_ptr->field4_0xbf48[0x3f] = '\0';
  }
  pcStack00000030 = (char *)0x0;
  pcStack0000002c = "waist01";
  pcStack00000024 = (char *)0x5f92d8;
  pcStack00000028 = (char *)uVar2;
  uVar3 = core_skeleton_cpp_CDeformableModel_FindPartInModel_FUN_0059c240();
  pcStack00000034 = (char *)0x1;
  pcStack00000030 = "torso01";
  *(undefined4 *)(this_ptr->field4_0xbf48 + 0x40) = uVar3;
  pcStack00000028 = (char *)0x5f92ee;
  pcStack0000002c = (char *)uVar2;
  uVar3 = core_skeleton_cpp_CDeformableModel_FindPartInModel_FUN_0059c240();
  pcStack00000034 = "head01";
  *(undefined4 *)(this_ptr->field4_0xbf48 + 0x44) = uVar3;
  pcStack0000002c = (char *)0x5f9304;
  pcStack00000030 = (char *)uVar2;
  uVar2 = core_skeleton_cpp_CDeformableModel_FindPartInModel_FUN_0059c240();
  *(undefined4 *)(this_ptr->field4_0xbf48 + 0x48) = uVar2;
  pCVar1 = &(this_ptr->base_enemy).base_character;
  (pCVar1->model).padding_0x0[0x21b4] = '\0';
  (pCVar1->model).padding_0x0[0x21b5] = '\0';
  (pCVar1->model).padding_0x0[0x21b6] = '\0';
  (pCVar1->model).padding_0x0[0x21b7] = '\0';
  pcStack00000034 = (char *)0x5f9328;
  iVar4 = crt_string_c_stricmp_FUN_005fe7f0
                    ((this_ptr->base_enemy).base_character.model.padding_0x0 + 0x2260,
                     "newzomb1.dfm");
  if (iVar4 == 0) {
    uVar2 = *(undefined4 *)(this_ptr->field4_0xbf48 + 0x30);
    *(undefined4 *)(this_ptr->field4_0xbf48 + 0x30) =
         *(undefined4 *)(this_ptr->field4_0xbf48 + 0x38);
    *(undefined4 *)(this_ptr->field4_0xbf48 + 0x38) = uVar2;
    uVar2 = *(undefined4 *)(this_ptr->field4_0xbf48 + 0x34);
    *(undefined4 *)(this_ptr->field4_0xbf48 + 0x34) =
         *(undefined4 *)(this_ptr->field4_0xbf48 + 0x3c);
    *(undefined4 *)(this_ptr->field4_0xbf48 + 0x3c) = uVar2;
  }
  *(undefined4 *)(this_ptr->base_enemy).base_character.carry_hands[0].field0_0x0 =
       *(undefined4 *)(this_ptr->field4_0xbf48 + 8);
  *(undefined4 *)((this_ptr->base_enemy).base_character.carry_hands[0].field0_0x0 + 4) =
       *(undefined4 *)(this_ptr->field4_0xbf48 + 0x34);
  *(undefined4 *)(this_ptr->base_enemy).base_character.carry_hands[1].field0_0x0 =
       *(undefined4 *)(this_ptr->field4_0xbf48 + 0xc);
  *(undefined4 *)((this_ptr->base_enemy).base_character.carry_hands[1].field0_0x0 + 4) =
       *(undefined4 *)(this_ptr->field4_0xbf48 + 0x3c);
  core_enemy_cpp_CEnemy_FUN_004a9650(&this_ptr->base_enemy);
  (this_ptr->base_enemy).base_character.base_actor.is_transparent =
       (uint)(this_ptr->is_miner_zombie != 0);
  fVar5 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
  *(float *)(this_ptr->field4_0xbf48 + 0x5c) = fVar5;
  if ((-1 < *(int *)(this_ptr->field4_0xbf48 + 0x40)) &&
     (*(float *)((this_ptr->base_enemy).base_character.cloth_data + 0x358) < 0.0)) {
    *(float *)((this_ptr->base_enemy).base_character.cloth_data + 0x358) =
         *(float *)((this_ptr->base_enemy).base_character.model.padding_0x0 + 0x2248) +
         (float)_DAT_006585a5;
  }
  str1 = (this_ptr->base_enemy).base_character.model.padding_0x0 + 0x2260;
  this_ptr->field4_0xbf48[0x50] = '\0';
  this_ptr->field4_0xbf48[0x51] = '\0';
  this_ptr->field4_0xbf48[0x52] = '\0';
  this_ptr->field4_0xbf48[0x53] = '\0';
  this_ptr->field4_0xbf48[0] = '\0';
  this_ptr->field4_0xbf48[1] = '\0';
  this_ptr->field4_0xbf48[2] = '\0';
  this_ptr->field4_0xbf48[3] = '\0';
  iVar4 = crt_string_c_stricmp_FUN_005fe7f0(str1,"newzchik.dfm");
  if (((iVar4 == 0) ||
      (iVar4 = crt_string_c_stricmp_FUN_005fe7f0(str1,"zombho1.dfm"), iVar4 == 0)) ||
     (iVar4 = crt_string_c_stricmp_FUN_005fe7f0(str1,"zombho2.dfm"), iVar4 == 0)) {
    this_ptr->field4_0xbf48[0] = '\x01';
    this_ptr->field4_0xbf48[1] = '\0';
    this_ptr->field4_0xbf48[2] = '\0';
    this_ptr->field4_0xbf48[3] = '\0';
  }
  this_ptr->field4_0xbf48[0x58] = '\0';
  this_ptr->field4_0xbf48[0x59] = '\0';
  this_ptr->field4_0xbf48[0x5a] = '\0';
  this_ptr->field4_0xbf48[0x5b] = '\0';
  this_ptr->field4_0xbf48[0x54] = '\0';
  this_ptr->field4_0xbf48[0x55] = '\0';
  this_ptr->field4_0xbf48[0x56] = '\0';
  this_ptr->field4_0xbf48[0x57] = '\0';
  return;
}


// Assembly code:
// 005f9140: PUSH EBX
//   Label: core_zombie.cpp_CZombie_FUN_005f9140
// 005f9141: PUSH ESI
// 005f9142: PUSH EDI
// 005f9143: PUSH EBP
// 005f9144: MOV EBP,ESP
// 005f9146: SUB ESP,0x4
// 005f9149: MOV EBX,dword ptr [EBP + 0x14]
// 005f914c: LEA EDI,[EBX + 0x158]
// 005f9152: PUSH EDI
// 005f9153: CALL core_skeleton.cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 005f9158: ADD ESP,0x4
// 005f915b: PUSH EDI
// 005f915c: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 005f9161: ADD ESP,0x4
// 005f9164: PUSH 0x1
// 005f9166: PUSH 0x6584a2
//   XREF to: 006584a2 (DATA)
// 005f916b: PUSH EAX
// 005f916c: MOV ESI,EAX
// 005f916e: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005f9173: ADD ESP,0xc
// 005f9176: PUSH 0x1
// 005f9178: PUSH 0x6584ad
//   XREF to: 006584ad (DATA)
// 005f917d: PUSH ESI
// 005f917e: MOV dword ptr [EBX + 0xbf4c],EAX
// 005f9184: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005f9189: ADD ESP,0xc
// 005f918c: PUSH 0x1
// 005f918e: PUSH 0x6584bd
//   XREF to: 006584bd (DATA)
// 005f9193: PUSH ESI
// 005f9194: MOV dword ptr [EBX + 0xbf58],EAX
// 005f919a: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005f919f: ADD ESP,0xc
// 005f91a2: PUSH 0x1
// 005f91a4: PUSH 0x6584cd
//   XREF to: 006584cd (DATA)
// 005f91a9: PUSH ESI
// 005f91aa: MOV dword ptr [EBX + 0xbf5c],EAX
// 005f91b0: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005f91b5: ADD ESP,0xc
// 005f91b8: PUSH 0x1
// 005f91ba: PUSH 0x6584de
//   XREF to: 006584de (DATA)
// 005f91bf: PUSH ESI
// 005f91c0: MOV dword ptr [EBX + 0xbf60],EAX
// 005f91c6: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005f91cb: ADD ESP,0xc
// 005f91ce: PUSH 0x1
// 005f91d0: PUSH 0x6584ef
//   XREF to: 006584ef (DATA)
// 005f91d5: PUSH ESI
// 005f91d6: MOV dword ptr [EBX + 0xbf64],EAX
// 005f91dc: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005f91e1: ADD ESP,0xc
// 005f91e4: PUSH 0x1
// 005f91e6: PUSH 0x6584fc
//   XREF to: 006584fc (DATA)
// 005f91eb: PUSH ESI
// 005f91ec: MOV dword ptr [EBX + 0xbf68],EAX
// 005f91f2: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005f91f7: ADD ESP,0xc
// 005f91fa: PUSH 0x1
// 005f91fc: PUSH 0x658509
//   XREF to: 00658509 (DATA)
// 005f9201: PUSH ESI
// 005f9202: MOV dword ptr [EBX + 0xbf6c],EAX
// 005f9208: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005f920d: ADD ESP,0xc
// 005f9210: MOV dword ptr [EBX + 0xbf50],EAX
// 005f9216: PUSH 0x1
// 005f9218: PUSH 0x658516
//   XREF to: 00658516 (DATA)
// 005f921d: PUSH ESI
// 005f921e: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005f9223: ADD ESP,0xc
// 005f9226: PUSH 0x1
// 005f9228: PUSH 0x658523
//   XREF to: 00658523 (DATA)
// 005f922d: PUSH ESI
// 005f922e: MOV dword ptr [EBX + 0xbf54],EAX
// 005f9234: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005f9239: ADD ESP,0xc
// 005f923c: PUSH 0x1
// 005f923e: PUSH 0x65852f
//   XREF to: 0065852f (DATA)
// 005f9243: PUSH ESI
// 005f9244: MOV dword ptr [EBX + 0xbf70],EAX
// 005f924a: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005f924f: ADD ESP,0xc
// 005f9252: PUSH EDI
// 005f9253: MOV dword ptr [EBX + 0xbf74],EAX
// 005f9259: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 005f925e: ADD ESP,0x4
// 005f9261: PUSH 0x1
// 005f9263: PUSH 0x65853c
//   XREF to: 0065853c (DATA)
// 005f9268: PUSH EAX
// 005f9269: MOV ESI,EAX
// 005f926b: MOV EDI,EAX
// 005f926d: CALL core_skeleton.cpp_CDeformableModel_FindPartInModel_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 005f9272: ADD ESP,0xc
// 005f9275: PUSH 0x1
// 005f9277: PUSH 0x658543
//   XREF to: 00658543 (DATA)
// 005f927c: PUSH ESI
// 005f927d: MOV dword ptr [EBX + 0xbf78],EAX
// 005f9283: CALL core_skeleton.cpp_CDeformableModel_FindPartInModel_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 005f9288: ADD ESP,0xc
// 005f928b: PUSH 0x1
// 005f928d: PUSH 0x65854b
//   XREF to: 0065854b (DATA)
// 005f9292: PUSH ESI
// 005f9293: MOV dword ptr [EBX + 0xbf7c],EAX
// 005f9299: CALL core_skeleton.cpp_CDeformableModel_FindPartInModel_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 005f929e: ADD ESP,0xc
// 005f92a1: PUSH 0x0
// 005f92a3: PUSH 0x658552
//   XREF to: 00658552 (DATA)
// 005f92a8: PUSH ESI
// 005f92a9: MOV dword ptr [EBX + 0xbf80],EAX
// 005f92af: CALL core_skeleton.cpp_CDeformableModel_FindPartInModel_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 005f92b4: ADD ESP,0xc
// 005f92b7: MOV dword ptr [EBX + 0xbf84],EAX
// 005f92bd: TEST EAX,EAX
// 005f92bf: JGE 0x005f92cb
//   XREF to: 005f92cb (CONDITIONAL_JUMP)
// 005f92c1: MOV dword ptr [EBX + 0xbf84],0x1d
// 005f92cb: PUSH 0x0
//   Label: LAB_005f92cb
// 005f92cd: PUSH 0x65855a
//   XREF to: 0065855a (DATA)
// 005f92d2: PUSH EDI
// 005f92d3: CALL core_skeleton.cpp_CDeformableModel_FindPartInModel_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 005f92d8: ADD ESP,0xc
// 005f92db: PUSH 0x1
// 005f92dd: PUSH 0x658562
//   XREF to: 00658562 (DATA)
// 005f92e2: PUSH EDI
// 005f92e3: MOV dword ptr [EBX + 0xbf88],EAX
// 005f92e9: CALL core_skeleton.cpp_CDeformableModel_FindPartInModel_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 005f92ee: ADD ESP,0xc
// 005f92f1: PUSH 0x1
// 005f92f3: PUSH 0x65856a
//   XREF to: 0065856a (DATA)
// 005f92f8: PUSH EDI
// 005f92f9: MOV dword ptr [EBX + 0xbf8c],EAX
// 005f92ff: CALL core_skeleton.cpp_CDeformableModel_FindPartInModel_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 005f9304: ADD ESP,0xc
// 005f9307: PUSH 0x658571
//   XREF to: 00658571 (DATA)
// 005f930c: MOV dword ptr [EBX + 0xbf90],EAX
// 005f9312: LEA EAX,[EBX + 0x23b8]
// 005f9318: PUSH EAX
// 005f9319: MOV dword ptr [EBX + 0x230c],0x0
// 005f9323: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005f9328: ADD ESP,0x8
// 005f932b: TEST EAX,EAX
// 005f932d: JNZ 0x005f9357
//   XREF to: 005f9357 (CONDITIONAL_JUMP)
// 005f932f: LEA EAX,[EBX + 0xbf78]
// 005f9335: LEA ESI,[EBX + 0xbf80]
// 005f933b: MOV EDX,dword ptr [ESI]
// 005f933d: MOV EDI,dword ptr [EAX]
// 005f933f: MOV dword ptr [EAX],EDX
// 005f9341: LEA EAX,[EBX + 0xbf7c]
// 005f9347: MOV dword ptr [ESI],EDI
// 005f9349: LEA ESI,[EBX + 0xbf84]
// 005f934f: MOV EDI,dword ptr [ESI]
// 005f9351: MOV EDX,dword ptr [EAX]
// 005f9353: MOV dword ptr [EAX],EDI
// 005f9355: MOV dword ptr [ESI],EDX
// 005f9357: MOV EAX,dword ptr [EBX + 0xbf50]
//   Label: LAB_005f9357
// 005f935d: MOV dword ptr [EBX + 0x24ac],EAX
// 005f9363: MOV EAX,dword ptr [EBX + 0xbf7c]
// 005f9369: MOV dword ptr [EBX + 0x24b0],EAX
// 005f936f: MOV EAX,dword ptr [EBX + 0xbf54]
// 005f9375: MOV dword ptr [EBX + 0x24f0],EAX
// 005f937b: MOV EAX,dword ptr [EBX + 0xbf84]
// 005f9381: PUSH EBX
// 005f9382: MOV dword ptr [EBX + 0x24f4],EAX
// 005f9388: CALL core_enemy.cpp_CEnemy_FUN_004a9650
//   XREF to: 004a9650 (UNCONDITIONAL_CALL)
// 005f938d: MOV ECX,dword ptr [EBX + 0xbf40]
// 005f9393: ADD ESP,0x4
// 005f9396: TEST ECX,ECX
// 005f9398: SETNZ AL
// 005f939b: PUSH 0x3f800000
// 005f93a0: AND EAX,0xff
// 005f93a5: PUSH 0x0
// 005f93a7: MOV dword ptr [EBX + 0xfc],EAX
// 005f93ad: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
