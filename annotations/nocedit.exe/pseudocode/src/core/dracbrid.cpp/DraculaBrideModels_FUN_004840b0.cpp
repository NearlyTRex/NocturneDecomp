// Name: core_dracbrid.cpp_DraculaBrideModels_FUN_004840b0
// Address: 004840b0
// Address Range: [[004840b0, 004842f2] [00484329, 00484390]]
// Convention: unknown
// Signature: undefined core_dracbrid.cpp_DraculaBrideModels_FUN_004840b0()
// Globals:
//   TerminatedCString s_nbride2_dfm_00621875
//   TerminatedCString s_nbride2x_dfm_00621881
//   TerminatedCString s_nbride3_dfm_0062188e
//   TerminatedCString s_nbride3x_dfm_0062189a
//   TerminatedCString s_nbride4_dfm_006218a7
//   TerminatedCString s_nbride4x_dfm_006218b3
//   TerminatedCString s_nbride2x_dfm_006218c0
//   TerminatedCString s_nbride2_dfm_006218cd
//   TerminatedCString s_nbride3x_dfm_006218d9
//   TerminatedCString s_nbride3_dfm_006218e6
//   TerminatedCString s_nbride4x_dfm_006218f2
//   TerminatedCString s_nbride4_dfm_006218ff
//   TerminatedCString s_Bip01_Head_0062190b
//   TerminatedCString s_Bip01_L_Hand_00621916
//   TerminatedCString s_Bip01_R_Hand_00621923
//   TerminatedCString s_Bip01_L_UpperArm_00621930
//   TerminatedCString s_Bip01_R_UpperArm_00621941
//   TerminatedCString s_Bip01_Spine_00621952
//   TerminatedCString s_Bip01_Spine1_0062195e
//   TerminatedCString s_Bip01_Spine2_0062196b
//   TerminatedCString s_larm01_00621978
//   TerminatedCString s_l4arm01_0062197f
//   TerminatedCString s_rarm01_00621987
//   TerminatedCString s_r4arm01_0062198e
//   TerminatedCString s_lshin01_00621996
//   TerminatedCString s_rshin01_0062199e
//   TerminatedCString s_torso01_006219a6
//   TerminatedCString s_waist01_006219ae
//   TerminatedCString s_head01_006219b6
//   CGame* g_CGamePtr = 02d81a9c
//   undefined4 DAT_02c6d0a0
//   undefined4 DAT_02c6d0a4
//   undefined4 DAT_02c6d0a8
//   undefined4 DAT_02c6d0ac
//   undefined4 DAT_02c6d0b0
//   undefined4 DAT_02c6d0b4
//   undefined4 DAT_02c6d0b8
//   undefined4 DAT_02c6d0bc
//   undefined4 g_CGameInstance.nudity_flag
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_enemy.cpp_CEnemy_FUN_004a9650
//   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_draculabride.cpp_DraculaBrideModels(undefined4 param_1) */

void core_dracbrid_cpp_DraculaBrideModels_FUN_004840b0(void)

{
  char *str1;
  CDeformableModelInstance *pCVar1;
  CCharacter *pCVar2;
  int iVar3;
  CSkeleton *this_ptr;
  CDeformableModel *this_ptr_00;
  float fVar4;
  CEnemy *in_stack_00000004;
  
  str1 = (in_stack_00000004->base_character).model.field11_0x2260;
  pCVar1 = &(in_stack_00000004->base_character).model;
  if (g_CGamePtr->nudity_flag == 0) {
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0(str1,"nbride2.dfm");
    if (iVar3 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840(pCVar1);
    }
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0(str1,"nbride3.dfm");
    if (iVar3 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840
                (&(in_stack_00000004->base_character).model);
    }
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0(str1,"nbride4.dfm");
  }
  else {
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0(str1,"nbride2x.dfm");
    if (iVar3 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840(pCVar1);
    }
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0(str1,"nbride3x.dfm");
    if (iVar3 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840
                (&(in_stack_00000004->base_character).model);
    }
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0(str1,"nbride4x.dfm");
  }
  if (iVar3 == 0) {
    core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840
              (&(in_stack_00000004->base_character).model);
  }
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000004);
  pCVar1 = &(in_stack_00000004->base_character).model;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0820(pCVar1);
  DAT_02c6d0a0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 Head");
  _DAT_02c6d0a4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Hand");
  DAT_02c6d0a8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Hand")
  ;
  _DAT_02c6d0ac =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L UpperArm");
  _DAT_02c6d0b0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R UpperArm");
  DAT_02c6d0b4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 Spine");
  _DAT_02c6d0b8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 Spine1");
  DAT_02c6d0bc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 Spine2")
  ;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(pCVar1);
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_00,"larm01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 8) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_00,"l4arm01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_00,"rarm01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_00,"r4arm01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x14) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_00,"lshin01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x18) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_00,"rshin01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x1c) = iVar3;
  fVar4 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_00,"torso01",1);
  in_stack_00000004[1].base_character.base_actor.location.position.x = fVar4;
  fVar4 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_00,"waist01",1);
  in_stack_00000004[1].base_character.base_actor.location.position.y = fVar4;
  fVar4 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_00,"head01",1);
  in_stack_00000004[1].base_character.base_actor.location.position.z = fVar4;
  pCVar2 = &in_stack_00000004[1].base_character;
  (pCVar2->base_actor).create_event[0x38] = '\0';
  (pCVar2->base_actor).create_event[0x39] = '\0';
  (pCVar2->base_actor).create_event[0x3a] = '\0';
  (pCVar2->base_actor).create_event[0x3b] = '\0';
  fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
  *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x24) = fVar4;
  fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,20.0);
  *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x28) = fVar4;
  return;
}


// Assembly code:
// 004840b0: PUSH EBX
//   Label: core_dracbrid.cpp_DraculaBrideModels_FUN_004840b0
// 004840b1: SUB ESP,0x4
// 004840b4: MOV EBX,dword ptr [ESP + 0xc]
// 004840b8: PUSH EDI
// 004840b9: PUSH ESI
// 004840ba: MOV EDI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 004840c0: LEA EAX,[EBX + 0x23b8]
// 004840c6: MOV EDX,dword ptr [EDI + 0x18]
//   XREF to: 02d81ab4 (READ)
// 004840c9: LEA ESI,[EBX + 0x158]
// 004840cf: TEST EDX,EDX
// 004840d1: JZ 0x00484329
//   XREF to: 00484329 (CONDITIONAL_JUMP)
// 004840d7: PUSH 0x6218c0
//   XREF to: 006218c0 (DATA)
// 004840dc: PUSH EAX
// 004840dd: MOV EDI,EAX
// 004840df: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004840e4: ADD ESP,0x8
// 004840e7: TEST EAX,EAX
// 004840e9: JNZ 0x004840f9
//   XREF to: 004840f9 (CONDITIONAL_JUMP)
// 004840eb: PUSH 0x6218cd
//   XREF to: 006218cd (DATA)
// 004840f0: PUSH ESI
// 004840f1: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 004840f6: ADD ESP,0x8
// 004840f9: PUSH 0x6218d9
//   Label: LAB_004840f9
//   XREF to: 006218d9 (DATA)
// 004840fe: PUSH EDI
// 004840ff: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00484104: ADD ESP,0x8
// 00484107: TEST EAX,EAX
// 00484109: JNZ 0x0048411f
//   XREF to: 0048411f (CONDITIONAL_JUMP)
// 0048410b: PUSH 0x6218e6
//   XREF to: 006218e6 (DATA)
// 00484110: LEA EAX,[EBX + 0x158]
// 00484116: PUSH EAX
// 00484117: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 0048411c: ADD ESP,0x8
// 0048411f: PUSH 0x6218f2
//   Label: LAB_0048411f
//   XREF to: 006218f2 (DATA)
// 00484124: PUSH EDI
// 00484125: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0048412a: ADD ESP,0x8
// 0048412d: TEST EAX,EAX
// 0048412f: JNZ 0x00484145
//   XREF to: 00484145 (CONDITIONAL_JUMP)
// 00484131: PUSH 0x6218ff
//   XREF to: 006218ff (DATA)
// 00484136: LEA EAX,[EBX + 0x158]
//   Label: LAB_00484136
// 0048413c: PUSH EAX
// 0048413d: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 00484142: ADD ESP,0x8
// 00484145: PUSH EBX
//   Label: LAB_00484145
// 00484146: CALL core_enemy.cpp_CEnemy_FUN_004a9650
//   XREF to: 004a9650 (UNCONDITIONAL_CALL)
// 0048414b: ADD ESP,0x4
// 0048414e: LEA EDI,[EBX + 0x158]
// 00484154: PUSH EDI
// 00484155: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0048415a: ADD ESP,0x4
// 0048415d: PUSH 0x1
// 0048415f: PUSH 0x62190b
//   XREF to: 0062190b (DATA)
// 00484164: PUSH EAX
// 00484165: MOV ESI,EAX
// 00484167: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0048416c: ADD ESP,0xc
// 0048416f: PUSH 0x1
// 00484171: PUSH 0x621916
//   XREF to: 00621916 (DATA)
// 00484176: PUSH ESI
// 00484177: MOV [0x02c6d0a0],EAX
//   XREF to: 02c6d0a0 (WRITE)
// 0048417c: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00484181: ADD ESP,0xc
// 00484184: PUSH 0x1
// 00484186: PUSH 0x621923
//   XREF to: 00621923 (DATA)
// 0048418b: PUSH ESI
// 0048418c: MOV [0x02c6d0a4],EAX
//   XREF to: 02c6d0a4 (WRITE)
// 00484191: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00484196: ADD ESP,0xc
// 00484199: PUSH 0x1
// 0048419b: PUSH 0x621930
//   XREF to: 00621930 (DATA)
// 004841a0: PUSH ESI
// 004841a1: MOV [0x02c6d0a8],EAX
//   XREF to: 02c6d0a8 (WRITE)
// 004841a6: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004841ab: ADD ESP,0xc
// 004841ae: PUSH 0x1
// 004841b0: PUSH 0x621941
//   XREF to: 00621941 (DATA)
// 004841b5: PUSH ESI
// 004841b6: MOV [0x02c6d0ac],EAX
//   XREF to: 02c6d0ac (WRITE)
// 004841bb: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004841c0: ADD ESP,0xc
// 004841c3: PUSH 0x1
// 004841c5: PUSH 0x621952
//   XREF to: 00621952 (DATA)
// 004841ca: PUSH ESI
// 004841cb: MOV [0x02c6d0b0],EAX
//   XREF to: 02c6d0b0 (WRITE)
// 004841d0: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004841d5: ADD ESP,0xc
// 004841d8: PUSH 0x1
// 004841da: PUSH 0x62195e
//   XREF to: 0062195e (DATA)
// 004841df: PUSH ESI
// 004841e0: MOV [0x02c6d0b4],EAX
//   XREF to: 02c6d0b4 (WRITE)
// 004841e5: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004841ea: ADD ESP,0xc
// 004841ed: PUSH 0x1
// 004841ef: PUSH 0x62196b
//   XREF to: 0062196b (DATA)
// 004841f4: PUSH ESI
// 004841f5: MOV [0x02c6d0b8],EAX
//   XREF to: 02c6d0b8 (WRITE)
// 004841fa: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004841ff: ADD ESP,0xc
// 00484202: PUSH EDI
// 00484203: MOV [0x02c6d0bc],EAX
//   XREF to: 02c6d0bc (WRITE)
// 00484208: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 0048420d: MOV ESI,EAX
// 0048420f: ADD ESP,0x4
// 00484212: PUSH 0x1
// 00484214: PUSH 0x621978
//   XREF to: 00621978 (DATA)
// 00484219: PUSH EAX
// 0048421a: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 0048421f: ADD ESP,0xc
// 00484222: PUSH 0x1
// 00484224: PUSH 0x62197f
//   XREF to: 0062197f (DATA)
// 00484229: PUSH ESI
// 0048422a: MOV dword ptr [EBX + 0xbebc],EAX
// 00484230: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 00484235: ADD ESP,0xc
// 00484238: PUSH 0x1
// 0048423a: PUSH 0x621987
//   XREF to: 00621987 (DATA)
// 0048423f: PUSH ESI
// 00484240: MOV dword ptr [EBX + 0xbec0],EAX
// 00484246: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 0048424b: ADD ESP,0xc
// 0048424e: PUSH 0x1
// 00484250: PUSH 0x62198e
//   XREF to: 0062198e (DATA)
// 00484255: PUSH ESI
// 00484256: MOV dword ptr [EBX + 0xbec4],EAX
// 0048425c: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 00484261: ADD ESP,0xc
// 00484264: PUSH 0x1
// 00484266: PUSH 0x621996
//   XREF to: 00621996 (DATA)
// 0048426b: PUSH ESI
// 0048426c: MOV dword ptr [EBX + 0xbec8],EAX
// 00484272: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 00484277: ADD ESP,0xc
// 0048427a: PUSH 0x1
// 0048427c: PUSH 0x62199e
//   XREF to: 0062199e (DATA)
// 00484281: PUSH ESI
// 00484282: MOV dword ptr [EBX + 0xbecc],EAX
// 00484288: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 0048428d: ADD ESP,0xc
// 00484290: PUSH 0x1
// 00484292: PUSH 0x6219a6
//   XREF to: 006219a6 (DATA)
// 00484297: PUSH ESI
// 00484298: MOV dword ptr [EBX + 0xbed0],EAX
// 0048429e: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004842a3: ADD ESP,0xc
// 004842a6: PUSH 0x1
// 004842a8: PUSH 0x6219ae
//   XREF to: 006219ae (DATA)
// 004842ad: PUSH ESI
// 004842ae: MOV dword ptr [EBX + 0xbed4],EAX
// 004842b4: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004842b9: ADD ESP,0xc
// 004842bc: PUSH 0x1
// 004842be: PUSH 0x6219b6
//   XREF to: 006219b6 (DATA)
// 004842c3: PUSH ESI
// 004842c4: MOV dword ptr [EBX + 0xbed8],EAX
// 004842ca: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004842cf: ADD ESP,0xc
// 004842d2: MOV dword ptr [EBX + 0xbedc],EAX
// 004842d8: POP ESI
// 004842d9: POP EDI
// 004842da: PUSH 0x41200000
// 004842df: PUSH 0x40a00000
// 004842e4: MOV dword ptr [EBX + 0xbf64],0x0
// 004842ee: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 00484329: PUSH 0x621875
//   Label: LAB_00484329
//   XREF to: 00621875 (DATA)
// 0048432e: PUSH EAX
// 0048432f: MOV EDI,EAX
// 00484331: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00484336: ADD ESP,0x8
// 00484339: TEST EAX,EAX
// 0048433b: JNZ 0x0048434b
//   XREF to: 0048434b (CONDITIONAL_JUMP)
// 0048433d: PUSH 0x621881
//   XREF to: 00621881 (DATA)
// 00484342: PUSH ESI
// 00484343: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 00484348: ADD ESP,0x8
// 0048434b: PUSH 0x62188e
//   Label: LAB_0048434b
//   XREF to: 0062188e (DATA)
// 00484350: PUSH EDI
// 00484351: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00484356: ADD ESP,0x8
// 00484359: TEST EAX,EAX
// 0048435b: JNZ 0x00484371
//   XREF to: 00484371 (CONDITIONAL_JUMP)
// 0048435d: PUSH 0x62189a
//   XREF to: 0062189a (DATA)
// 00484362: LEA EAX,[EBX + 0x158]
// 00484368: PUSH EAX
// 00484369: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 0048436e: ADD ESP,0x8
// 00484371: PUSH 0x6218a7
//   Label: LAB_00484371
//   XREF to: 006218a7 (DATA)
// 00484376: PUSH EDI
// 00484377: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0048437c: ADD ESP,0x8
// 0048437f: TEST EAX,EAX
// 00484381: JNZ 0x00484145
//   XREF to: 00484145 (CONDITIONAL_JUMP)
// 00484387: PUSH 0x6218b3
//   XREF to: 006218b3 (DATA)
// 0048438c: JMP 0x00484136
//   XREF to: 00484136 (UNCONDITIONAL_JUMP)
