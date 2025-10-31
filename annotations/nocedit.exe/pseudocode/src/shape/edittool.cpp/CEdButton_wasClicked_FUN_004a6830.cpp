// Name: shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830
// Address: 004a6830
// Address Range: [[004a6830, 004a68d2]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830(CEdButton * this_ptr)
// Cross-references:
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 0050764d [UNCONDITIONAL_CALL]
//   core_main.c_showLicenseAgreement_FUN_005070f0 (005070f0) at 00507262 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340 (004a4340) at 004a45a0 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 (0049e130) at 0049e2ee [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 (0049e9d0) at 0049ef6f [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 (0049db10) at 0049df43 [UNCONDITIONAL_CALL]
// Globals:
//   CEdButton* g_ActiveButton
//   int g_MouseX
//   int g_MouseY
//   int g_MouseButtonFlags

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830(CEdButton *this_ptr)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = (byte)g_MouseButtonFlags;
  if ((((this_ptr->enabled == 0) && (this_ptr->left <= g_MouseX)) && (this_ptr->top <= g_MouseY)) &&
     ((g_MouseX < this_ptr->right && (g_MouseY < this_ptr->bottom)))) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (g_ActiveButton == this_ptr) {
    this_ptr->button_state = iVar2;
    if (((bVar1 & 1) == 0) &&
       (g_ActiveButton = (CEdButton *)((uint)g_ActiveButton ^ (uint)this_ptr), iVar2 != 0)) {
      this_ptr->button_state = 0;
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
    return iVar2;
  }
  if (((g_ActiveButton == (CEdButton *)0x0) && (((byte)g_MouseButtonFlags & 1) != 0)) &&
     (iVar2 != 0)) {
    this_ptr->button_state = 1;
    g_ActiveButton = this_ptr;
    return 0;
  }
  return 0;
}


// Assembly code:
// 004a6830: PUSH EBX
//   Label: shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830
// 004a6831: MOV ECX,dword ptr [0x02cf2b00]
//   XREF to: 02cf2b00 (READ)
// 004a6837: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004a683b: CMP dword ptr [EAX],0x0
// 004a683e: JZ 0x004a686e
//   XREF to: 004a686e (CONDITIONAL_JUMP)
// 004a6840: XOR EDX,EDX
//   Label: LAB_004a6840
// 004a6842: CMP ECX,EAX
//   Label: LAB_004a6842
// 004a6844: JNZ 0x004a68a5
//   XREF to: 004a68a5 (CONDITIONAL_JUMP)
// 004a6846: MOV BH,byte ptr [0x02cf6a94]
//   XREF to: 02cf6a94 (READ)
// 004a684c: MOV dword ptr [EAX + 0x18],EDX
// 004a684f: TEST BH,0x1
// 004a6852: JNZ 0x004a68a1
//   XREF to: 004a68a1 (CONDITIONAL_JUMP)
// 004a6854: XOR ECX,EAX
// 004a6856: TEST EDX,EDX
// 004a6858: JZ 0x004a68a1
//   XREF to: 004a68a1 (CONDITIONAL_JUMP)
// 004a685a: MOV dword ptr [EAX + 0x18],0x0
// 004a6861: MOV EAX,0x1
// 004a6866: MOV dword ptr [0x02cf2b00],ECX
//   Label: LAB_004a6866
//   XREF to: 02cf2b00 (WRITE)
// 004a686c: POP EBX
// 004a686d: RET
// 004a686e: MOV EDX,dword ptr [0x02cf6a8c]
//   Label: LAB_004a686e
//   XREF to: 02cf6a8c (READ)
// 004a6874: CMP EDX,dword ptr [EAX + 0x8]
// 004a6877: JL 0x004a6840
//   XREF to: 004a6840 (CONDITIONAL_JUMP)
// 004a6879: MOV EDX,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 004a687f: CMP EDX,dword ptr [EAX + 0xc]
// 004a6882: JL 0x004a6840
//   XREF to: 004a6840 (CONDITIONAL_JUMP)
// 004a6884: MOV EDX,dword ptr [0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 004a688a: CMP EDX,dword ptr [EAX + 0x10]
// 004a688d: JGE 0x004a6840
//   XREF to: 004a6840 (CONDITIONAL_JUMP)
// 004a688f: MOV EDX,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 004a6895: CMP EDX,dword ptr [EAX + 0x14]
// 004a6898: JGE 0x004a6840
//   XREF to: 004a6840 (CONDITIONAL_JUMP)
// 004a689a: MOV EDX,0x1
// 004a689f: JMP 0x004a6842
//   XREF to: 004a6842 (UNCONDITIONAL_JUMP)
// 004a68a1: XOR EAX,EAX
//   Label: LAB_004a68a1
// 004a68a3: JMP 0x004a6866
//   XREF to: 004a6866 (UNCONDITIONAL_JUMP)
// 004a68a5: TEST ECX,ECX
//   Label: LAB_004a68a5
// 004a68a7: JNZ 0x004a68b6
//   XREF to: 004a68b6 (CONDITIONAL_JUMP)
// 004a68a9: TEST byte ptr [0x02cf6a94],0x1
//   XREF to: 02cf6a94 (READ)
// 004a68b0: JZ 0x004a68b6
//   XREF to: 004a68b6 (CONDITIONAL_JUMP)
// 004a68b2: TEST EDX,EDX
// 004a68b4: JNZ 0x004a68c0
//   XREF to: 004a68c0 (CONDITIONAL_JUMP)
// 004a68b6: XOR EAX,EAX
//   Label: LAB_004a68b6
// 004a68b8: MOV dword ptr [0x02cf2b00],ECX
//   XREF to: 02cf2b00 (WRITE)
// 004a68be: POP EBX
// 004a68bf: RET
// 004a68c0: MOV ECX,EAX
//   Label: LAB_004a68c0
// 004a68c2: MOV dword ptr [EAX + 0x18],0x1
// 004a68c9: XOR EAX,EAX
// 004a68cb: MOV dword ptr [0x02cf2b00],ECX
//   XREF to: 02cf2b00 (WRITE)
// 004a68d1: POP EBX
// 004a68d2: RET
