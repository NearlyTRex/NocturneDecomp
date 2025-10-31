// Name: shape_design.c_checkVertexCountLimit_FUN_00460a10
// Address: 00460a10
// Address Range: [[00460a10, 00460abd]]
// Convention: __cdecl
// Signature: int shape_design.c_checkVertexCountLimit_FUN_00460a10(void)
// Cross-references:
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f279 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_ERROR_Too_many_vertices__0061b96b
//   TerminatedCString s_vertexList_in_2d_c_only__0061b997
//   TerminatedCString s_You_won_t_be_able_to_vie_0061b9c6
//   int g_VertexCount
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_drawText_FUN_00401fd0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

int __cdecl shape_design_c_checkVertexCountLimit_FUN_00460a10(void)

{
  bool bVar1;
  BADSPACEBASE *in_ESP;
  uint local_18;
  
  bVar1 = 20000 < g_VertexCount;
  if (bVar1) {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xffffff98,"ERROR: Too many vertices! (npoints:%d > %d)",g_VertexCount);
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff98,0,0);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff98,"vertexList[] in 2d.c only supports %d vertices");
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff98,0,0x16);
    engine_2d_c_drawText_FUN_00401fd0("You won't be able to view the model, but you can reduce it, etc.",0,0x2c);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  }
  local_18 = (uint)bVar1;
  return local_18;
}


// Assembly code:
// 00460a10: PUSH EBX
//   Label: shape_design.c_checkVertexCountLimit_FUN_00460a10
// 00460a11: PUSH ESI
// 00460a12: PUSH EDI
// 00460a13: PUSH EBP
// 00460a14: MOV EBP,ESP
// 00460a16: SUB ESP,0x58
// 00460a1c: MOV dword ptr [EBP + -0x4],0x4e20
// 00460a23: MOV EAX,[0x01626408]
//   XREF to: 01626408 (READ)
// 00460a28: CMP EAX,dword ptr [EBP + -0x4]
// 00460a2b: JLE 0x00460aad
//   XREF to: 00460aad (CONDITIONAL_JUMP)
// 00460a31: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00460a36: MOV EAX,dword ptr [EBP + -0x4]
// 00460a39: PUSH EAX
// 00460a3a: PUSH dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00460a40: MOV EAX,0x61b96b
//   XREF to: 0061b96b (DATA)
// 00460a45: PUSH EAX
//   XREF to: 0061b96b (DATA)
// 00460a46: LEA EAX,[EBP + -0x58]
// 00460a49: PUSH EAX
// 00460a4a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00460a4f: ADD ESP,0x10
// 00460a52: PUSH 0x0
// 00460a54: PUSH 0x0
// 00460a56: LEA EAX,[EBP + -0x58]
// 00460a59: PUSH EAX
// 00460a5a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00460a5f: ADD ESP,0xc
// 00460a62: MOV EAX,dword ptr [EBP + -0x4]
// 00460a65: PUSH EAX
// 00460a66: MOV EAX,0x61b997
//   XREF to: 0061b997 (DATA)
// 00460a6b: PUSH EAX
//   XREF to: 0061b997 (DATA)
// 00460a6c: LEA EAX,[EBP + -0x58]
// 00460a6f: PUSH EAX
// 00460a70: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00460a75: ADD ESP,0xc
// 00460a78: PUSH 0x16
// 00460a7a: PUSH 0x0
// 00460a7c: LEA EAX,[EBP + -0x58]
// 00460a7f: PUSH EAX
// 00460a80: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00460a85: ADD ESP,0xc
// 00460a88: PUSH 0x2c
// 00460a8a: PUSH 0x0
// 00460a8c: MOV EAX,0x61b9c6
//   XREF to: 0061b9c6 (DATA)
// 00460a91: PUSH EAX
//   XREF to: 0061b9c6 (DATA)
// 00460a92: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00460a97: ADD ESP,0xc
// 00460a9a: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00460a9f: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00460aa4: MOV dword ptr [EBP + -0x8],0x1
// 00460aab: JMP 0x00460ab4
//   XREF to: 00460ab4 (UNCONDITIONAL_JUMP)
// 00460aad: MOV dword ptr [EBP + -0x8],0x0
//   Label: LAB_00460aad
// 00460ab4: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_00460ab4
// 00460ab7: MOV ESP,EBP
// 00460ab9: POP EBP
// 00460aba: POP EDI
// 00460abb: POP ESI
// 00460abc: POP EBX
// 00460abd: RET
