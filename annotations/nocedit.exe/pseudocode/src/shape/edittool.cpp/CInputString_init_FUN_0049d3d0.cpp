// Name: shape_edittool.cpp_CInputString_init_FUN_0049d3d0
// Address: 0049d3d0
// Address Range: [[0049d3d0, 0049d459]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CInputString_init_FUN_0049d3d0(CInputString * this_ptr, char * source_string, int max_length, int param4, int param5, int render_mode)
// Cross-references:
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 (0049fb70) at 0049fc2a [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 (0049db10) at 0049db78 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_memset_FUN_005fde40
//   crt_string.c_strncpy_FUN_00600f40

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CInputString_init_FUN_0049d3d0
          (CInputString *this_ptr,char *source_string,int max_length,int param4,int param5,
          int render_mode)

{
  char *pcVar1;
  uint uVar2;
  CInputString *pCVar3;
  byte bVar4;
  
  bVar4 = 0;
  this_ptr->max_length = max_length;
  if (299 < (uint)max_length) {
    this_ptr->max_length = 299;
  }
  crt_memory_c_memset_FUN_005fde40(this_ptr,0,300);
  if (max_length == 0) {
    this_ptr->current_length = 0;
  }
  else {
    crt_string_c_strncpy_FUN_00600f40(this_ptr->string_data,(char *)max_length,this_ptr->max_length)
    ;
    uVar2 = 0xffffffff;
    pCVar3 = this_ptr;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar1 = pCVar3->string_data;
      pCVar3 = (CInputString *)((int)pCVar3 + (uint)bVar4 * -2 + 1);
    } while (*pcVar1 != '\0');
    this_ptr->current_length = ~uVar2 - 1;
  }
  this_ptr->selection_start = 0;
  this_ptr->cursor_position = this_ptr->current_length;
  this_ptr->mask_mode = render_mode;
  return;
}


// Assembly code:
// 0049d3d0: PUSH EBX
//   Label: shape_edittool.cpp_CInputString_init_FUN_0049d3d0
// 0049d3d1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0049d3d5: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0049d3d9: MOV dword ptr [EBX + 0x12c],ECX
// 0049d3df: CMP ECX,0x12c
// 0049d3e5: JC 0x0049d3f1
//   XREF to: 0049d3f1 (CONDITIONAL_JUMP)
// 0049d3e7: MOV dword ptr [EBX + 0x12c],0x12b
// 0049d3f1: PUSH 0x12c
//   Label: LAB_0049d3f1
// 0049d3f6: PUSH 0x0
// 0049d3f8: PUSH EBX
// 0049d3f9: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0049d3fe: ADD ESP,0xc
// 0049d401: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0049d405: TEST ECX,ECX
// 0049d407: JNZ 0x0049d431
//   XREF to: 0049d431 (CONDITIONAL_JUMP)
// 0049d409: MOV dword ptr [EBX + 0x130],ECX
// 0049d40f: MOV ECX,dword ptr [EBX + 0x130]
//   Label: LAB_0049d40f
// 0049d415: MOV dword ptr [EBX + 0x138],0x0
// 0049d41f: MOV dword ptr [EBX + 0x134],ECX
// 0049d425: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 0049d429: MOV dword ptr [EBX + 0x13c],ECX
// 0049d42f: POP EBX
// 0049d430: RET
// 0049d431: PUSH EDI
//   Label: LAB_0049d431
// 0049d432: PUSH ESI
// 0049d433: MOV ESI,dword ptr [EBX + 0x12c]
// 0049d439: PUSH ESI
// 0049d43a: PUSH ECX
// 0049d43b: PUSH EBX
// 0049d43c: CALL crt_string.c_strncpy_FUN_00600f40
//   XREF to: 00600f40 (UNCONDITIONAL_CALL)
// 0049d441: ADD ESP,0xc
// 0049d444: MOV EDI,EBX
// 0049d446: SUB ECX,ECX
// 0049d448: DEC ECX
// 0049d449: XOR EAX,EAX
// 0049d44b: SCASB.REPNE ES:EDI
// 0049d44d: NOT ECX
// 0049d44f: DEC ECX
// 0049d450: MOV dword ptr [EBX + 0x130],ECX
// 0049d456: POP ESI
// 0049d457: POP EDI
// 0049d458: JMP 0x0049d40f
//   XREF to: 0049d40f (UNCONDITIONAL_JUMP)
