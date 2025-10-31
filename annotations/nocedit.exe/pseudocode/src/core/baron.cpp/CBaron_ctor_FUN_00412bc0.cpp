// Name: core_baron.cpp_CBaron_ctor_FUN_00412bc0
// Address: 00412bc0
// Address Range: [[00412bc0, 00412ca1]]
// Convention: __cdecl
// Signature: CBaron * core_baron.cpp_CBaron_ctor_FUN_00412bc0(CBaron * this_ptr)
// Cross-references:
//   core_baron.cpp_FUN_00412b80 (00412b80) at 00412b9a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_baron_dfm_00614ed7
//   TerminatedCString s_none_00614ee1
//   undefined4 s_one_00614ee2
//   undefined4 s_ne_00614ee3
//   undefined4 s_e_00614ee4
//   TerminatedCString s_none_00614ee6
//   undefined4 s_one_00614ee7
//   undefined4 s_ne_00614ee8
//   undefined4 s_e_00614ee9
//   TerminatedCString s_baronshell_kfm_00614eeb
//   CDemonActor_vtable g_CBaronVTable
//   CKeyFramedModelInstance g_CKeyFramedModelInstanceInstance
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_hero.cpp_FUN_004f2340
//   core_skeleton.cpp_FUN_005a0840

#include "nocturne.h"

CBaron * __cdecl core_baron_cpp_CBaron_ctor_FUN_00412bc0(CBaron *this_ptr)

{
  char cVar1;
  CBaron *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CBaron *)core_hero_cpp_FUN_004f2340();
  (pCVar2->field0_0x0).base_character.base_actor.metadata.vtable = &g_CBaronVTable;
  core_skeleton_cpp_FUN_005a0840();
  pCVar2->field1_0x1fbd4[0xd4] = '\0';
  pCVar2->field1_0x1fbd4[0xd5] = '\0';
  pCVar2->field1_0x1fbd4[0xd6] = -0x80;
  pCVar2->field1_0x1fbd4[0xd7] = '?';
  pCVar2->field1_0x1fbd4[0xd0] = '\0';
  pCVar2->field1_0x1fbd4[0xd1] = '\0';
  pCVar2->field1_0x1fbd4[0xd2] = '\0';
  pCVar2->field1_0x1fbd4[0xd3] = '\0';
  *(undefined4 *)(pCVar2->field1_0x1fbd4 + 0xcc) = *(undefined4 *)(pCVar2->field1_0x1fbd4 + 0xd0);
  *(undefined4 *)(pCVar2->field1_0x1fbd4 + 200) = *(undefined4 *)(pCVar2->field1_0x1fbd4 + 0xcc);
  pCVar2->field1_0x1fbd4[0xd8] = '\0';
  pCVar2->field1_0x1fbd4[0xd9] = '\0';
  pCVar2->field1_0x1fbd4[0xda] = '\0';
  pCVar2->field1_0x1fbd4[0xdb] = '\0';
  pcVar3 = "none";
  pCVar2->field1_0x1fbd4[0xdc] = '\0';
  pCVar2->field1_0x1fbd4[0xdd] = '\0';
  pCVar2->field1_0x1fbd4[0xde] = '\0';
  pCVar2->field1_0x1fbd4[0xdf] = '\0';
  (pCVar2->field0_0x0).base_character.base_actor.is_transparent = 1;
  pcVar4 = pCVar2->field1_0x1fbd4;
  pCVar2->field1_0x1fbd4[0xf8] = '\0';
  pCVar2->field1_0x1fbd4[0xf9] = '\0';
  pCVar2->field1_0x1fbd4[0xfa] = '\0';
  pCVar2->field1_0x1fbd4[0xfb] = '\0';
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "none";
  pcVar4 = pCVar2->field1_0x1fbd4 + 100;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&g_CKeyFramedModelInstanceInstance,"baronshell.kfm");
  pCVar2->field1_0x1fbd4[0xfc] = '\0';
  pCVar2->field1_0x1fbd4[0xfd] = '\0';
  pCVar2->field1_0x1fbd4[0xfe] = '\0';
  pCVar2->field1_0x1fbd4[0xff] = '\0';
  return pCVar2;
}


// Assembly code:
// 00412bc0: PUSH EBX
//   Label: core_baron.cpp_CBaron_ctor_FUN_00412bc0
// 00412bc1: PUSH ESI
// 00412bc2: PUSH EDI
// 00412bc3: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00412bc7: PUSH EDX
// 00412bc8: CALL core_hero.cpp_FUN_004f2340
//   XREF to: 004f2340 (UNCONDITIONAL_CALL)
// 00412bcd: ADD ESP,0x4
// 00412bd0: PUSH 0x614ed7
//   XREF to: 00614ed7 (DATA)
// 00412bd5: MOV EBX,EAX
// 00412bd7: ADD EAX,0x158
// 00412bdc: PUSH EAX
// 00412bdd: MOV dword ptr [EAX + -0x4],0x65a074
//   XREF to: 0065a074 (DATA)
// 00412be4: CALL core_skeleton.cpp_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 00412be9: LEA EAX,[EBX + 0x1fc9c]
// 00412bef: MOV dword ptr [EBX + 0x1fca8],0x3f800000
// 00412bf9: MOV dword ptr [EAX + 0x8],0x0
// 00412c00: MOV EDX,dword ptr [EAX + 0x8]
// 00412c03: MOV dword ptr [EAX + 0x4],EDX
// 00412c06: MOV EDX,dword ptr [EAX + 0x4]
// 00412c09: MOV dword ptr [EAX],EDX
// 00412c0b: MOV dword ptr [EBX + 0x1fcac],0x0
// 00412c15: MOV ESI,0x614ee1
//   XREF to: 00614ee1 (DATA)
// 00412c1a: MOV dword ptr [EBX + 0x1fcb0],0x0
// 00412c24: ADD ESP,0x8
// 00412c27: MOV dword ptr [EBX + 0xfc],0x1
// 00412c31: LEA EDI,[EBX + 0x1fbd4]
// 00412c37: MOV dword ptr [EBX + 0x1fccc],0x0
// 00412c41: PUSH EDI
// 00412c42: MOV AL,byte ptr [ESI]
//   Label: LAB_00412c42
//   XREF to: 00614ee1 (READ)
//   XREF to: 00614ee3 (READ)
// 00412c44: MOV byte ptr [EDI],AL
// 00412c46: CMP AL,0x0
// 00412c48: JZ 0x00412c5a
//   XREF to: 00412c5a (CONDITIONAL_JUMP)
// 00412c4a: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00614ee2 (READ)
//   XREF to: 00614ee4 (READ)
// 00412c4d: ADD ESI,0x2
// 00412c50: MOV byte ptr [EDI + 0x1],AL
// 00412c53: ADD EDI,0x2
// 00412c56: CMP AL,0x0
// 00412c58: JNZ 0x00412c42
//   XREF to: 00412c42 (CONDITIONAL_JUMP)
// 00412c5a: POP EDI
//   Label: LAB_00412c5a
// 00412c5b: MOV ESI,0x614ee6
//   XREF to: 00614ee6 (DATA)
// 00412c60: LEA EDI,[EBX + 0x1fc38]
// 00412c66: PUSH EDI
// 00412c67: MOV AL,byte ptr [ESI]
//   Label: LAB_00412c67
//   XREF to: 00614ee6 (READ)
//   XREF to: 00614ee8 (READ)
// 00412c69: MOV byte ptr [EDI],AL
// 00412c6b: CMP AL,0x0
// 00412c6d: JZ 0x00412c7f
//   XREF to: 00412c7f (CONDITIONAL_JUMP)
// 00412c6f: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00614ee7 (READ)
//   XREF to: 00614ee9 (READ)
// 00412c72: ADD ESI,0x2
// 00412c75: MOV byte ptr [EDI + 0x1],AL
// 00412c78: ADD EDI,0x2
// 00412c7b: CMP AL,0x0
// 00412c7d: JNZ 0x00412c67
//   XREF to: 00412c67 (CONDITIONAL_JUMP)
// 00412c7f: POP EDI
//   Label: LAB_00412c7f
// 00412c80: PUSH 0x614eeb
//   XREF to: 00614eeb (DATA)
// 00412c85: PUSH 0x82251c
//   XREF to: 0082251c (DATA)
// 00412c8a: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 00412c8f: ADD ESP,0x8
// 00412c92: MOV EAX,EBX
// 00412c94: MOV dword ptr [EBX + 0x1fcd0],0x0
// 00412c9e: POP EDI
// 00412c9f: POP ESI
// 00412ca0: POP EBX
// 00412ca1: RET
