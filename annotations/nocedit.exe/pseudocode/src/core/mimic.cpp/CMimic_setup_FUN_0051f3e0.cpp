// Name: core_mimic.cpp_CMimic_setup_FUN_0051f3e0
// Address: 0051f3e0
// Address Range: [[0051f3e0, 0051f77b]]
// Convention: unknown
// Signature: undefined core_mimic.cpp_CMimic_setup_FUN_0051f3e0()
// Globals:
//   TerminatedCString s_core_mimic_cpp_0063856d
//   TerminatedCString s_CMimic_setup_can_t_use_m_0063857f
//   TerminatedCString s_stranger_dfm_006385b0
//   TerminatedCString s_Bip01_head_006385bd
//   TerminatedCString s_Bip01_L_Clavicle_006385c8
//   TerminatedCString s_Bip01_R_Clavicle_006385d9
//   TerminatedCString s_Bip01_L_UpperArm_006385ea
//   TerminatedCString s_Bip01_R_UpperArm_006385fb
//   TerminatedCString s_Bip01_L_ForeArm_0063860c
//   TerminatedCString s_Bip01_R_ForeArm_0063861c
//   TerminatedCString s_Bip01_L_Foot_0063862c
//   TerminatedCString s_Bip01_R_Foot_00638639
//   TerminatedCString s_Bip01_L_Thigh_00638646
//   TerminatedCString s_Bip01_R_Thigh_00638654
//   TerminatedCString s_Bip01_L_Calf_00638662
//   TerminatedCString s_Bip01_R_Calf_0063866f
//   TerminatedCString s_Bip01_L_Hand_0063867c
//   TerminatedCString s_Bip01_R_Hand_00638689
//   TerminatedCString s_Bip01_Spine2_00638696
//   TerminatedCString s_Bip01_Spine_006386a3
//   TerminatedCString s_strcoat_cth_006386af
//   TerminatedCString s_core_mimic_cpp_006386bb
//   TerminatedCString s_CMimic_failed_to_create__006386cd
//   CNetGame* g_CNetGameInstance = 02f7c740
//   undefined4 g_CEnemyClassInfo.name_hash
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_02f33378
//   undefined4 DAT_02f3337c
//   undefined4 DAT_02f33380
//   undefined4 DAT_02f33384
//   undefined4 DAT_02f33388
//   undefined4 DAT_02f3338c
//   undefined4 DAT_02f33390
//   undefined4 DAT_02f33394
//   undefined4 DAT_02f33398
//   undefined4 DAT_02f3339c
//   undefined4 DAT_02f333a0
//   undefined4 DAT_02f333a4
//   undefined4 DAT_02f333a8
//   undefined4 DAT_02f333b8
//   undefined4 DAT_02f333bc
//   undefined4 DAT_02f333c0
//   undefined4 DAT_02f333c4
//   undefined4 DAT_02f7c740
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_createActorByName_FUN_0040c430
//   core_cloth.cpp_CCloth_load_FUN_00438cf0
//   core_cloth.cpp_FUN_00439710
//   core_enemy.cpp_CEnemy_FUN_004a9650
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_morph.cpp_CMorph_getReady_FUN_0052b680
//   core_morph.cpp_FUN_0052b430
//   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_mimic.cpp_CMimic_setup(CMimic* param_1) */

void core_mimic_cpp_CMimic_setup_FUN_0051f3e0(void)

{
  CDeformableModelInstance *pCVar1;
  undefined4 *puVar2;
  int iVar3;
  CSkeleton *this_ptr;
  CDemonActor *pCVar4;
  int iVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar7;
  byte bVar8;
  CEnemy *in_stack_00000004;
  undefined4 auStackY_1010 [1015];
  uint class_name_hash;
  undefined4 uStack_28;
  undefined4 uStack_1c;
  
  bVar8 = 0;
  if (g_CNetGameInstance->connection_type != 0) {
    g_CurrentFilename = "..\\core\\mimic.cpp";
    g_CurrentLineNumber = 0xb6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMimic::setup - can't use mimic in multi-player!");
  }
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840
            (&(in_stack_00000004->base_character).model);
  pCVar1 = &(in_stack_00000004->base_character).model;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0450(pCVar1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar1);
  DAT_02f33378 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 head");
  _DAT_02f3337c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Clavicle");
  _DAT_02f33380 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Clavicle");
  _DAT_02f33384 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L UpperArm");
  _DAT_02f33388 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R UpperArm");
  _DAT_02f3338c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L ForeArm");
  _DAT_02f33390 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R ForeArm");
  DAT_02f33394 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Foot")
  ;
  DAT_02f33398 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Foot")
  ;
  _DAT_02f3339c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Thigh");
  _DAT_02f333a0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Thigh");
  _DAT_02f333a4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Calf");
  _DAT_02f333a8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Calf");
  _DAT_02f333b8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Hand");
  _DAT_02f333bc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Hand");
  _DAT_02f333c0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 Spine2");
  _DAT_02f333c4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 Spine")
  ;
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000004);
  core_cloth_cpp_CCloth_load_FUN_00438cf0
            ((CCloth *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x58),
             "strcoat.cth");
  core_cloth_cpp_FUN_00439710();
  class_name_hash = g_CEnemyClassInfo.name_hash;
  pCVar4 = core_actor_cpp_createActorByName_FUN_0040c430
                     (in_stack_00000004[6].base_character.cloth_data + 0x1b2c);
  pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar4,class_name_hash);
  *(CDemonActor **)(in_stack_00000004[6].base_character.cloth_data + 0x2784) = pCVar4;
  if (pCVar4 == (CDemonActor *)0x0) {
    g_CurrentFilename = "..\\core\\mimic.cpp";
    g_CurrentLineNumber = 0x101;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMimic failed to create morph target actor!");
  }
  (*(code *)**(undefined4 **)
              (*(int *)(in_stack_00000004[6].base_character.cloth_data + 0x2784) + 0x154))();
  pCVar1 = &(in_stack_00000004->base_character).model;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(pCVar1);
  core_morph_cpp_FUN_0052b430();
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(pCVar1);
  iVar6 = 0;
  if (0 < *(int *)(in_stack_00000004[6].base_character.cloth_data + 0x1ba8)) {
    iVar5 = 0;
    do {
      iVar3 = *(int *)(in_stack_00000004[6].base_character.cloth_data + 0x1bac);
      iVar6 = iVar6 + 1;
      *(float *)(iVar3 + 4 + iVar5) = -*(float *)(iVar3 + 4 + iVar5);
      iVar5 = iVar5 + 0x10;
    } while (iVar6 < *(int *)(in_stack_00000004[6].base_character.cloth_data + 0x1ba8));
  }
  iVar6 = 0;
  if (0 < *(int *)(in_stack_00000004[6].base_character.cloth_data + 0x1bb0)) {
    iVar5 = 0;
    do {
      iVar3 = *(int *)(in_stack_00000004[6].base_character.cloth_data + 0x1bb4);
      puVar2 = (undefined4 *)(iVar5 + 0x30 + iVar3);
      puVar7 = puVar2 + (uint)bVar8 * -2 + 1;
      uStack_1c = *puVar2;
      *(undefined4 *)(&stack0xffffffe8 + (uint)bVar8 * -8) = *puVar7;
      *(undefined4 *)(&stack0xffffffec + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
           puVar7[(uint)bVar8 * -2 + 1];
      puVar2 = (undefined4 *)(iVar5 + 0x18 + iVar3);
      puVar7 = puVar2 + (uint)bVar8 * -2 + 1;
      uStack_28 = *puVar2;
      *(undefined4 *)(&stack0xffffffdc + (uint)bVar8 * -8) = *puVar7;
      *(undefined4 *)(&stack0xffffffe0 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
           puVar7[(uint)bVar8 * -2 + 1];
      puVar2 = (undefined4 *)(iVar5 + 0x18 + iVar3);
      puVar7 = puVar2 + (uint)bVar8 * -2 + 1;
      *puVar2 = uStack_1c;
      *puVar7 = *(undefined4 *)(&stack0xffffffe8 + (uint)bVar8 * -8);
      puVar7[(uint)bVar8 * -2 + 1] =
           *(undefined4 *)(&stack0xffffffec + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      puVar2 = (undefined4 *)(iVar5 + 0x30 + iVar3);
      puVar7 = puVar2 + (uint)bVar8 * -2 + 1;
      *puVar2 = uStack_28;
      *puVar7 = *(undefined4 *)(&stack0xffffffdc + (uint)bVar8 * -8);
      puVar7[(uint)bVar8 * -2 + 1] =
           *(undefined4 *)(&stack0xffffffe0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x3c;
    } while (iVar6 < *(int *)(in_stack_00000004[6].base_character.cloth_data + 0x1bb0));
  }
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
            ((CDeformableModelInstance *)
             (*(int *)(in_stack_00000004[6].base_character.cloth_data + 0x2784) + 0x158));
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
            ((CDeformableModelInstance *)
             (*(int *)(in_stack_00000004[6].base_character.cloth_data + 0x2784) + 0x158));
  core_morph_cpp_FUN_0052b430();
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
            ((CDeformableModelInstance *)
             (*(int *)(in_stack_00000004[6].base_character.cloth_data + 0x2784) + 0x158));
  core_morph_cpp_CMorph_getReady_FUN_0052b680
            ((CMorph *)(in_stack_00000004[6].base_character.cloth_data + 0x1b54));
  return;
}


// Assembly code:
// 0051f3e0: PUSH EBX
//   Label: core_mimic.cpp_CMimic_setup_FUN_0051f3e0
// 0051f3e1: PUSH ESI
// 0051f3e2: PUSH EDI
// 0051f3e3: PUSH EBP
// 0051f3e4: SUB ESP,0x18
// 0051f3e7: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0051f3eb: MOV EAX,[0x00680a00]
//   XREF to: 02f7c740 (PARAM)
//   XREF to: 00680a00 (READ)
// 0051f3f0: CMP dword ptr [EAX],0x0
//   XREF to: 02f7c740 (READ)
// 0051f3f3: JNZ 0x0051f74a
//   XREF to: 0051f74a (CONDITIONAL_JUMP)
// 0051f3f9: MOV EAX,[0x02db87d0]
//   Label: LAB_0051f3f9
//   XREF to: 02db87d0 (READ)
// 0051f3fe: SHL EAX,0x2
// 0051f401: MOV EDI,dword ptr [EAX + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0051f407: LEA EDX,[EBX + 0x158]
// 0051f40d: TEST EDI,EDI
// 0051f40f: JZ 0x0051f772
//   XREF to: 0051f772 (CONDITIONAL_JUMP)
// 0051f415: LEA EAX,[EDI + 0x23b8]
// 0051f41b: PUSH EAX
// 0051f41c: PUSH EDX
//   Label: LAB_0051f41c
// 0051f41d: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 0051f422: ADD ESP,0x8
// 0051f425: LEA EDI,[EBX + 0x158]
// 0051f42b: PUSH EDI
// 0051f42c: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 0051f431: ADD ESP,0x4
// 0051f434: PUSH EDI
// 0051f435: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0051f43a: ADD ESP,0x4
// 0051f43d: PUSH 0x1
// 0051f43f: PUSH 0x6385bd
//   XREF to: 006385bd (DATA)
// 0051f444: PUSH EAX
// 0051f445: MOV ESI,EAX
// 0051f447: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0051f44c: ADD ESP,0xc
// 0051f44f: PUSH 0x1
// 0051f451: PUSH 0x6385c8
//   XREF to: 006385c8 (DATA)
// 0051f456: PUSH ESI
// 0051f457: MOV [0x02f33378],EAX
//   XREF to: 02f33378 (WRITE)
// 0051f45c: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0051f461: ADD ESP,0xc
// 0051f464: PUSH 0x1
// 0051f466: PUSH 0x6385d9
//   XREF to: 006385d9 (DATA)
// 0051f46b: PUSH ESI
// 0051f46c: MOV [0x02f3337c],EAX
//   XREF to: 02f3337c (WRITE)
// 0051f471: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0051f476: ADD ESP,0xc
// 0051f479: PUSH 0x1
// 0051f47b: PUSH 0x6385ea
//   XREF to: 006385ea (DATA)
// 0051f480: PUSH ESI
// 0051f481: MOV [0x02f33380],EAX
//   XREF to: 02f33380 (WRITE)
// 0051f486: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0051f48b: ADD ESP,0xc
// 0051f48e: PUSH 0x1
// 0051f490: PUSH 0x6385fb
//   XREF to: 006385fb (DATA)
// 0051f495: PUSH ESI
// 0051f496: MOV [0x02f33384],EAX
//   XREF to: 02f33384 (WRITE)
// 0051f49b: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0051f4a0: ADD ESP,0xc
// 0051f4a3: PUSH 0x1
// 0051f4a5: PUSH 0x63860c
//   XREF to: 0063860c (DATA)
// 0051f4aa: PUSH ESI
// 0051f4ab: MOV [0x02f33388],EAX
//   XREF to: 02f33388 (WRITE)
// 0051f4b0: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0051f4b5: ADD ESP,0xc
// 0051f4b8: PUSH 0x1
// 0051f4ba: PUSH 0x63861c
//   XREF to: 0063861c (DATA)
// 0051f4bf: PUSH ESI
// 0051f4c0: MOV [0x02f3338c],EAX
//   XREF to: 02f3338c (WRITE)
// 0051f4c5: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0051f4ca: ADD ESP,0xc
// 0051f4cd: PUSH 0x1
// 0051f4cf: PUSH 0x63862c
//   XREF to: 0063862c (DATA)
// 0051f4d4: PUSH ESI
// 0051f4d5: MOV [0x02f33390],EAX
//   XREF to: 02f33390 (WRITE)
// 0051f4da: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0051f4df: ADD ESP,0xc
// 0051f4e2: PUSH 0x1
// 0051f4e4: PUSH 0x638639
//   XREF to: 00638639 (DATA)
// 0051f4e9: PUSH ESI
// 0051f4ea: MOV [0x02f33394],EAX
//   XREF to: 02f33394 (WRITE)
// 0051f4ef: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0051f4f4: ADD ESP,0xc
// 0051f4f7: MOV [0x02f33398],EAX
//   XREF to: 02f33398 (WRITE)
// 0051f4fc: PUSH 0x1
// 0051f4fe: PUSH 0x638646
//   XREF to: 00638646 (DATA)
// 0051f503: PUSH ESI
// 0051f504: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0051f509: ADD ESP,0xc
// 0051f50c: PUSH 0x1
// 0051f50e: PUSH 0x638654
//   XREF to: 00638654 (DATA)
// 0051f513: PUSH ESI
// 0051f514: MOV [0x02f3339c],EAX
//   XREF to: 02f3339c (WRITE)
// 0051f519: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0051f51e: ADD ESP,0xc
// 0051f521: PUSH 0x1
// 0051f523: PUSH 0x638662
//   XREF to: 00638662 (DATA)
// 0051f528: PUSH ESI
// 0051f529: MOV [0x02f333a0],EAX
//   XREF to: 02f333a0 (WRITE)
// 0051f52e: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0051f533: ADD ESP,0xc
// 0051f536: PUSH 0x1
// 0051f538: PUSH 0x63866f
//   XREF to: 0063866f (DATA)
// 0051f53d: PUSH ESI
// 0051f53e: MOV [0x02f333a4],EAX
//   XREF to: 02f333a4 (WRITE)
// 0051f543: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0051f548: ADD ESP,0xc
// 0051f54b: PUSH 0x1
// 0051f54d: PUSH 0x63867c
//   XREF to: 0063867c (DATA)
// 0051f552: PUSH ESI
// 0051f553: MOV [0x02f333a8],EAX
//   XREF to: 02f333a8 (WRITE)
// 0051f558: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0051f55d: ADD ESP,0xc
// 0051f560: PUSH 0x1
// 0051f562: PUSH 0x638689
//   XREF to: 00638689 (DATA)
// 0051f567: PUSH ESI
// 0051f568: MOV [0x02f333b8],EAX
//   XREF to: 02f333b8 (WRITE)
// 0051f56d: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0051f572: ADD ESP,0xc
// 0051f575: PUSH 0x1
// 0051f577: PUSH 0x638696
//   XREF to: 00638696 (DATA)
// 0051f57c: PUSH ESI
// 0051f57d: MOV [0x02f333bc],EAX
//   XREF to: 02f333bc (WRITE)
// 0051f582: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0051f587: ADD ESP,0xc
// 0051f58a: PUSH 0x1
// 0051f58c: PUSH 0x6386a3
//   XREF to: 006386a3 (DATA)
// 0051f591: PUSH ESI
// 0051f592: MOV [0x02f333c0],EAX
//   XREF to: 02f333c0 (WRITE)
// 0051f597: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0051f59c: ADD ESP,0xc
// 0051f59f: PUSH EBX
// 0051f5a0: MOV [0x02f333c4],EAX
//   XREF to: 02f333c4 (WRITE)
// 0051f5a5: CALL core_enemy.cpp_CEnemy_FUN_004a9650
//   XREF to: 004a9650 (UNCONDITIONAL_CALL)
// 0051f5aa: ADD ESP,0x4
// 0051f5ad: PUSH 0x6386af
//   XREF to: 006386af (DATA)
// 0051f5b2: LEA ESI,[EBX + 0xbf84]
// 0051f5b8: PUSH ESI
// 0051f5b9: CALL core_cloth.cpp_CCloth_load_FUN_00438cf0
//   XREF to: 00438cf0 (UNCONDITIONAL_CALL)
// 0051f5be: ADD ESP,0x8
// 0051f5c1: PUSH EDI
// 0051f5c2: LEA EAX,[EBX + 0x30]
// 0051f5c5: PUSH EAX
// 0051f5c6: LEA EAX,[EBX + 0x20]
// 0051f5c9: PUSH EAX
// 0051f5ca: PUSH ESI
// 0051f5cb: CALL core_cloth.cpp_FUN_00439710
//   XREF to: 00439710 (UNCONDITIONAL_CALL)
// 0051f5d0: ADD ESP,0x10
// 0051f5d3: MOV EBP,dword ptr [0x02cf2bf0]
//   XREF to: 02cf2bf0 (READ)
// 0051f5d9: PUSH EBP
// 0051f5da: LEA EAX,[EBX + 0x4bdfc]
// 0051f5e0: PUSH EAX
// 0051f5e1: CALL core_actor.cpp_createActorByName_FUN_0040c430
//   XREF to: 0040c430 (UNCONDITIONAL_CALL)
// 0051f5e6: ADD ESP,0x4
// 0051f5e9: PUSH EAX
// 0051f5ea: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0051f5ef: ADD ESP,0x8
// 0051f5f2: MOV dword ptr [EBX + 0x4ca54],EAX
// 0051f5f8: TEST EAX,EAX
// 0051f5fa: JNZ 0x0051f61f
//   XREF to: 0051f61f (CONDITIONAL_JUMP)
// 0051f5fc: MOV EDX,0x6386bb
//   XREF to: 006386bb (PARAM)
// 0051f601: MOV ECX,0x101
// 0051f606: PUSH 0x6386cd
//   XREF to: 006386cd (DATA)
// 0051f60b: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0051f611: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0051f617: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0051f61c: ADD ESP,0x4
// 0051f61f: MOV EAX,dword ptr [EBX + 0x4ca54]
//   Label: LAB_0051f61f
// 0051f625: PUSH EAX
// 0051f626: MOV EDX,dword ptr [EAX + 0x154]
// 0051f62c: CALL dword ptr [EDX]
// 0051f62e: ADD ESP,0x4
// 0051f631: LEA ESI,[EBX + 0x158]
// 0051f637: PUSH ESI
// 0051f638: CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
//   XREF to: 0059df80 (UNCONDITIONAL_CALL)
// 0051f63d: ADD ESP,0x4
// 0051f640: PUSH ESI
// 0051f641: CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
//   XREF to: 0059fb40 (UNCONDITIONAL_CALL)
// 0051f646: ADD ESP,0x4
// 0051f649: PUSH ESI
// 0051f64a: PUSH 0x0
// 0051f64c: LEA EAX,[EBX + 0x4be24]
// 0051f652: PUSH EAX
// 0051f653: CALL core_morph.cpp_FUN_0052b430
//   XREF to: 0052b430 (UNCONDITIONAL_CALL)
// 0051f658: ADD ESP,0xc
// 0051f65b: PUSH ESI
// 0051f65c: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
//   XREF to: 0059e000 (UNCONDITIONAL_CALL)
// 0051f661: ADD ESP,0x4
// 0051f664: MOV ESI,dword ptr [EBX + 0x4be78]
// 0051f66a: XOR EDX,EDX
// 0051f66c: TEST ESI,ESI
// 0051f66e: JLE 0x0051f690
//   XREF to: 0051f690 (CONDITIONAL_JUMP)
// 0051f670: XOR EAX,EAX
// 0051f672: MOV ECX,dword ptr [EBX + 0x4be7c]
//   Label: LAB_0051f672
// 0051f678: INC EDX
// 0051f679: FLD float ptr [ECX + EAX*0x1 + 0x4]
// 0051f67d: FCHS
// 0051f67f: FSTP float ptr [ECX + EAX*0x1 + 0x4]
// 0051f683: MOV EDI,dword ptr [EBX + 0x4be78]
// 0051f689: ADD EAX,0x10
// 0051f68c: CMP EDX,EDI
// 0051f68e: JL 0x0051f672
//   XREF to: 0051f672 (CONDITIONAL_JUMP)
// 0051f690: MOV EBP,dword ptr [EBX + 0x4be80]
//   Label: LAB_0051f690
// 0051f696: XOR EDX,EDX
// 0051f698: TEST EBP,EBP
// 0051f69a: JLE 0x0051f6e0
//   XREF to: 0051f6e0 (CONDITIONAL_JUMP)
// 0051f69c: XOR ECX,ECX
// 0051f69e: MOV EAX,dword ptr [EBX + 0x4be84]
//   Label: LAB_0051f69e
// 0051f6a4: LEA EDI,[ESP + 0xc]
// 0051f6a8: LEA ESI,[ECX + EAX*0x1 + 0x30]
// 0051f6ac: MOVSD ES:EDI,ESI
// 0051f6ad: MOVSD ES:EDI,ESI
// 0051f6ae: MOVSD ES:EDI,ESI
// 0051f6af: MOV EDI,ESP
// 0051f6b1: LEA ESI,[ECX + EAX*0x1 + 0x18]
// 0051f6b5: MOVSD ES:EDI,ESI
// 0051f6b6: MOVSD ES:EDI,ESI
// 0051f6b7: MOVSD ES:EDI,ESI
// 0051f6b8: LEA ESI,[ESP + 0xc]
// 0051f6bc: LEA EDI,[ECX + EAX*0x1 + 0x18]
// 0051f6c0: MOVSD ES:EDI,ESI
// 0051f6c1: MOVSD ES:EDI,ESI
// 0051f6c2: MOVSD ES:EDI,ESI
// 0051f6c3: MOV ESI,ESP
// 0051f6c5: LEA EDI,[ECX + EAX*0x1 + 0x30]
// 0051f6c9: MOVSD ES:EDI,ESI
// 0051f6ca: MOVSD ES:EDI,ESI
// 0051f6cb: MOVSD ES:EDI,ESI
// 0051f6cc: INC EDX
// 0051f6cd: MOV EAX,dword ptr [EBX + 0x4be80]
// 0051f6d3: ADD ECX,0x3c
// 0051f6d6: CMP EDX,EAX
// 0051f6d8: JL 0x0051f69e
//   XREF to: 0051f69e (CONDITIONAL_JUMP)
// 0051f6da: LEA EAX,[EAX]
// 0051f6e0: MOV EAX,dword ptr [EBX + 0x4ca54]
//   Label: LAB_0051f6e0
// 0051f6e6: ADD EAX,0x158
// 0051f6eb: PUSH EAX
// 0051f6ec: CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
//   XREF to: 0059df80 (UNCONDITIONAL_CALL)
// 0051f6f1: MOV EAX,dword ptr [EBX + 0x4ca54]
// 0051f6f7: ADD ESP,0x4
// 0051f6fa: ADD EAX,0x158
// 0051f6ff: PUSH EAX
// 0051f700: CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
//   XREF to: 0059fb40 (UNCONDITIONAL_CALL)
// 0051f705: MOV EAX,dword ptr [EBX + 0x4ca54]
// 0051f70b: ADD ESP,0x4
// 0051f70e: ADD EAX,0x158
// 0051f713: PUSH EAX
// 0051f714: PUSH 0x1
// 0051f716: LEA ESI,[EBX + 0x4be24]
// 0051f71c: PUSH ESI
// 0051f71d: CALL core_morph.cpp_FUN_0052b430
//   XREF to: 0052b430 (UNCONDITIONAL_CALL)
// 0051f722: MOV EAX,dword ptr [EBX + 0x4ca54]
// 0051f728: ADD ESP,0xc
// 0051f72b: ADD EAX,0x158
// 0051f730: PUSH EAX
// 0051f731: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
//   XREF to: 0059e000 (UNCONDITIONAL_CALL)
// 0051f736: ADD ESP,0x4
// 0051f739: PUSH ESI
// 0051f73a: CALL core_morph.cpp_CMorph_getReady_FUN_0052b680
//   XREF to: 0052b680 (UNCONDITIONAL_CALL)
// 0051f73f: ADD ESP,0x4
// 0051f742: ADD ESP,0x18
// 0051f745: POP EBP
// 0051f746: POP EDI
// 0051f747: POP ESI
// 0051f748: POP EBX
// 0051f749: RET
// 0051f74a: MOV ECX,0x63856d
//   Label: LAB_0051f74a
//   XREF to: 0063856d (PARAM)
// 0051f74f: MOV ESI,0xb6
// 0051f754: PUSH 0x63857f
//   XREF to: 0063857f (DATA)
// 0051f759: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0051f75f: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0051f765: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0051f76a: ADD ESP,0x4
// 0051f76d: JMP 0x0051f3f9
//   XREF to: 0051f3f9 (UNCONDITIONAL_JUMP)
// 0051f772: PUSH 0x6385b0
//   Label: LAB_0051f772
//   XREF to: 006385b0 (DATA)
// 0051f777: JMP 0x0051f41c
//   XREF to: 0051f41c (UNCONDITIONAL_JUMP)
