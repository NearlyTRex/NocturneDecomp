// Name: shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590
// Address: 004a6590
// Address Range: [[004a6590, 004a65d7]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590(CEdButton * this_ptr, int left, int top, int right, int bottom, char * button_text)
// Cross-references:
//   shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_004a6550 (004a6550) at 004a6582 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0 (004a45d0) at 004a4bcd [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 (0049e130) at 0049e2d1 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 (0049e9d0) at 0049ed14 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 (0049db10) at 0049dc87 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004a6590
          (CEdButton *this_ptr,int left,int top,int right,int bottom,char *button_text)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = this_ptr->button_text;
  do {
    cVar1 = *button_text;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = button_text[1];
    button_text = button_text + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  this_ptr->left = left;
  this_ptr->top = top;
  this_ptr->right = right + 1;
  this_ptr->bottom = bottom + 1;
  return;
}


// Assembly code:
// 004a6590: PUSH ESI
//   Label: shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590
// 004a6591: PUSH EDI
// 004a6592: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004a6596: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x18] (READ)
// 004a659a: LEA EDI,[EDX + 0x1c]
// 004a659d: PUSH EDI
// 004a659e: MOV AL,byte ptr [ESI]
//   Label: LAB_004a659e
// 004a65a0: MOV byte ptr [EDI],AL
// 004a65a2: CMP AL,0x0
// 004a65a4: JZ 0x004a65b6
//   XREF to: 004a65b6 (CONDITIONAL_JUMP)
// 004a65a6: MOV AL,byte ptr [ESI + 0x1]
// 004a65a9: ADD ESI,0x2
// 004a65ac: MOV byte ptr [EDI + 0x1],AL
// 004a65af: ADD EDI,0x2
// 004a65b2: CMP AL,0x0
// 004a65b4: JNZ 0x004a659e
//   XREF to: 004a659e (CONDITIONAL_JUMP)
// 004a65b6: POP EDI
//   Label: LAB_004a65b6
// 004a65b7: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004a65bb: MOV dword ptr [EDX + 0x8],EDI
// 004a65be: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 004a65c2: MOV dword ptr [EDX + 0xc],EDI
// 004a65c5: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 004a65c9: INC EDI
// 004a65ca: MOV dword ptr [EDX + 0x10],EDI
// 004a65cd: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x14] (READ)
// 004a65d1: INC EDI
// 004a65d2: MOV dword ptr [EDX + 0x14],EDI
// 004a65d5: POP EDI
// 004a65d6: POP ESI
// 004a65d7: RET
