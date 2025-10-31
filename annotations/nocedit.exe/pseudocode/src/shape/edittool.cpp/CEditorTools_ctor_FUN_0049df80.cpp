// Name: shape_edittool.cpp_CEditorTools_ctor_FUN_0049df80
// Address: 0049df80
// Address Range: [[0049df80, 0049dfac]]
// Convention: __cdecl
// Signature: CEditorTools * shape_edittool.cpp_CEditorTools_ctor_FUN_0049df80(CEditorTools * this_ptr)
// Cross-references:
//   shape_edittool.cpp_staticInit_FUN_0049d170 (0049d170) at 0049d175 [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowStackCount
//   SWindow[5] g_WindowStack
// Function calls:
//   crt_memory.c_memset_FUN_005fde40
//   shape_edittool.cpp_CEditorTools_init_FUN_0049e020

#include "nocturne.h"

CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_ctor_FUN_0049df80(CEditorTools *this_ptr)

{
  g_WindowStackCount = 0;
  crt_memory_c_memset_FUN_005fde40(g_WindowStack,0,0x988);
  shape_edittool_cpp_CEditorTools_init_FUN_0049e020(this_ptr);
  return this_ptr;
}


// Assembly code:
// 0049df80: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_ctor_FUN_0049df80
// 0049df81: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0049df85: PUSH 0x988
// 0049df8a: XOR EDX,EDX
// 0049df8c: PUSH EDX
// 0049df8d: PUSH 0x2cf1ce0
//   XREF to: 02cf1ce0 (DATA)
// 0049df92: MOV dword ptr [0x02cf1cdc],EDX
//   XREF to: 02cf1cdc (WRITE)
// 0049df98: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0049df9d: ADD ESP,0xc
// 0049dfa0: PUSH EBX
// 0049dfa1: CALL shape_edittool.cpp_CEditorTools_init_FUN_0049e020
//   XREF to: 0049e020 (UNCONDITIONAL_CALL)
// 0049dfa6: ADD ESP,0x4
// 0049dfa9: MOV EAX,EBX
// 0049dfab: POP EBX
// 0049dfac: RET
