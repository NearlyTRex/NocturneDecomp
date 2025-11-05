// Name: core_svetlana.cpp_CSvetlana_FUN_005d88e0
// Address: 005d88e0
// Address Range: [[005d88e0, 005d8b6b]]
// Convention: __cdecl
// Signature: void core_svetlana.cpp_CSvetlana_FUN_005d88e0(CSvetlana * this_ptr)
// Globals:
//   TerminatedCString s_svetlanax_dfm_00654906
//   TerminatedCString s_svetlana_dfm_00654914
//   TerminatedCString s_Bip01_head_00654921
//   TerminatedCString s_Bip01_L_Clavicle_0065492c
//   TerminatedCString s_Bip01_R_Clavicle_0065493d
//   TerminatedCString s_Bip01_L_UpperArm_0065494e
//   TerminatedCString s_Bip01_R_UpperArm_0065495f
//   TerminatedCString s_Bip01_L_ForeArm_00654970
//   TerminatedCString s_Bip01_R_ForeArm_00654980
//   TerminatedCString s_Bip01_L_Foot_00654990
//   TerminatedCString s_Bip01_R_Foot_0065499d
//   TerminatedCString s_Bip01_L_Thigh_006549aa
//   TerminatedCString s_Bip01_R_Thigh_006549b8
//   TerminatedCString s_Bip01_L_Calf_006549c6
//   TerminatedCString s_Bip01_R_Calf_006549d3
//   TerminatedCString s_Bip01_L_Hand_006549e0
//   TerminatedCString s_Bip01_R_Hand_006549ed
//   TerminatedCString s_Bip01_Spine2_006549fa
//   TerminatedCString s_Bip01_Spine_00654a07
//   TerminatedCString s_Bipblade01_00654a13
//   TerminatedCString s_BipR14_00654a1e
//   TerminatedCString s_svetcape_cth_00654a25
//   TerminatedCString s_svethair_cth_00654a32
//   TerminatedCString s_lblade01_00654a3f
//   TerminatedCString s_rblade02_00654a48
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.nudity_flag
//   undefined4 DAT_03f6cb90
//   undefined4 DAT_03f6cb94
//   undefined4 DAT_03f6cb98
//   undefined4 DAT_03f6cb9c
//   undefined4 DAT_03f6cba0
//   undefined4 DAT_03f6cba4
//   undefined4 DAT_03f6cba8
//   undefined4 DAT_03f6cbac
//   undefined4 DAT_03f6cbb0
//   undefined4 DAT_03f6cbb4
//   undefined4 DAT_03f6cbb8
//   undefined4 DAT_03f6cbbc
//   undefined4 DAT_03f6cbc0
//   undefined4 DAT_03f6cbc4
//   undefined4 DAT_03f6cbc8
//   undefined4 DAT_03f6cbcc
//   undefined4 DAT_03f6cbd0
//   undefined4 DAT_03f6cbd4
//   undefined4 DAT_03f6cbd8
// Function calls:
//   core_cloth.cpp_CCloth_load_FUN_00438cf0
//   core_cloth.cpp_FUN_00439710
//   core_hero.cpp_CHero_FUN_004f2540
//   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_svetlana_cpp_CSvetlana_FUN_005d88e0(CSvetlana *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  int iVar1;
  char *model_name;
  
  if (g_CGamePtr->nudity_flag == 0) {
    model_name = "svetlanax.dfm";
  }
  else {
    model_name = "svetlana.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(this_ptr->base_hero).base_character.model,model_name);
  core_hero_cpp_CHero_FUN_004f2540(&this_ptr->base_hero);
  this_ptr_00 = &(this_ptr->base_hero).base_character.model;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  DAT_03f6cb90 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 head");
  _DAT_03f6cb94 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Clavicle");
  _DAT_03f6cb98 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Clavicle");
  _DAT_03f6cb9c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L UpperArm");
  _DAT_03f6cba0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R UpperArm");
  _DAT_03f6cba4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L ForeArm");
  _DAT_03f6cba8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R ForeArm");
  _DAT_03f6cbac =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Foot");
  _DAT_03f6cbb0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Foot");
  _DAT_03f6cbb4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Thigh");
  _DAT_03f6cbb8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Thigh");
  _DAT_03f6cbbc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Calf");
  _DAT_03f6cbc0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Calf");
  _DAT_03f6cbc4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Hand");
  _DAT_03f6cbc8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Hand");
  _DAT_03f6cbcc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine2");
  _DAT_03f6cbd0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine");
  DAT_03f6cbd4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bipblade01");
  DAT_03f6cbd8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"BipR14");
  this_ptr->field1_0x1fbd4[0] = '\0';
  this_ptr->field1_0x1fbd4[1] = '\0';
  this_ptr->field1_0x1fbd4[2] = '\0';
  this_ptr->field1_0x1fbd4[3] = '\0';
  core_cloth_cpp_CCloth_load_FUN_00438cf0
            ((CCloth *)(this_ptr->field1_0x1fbd4 + 8),"svetcape.cth");
  core_cloth_cpp_FUN_00439710();
  core_cloth_cpp_CCloth_load_FUN_00438cf0
            ((CCloth *)(this_ptr->field1_0x1fbd4 + 0x3fe78),"svethair.cth");
  core_cloth_cpp_FUN_00439710();
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"lblade01",1);
  *(int *)(this_ptr->field1_0x1fbd4 + 0x7fcfc) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rblade02",1);
  this_ptr->field1_0x1fbd4[0x7fce8] = '\0';
  this_ptr->field1_0x1fbd4[0x7fce9] = '\0';
  this_ptr->field1_0x1fbd4[0x7fcea] = '\0';
  this_ptr->field1_0x1fbd4[0x7fceb] = '\0';
  *(int *)(this_ptr->field1_0x1fbd4 + 0x7fd00) = iVar1;
  return;
}


// Assembly code:
// 005d88e0: PUSH EBX
//   Label: core_svetlana.cpp_CSvetlana_FUN_005d88e0
// 005d88e1: PUSH ESI
// 005d88e2: PUSH EDI
// 005d88e3: PUSH EBP
// 005d88e4: SUB ESP,0x4
// 005d88e7: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005d88eb: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005d88f1: MOV EDX,dword ptr [EBX + 0x18]
//   XREF to: 02d81ab4 (READ)
// 005d88f4: LEA EAX,[ESI + 0x158]
// 005d88fa: TEST EDX,EDX
// 005d88fc: JZ 0x005d8b62
//   XREF to: 005d8b62 (CONDITIONAL_JUMP)
// 005d8902: PUSH 0x654914
//   XREF to: 00654914 (DATA)
// 005d8907: PUSH EAX
//   Label: LAB_005d8907
// 005d8908: CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 005d890d: ADD ESP,0x8
// 005d8910: PUSH ESI
// 005d8911: CALL core_hero.cpp_CHero_FUN_004f2540
//   XREF to: 004f2540 (UNCONDITIONAL_CALL)
// 005d8916: ADD ESP,0x4
// 005d8919: LEA EDI,[ESI + 0x158]
// 005d891f: PUSH EDI
// 005d8920: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 005d8925: ADD ESP,0x4
// 005d8928: PUSH 0x1
// 005d892a: PUSH 0x654921
//   XREF to: 00654921 (DATA)
// 005d892f: PUSH EAX
// 005d8930: MOV EBX,EAX
// 005d8932: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005d8937: ADD ESP,0xc
// 005d893a: PUSH 0x1
// 005d893c: PUSH 0x65492c
//   XREF to: 0065492c (DATA)
// 005d8941: PUSH EBX
// 005d8942: MOV [0x03f6cb90],EAX
//   XREF to: 03f6cb90 (WRITE)
// 005d8947: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005d894c: ADD ESP,0xc
// 005d894f: PUSH 0x1
// 005d8951: PUSH 0x65493d
//   XREF to: 0065493d (DATA)
// 005d8956: PUSH EBX
// 005d8957: MOV [0x03f6cb94],EAX
//   XREF to: 03f6cb94 (WRITE)
// 005d895c: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005d8961: ADD ESP,0xc
// 005d8964: PUSH 0x1
// 005d8966: PUSH 0x65494e
//   XREF to: 0065494e (DATA)
// 005d896b: PUSH EBX
// 005d896c: MOV [0x03f6cb98],EAX
//   XREF to: 03f6cb98 (WRITE)
// 005d8971: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005d8976: ADD ESP,0xc
// 005d8979: PUSH 0x1
// 005d897b: PUSH 0x65495f
//   XREF to: 0065495f (DATA)
// 005d8980: PUSH EBX
// 005d8981: MOV [0x03f6cb9c],EAX
//   XREF to: 03f6cb9c (WRITE)
// 005d8986: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005d898b: ADD ESP,0xc
// 005d898e: PUSH 0x1
// 005d8990: PUSH 0x654970
//   XREF to: 00654970 (DATA)
// 005d8995: PUSH EBX
// 005d8996: MOV [0x03f6cba0],EAX
//   XREF to: 03f6cba0 (WRITE)
// 005d899b: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005d89a0: ADD ESP,0xc
// 005d89a3: PUSH 0x1
// 005d89a5: PUSH 0x654980
//   XREF to: 00654980 (DATA)
// 005d89aa: PUSH EBX
// 005d89ab: MOV [0x03f6cba4],EAX
//   XREF to: 03f6cba4 (WRITE)
// 005d89b0: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005d89b5: ADD ESP,0xc
// 005d89b8: PUSH 0x1
// 005d89ba: PUSH 0x654990
//   XREF to: 00654990 (DATA)
// 005d89bf: PUSH EBX
// 005d89c0: MOV [0x03f6cba8],EAX
//   XREF to: 03f6cba8 (WRITE)
// 005d89c5: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005d89ca: ADD ESP,0xc
// 005d89cd: PUSH 0x1
// 005d89cf: PUSH 0x65499d
//   XREF to: 0065499d (DATA)
// 005d89d4: PUSH EBX
// 005d89d5: MOV [0x03f6cbac],EAX
//   XREF to: 03f6cbac (WRITE)
// 005d89da: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005d89df: ADD ESP,0xc
// 005d89e2: MOV [0x03f6cbb0],EAX
//   XREF to: 03f6cbb0 (WRITE)
// 005d89e7: PUSH 0x1
// 005d89e9: PUSH 0x6549aa
//   XREF to: 006549aa (DATA)
// 005d89ee: PUSH EBX
// 005d89ef: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005d89f4: ADD ESP,0xc
// 005d89f7: PUSH 0x1
// 005d89f9: PUSH 0x6549b8
//   XREF to: 006549b8 (DATA)
// 005d89fe: PUSH EBX
// 005d89ff: MOV [0x03f6cbb4],EAX
//   XREF to: 03f6cbb4 (WRITE)
// 005d8a04: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005d8a09: ADD ESP,0xc
// 005d8a0c: PUSH 0x1
// 005d8a0e: PUSH 0x6549c6
//   XREF to: 006549c6 (DATA)
// 005d8a13: PUSH EBX
// 005d8a14: MOV [0x03f6cbb8],EAX
//   XREF to: 03f6cbb8 (WRITE)
// 005d8a19: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005d8a1e: ADD ESP,0xc
// 005d8a21: PUSH 0x1
// 005d8a23: PUSH 0x6549d3
//   XREF to: 006549d3 (DATA)
// 005d8a28: PUSH EBX
// 005d8a29: MOV [0x03f6cbbc],EAX
//   XREF to: 03f6cbbc (WRITE)
// 005d8a2e: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005d8a33: ADD ESP,0xc
// 005d8a36: PUSH 0x1
// 005d8a38: PUSH 0x6549e0
//   XREF to: 006549e0 (DATA)
// 005d8a3d: PUSH EBX
// 005d8a3e: MOV [0x03f6cbc0],EAX
//   XREF to: 03f6cbc0 (WRITE)
// 005d8a43: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005d8a48: ADD ESP,0xc
// 005d8a4b: PUSH 0x1
// 005d8a4d: PUSH 0x6549ed
//   XREF to: 006549ed (DATA)
// 005d8a52: PUSH EBX
// 005d8a53: MOV [0x03f6cbc4],EAX
//   XREF to: 03f6cbc4 (WRITE)
// 005d8a58: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005d8a5d: ADD ESP,0xc
// 005d8a60: PUSH 0x1
// 005d8a62: PUSH 0x6549fa
//   XREF to: 006549fa (DATA)
// 005d8a67: PUSH EBX
// 005d8a68: MOV [0x03f6cbc8],EAX
//   XREF to: 03f6cbc8 (WRITE)
// 005d8a6d: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005d8a72: ADD ESP,0xc
// 005d8a75: PUSH 0x1
// 005d8a77: PUSH 0x654a07
//   XREF to: 00654a07 (DATA)
// 005d8a7c: PUSH EBX
// 005d8a7d: MOV [0x03f6cbcc],EAX
//   XREF to: 03f6cbcc (WRITE)
// 005d8a82: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005d8a87: ADD ESP,0xc
// 005d8a8a: PUSH 0x1
// 005d8a8c: PUSH 0x654a13
//   XREF to: 00654a13 (DATA)
// 005d8a91: PUSH EBX
// 005d8a92: MOV [0x03f6cbd0],EAX
//   XREF to: 03f6cbd0 (WRITE)
// 005d8a97: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005d8a9c: ADD ESP,0xc
// 005d8a9f: PUSH 0x1
// 005d8aa1: PUSH 0x654a1e
//   XREF to: 00654a1e (DATA)
// 005d8aa6: PUSH EBX
// 005d8aa7: MOV [0x03f6cbd4],EAX
//   XREF to: 03f6cbd4 (WRITE)
// 005d8aac: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005d8ab1: ADD ESP,0xc
// 005d8ab4: MOV [0x03f6cbd8],EAX
//   XREF to: 03f6cbd8 (WRITE)
// 005d8ab9: PUSH 0x654a25
//   XREF to: 00654a25 (DATA)
// 005d8abe: LEA EAX,[ESI + 0x1fbdc]
// 005d8ac4: PUSH EAX
// 005d8ac5: MOV dword ptr [ESI + 0x1fbd4],0x0
// 005d8acf: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005d8ad3: CALL core_cloth.cpp_CCloth_load_FUN_00438cf0
//   XREF to: 00438cf0 (UNCONDITIONAL_CALL)
// 005d8ad8: ADD ESP,0x8
// 005d8adb: PUSH EDI
// 005d8adc: LEA EBP,[ESI + 0x30]
// 005d8adf: PUSH EBP
// 005d8ae0: LEA EBX,[ESI + 0x20]
// 005d8ae3: PUSH EBX
// 005d8ae4: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 005d8ae8: PUSH EAX
// 005d8ae9: CALL core_cloth.cpp_FUN_00439710
//   XREF to: 00439710 (UNCONDITIONAL_CALL)
// 005d8aee: ADD ESP,0x10
// 005d8af1: PUSH 0x654a32
//   XREF to: 00654a32 (DATA)
// 005d8af6: LEA EAX,[ESI + 0x5fa4c]
// 005d8afc: PUSH EAX
// 005d8afd: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005d8b01: CALL core_cloth.cpp_CCloth_load_FUN_00438cf0
//   XREF to: 00438cf0 (UNCONDITIONAL_CALL)
// 005d8b06: ADD ESP,0x8
// 005d8b09: PUSH EDI
// 005d8b0a: PUSH EBP
// 005d8b0b: PUSH EBX
// 005d8b0c: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 005d8b10: PUSH ECX
// 005d8b11: CALL core_cloth.cpp_FUN_00439710
//   XREF to: 00439710 (UNCONDITIONAL_CALL)
// 005d8b16: ADD ESP,0x10
// 005d8b19: PUSH EDI
// 005d8b1a: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 005d8b1f: ADD ESP,0x4
// 005d8b22: PUSH 0x1
// 005d8b24: PUSH 0x654a3f
//   XREF to: 00654a3f (DATA)
// 005d8b29: PUSH EAX
// 005d8b2a: MOV EBX,EAX
// 005d8b2c: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 005d8b31: ADD ESP,0xc
// 005d8b34: PUSH 0x1
// 005d8b36: PUSH 0x654a48
//   XREF to: 00654a48 (DATA)
// 005d8b3b: PUSH EBX
// 005d8b3c: MOV dword ptr [ESI + 0x9f8d0],EAX
// 005d8b42: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 005d8b47: MOV dword ptr [ESI + 0x9f8bc],0x0
// 005d8b51: ADD ESP,0xc
// 005d8b54: MOV dword ptr [ESI + 0x9f8d4],EAX
// 005d8b5a: ADD ESP,0x4
// 005d8b5d: POP EBP
// 005d8b5e: POP EDI
// 005d8b5f: POP ESI
// 005d8b60: POP EBX
// 005d8b61: RET
// 005d8b62: PUSH 0x654906
//   Label: LAB_005d8b62
//   XREF to: 00654906 (DATA)
// 005d8b67: JMP 0x005d8907
//   XREF to: 005d8907 (UNCONDITIONAL_JUMP)
