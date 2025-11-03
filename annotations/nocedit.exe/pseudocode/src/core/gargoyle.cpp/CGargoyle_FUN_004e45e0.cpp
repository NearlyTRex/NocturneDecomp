// Name: core_gargoyle.cpp_CGargoyle_FUN_004e45e0
// Address: 004e45e0
// Address Range: [[004e45e0, 004e4899]]
// Convention: unknown
// Signature: undefined core_gargoyle.cpp_CGargoyle_FUN_004e45e0()
// Globals:
//   TerminatedCString s_Bip01_Head_0062d7e3
//   TerminatedCString s_Bip01_L_ForeArm_0062d7ee
//   TerminatedCString s_Bip01_R_ForeArm_0062d7fe
//   TerminatedCString s_Bip01_L_UpperArm_0062d80e
//   TerminatedCString s_Bip01_R_UpperArm_0062d81f
//   TerminatedCString s_Bip01_L_Foot_0062d830
//   TerminatedCString s_Bip01_R_Foot_0062d83d
//   TerminatedCString s_Bip01_L_Hand_0062d84a
//   TerminatedCString s_Bip01_R_Hand_0062d857
//   TerminatedCString s_Bip01_Spine_0062d864
//   TerminatedCString s_Bip01_Spine1_0062d870
//   TerminatedCString s_Bip01_Spine2_0062d87d
//   TerminatedCString s_Bip01_Head_0062d88a
//   TerminatedCString s_Bip01_L_UpperArm_0062d895
//   TerminatedCString s_Bip01_R_UpperArm_0062d8a6
//   TerminatedCString s_Bip01_Spine_0062d8b7
//   TerminatedCString s_Bip01_Spine2_0062d8c3
//   TerminatedCString s_larm01_0062d8d0
//   TerminatedCString s_l4arm01_0062d8d7
//   TerminatedCString s_rarm01_0062d8df
//   TerminatedCString s_r4arm01_0062d8e6
//   TerminatedCString s_rthigh01_0062d8ee
//   TerminatedCString s_rshin01_0062d8f7
//   TerminatedCString s_lthigh01_0062d8ff
//   TerminatedCString s_lshin01_0062d908
//   TerminatedCString s_ass01_0062d910
//   TerminatedCString s_torso01_0062d916
//   TerminatedCString s_head01_0062d91e
//   TerminatedCString s_tail01_0062d925
//   undefined4 DAT_02d83200
//   undefined4 DAT_02d83204
//   undefined4 DAT_02d83208
//   undefined4 DAT_02d8320c
//   undefined4 DAT_02d83210
//   undefined4 DAT_02d83214
//   undefined4 DAT_02d83218
//   undefined4 DAT_02d8321c
//   undefined4 DAT_02d83220
//   undefined4 DAT_02d83224
//   undefined4 DAT_02d83228
//   undefined4 DAT_02d8322c
// Function calls:
//   core_enemy.cpp_CEnemy_FUN_004a9650
//   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_gargoyle.cpp_CGargoyle_FUN_004e45e0(CGargoyle* param_1) */

void core_gargoyle_cpp_CGargoyle_FUN_004e45e0(void)

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
  DAT_02d83200 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Head");
  _DAT_02d8320c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L ForeArm");
  _DAT_02d83210 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R ForeArm");
  DAT_02d83214 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L UpperArm");
  DAT_02d83218 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm");
  _DAT_02d8321c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Foot");
  _DAT_02d83220 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R Foot");
  _DAT_02d83204 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Hand");
  DAT_02d83208 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Hand");
  DAT_02d83224 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  _DAT_02d83228 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 Spine1");
  DAT_02d8322c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2");
  DAT_02d83200 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Head");
  DAT_02d83214 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L UpperArm");
  DAT_02d83218 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm");
  DAT_02d83224 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  DAT_02d8322c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2");
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"larm01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 8) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"l4arm01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"rarm01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"r4arm01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x14) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"rthigh01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x18) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"rshin01",1);
  *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x1c) = iVar1;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"lthigh01",1);
  in_stack_00000004[1].base_character.base_actor.location.position.x = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"lshin01",1);
  in_stack_00000004[1].base_character.base_actor.location.position.y = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"ass01",1);
  in_stack_00000004[1].base_character.base_actor.location.position.z = fVar2;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"torso01",1);
  in_stack_00000004[1].base_character.base_actor.location.area_id = iVar1;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"head01",1);
  in_stack_00000004[1].base_character.base_actor.orient.pitch = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"tail01",1);
  in_stack_00000004[1].base_character.base_actor.orient_matrix.m[1].x = 0.0;
  in_stack_00000004[1].base_character.base_actor.orient_matrix.m[1].y = 0.0;
  in_stack_00000004[1].base_character.base_actor.orient.bank = fVar2;
  return;
}


// Assembly code:
// 004e45e0: PUSH EBX
//   Label: core_gargoyle.cpp_CGargoyle_FUN_004e45e0
// 004e45e1: PUSH ESI
// 004e45e2: PUSH EDI
// 004e45e3: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004e45e7: PUSH ESI
// 004e45e8: CALL core_enemy.cpp_CEnemy_FUN_004a9650
//   XREF to: 004a9650 (UNCONDITIONAL_CALL)
// 004e45ed: ADD ESP,0x4
// 004e45f0: LEA EDI,[ESI + 0x158]
// 004e45f6: PUSH EDI
// 004e45f7: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 004e45fc: ADD ESP,0x4
// 004e45ff: PUSH EDI
// 004e4600: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 004e4605: ADD ESP,0x4
// 004e4608: PUSH 0x1
// 004e460a: PUSH 0x62d7e3
//   XREF to: 0062d7e3 (DATA)
// 004e460f: PUSH EAX
// 004e4610: MOV EBX,EAX
// 004e4612: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e4617: ADD ESP,0xc
// 004e461a: PUSH 0x1
// 004e461c: PUSH 0x62d7ee
//   XREF to: 0062d7ee (DATA)
// 004e4621: PUSH EBX
// 004e4622: MOV [0x02d83200],EAX
//   XREF to: 02d83200 (WRITE)
// 004e4627: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e462c: ADD ESP,0xc
// 004e462f: PUSH 0x1
// 004e4631: PUSH 0x62d7fe
//   XREF to: 0062d7fe (DATA)
// 004e4636: PUSH EBX
// 004e4637: MOV [0x02d8320c],EAX
//   XREF to: 02d8320c (WRITE)
// 004e463c: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e4641: ADD ESP,0xc
// 004e4644: PUSH 0x1
// 004e4646: PUSH 0x62d80e
//   XREF to: 0062d80e (DATA)
// 004e464b: PUSH EBX
// 004e464c: MOV [0x02d83210],EAX
//   XREF to: 02d83210 (WRITE)
// 004e4651: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e4656: ADD ESP,0xc
// 004e4659: PUSH 0x1
// 004e465b: PUSH 0x62d81f
//   XREF to: 0062d81f (DATA)
// 004e4660: PUSH EBX
// 004e4661: MOV [0x02d83214],EAX
//   XREF to: 02d83214 (WRITE)
// 004e4666: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e466b: ADD ESP,0xc
// 004e466e: PUSH 0x1
// 004e4670: PUSH 0x62d830
//   XREF to: 0062d830 (DATA)
// 004e4675: PUSH EBX
// 004e4676: MOV [0x02d83218],EAX
//   XREF to: 02d83218 (WRITE)
// 004e467b: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e4680: ADD ESP,0xc
// 004e4683: PUSH 0x1
// 004e4685: PUSH 0x62d83d
//   XREF to: 0062d83d (DATA)
// 004e468a: PUSH EBX
// 004e468b: MOV [0x02d8321c],EAX
//   XREF to: 02d8321c (WRITE)
// 004e4690: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e4695: ADD ESP,0xc
// 004e4698: PUSH 0x1
// 004e469a: PUSH 0x62d84a
//   XREF to: 0062d84a (DATA)
// 004e469f: PUSH EBX
// 004e46a0: MOV [0x02d83220],EAX
//   XREF to: 02d83220 (WRITE)
// 004e46a5: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e46aa: ADD ESP,0xc
// 004e46ad: MOV [0x02d83204],EAX
//   XREF to: 02d83204 (WRITE)
// 004e46b2: PUSH 0x1
// 004e46b4: PUSH 0x62d857
//   XREF to: 0062d857 (DATA)
// 004e46b9: PUSH EBX
// 004e46ba: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e46bf: ADD ESP,0xc
// 004e46c2: PUSH 0x1
// 004e46c4: PUSH 0x62d864
//   XREF to: 0062d864 (DATA)
// 004e46c9: PUSH EBX
// 004e46ca: MOV [0x02d83208],EAX
//   XREF to: 02d83208 (WRITE)
// 004e46cf: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e46d4: ADD ESP,0xc
// 004e46d7: PUSH 0x1
// 004e46d9: PUSH 0x62d870
//   XREF to: 0062d870 (DATA)
// 004e46de: PUSH EBX
// 004e46df: MOV [0x02d83224],EAX
//   XREF to: 02d83224 (WRITE)
// 004e46e4: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e46e9: ADD ESP,0xc
// 004e46ec: PUSH 0x1
// 004e46ee: PUSH 0x62d87d
//   XREF to: 0062d87d (DATA)
// 004e46f3: PUSH EBX
// 004e46f4: MOV [0x02d83228],EAX
//   XREF to: 02d83228 (WRITE)
// 004e46f9: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e46fe: ADD ESP,0xc
// 004e4701: PUSH 0x1
// 004e4703: PUSH 0x62d88a
//   XREF to: 0062d88a (DATA)
// 004e4708: PUSH EBX
// 004e4709: MOV [0x02d8322c],EAX
//   XREF to: 02d8322c (WRITE)
// 004e470e: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e4713: ADD ESP,0xc
// 004e4716: PUSH 0x1
// 004e4718: PUSH 0x62d895
//   XREF to: 0062d895 (DATA)
// 004e471d: PUSH EBX
// 004e471e: MOV [0x02d83200],EAX
//   XREF to: 02d83200 (WRITE)
// 004e4723: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e4728: ADD ESP,0xc
// 004e472b: PUSH 0x1
// 004e472d: PUSH 0x62d8a6
//   XREF to: 0062d8a6 (DATA)
// 004e4732: PUSH EBX
// 004e4733: MOV [0x02d83214],EAX
//   XREF to: 02d83214 (WRITE)
// 004e4738: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e473d: ADD ESP,0xc
// 004e4740: PUSH 0x1
// 004e4742: PUSH 0x62d8b7
//   XREF to: 0062d8b7 (DATA)
// 004e4747: PUSH EBX
// 004e4748: MOV [0x02d83218],EAX
//   XREF to: 02d83218 (WRITE)
// 004e474d: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e4752: ADD ESP,0xc
// 004e4755: PUSH 0x1
// 004e4757: PUSH 0x62d8c3
//   XREF to: 0062d8c3 (DATA)
// 004e475c: PUSH EBX
// 004e475d: MOV [0x02d83224],EAX
//   XREF to: 02d83224 (WRITE)
// 004e4762: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004e4767: ADD ESP,0xc
// 004e476a: PUSH EDI
// 004e476b: MOV [0x02d8322c],EAX
//   XREF to: 02d8322c (WRITE)
// 004e4770: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 004e4775: MOV EBX,EAX
// 004e4777: ADD ESP,0x4
// 004e477a: PUSH 0x1
// 004e477c: PUSH 0x62d8d0
//   XREF to: 0062d8d0 (DATA)
// 004e4781: PUSH EAX
// 004e4782: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004e4787: ADD ESP,0xc
// 004e478a: PUSH 0x1
// 004e478c: PUSH 0x62d8d7
//   XREF to: 0062d8d7 (DATA)
// 004e4791: PUSH EBX
// 004e4792: MOV dword ptr [ESI + 0xbebc],EAX
// 004e4798: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004e479d: ADD ESP,0xc
// 004e47a0: PUSH 0x1
// 004e47a2: PUSH 0x62d8df
//   XREF to: 0062d8df (DATA)
// 004e47a7: PUSH EBX
// 004e47a8: MOV dword ptr [ESI + 0xbec0],EAX
// 004e47ae: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004e47b3: ADD ESP,0xc
// 004e47b6: PUSH 0x1
// 004e47b8: PUSH 0x62d8e6
//   XREF to: 0062d8e6 (DATA)
// 004e47bd: PUSH EBX
// 004e47be: MOV dword ptr [ESI + 0xbec4],EAX
// 004e47c4: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004e47c9: ADD ESP,0xc
// 004e47cc: PUSH 0x1
// 004e47ce: PUSH 0x62d8ee
//   XREF to: 0062d8ee (DATA)
// 004e47d3: PUSH EBX
// 004e47d4: MOV dword ptr [ESI + 0xbec8],EAX
// 004e47da: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004e47df: ADD ESP,0xc
// 004e47e2: PUSH 0x1
// 004e47e4: PUSH 0x62d8f7
//   XREF to: 0062d8f7 (DATA)
// 004e47e9: PUSH EBX
// 004e47ea: MOV dword ptr [ESI + 0xbecc],EAX
// 004e47f0: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004e47f5: ADD ESP,0xc
// 004e47f8: PUSH 0x1
// 004e47fa: PUSH 0x62d8ff
//   XREF to: 0062d8ff (DATA)
// 004e47ff: PUSH EBX
// 004e4800: MOV dword ptr [ESI + 0xbed0],EAX
// 004e4806: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004e480b: ADD ESP,0xc
// 004e480e: PUSH 0x1
// 004e4810: PUSH 0x62d908
//   XREF to: 0062d908 (DATA)
// 004e4815: PUSH EBX
// 004e4816: MOV dword ptr [ESI + 0xbed4],EAX
// 004e481c: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004e4821: ADD ESP,0xc
// 004e4824: PUSH 0x1
// 004e4826: PUSH 0x62d910
//   XREF to: 0062d910 (DATA)
// 004e482b: PUSH EBX
// 004e482c: MOV dword ptr [ESI + 0xbed8],EAX
// 004e4832: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004e4837: ADD ESP,0xc
// 004e483a: MOV dword ptr [ESI + 0xbedc],EAX
// 004e4840: PUSH 0x1
// 004e4842: PUSH 0x62d916
//   XREF to: 0062d916 (DATA)
// 004e4847: PUSH EBX
// 004e4848: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004e484d: ADD ESP,0xc
// 004e4850: PUSH 0x1
// 004e4852: PUSH 0x62d91e
//   XREF to: 0062d91e (DATA)
// 004e4857: PUSH EBX
// 004e4858: MOV dword ptr [ESI + 0xbee0],EAX
// 004e485e: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004e4863: ADD ESP,0xc
// 004e4866: PUSH 0x1
// 004e4868: PUSH 0x62d925
//   XREF to: 0062d925 (DATA)
// 004e486d: PUSH EBX
// 004e486e: MOV dword ptr [ESI + 0xbee4],EAX
// 004e4874: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004e4879: MOV dword ptr [ESI + 0xbefc],0x0
// 004e4883: MOV dword ptr [ESI + 0xbf00],0x0
// 004e488d: ADD ESP,0xc
// 004e4890: MOV dword ptr [ESI + 0xbee8],EAX
// 004e4896: POP EDI
// 004e4897: POP ESI
// 004e4898: POP EBX
// 004e4899: RET
