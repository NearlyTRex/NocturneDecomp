// Name: core_msnedit.cpp_NotGoingtoAddToList_CantAdd_FUN_00538d60
// Address: 00538d60
// Address Range: [[00538d60, 00538de6]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_NotGoingtoAddToList_CantAdd_FUN_00538d60()
// Cross-references:
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 00538650 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_I_m_not_going_to_add_s_i_0063c2c6
//   TerminatedCString s_Can_t_add_s_to_set_list__0063c30c
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   core_msnedit.cpp_FUN_00538f40
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_NotGoingtoAddToList_CantAdd(undefined4 param_1, undefined4
   param_2) */

void core_msnedit_cpp_NotGoingtoAddToList_CantAdd_FUN_00538d60
               (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
               int param_5,char *param_6)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = core_msnedit_cpp_FUN_00538f40();
  if (-1 < iVar2) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"I'm not going to add %s into the set list because it's already there!",param_6,unaff_EBX);
    return;
  }
  if (3 < *(int *)(param_5 + 0x144)) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't add %s to set list - too many sets (%d)!",param_6,4);
    return;
  }
  pcVar3 = (char *)(*(int *)(param_5 + 0x144) * 0x100 + param_5 + 0x148);
  do {
    cVar1 = *param_6;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_6[1];
    param_6 = param_6 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  *(int *)(param_5 + 0x144) = *(int *)(param_5 + 0x144) + 1;
  return;
}


// Assembly code:
// 00538d60: PUSH EBX
//   Label: core_msnedit.cpp_NotGoingtoAddToList_CantAdd_FUN_00538d60
// 00538d61: PUSH ESI
// 00538d62: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00538d66: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00538d6a: PUSH ESI
// 00538d6b: PUSH EBX
// 00538d6c: CALL core_msnedit.cpp_FUN_00538f40
//   XREF to: 00538f40 (UNCONDITIONAL_CALL)
// 00538d71: ADD ESP,0x8
// 00538d74: TEST EAX,EAX
// 00538d76: JGE 0x00538d9d
//   XREF to: 00538d9d (CONDITIONAL_JUMP)
// 00538d78: MOV EDX,dword ptr [EBX + 0x144]
// 00538d7e: CMP EDX,0x4
// 00538d81: JL 0x00538db5
//   XREF to: 00538db5 (CONDITIONAL_JUMP)
// 00538d83: PUSH 0x4
// 00538d85: PUSH ESI
// 00538d86: PUSH 0x63c30c
//   XREF to: 0063c30c (DATA)
// 00538d8b: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00538d91: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 00538d92: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00538d97: ADD ESP,0x10
// 00538d9a: POP ESI
// 00538d9b: POP EBX
// 00538d9c: RET
// 00538d9d: PUSH ESI
//   Label: LAB_00538d9d
// 00538d9e: PUSH 0x63c2c6
//   XREF to: 0063c2c6 (DATA)
// 00538da3: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00538da9: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 00538daa: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00538daf: ADD ESP,0xc
// 00538db2: POP ESI
// 00538db3: POP EBX
// 00538db4: RET
// 00538db5: PUSH EDI
//   Label: LAB_00538db5
// 00538db6: MOV EDI,EDX
// 00538db8: LEA EAX,[EBX + 0x148]
// 00538dbe: SHL EDI,0x8
// 00538dc1: ADD EDI,EAX
// 00538dc3: PUSH EDI
// 00538dc4: MOV AL,byte ptr [ESI]
//   Label: LAB_00538dc4
// 00538dc6: MOV byte ptr [EDI],AL
// 00538dc8: CMP AL,0x0
// 00538dca: JZ 0x00538ddc
//   XREF to: 00538ddc (CONDITIONAL_JUMP)
// 00538dcc: MOV AL,byte ptr [ESI + 0x1]
// 00538dcf: ADD ESI,0x2
// 00538dd2: MOV byte ptr [EDI + 0x1],AL
// 00538dd5: ADD EDI,0x2
// 00538dd8: CMP AL,0x0
// 00538dda: JNZ 0x00538dc4
//   XREF to: 00538dc4 (CONDITIONAL_JUMP)
// 00538ddc: POP EDI
//   Label: LAB_00538ddc
// 00538ddd: INC dword ptr [EBX + 0x144]
// 00538de3: POP EDI
// 00538de4: POP ESI
// 00538de5: POP EBX
// 00538de6: RET
