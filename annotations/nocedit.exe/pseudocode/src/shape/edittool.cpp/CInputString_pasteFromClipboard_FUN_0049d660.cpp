// Name: shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0049d660
// Address: 0049d660
// Address Range: [[0049d660, 0049d6b8]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0049d660(CInputString * this_ptr)
// Cross-references:
//   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0049d6c0 (0049d6c0) at 0049d807 [UNCONDITIONAL_CALL]
// Globals:
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   char[256] g_CharacterClassificationTable
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   shape_edittool.cpp_CEditorTools_getClipboardText_FUN_004a1b30
//   shape_edittool.cpp_CInputString_insertChar_FUN_0049d480
//   shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_0049d660(CInputString *this_ptr)

{
  char character;
  char *pcVar1;
  
  pcVar1 = shape_edittool_cpp_CEditorTools_getClipboardText_FUN_004a1b30(g_CEditorToolsPtr);
  while( true ) {
    character = *pcVar1;
    if (character == '\0') break;
    if ((g_CharacterClassificationTable[(byte)(character + 1)] & 8U) != 0) {
      if (character == '\t') {
        character = ' ';
      }
      shape_edittool_cpp_CInputString_insertChar_FUN_0049d480(this_ptr,character,1);
    }
    pcVar1 = pcVar1 + 1;
  }
  shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0049d460(this_ptr);
  return;
}


// Assembly code:
// 0049d660: PUSH EBX
//   Label: shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0049d660
// 0049d661: PUSH ESI
// 0049d662: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0049d666: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0049d66c: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0049d66d: CALL shape_edittool.cpp_CEditorTools_getClipboardText_FUN_004a1b30
//   XREF to: 004a1b30 (UNCONDITIONAL_CALL)
// 0049d672: ADD ESP,0x4
// 0049d675: MOV EBX,EAX
// 0049d677: XOR EAX,EAX
//   Label: LAB_0049d677
// 0049d679: MOV AL,byte ptr [EBX]
// 0049d67b: TEST EAX,EAX
// 0049d67d: JLE 0x0049d6ad
//   XREF to: 0049d6ad (CONDITIONAL_JUMP)
// 0049d67f: MOV DL,AL
// 0049d681: INC DL
// 0049d683: AND EDX,0xff
// 0049d689: TEST byte ptr [EDX + 0x6849c4],0x8
//   XREF to: 006849c4 (DATA)
// 0049d690: JNZ 0x0049d695
//   XREF to: 0049d695 (CONDITIONAL_JUMP)
// 0049d692: INC EBX
//   Label: LAB_0049d692
// 0049d693: JMP 0x0049d677
//   XREF to: 0049d677 (UNCONDITIONAL_JUMP)
// 0049d695: CMP EAX,0x9
//   Label: LAB_0049d695
// 0049d698: JNZ 0x0049d69f
//   XREF to: 0049d69f (CONDITIONAL_JUMP)
// 0049d69a: MOV EAX,0x20
// 0049d69f: PUSH 0x1
//   Label: LAB_0049d69f
// 0049d6a1: PUSH EAX
// 0049d6a2: PUSH ESI
// 0049d6a3: CALL shape_edittool.cpp_CInputString_insertChar_FUN_0049d480
//   XREF to: 0049d480 (UNCONDITIONAL_CALL)
// 0049d6a8: ADD ESP,0xc
// 0049d6ab: JMP 0x0049d692
//   XREF to: 0049d692 (UNCONDITIONAL_JUMP)
// 0049d6ad: PUSH ESI
//   Label: LAB_0049d6ad
// 0049d6ae: CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460
//   XREF to: 0049d460 (UNCONDITIONAL_CALL)
// 0049d6b3: ADD ESP,0x4
// 0049d6b6: POP ESI
// 0049d6b7: POP EBX
// 0049d6b8: RET
