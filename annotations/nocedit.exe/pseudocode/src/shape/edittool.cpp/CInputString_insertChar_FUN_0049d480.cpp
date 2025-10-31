// Name: shape_edittool.cpp_CInputString_insertChar_FUN_0049d480
// Address: 0049d480
// Address Range: [[0049d480, 0049d502]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CInputString_insertChar_FUN_0049d480(CInputString * this_ptr, char character, int advance_cursor)
// Cross-references:
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 (0049fb70) at 0049ffa4 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0049d660 (0049d660) at 0049d6a3 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 (0049db10) at 0049dedf [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CInputString_insertChar_FUN_0049d480
          (CInputString *this_ptr,char character,int advance_cursor)

{
  int iVar1;
  int in_stack_00000010;
  
  iVar1 = this_ptr->max_length + -1;
  if (this_ptr->cursor_position < iVar1) {
    if (this_ptr->current_length < iVar1) {
      this_ptr->current_length = this_ptr->current_length + 1;
    }
    iVar1 = this_ptr->cursor_position;
    crt_string_c_memmove_FUN_005fe5e0
              (this_ptr->string_data + iVar1 + 1,this_ptr->string_data + iVar1,
               this_ptr->current_length - iVar1);
    this_ptr->string_data[this_ptr->cursor_position] = (char)advance_cursor;
    if (in_stack_00000010 != 0) {
      this_ptr->cursor_position = this_ptr->cursor_position + 1;
      this_ptr->string_data[this_ptr->current_length] = '\0';
      return;
    }
  }
  this_ptr->string_data[this_ptr->current_length] = '\0';
  return;
}


// Assembly code:
// 0049d480: PUSH EBX
//   Label: shape_edittool.cpp_CInputString_insertChar_FUN_0049d480
// 0049d481: PUSH EDI
// 0049d482: PUSH EBP
// 0049d483: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0049d487: MOV EAX,dword ptr [EBX + 0x12c]
// 0049d48d: MOV EDX,dword ptr [EBX + 0x134]
// 0049d493: DEC EAX
// 0049d494: CMP EAX,EDX
// 0049d496: JLE 0x0049d4e3
//   XREF to: 0049d4e3 (CONDITIONAL_JUMP)
// 0049d498: MOV ECX,dword ptr [EBX + 0x130]
// 0049d49e: CMP EAX,ECX
// 0049d4a0: JLE 0x0049d4ad
//   XREF to: 0049d4ad (CONDITIONAL_JUMP)
// 0049d4a2: PUSH ESI
// 0049d4a3: LEA ESI,[ECX + 0x1]
// 0049d4a6: MOV dword ptr [EBX + 0x130],ESI
// 0049d4ac: POP ESI
// 0049d4ad: MOV EAX,dword ptr [EBX + 0x130]
//   Label: LAB_0049d4ad
// 0049d4b3: MOV EDI,dword ptr [EBX + 0x134]
// 0049d4b9: SUB EAX,EDI
// 0049d4bb: PUSH EAX
// 0049d4bc: LEA EAX,[EDI + EBX*0x1]
// 0049d4bf: PUSH EAX
// 0049d4c0: LEA EAX,[EDI + 0x1]
// 0049d4c3: ADD EAX,EBX
// 0049d4c5: PUSH EAX
// 0049d4c6: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 0049d4cb: ADD ESP,0xc
// 0049d4ce: MOV EAX,dword ptr [EBX + 0x134]
// 0049d4d4: MOV DL,byte ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0049d4d8: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0049d4dc: MOV byte ptr [EBX + EAX*0x1],DL
// 0049d4df: TEST EBP,EBP
// 0049d4e1: JNZ 0x0049d4f0
//   XREF to: 0049d4f0 (CONDITIONAL_JUMP)
// 0049d4e3: ADD EBX,dword ptr [EBX + 0x130]
//   Label: LAB_0049d4e3
// 0049d4e9: MOV byte ptr [EBX],0x0
// 0049d4ec: POP EBP
// 0049d4ed: POP EDI
// 0049d4ee: POP EBX
// 0049d4ef: RET
// 0049d4f0: INC dword ptr [EBX + 0x134]
//   Label: LAB_0049d4f0
// 0049d4f6: ADD EBX,dword ptr [EBX + 0x130]
// 0049d4fc: MOV byte ptr [EBX],0x0
// 0049d4ff: POP EBP
// 0049d500: POP EDI
// 0049d501: POP EBX
// 0049d502: RET
