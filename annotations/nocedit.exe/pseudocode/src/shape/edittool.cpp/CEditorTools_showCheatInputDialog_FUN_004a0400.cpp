// Name: shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_004a0400
// Address: 004a0400
// Address Range: [[004a0400, 004a0422]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_004a0400(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, int dialog_flags)
// Cross-references:
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004df278 [UNCONDITIONAL_CALL]
// Function calls:
//   shape_edittool.cpp_showTextInputDialog_FUN_0049db10

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CEditorTools_showCheatInputDialog_FUN_004a0400
          (CEditorTools *this_ptr,char *prompt_text,char *input_buffer,int buffer_size,
          int dialog_flags)

{
  int iVar1;
  
  iVar1 = shape_edittool_cpp_showTextInputDialog_FUN_0049db10
                    ((int)prompt_text,input_buffer,(char *)buffer_size,dialog_flags,1);
  return iVar1;
}


// Assembly code:
// 004a0400: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_004a0400
// 004a0401: PUSH ESI
// 004a0402: PUSH 0x1
// 004a0404: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 004a0408: PUSH EDX
// 004a0409: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004a040d: PUSH ECX
// 004a040e: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 004a0412: PUSH EBX
// 004a0413: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 004a0417: PUSH ESI
// 004a0418: CALL shape_edittool.cpp_showTextInputDialog_FUN_0049db10
//   XREF to: 0049db10 (UNCONDITIONAL_CALL)
// 004a041d: ADD ESP,0x14
// 004a0420: POP ESI
// 004a0421: POP EBX
// 004a0422: RET
