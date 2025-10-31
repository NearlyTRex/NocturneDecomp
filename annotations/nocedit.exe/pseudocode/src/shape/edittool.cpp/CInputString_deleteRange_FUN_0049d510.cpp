// Name: shape_edittool.cpp_CInputString_deleteRange_FUN_0049d510
// Address: 0049d510
// Address Range: [[0049d510, 0049d57c]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CInputString_deleteRange_FUN_0049d510(CInputString * this_ptr, int start_pos, int end_pos)
// Cross-references:
//   shape_edittool.cpp_CInputString_backspace_FUN_0049d5d0 (0049d5d0) at 0049d5f6 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580 (0049d580) at 0049d5b5 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0049d6c0 (0049d6c0) at 0049d8e3 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CInputString_deleteRange_FUN_0049d510
          (CInputString *this_ptr,int start_pos,int end_pos)

{
  int iVar1;
  
  if (start_pos < 0) {
    start_pos = 0;
  }
  if (this_ptr->current_length < end_pos) {
    end_pos = this_ptr->current_length;
  }
  if (start_pos < end_pos) {
    crt_string_c_memmove_FUN_005fe5e0
              (this_ptr->string_data + start_pos,this_ptr->string_data + end_pos,
               this_ptr->current_length - end_pos);
    iVar1 = this_ptr->current_length - (end_pos - start_pos);
    this_ptr->current_length = iVar1;
    if (iVar1 < this_ptr->cursor_position) {
      this_ptr->cursor_position = iVar1;
    }
    this_ptr->string_data[this_ptr->current_length] = '\0';
  }
  return;
}


// Assembly code:
// 0049d510: PUSH EBX
//   Label: shape_edittool.cpp_CInputString_deleteRange_FUN_0049d510
// 0049d511: PUSH ESI
// 0049d512: PUSH EDI
// 0049d513: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0049d517: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0049d51b: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0049d51f: TEST EDI,EDI
// 0049d521: JL 0x0049d579
//   XREF to: 0049d579 (CONDITIONAL_JUMP)
// 0049d523: MOV EDX,dword ptr [EBX + 0x130]
//   Label: LAB_0049d523
// 0049d529: CMP ESI,EDX
// 0049d52b: JLE 0x0049d52f
//   XREF to: 0049d52f (CONDITIONAL_JUMP)
// 0049d52d: MOV ESI,EDX
// 0049d52f: CMP EDI,ESI
//   Label: LAB_0049d52f
// 0049d531: JGE 0x0049d575
//   XREF to: 0049d575 (CONDITIONAL_JUMP)
// 0049d533: MOV EAX,dword ptr [EBX + 0x130]
// 0049d539: SUB EAX,ESI
// 0049d53b: PUSH EAX
// 0049d53c: LEA EAX,[EBX + ESI*0x1]
// 0049d53f: PUSH EAX
// 0049d540: LEA EAX,[EBX + EDI*0x1]
// 0049d543: PUSH EAX
// 0049d544: SUB ESI,EDI
// 0049d546: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 0049d54b: MOV ECX,dword ptr [EBX + 0x130]
// 0049d551: ADD ESP,0xc
// 0049d554: SUB ECX,ESI
// 0049d556: MOV ESI,dword ptr [EBX + 0x134]
// 0049d55c: MOV dword ptr [EBX + 0x130],ECX
// 0049d562: CMP ESI,ECX
// 0049d564: JLE 0x0049d56c
//   XREF to: 0049d56c (CONDITIONAL_JUMP)
// 0049d566: MOV dword ptr [EBX + 0x134],ECX
// 0049d56c: ADD EBX,dword ptr [EBX + 0x130]
//   Label: LAB_0049d56c
// 0049d572: MOV byte ptr [EBX],0x0
// 0049d575: POP EDI
//   Label: LAB_0049d575
// 0049d576: POP ESI
// 0049d577: POP EBX
// 0049d578: RET
// 0049d579: XOR EDI,EDI
//   Label: LAB_0049d579
// 0049d57b: JMP 0x0049d523
//   XREF to: 0049d523 (UNCONDITIONAL_JUMP)
