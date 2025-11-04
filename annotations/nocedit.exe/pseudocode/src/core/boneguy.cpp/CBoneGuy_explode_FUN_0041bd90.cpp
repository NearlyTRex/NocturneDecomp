// Name: core_boneguy.cpp_CBoneGuy_explode_FUN_0041bd90
// Address: 0041bd90
// Address Range: [[0041bd90, 0041bf6c]]
// Convention: __cdecl
// Signature: void core_boneguy.cpp_CBoneGuy_explode_FUN_0041bd90(CBoneGuy * this_ptr)
// Globals:
//   TerminatedCString s_Bip01_Head_00615f99
//   TerminatedCString s_Bip01_L_ForeArm_00615fa4
//   TerminatedCString s_Bip01_R_ForeArm_00615fb4
//   TerminatedCString s_Bip01_L_UpperArm_00615fc4
//   TerminatedCString s_Bip01_R_UpperArm_00615fd5
//   TerminatedCString s_Bip01_L_Foot_00615fe6
//   TerminatedCString s_Bip01_R_Foot_00615ff3
//   TerminatedCString s_Bip01_L_Hand_00616000
//   TerminatedCString s_Bip01_R_Hand_0061600d
//   TerminatedCString s_Bip01_Spine_0061601a
//   TerminatedCString s_Bip01_Spine2_00616026
//   TerminatedCString s_Bip01_Head_00616033
//   TerminatedCString s_Bip01_L_UpperArm_0061603e
//   TerminatedCString s_Bip01_R_UpperArm_0061604f
//   TerminatedCString s_Bip01_Spine_00616060
//   TerminatedCString s_Bip01_Spine2_0061606c
//   TerminatedCString s_core_boneguy_cpp_00616079
//   TerminatedCString s_CBoneGuy_explode_Not_eno_0061608d
//   undefined4 DAT_00822944
//   undefined4 DAT_00822948
//   undefined4 DAT_0082294c
//   undefined4 DAT_00822950
//   undefined4 DAT_00822954
//   undefined4 DAT_00822958
//   undefined4 DAT_0082295c
//   undefined4 DAT_00822960
//   undefined4 DAT_00822964
//   undefined4 DAT_00822968
//   undefined4 DAT_0082296c
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_enemy.cpp_CEnemy_FUN_004a9650
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_boneguy.cpp_CBoneGuy_explode(undefined4 param_1) */

void __cdecl core_boneguy_cpp_CBoneGuy_explode_FUN_0041bd90(CBoneGuy *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  CSkeleton *this_ptr_01;
  CDeformableModel *pCVar2;
  undefined4 uStack00000034;
  
  this_ptr_00 = &(this_ptr->base_enemy).base_character.model;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0450(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  DAT_00822944 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Head");
  _DAT_00822950 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L ForeArm");
  _DAT_00822954 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R ForeArm");
  DAT_00822958 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L UpperArm");
  DAT_0082295c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R UpperArm");
  _DAT_00822960 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Foot");
  _DAT_00822964 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Foot");
  DAT_00822948 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Hand");
  DAT_0082294c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Hand");
  DAT_00822968 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine");
  DAT_0082296c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine2");
  DAT_00822944 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Head");
  DAT_00822958 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L UpperArm");
  DAT_0082295c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R UpperArm");
  DAT_00822968 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine");
  uStack00000034 = 1;
  DAT_0082296c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine2");
  uStack00000034 = 0x41bf07;
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  iVar1 = pCVar2->num_parts;
  this_ptr->box_count = iVar1;
  if (0x14 < iVar1) {
    g_CurrentFilename = "..\\core\\boneguy.cpp";
    g_CurrentLineNumber = 0x12f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneGuy::explode - Not enough containers");
  }
  *(int *)(this_ptr->base_enemy).base_character.carry_hands[0].field0_0x0 = DAT_00822948;
  *(int *)(this_ptr->base_enemy).base_character.carry_hands[1].field0_0x0 = DAT_0082294c;
  core_enemy_cpp_CEnemy_FUN_004a9650(&this_ptr->base_enemy);
  this_ptr->field1_0xbeb4[0x18] = '\0';
  this_ptr->field1_0xbeb4[0x19] = '\0';
  this_ptr->field1_0xbeb4[0x1a] = '\0';
  this_ptr->field1_0xbeb4[0x1b] = '\0';
  return;
}


// Assembly code:
// 0041bd90: PUSH EBX
//   Label: core_boneguy.cpp_CBoneGuy_explode_FUN_0041bd90
// 0041bd91: PUSH ESI
// 0041bd92: PUSH EDI
// 0041bd93: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0041bd97: LEA EDI,[ESI + 0x158]
// 0041bd9d: PUSH EDI
// 0041bd9e: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 0041bda3: ADD ESP,0x4
// 0041bda6: PUSH EDI
// 0041bda7: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0041bdac: ADD ESP,0x4
// 0041bdaf: PUSH 0x1
// 0041bdb1: PUSH 0x615f99
//   XREF to: 00615f99 (DATA)
// 0041bdb6: PUSH EAX
// 0041bdb7: MOV EBX,EAX
// 0041bdb9: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0041bdbe: ADD ESP,0xc
// 0041bdc1: PUSH 0x1
// 0041bdc3: PUSH 0x615fa4
//   XREF to: 00615fa4 (DATA)
// 0041bdc8: PUSH EBX
// 0041bdc9: MOV [0x00822944],EAX
//   XREF to: 00822944 (WRITE)
// 0041bdce: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0041bdd3: ADD ESP,0xc
// 0041bdd6: PUSH 0x1
// 0041bdd8: PUSH 0x615fb4
//   XREF to: 00615fb4 (DATA)
// 0041bddd: PUSH EBX
// 0041bdde: MOV [0x00822950],EAX
//   XREF to: 00822950 (WRITE)
// 0041bde3: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0041bde8: ADD ESP,0xc
// 0041bdeb: PUSH 0x1
// 0041bded: PUSH 0x615fc4
//   XREF to: 00615fc4 (DATA)
// 0041bdf2: PUSH EBX
// 0041bdf3: MOV [0x00822954],EAX
//   XREF to: 00822954 (WRITE)
// 0041bdf8: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0041bdfd: ADD ESP,0xc
// 0041be00: PUSH 0x1
// 0041be02: PUSH 0x615fd5
//   XREF to: 00615fd5 (DATA)
// 0041be07: PUSH EBX
// 0041be08: MOV [0x00822958],EAX
//   XREF to: 00822958 (WRITE)
// 0041be0d: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0041be12: ADD ESP,0xc
// 0041be15: PUSH 0x1
// 0041be17: PUSH 0x615fe6
//   XREF to: 00615fe6 (DATA)
// 0041be1c: PUSH EBX
// 0041be1d: MOV [0x0082295c],EAX
//   XREF to: 0082295c (WRITE)
// 0041be22: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0041be27: ADD ESP,0xc
// 0041be2a: PUSH 0x1
// 0041be2c: PUSH 0x615ff3
//   XREF to: 00615ff3 (DATA)
// 0041be31: PUSH EBX
// 0041be32: MOV [0x00822960],EAX
//   XREF to: 00822960 (WRITE)
// 0041be37: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0041be3c: ADD ESP,0xc
// 0041be3f: PUSH 0x1
// 0041be41: PUSH 0x616000
//   XREF to: 00616000 (DATA)
// 0041be46: PUSH EBX
// 0041be47: MOV [0x00822964],EAX
//   XREF to: 00822964 (WRITE)
// 0041be4c: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0041be51: ADD ESP,0xc
// 0041be54: PUSH 0x1
// 0041be56: PUSH 0x61600d
//   XREF to: 0061600d (DATA)
// 0041be5b: PUSH EBX
// 0041be5c: MOV [0x00822948],EAX
//   XREF to: 00822948 (WRITE)
// 0041be61: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0041be66: ADD ESP,0xc
// 0041be69: MOV [0x0082294c],EAX
//   XREF to: 0082294c (WRITE)
// 0041be6e: PUSH 0x1
// 0041be70: PUSH 0x61601a
//   XREF to: 0061601a (DATA)
// 0041be75: PUSH EBX
// 0041be76: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0041be7b: ADD ESP,0xc
// 0041be7e: PUSH 0x1
// 0041be80: PUSH 0x616026
//   XREF to: 00616026 (DATA)
// 0041be85: PUSH EBX
// 0041be86: MOV [0x00822968],EAX
//   XREF to: 00822968 (WRITE)
// 0041be8b: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0041be90: ADD ESP,0xc
// 0041be93: PUSH 0x1
// 0041be95: PUSH 0x616033
//   XREF to: 00616033 (DATA)
// 0041be9a: PUSH EBX
// 0041be9b: MOV [0x0082296c],EAX
//   XREF to: 0082296c (WRITE)
// 0041bea0: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0041bea5: ADD ESP,0xc
// 0041bea8: PUSH 0x1
// 0041beaa: PUSH 0x61603e
//   XREF to: 0061603e (DATA)
// 0041beaf: PUSH EBX
// 0041beb0: MOV [0x00822944],EAX
//   XREF to: 00822944 (WRITE)
// 0041beb5: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0041beba: ADD ESP,0xc
// 0041bebd: PUSH 0x1
// 0041bebf: PUSH 0x61604f
//   XREF to: 0061604f (DATA)
// 0041bec4: PUSH EBX
// 0041bec5: MOV [0x00822958],EAX
//   XREF to: 00822958 (WRITE)
// 0041beca: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0041becf: ADD ESP,0xc
// 0041bed2: PUSH 0x1
// 0041bed4: PUSH 0x616060
//   XREF to: 00616060 (DATA)
// 0041bed9: PUSH EBX
// 0041beda: MOV [0x0082295c],EAX
//   XREF to: 0082295c (WRITE)
// 0041bedf: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0041bee4: ADD ESP,0xc
// 0041bee7: PUSH 0x1
// 0041bee9: PUSH 0x61606c
//   XREF to: 0061606c (DATA)
// 0041beee: PUSH EBX
// 0041beef: MOV [0x00822968],EAX
//   XREF to: 00822968 (WRITE)
// 0041bef4: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0041bef9: ADD ESP,0xc
// 0041befc: PUSH EDI
// 0041befd: MOV [0x0082296c],EAX
//   XREF to: 0082296c (WRITE)
// 0041bf02: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 0041bf07: MOV EAX,dword ptr [EAX + 0x7140]
// 0041bf0d: ADD ESP,0x4
// 0041bf10: MOV dword ptr [ESI + 0xbf38],EAX
// 0041bf16: CMP EAX,0x14
// 0041bf19: JG 0x0041bf48
//   XREF to: 0041bf48 (CONDITIONAL_JUMP)
// 0041bf1b: MOV EAX,[0x00822948]
//   Label: LAB_0041bf1b
//   XREF to: 00822948 (READ)
// 0041bf20: MOV dword ptr [ESI + 0x24ac],EAX
// 0041bf26: MOV EAX,[0x0082294c]
//   XREF to: 0082294c (READ)
// 0041bf2b: PUSH ESI
// 0041bf2c: MOV dword ptr [ESI + 0x24f0],EAX
// 0041bf32: CALL core_enemy.cpp_CEnemy_FUN_004a9650
//   XREF to: 004a9650 (UNCONDITIONAL_CALL)
// 0041bf37: ADD ESP,0x4
// 0041bf3a: MOV dword ptr [ESI + 0xbecc],0x0
// 0041bf44: POP EDI
// 0041bf45: POP ESI
// 0041bf46: POP EBX
// 0041bf47: RET
// 0041bf48: MOV ECX,0x616079
//   Label: LAB_0041bf48
//   XREF to: 00616079 (PARAM)
// 0041bf4d: MOV EBX,0x12f
// 0041bf52: PUSH 0x61608d
//   XREF to: 0061608d (DATA)
// 0041bf57: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0041bf5d: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0041bf63: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0041bf68: ADD ESP,0x4
// 0041bf6b: JMP 0x0041bf1b
//   XREF to: 0041bf1b (UNCONDITIONAL_JUMP)
