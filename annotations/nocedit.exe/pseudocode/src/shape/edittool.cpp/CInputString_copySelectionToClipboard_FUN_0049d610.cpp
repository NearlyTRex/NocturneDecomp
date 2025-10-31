// Name: shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0049d610
// Address: 0049d610
// Address Range: [[0049d610, 0049d65c]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0049d610(CInputString * this_ptr)
// Cross-references:
//   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0049d6c0 (0049d6c0) at 0049d7e1 [UNCONDITIONAL_CALL]
// Globals:
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0049d610(CInputString *this_ptr)

{
  int iVar1;
  CEditorTools *this_ptr_00;
  int iVar2;
  int iVar3;
  char unaff_retaddr;
  
  this_ptr_00 = g_CEditorToolsPtr;
  iVar1 = this_ptr->cursor_position;
  iVar3 = this_ptr->selection_start;
  if (iVar3 != iVar1) {
    iVar2 = iVar1;
    if (iVar1 < iVar3) {
      iVar2 = iVar3;
      iVar3 = iVar1;
    }
    this_ptr->string_data[iVar2] = '\0';
    shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0
              (this_ptr_00,this_ptr->string_data + iVar3);
    this_ptr->string_data[iVar2] = unaff_retaddr;
  }
  return;
}


// Assembly code:
// 0049d610: SUB ESP,0x4
//   Label: shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0049d610
// 0049d613: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0049d617: MOV ECX,dword ptr [EAX + 0x134]
// 0049d61d: MOV EDX,dword ptr [EAX + 0x138]
// 0049d623: CMP EDX,ECX
// 0049d625: JZ 0x0049d659
//   XREF to: 0049d659 (CONDITIONAL_JUMP)
// 0049d627: PUSH ESI
// 0049d628: PUSH EBX
// 0049d629: JLE 0x0049d631
//   XREF to: 0049d631 (CONDITIONAL_JUMP)
// 0049d62b: MOV EBX,EDX
// 0049d62d: MOV EDX,ECX
// 0049d62f: MOV ECX,EBX
// 0049d631: LEA EBX,[EAX + ECX*0x1]
//   Label: LAB_0049d631
// 0049d634: ADD EAX,EDX
// 0049d636: XOR ECX,ECX
// 0049d638: PUSH EAX
// 0049d639: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0049d63f: MOV CL,byte ptr [EBX]
// 0049d641: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0049d642: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x4] (WRITE)
// 0049d646: MOV byte ptr [EBX],0x0
// 0049d649: CALL shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0
//   XREF to: 004a1bc0 (UNCONDITIONAL_CALL)
// 0049d64e: ADD ESP,0x8
// 0049d651: MOV AL,byte ptr [ESP + 0x8]
//   XREF to: Stack[-0x4] (READ)
// 0049d655: MOV byte ptr [EBX],AL
// 0049d657: POP EBX
// 0049d658: POP ESI
// 0049d659: ADD ESP,0x4
//   Label: LAB_0049d659
// 0049d65c: RET
