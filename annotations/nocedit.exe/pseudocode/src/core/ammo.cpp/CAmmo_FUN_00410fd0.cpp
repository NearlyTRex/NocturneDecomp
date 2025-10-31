// Name: core_ammo.cpp_CAmmo_FUN_00410fd0
// Address: 00410fd0
// Address Range: [[00410fd0, 004111a7]]
// Convention: unknown
// Signature: undefined core_ammo.cpp_CAmmo_FUN_00410fd0()
// Cross-references:
//   core_ammobox.cpp_AllocateMemoryMaybe_FUN_00411700 (00411700) at 004117cc [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004dd930 (004dd930) at 004dd991 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_addItem_FUN_004fd600 (004fd600) at 004fe21a [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_createAmmoFromWeapon_FUN_004fe900 (004fe900) at 004fe984 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10 (004ffe10) at 004ffe65 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_00410fa4 = 00411012
//   TerminatedCString s_CGun_00614971
//   TerminatedCString s_gatbullet_kfm_00614976
//   TerminatedCString s_woodbullet_kfm_00614993
//   TerminatedCString s_silverbullet_kfm_006149a2
//   TerminatedCString s_goldbullet_kfm_006149b3
//   TerminatedCString s_lithiumbullet_kfm_006149c2
//   TerminatedCString s_mercurybullet_kfm_006149d4
//   TerminatedCString s_CShotgun_006149e6
//   TerminatedCString s_shell_kfm_006149ef
//   TerminatedCString s_CCrossbow_006149f9
//   TerminatedCString s_holystake_kfm_00614a03
//   TerminatedCString s_stake_kfm_00614a11
//   TerminatedCString s_CDynamite_00614a1b
//   TerminatedCString s_dynamitebundle_kfm_00614a25
//   TerminatedCString s_CTommyGun_00614a38
//   TerminatedCString s_tommybullet_kfm_00614a42
//   TerminatedCString s_CFlameThrower_00614a52
//   TerminatedCString s_fgunammo_kfm_00614a60
//   TerminatedCString s_CElephantGun_00614a6d
//   TerminatedCString s_eleshell_kfm_00614a7a
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   crt_string.c_strcmp_FUN_005fef20

#include "nocturne.h"

/* Signature: undefined1 actors_other_ammo.cpp_CAmmo_FUN_00410fd0(CAmmo* param_1_00, undefined4
   param_2_00, undefined4 param_3, undefined4 sClassNameMaybe) */

void core_ammo_cpp_CAmmo_FUN_00410fd0(void)

{
  CKeyFramedModelInstance *this_ptr;
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *in_stack_00000004;
  char *in_stack_00000008;
  char *pcVar5;
  
  iVar2 = (int)in_stack_00000004;
  pcVar5 = (char *)((int)in_stack_00000004 + 0x2d4);
  pcVar4 = in_stack_00000008;
  if (pcVar5 != in_stack_00000008) {
    do {
      cVar1 = *pcVar4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
  }
  iVar3 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000008,"CGun");
  if (iVar3 == 0) {
    switch(*(undefined4 *)((int)in_stack_00000004 + 0x318)) {
    case 1:
      pcVar5 = "holybullet.kfm";
      break;
    case 2:
      pcVar5 = "woodbullet.kfm";
      break;
    case 3:
      pcVar5 = "silverbullet.kfm";
      break;
    case 4:
      pcVar5 = "goldbullet.kfm";
      break;
    default:
      pcVar5 = "gatbullet.kfm";
      break;
    case 7:
      pcVar5 = "lithiumbullet.kfm";
      break;
    case 8:
      pcVar5 = "mercurybullet.kfm";
    }
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)((int)in_stack_00000004 + 0x158),pcVar5);
  }
  iVar3 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000008,"CShotgun");
  if (iVar3 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)((int)in_stack_00000004 + 0x158),"shell.kfm");
  }
  iVar3 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000008,"CCrossbow");
  if (iVar3 == 0) {
    this_ptr = (CKeyFramedModelInstance *)((int)in_stack_00000004 + 0x158);
    if (*(int *)((int)in_stack_00000004 + 0x318) == 1) {
      in_stack_00000004 = "holystake.kfm";
    }
    else {
      in_stack_00000004 = "stake.kfm";
    }
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(this_ptr,in_stack_00000004);
  }
  iVar3 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000008,"CDynamite");
  if (iVar3 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)(iVar2 + 0x158),"dynamitebundle.kfm");
  }
  iVar3 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000008,"CTommyGun");
  if (iVar3 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)(iVar2 + 0x158),"tommybullet.kfm");
  }
  iVar3 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000008,"CFlameThrower");
  if (iVar3 == 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)(iVar2 + 0x158),"fgunammo.kfm");
  }
  iVar3 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000008,"CElephantGun");
  if (iVar3 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
              ((CKeyFramedModelInstance *)(iVar2 + 0x158));
    return;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)(iVar2 + 0x158),"eleshell.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(iVar2 + 0x158));
  return;
}


// Assembly code:
// 00410fd0: PUSH EBX
//   Label: core_ammo.cpp_CAmmo_FUN_00410fd0
// 00410fd1: PUSH EDI
// 00410fd2: PUSH EBP
// 00410fd3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00410fd7: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00410fdb: LEA EDI,[EBX + 0x2d4]
// 00410fe1: CMP EDI,EBP
// 00410fe3: JNZ 0x00411118
//   XREF to: 00411118 (CONDITIONAL_JUMP)
// 00410fe9: PUSH 0x614971
//   Label: LAB_00410fe9
//   XREF to: 00614971 (DATA)
// 00410fee: PUSH EBP
// 00410fef: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 00410ff4: ADD ESP,0x8
// 00410ff7: TEST EAX,EAX
// 00410ff9: JNZ 0x00411026
//   XREF to: 00411026 (CONDITIONAL_JUMP)
// 00410ffb: MOV EAX,dword ptr [EBX + 0x318]
// 00411001: DEC EAX
// 00411002: CMP EAX,0x7
// 00411005: JA 0x0041113b
//   XREF to: 0041113b (CONDITIONAL_JUMP)
// 0041100b: JMP dword ptr [EAX*0x4 + 0x410fa4]
//   Label: switchD
//   XREF to: 00411012 (COMPUTED_JUMP)
//   XREF to: 0041113b (COMPUTED_JUMP)
//   XREF to: 00411145 (COMPUTED_JUMP)
//   XREF to: 0041114f (COMPUTED_JUMP)
//   XREF to: 00411159 (COMPUTED_JUMP)
//   XREF to: 00411163 (COMPUTED_JUMP)
//   XREF to: 0041116d (COMPUTED_JUMP)
//   XREF to: 00410fa4 (DATA)
// 00411012: PUSH 0x614984
//   Label: caseD_1
//   XREF to: 00614984 (DATA)
// 00411017: LEA EAX,[EBX + 0x158]
//   Label: LAB_00411017
// 0041101d: PUSH EAX
// 0041101e: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 00411023: ADD ESP,0x8
// 00411026: PUSH 0x6149e6
//   Label: LAB_00411026
//   XREF to: 006149e6 (DATA)
// 0041102b: PUSH EBP
// 0041102c: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 00411031: ADD ESP,0x8
// 00411034: TEST EAX,EAX
// 00411036: JNZ 0x0041104c
//   XREF to: 0041104c (CONDITIONAL_JUMP)
// 00411038: PUSH 0x6149ef
//   XREF to: 006149ef (DATA)
// 0041103d: LEA EAX,[EBX + 0x158]
// 00411043: PUSH EAX
// 00411044: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 00411049: ADD ESP,0x8
// 0041104c: PUSH 0x6149f9
//   Label: LAB_0041104c
//   XREF to: 006149f9 (DATA)
// 00411051: PUSH EBP
// 00411052: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 00411057: ADD ESP,0x8
// 0041105a: TEST EAX,EAX
// 0041105c: JNZ 0x00411081
//   XREF to: 00411081 (CONDITIONAL_JUMP)
// 0041105e: MOV EDX,dword ptr [EBX + 0x318]
// 00411064: LEA EAX,[EBX + 0x158]
// 0041106a: CMP EDX,0x1
// 0041106d: JNZ 0x00411177
//   XREF to: 00411177 (CONDITIONAL_JUMP)
// 00411073: PUSH 0x614a03
//   XREF to: 00614a03 (DATA)
// 00411078: PUSH EAX
//   Label: LAB_00411078
// 00411079: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 0041107e: ADD ESP,0x8
// 00411081: PUSH 0x614a1b
//   Label: LAB_00411081
//   XREF to: 00614a1b (DATA)
// 00411086: PUSH EBP
// 00411087: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 0041108c: ADD ESP,0x8
// 0041108f: TEST EAX,EAX
// 00411091: JNZ 0x004110a7
//   XREF to: 004110a7 (CONDITIONAL_JUMP)
// 00411093: PUSH 0x614a25
//   XREF to: 00614a25 (DATA)
// 00411098: LEA EAX,[EBX + 0x158]
// 0041109e: PUSH EAX
// 0041109f: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004110a4: ADD ESP,0x8
// 004110a7: PUSH 0x614a38
//   Label: LAB_004110a7
//   XREF to: 00614a38 (DATA)
// 004110ac: PUSH EBP
// 004110ad: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 004110b2: ADD ESP,0x8
// 004110b5: TEST EAX,EAX
// 004110b7: JNZ 0x004110cd
//   XREF to: 004110cd (CONDITIONAL_JUMP)
// 004110b9: PUSH 0x614a42
//   XREF to: 00614a42 (DATA)
// 004110be: LEA EAX,[EBX + 0x158]
// 004110c4: PUSH EAX
// 004110c5: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004110ca: ADD ESP,0x8
// 004110cd: PUSH 0x614a52
//   Label: LAB_004110cd
//   XREF to: 00614a52 (DATA)
// 004110d2: PUSH EBP
// 004110d3: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 004110d8: ADD ESP,0x8
// 004110db: TEST EAX,EAX
// 004110dd: JNZ 0x004110f3
//   XREF to: 004110f3 (CONDITIONAL_JUMP)
// 004110df: PUSH 0x614a60
//   XREF to: 00614a60 (DATA)
// 004110e4: LEA EAX,[EBX + 0x158]
// 004110ea: PUSH EAX
// 004110eb: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004110f0: ADD ESP,0x8
// 004110f3: PUSH 0x614a6d
//   Label: LAB_004110f3
//   XREF to: 00614a6d (DATA)
// 004110f8: PUSH EBP
// 004110f9: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 004110fe: ADD ESP,0x8
// 00411101: TEST EAX,EAX
// 00411103: JZ 0x00411181
//   XREF to: 00411181 (CONDITIONAL_JUMP)
// 00411105: ADD EBX,0x158
// 0041110b: PUSH EBX
// 0041110c: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 00411111: ADD ESP,0x4
// 00411114: POP EBP
// 00411115: POP EDI
// 00411116: POP EBX
// 00411117: RET
// 00411118: PUSH ESI
//   Label: LAB_00411118
// 00411119: MOV ESI,EBP
// 0041111b: PUSH EDI
// 0041111c: MOV AL,byte ptr [ESI]
//   Label: LAB_0041111c
// 0041111e: MOV byte ptr [EDI],AL
// 00411120: CMP AL,0x0
// 00411122: JZ 0x00411134
//   XREF to: 00411134 (CONDITIONAL_JUMP)
// 00411124: MOV AL,byte ptr [ESI + 0x1]
// 00411127: ADD ESI,0x2
// 0041112a: MOV byte ptr [EDI + 0x1],AL
// 0041112d: ADD EDI,0x2
// 00411130: CMP AL,0x0
// 00411132: JNZ 0x0041111c
//   XREF to: 0041111c (CONDITIONAL_JUMP)
// 00411134: POP EDI
//   Label: LAB_00411134
// 00411135: POP ESI
// 00411136: JMP 0x00410fe9
//   XREF to: 00410fe9 (UNCONDITIONAL_JUMP)
// 0041113b: PUSH 0x614976
//   Label: caseD_6
//   XREF to: 00614976 (DATA)
// 00411140: JMP 0x00411017
//   XREF to: 00411017 (UNCONDITIONAL_JUMP)
// 00411145: PUSH 0x614993
//   Label: caseD_2
//   XREF to: 00614993 (DATA)
// 0041114a: JMP 0x00411017
//   XREF to: 00411017 (UNCONDITIONAL_JUMP)
// 0041114f: PUSH 0x6149a2
//   Label: caseD_3
//   XREF to: 006149a2 (DATA)
// 00411154: JMP 0x00411017
//   XREF to: 00411017 (UNCONDITIONAL_JUMP)
// 00411159: PUSH 0x6149b3
//   Label: caseD_4
//   XREF to: 006149b3 (DATA)
// 0041115e: JMP 0x00411017
//   XREF to: 00411017 (UNCONDITIONAL_JUMP)
// 00411163: PUSH 0x6149c2
//   Label: caseD_7
//   XREF to: 006149c2 (DATA)
// 00411168: JMP 0x00411017
//   XREF to: 00411017 (UNCONDITIONAL_JUMP)
// 0041116d: PUSH 0x6149d4
//   Label: caseD_8
//   XREF to: 006149d4 (DATA)
// 00411172: JMP 0x00411017
//   XREF to: 00411017 (UNCONDITIONAL_JUMP)
// 00411177: PUSH 0x614a11
//   Label: LAB_00411177
//   XREF to: 00614a11 (DATA)
// 0041117c: JMP 0x00411078
//   XREF to: 00411078 (UNCONDITIONAL_JUMP)
// 00411181: PUSH 0x614a7a
//   Label: LAB_00411181
//   XREF to: 00614a7a (DATA)
// 00411186: LEA EAX,[EBX + 0x158]
// 0041118c: PUSH EAX
// 0041118d: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 00411192: ADD ESP,0x8
// 00411195: ADD EBX,0x158
// 0041119b: PUSH EBX
// 0041119c: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 004111a1: ADD ESP,0x4
// 004111a4: POP EBP
// 004111a5: POP EDI
// 004111a6: POP EBX
// 004111a7: RET
