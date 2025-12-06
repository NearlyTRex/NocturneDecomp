// Name: core_actor.cpp_FUN_0040fffe
// Address: 0040fffe
// Address Range: [[0040fffe, 004100ed]]
// Convention: unknown
// Signature: undefined core_actor.cpp_FUN_0040fffe()

#include "nocturne.h"

uint core_actor_cpp_FUN_0040fffe(uint param_1,uint param_2,int unaff_EBX)

{
  char cVar1;
  int iVar2;
  byte *puVar3;
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
