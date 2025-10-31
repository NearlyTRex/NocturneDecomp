// Name: core_msnedit.cpp_FUN_00537410
// Address: 00537410
// Address Range: [[00537410, 005374ae]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_00537410()
// Globals:
//   TerminatedCString s_Confirm_new_actor_name_0063b7b6
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   int g_ConfirmNewActorNames = 0x1
//   CEditorTools g_CEditorToolsPtr
//   CDemonMission g_CDemonMissionInstance
// Function calls:
//   core_msnedit.cpp_FUN_0053d220
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0

#include "nocturne.h"

undefined4 core_msnedit_cpp_FUN_00537410(void)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  char *in_stack_00000004;
  undefined4 local_2c;
  char *apcStack_28 [7];
  
  pcVar4 = (char *)&local_2c;
  pcVar3 = in_stack_00000004;
  if (g_ConfirmNewActorNames == 0) {
    return 1;
  }
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  do {
    iVar2 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,"Confirm new actor name",(char *)&local_2c,0x1e,1)
    ;
    local_2c = apcStack_28;
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = core_msnedit_cpp_FUN_0053d220(g_CDemonMissionPtr);
    pcVar3 = (char *)&local_2c;
  } while (iVar2 == 0);
  apcStack_28[0] = in_stack_00000004;
  do {
    cVar1 = *pcVar3;
    *in_stack_00000004 = cVar1;
    if (cVar1 == '\0') {
      return 1;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    in_stack_00000004[1] = cVar1;
    in_stack_00000004 = in_stack_00000004 + 2;
  } while (cVar1 != '\0');
  return 1;
}


// Assembly code:
// 00537410: PUSH EBX
//   Label: core_msnedit.cpp_FUN_00537410
// 00537411: PUSH ESI
// 00537412: PUSH EDI
// 00537413: SUB ESP,0x20
// 00537416: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0053741a: CMP dword ptr [0x00680814],0x0
//   XREF to: 00680814 (READ)
// 00537421: JNZ 0x0053742f
//   XREF to: 0053742f (CONDITIONAL_JUMP)
// 00537423: MOV EAX,0x1
// 00537428: ADD ESP,0x20
//   Label: LAB_00537428
// 0053742b: POP EDI
// 0053742c: POP ESI
// 0053742d: POP EBX
// 0053742e: RET
// 0053742f: MOV EDI,ESP
//   Label: LAB_0053742f
// 00537431: MOV ESI,EBX
// 00537433: PUSH EDI
// 00537434: MOV AL,byte ptr [ESI]
//   Label: LAB_00537434
// 00537436: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x2c] (DATA)
// 00537438: CMP AL,0x0
// 0053743a: JZ 0x0053744c
//   XREF to: 0053744c (CONDITIONAL_JUMP)
// 0053743c: MOV AL,byte ptr [ESI + 0x1]
// 0053743f: ADD ESI,0x2
// 00537442: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x2b] (WRITE)
// 00537445: ADD EDI,0x2
// 00537448: CMP AL,0x0
// 0053744a: JNZ 0x00537434
//   XREF to: 00537434 (CONDITIONAL_JUMP)
// 0053744c: POP EDI
//   Label: LAB_0053744c
// 0053744d: PUSH 0x1
//   Label: LAB_0053744d
// 0053744f: PUSH 0x1e
// 00537451: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x2c] (DATA)
// 00537455: PUSH EAX
// 00537456: PUSH 0x63b7b6
//   XREF to: 0063b7b6 (DATA)
// 0053745b: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00537461: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00537462: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 00537467: ADD ESP,0x14
// 0053746a: TEST EAX,EAX
// 0053746c: JZ 0x00537428
//   XREF to: 00537428 (CONDITIONAL_JUMP)
// 0053746e: MOV EAX,ESP
// 00537470: PUSH EAX
// 00537471: PUSH EBX
// 00537472: MOV EDI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 00537478: PUSH EDI
//   XREF to: 02f33740 (DATA)
// 00537479: CALL core_msnedit.cpp_FUN_0053d220
//   XREF to: 0053d220 (UNCONDITIONAL_CALL)
// 0053747e: ADD ESP,0xc
// 00537481: TEST EAX,EAX
// 00537483: JZ 0x0053744d
//   XREF to: 0053744d (CONDITIONAL_JUMP)
// 00537485: MOV ESI,ESP
// 00537487: MOV EDI,EBX
// 00537489: PUSH EDI
// 0053748a: MOV AL,byte ptr [ESI]
//   Label: LAB_0053748a
//   XREF to: Stack[-0x2c] (DATA)
// 0053748c: MOV byte ptr [EDI],AL
// 0053748e: CMP AL,0x0
// 00537490: JZ 0x005374a2
//   XREF to: 005374a2 (CONDITIONAL_JUMP)
// 00537492: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x2b] (READ)
// 00537495: ADD ESI,0x2
// 00537498: MOV byte ptr [EDI + 0x1],AL
// 0053749b: ADD EDI,0x2
// 0053749e: CMP AL,0x0
// 005374a0: JNZ 0x0053748a
//   XREF to: 0053748a (CONDITIONAL_JUMP)
// 005374a2: POP EDI
//   Label: LAB_005374a2
// 005374a3: MOV EAX,0x1
// 005374a8: ADD ESP,0x20
// 005374ab: POP EDI
// 005374ac: POP ESI
// 005374ad: POP EBX
// 005374ae: RET
