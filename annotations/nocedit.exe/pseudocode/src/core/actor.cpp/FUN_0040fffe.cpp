// Name: core_actor.cpp_FUN_0040fffe
// Address: 0040fffe
// Address Range: [[0040fffe, 004100ed]]
// Convention: unknown
// Signature: undefined core_actor.cpp_FUN_0040fffe()
// Cross-references:
//   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 (0040eed0) at 0040ffe7 [CONDITIONAL_JUMP]
// Globals:
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEventList* g_CEventListPtr = 02d05310
//   CEditorTools g_CEditorToolsPtr
//   CEventList g_CEventListInstance
// Function calls:
//   core_event.cpp_CEventList_FUN_004add40
//   core_event.cpp_CRuleList_insert_FUN_004b1680
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740

#include "nocturne.h"

undefined4 core_actor_cpp_FUN_0040fffe(undefined4 param_1,undefined4 param_2,int unaff_EBX)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  uint uVar5;
  SIZE_T SVar6;
  BADSPACEBASE *in_ESP;
  char *pcVar7;
  CRuleList *pCVar8;
  char *pcVar9;
  byte bVar10;
  char in_stack_000033b4;
  char in_stack_00003624;
  char in_stack_00003688;
  
  bVar10 = 0;
code_r0x0040fffe:
  pcVar4 = (char *)core_event_cpp_CEventList_FUN_004add40(g_CEventListPtr);
  if (pcVar4 != (char *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar4);
    do {
      while( true ) {
        iVar2 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,&stack0x00003554,&stack0x000033b0,0xdc,1);
        if (iVar2 == 0) {
          return 0;
        }
        if (in_stack_000033b4 == '\0') {
          if (*(int *)(unaff_EBX + 0x5c) < (*(CRuleList **)(unaff_EBX + 0x68))->list_size) {
            core_event_cpp_CRuleList_remove_FUN_004b17c0(*(CRuleList **)(unaff_EBX + 0x68));
          }
          return 1;
        }
        pcVar4 = crt_string_c_strstr_FUN_005fedd0(&stack0x000033b4,"=>");
        if (pcVar4 != (char *)0x0) break;
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Please input rule as \"<condition> => <event>\"");
      }
      pcVar9 = &stack0x000033b8;
      pcVar7 = &stack0x00003624;
      *pcVar4 = '\0';
      do {
        cVar1 = *pcVar9;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      uVar5 = 0xffffffff;
      pcVar9 = &stack0x00003624;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + (uint)bVar10 * -2 + 1;
      } while (cVar1 != '\0');
      SVar6 = ~uVar5 - 1;
      if (0 < (int)SVar6) {
        puVar3 = &stack0x00003623 + ~uVar5;
        do {
          if ((g_CharacterClassificationTable[(byte)(puVar3[-1] + 1)] & 2U) == 0) break;
          SVar6 = SVar6 - 1;
          puVar3 = puVar3 + -1;
        } while (0 < (int)SVar6);
      }
      (&stack0x00003624)[SVar6] = 0;
      puVar3 = &stack0x00003625;
      while ((g_CharacterClassificationTable[(byte)(in_stack_00003624 + 1)] & 2U) != 0) {
        crt_string_c_memmove_FUN_005fe5e0(&stack0x00003624,puVar3,SVar6);
        SVar6 = SVar6 - 1;
      }
      pcVar9 = &stack0x00003688;
      *pcVar4 = '=';
      do {
        cVar1 = pcVar4[2];
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[3];
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      uVar5 = 0xffffffff;
      pcVar4 = &stack0x00003688;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + (uint)bVar10 * -2 + 1;
      } while (cVar1 != '\0');
      SVar6 = ~uVar5 - 1;
      if (0 < (int)SVar6) {
        puVar3 = &stack0x00003687 + ~uVar5;
        do {
          if ((g_CharacterClassificationTable[(byte)(puVar3[-1] + 1)] & 2U) == 0) break;
          SVar6 = SVar6 - 1;
          puVar3 = puVar3 + -1;
        } while (0 < (int)SVar6);
      }
      (&stack0x00003688)[SVar6] = 0;
      while ((g_CharacterClassificationTable[(byte)(in_stack_00003688 + 1)] & 2U) != 0) {
        crt_string_c_memmove_FUN_005fe5e0(&stack0x00003688,&stack0x00003689,SVar6);
        SVar6 = SVar6 - 1;
      }
      pcVar4 = (char *)core_event_cpp_CEventList_FUN_004add00(g_CEventListPtr);
      if (pcVar4 == (char *)0x0) goto code_r0x0040fffe;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar4);
    } while( true );
  }
  pCVar8 = *(CRuleList **)(unaff_EBX + 0x68);
  if (pCVar8->list_size <= *(int *)(unaff_EBX + 0x5c)) {
    core_event_cpp_CRuleList_insert_FUN_004b1680(pCVar8);
    return 1;
  }
  pCVar8 = pCVar8 + *(int *)(unaff_EBX + 0x5c) * 0x19 + 1;
  pcVar4 = &stack0x00003618;
  do {
    cVar1 = *pcVar4;
    *(char *)&pCVar8->list_size = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    *(char *)((int)&pCVar8->list_size + 1) = cVar1;
    pCVar8 = (CRuleList *)((int)&pCVar8->list_size + 2);
  } while (cVar1 != '\0');
  pcVar4 = &stack0x0000367c;
  pcVar9 = (char *)(*(int *)(unaff_EBX + 0x68) + 0x1f8 + *(int *)(unaff_EBX + 0x5c) * 100);
  do {
    cVar1 = *pcVar4;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') {
      return 1;
    }
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  return 1;
}


// Assembly code:
// 0040fffe: LEA EAX,[ESP + 0x3678]
//   Label: core_actor.cpp_FUN_0040fffe
// 00410005: PUSH EAX
// 00410006: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 0041000c: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 0041000d: CALL core_event.cpp_CEventList_FUN_004add40
//   XREF to: 004add40 (UNCONDITIONAL_CALL)
// 00410012: ADD ESP,0x8
// 00410015: TEST EAX,EAX
// 00410017: JNZ 0x00410052
//   XREF to: 00410052 (CONDITIONAL_JUMP)
// 00410019: MOV ESI,dword ptr [EBX + 0x68]
// 0041001c: MOV EAX,dword ptr [EBX + 0x5c]
// 0041001f: CMP EAX,dword ptr [ESI]
// 00410021: JL 0x00410066
//   XREF to: 00410066 (CONDITIONAL_JUMP)
// 00410023: LEA EAX,[ESP + 0x3678]
// 0041002a: PUSH EAX
// 0041002b: LEA EAX,[ESP + 0x3618]
// 00410032: PUSH EAX
// 00410033: MOV EBP,dword ptr [EBX + 0x5c]
// 00410036: PUSH EBP
// 00410037: PUSH ESI
// 00410038: CALL core_event.cpp_CRuleList_insert_FUN_004b1680
//   XREF to: 004b1680 (UNCONDITIONAL_CALL)
// 0041003d: ADD ESP,0x10
// 00410040: MOV ESI,0x1
// 00410045: MOV EAX,ESI
// 00410047: ADD ESP,0x37dc
// 0041004d: POP EBP
// 0041004e: POP EDI
// 0041004f: POP ESI
// 00410050: POP EBX
// 00410051: RET
// 00410052: PUSH EAX
//   Label: LAB_00410052
// 00410053: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 00410058: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 00410059: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0041005e: ADD ESP,0x8
// 00410061: JMP 0x0040fdd3
//   XREF to: 0040fdd3 (UNCONDITIONAL_JUMP)
// 00410066: MOV EDX,EAX
//   Label: LAB_00410066
// 00410068: SHL EAX,0x2
// 0041006b: SUB EAX,EDX
// 0041006d: SHL EAX,0x3
// 00410070: ADD EAX,EDX
// 00410072: ADD ESI,0x4
// 00410075: SHL EAX,0x2
// 00410078: LEA EDI,[ESI + EAX*0x1]
// 0041007b: LEA ESI,[ESP + 0x3614]
// 00410082: PUSH EDI
// 00410083: MOV AL,byte ptr [ESI]
//   Label: LAB_00410083
// 00410085: MOV byte ptr [EDI],AL
// 00410087: CMP AL,0x0
// 00410089: JZ 0x0041009b
//   XREF to: 0041009b (CONDITIONAL_JUMP)
// 0041008b: MOV AL,byte ptr [ESI + 0x1]
// 0041008e: ADD ESI,0x2
// 00410091: MOV byte ptr [EDI + 0x1],AL
// 00410094: ADD EDI,0x2
// 00410097: CMP AL,0x0
// 00410099: JNZ 0x00410083
//   XREF to: 00410083 (CONDITIONAL_JUMP)
// 0041009b: POP EDI
//   Label: LAB_0041009b
// 0041009c: MOV EDX,dword ptr [EBX + 0x5c]
// 0041009f: LEA EAX,[EDX*0x4 + 0x0]
// 004100a6: SUB EAX,EDX
// 004100a8: SHL EAX,0x3
// 004100ab: MOV EDI,dword ptr [EBX + 0x68]
// 004100ae: ADD EAX,EDX
// 004100b0: ADD EDI,0x1f8
// 004100b6: SHL EAX,0x2
// 004100b9: LEA ESI,[ESP + 0x3678]
// 004100c0: ADD EDI,EAX
// 004100c2: PUSH EDI
// 004100c3: MOV AL,byte ptr [ESI]
//   Label: LAB_004100c3
// 004100c5: MOV byte ptr [EDI],AL
// 004100c7: CMP AL,0x0
// 004100c9: JZ 0x004100db
//   XREF to: 004100db (CONDITIONAL_JUMP)
// 004100cb: MOV AL,byte ptr [ESI + 0x1]
// 004100ce: ADD ESI,0x2
// 004100d1: MOV byte ptr [EDI + 0x1],AL
// 004100d4: ADD EDI,0x2
// 004100d7: CMP AL,0x0
// 004100d9: JNZ 0x004100c3
//   XREF to: 004100c3 (CONDITIONAL_JUMP)
// 004100db: POP EDI
//   Label: LAB_004100db
// 004100dc: MOV ESI,0x1
// 004100e1: MOV EAX,ESI
// 004100e3: ADD ESP,0x37dc
// 004100e9: POP EBP
// 004100ea: POP EDI
// 004100eb: POP ESI
// 004100ec: POP EBX
// 004100ed: RET
