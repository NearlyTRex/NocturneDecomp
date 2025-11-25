// Name: shape_quantize.cpp_CColorQuantizer_quantize_FUN_00554cc0
// Address: 00554cc0
// Address Range: [[00554cc0, 00554d3f]]
// Convention: __cdecl
// Signature: int shape_quantize.cpp_CColorQuantizer_quantize_FUN_00554cc0(CColorQuantizer * this_ptr)
// Cross-references:
//   shape_quantize.cpp_CColorQuantizer_quantizeBitmaps_FUN_005563d0 (005563d0) at 00556402 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_quantize_cpp_00640a73
//   TerminatedCString s_shape_quantize_cpp_00640ab5
//   TerminatedCString s_Nothing_to_quantize_00640ba3
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090
//   shape_quantize.cpp_CColorQuantizer_generateSortedPalette_FUN_00555ff0
//   shape_quantize.cpp_CColorQuantizer_reduceColors_FUN_00555a40

#include "nocturne.h"

int __cdecl shape_quantize_cpp_CColorQuantizer_quantize_FUN_00554cc0(CColorQuantizer *this_ptr)

{
  int iVar1;
  
  if (this_ptr->pixel_count == 0) {
    g_CurrentFilename = "..\\shape\\quantize.cpp";
    g_CurrentLineNumber = 0x61;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Nothing to quantize.");
    return 0;
  }
  shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(this_ptr,0);
  iVar1 = shape_quantize_cpp_CColorQuantizer_reduceColors_FUN_00555a40(this_ptr);
  if (iVar1 == 0) {
    return 0;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->pixel_data,"..\\shape\\quantize.cpp",0x79);
  this_ptr->pixel_data = (void *)0x0;
  shape_quantize_cpp_CColorQuantizer_generateSortedPalette_FUN_00555ff0
            (this_ptr,(uchar *)this_ptr->output_region);
  return 1;
}


// Assembly code:
// 00554cc0: PUSH EBX
//   Label: shape_quantize.cpp_CColorQuantizer_quantize_FUN_00554cc0
// 00554cc1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00554cc5: CMP dword ptr [EBX + 0x4b38],0x0
// 00554ccc: JZ 0x00554ce8
//   XREF to: 00554ce8 (CONDITIONAL_JUMP)
// 00554cce: PUSH 0x0
// 00554cd0: PUSH EBX
// 00554cd1: CALL shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090
//   XREF to: 00555090 (UNCONDITIONAL_CALL)
// 00554cd6: ADD ESP,0x8
// 00554cd9: PUSH EBX
// 00554cda: CALL shape_quantize.cpp_CColorQuantizer_reduceColors_FUN_00555a40
//   XREF to: 00555a40 (UNCONDITIONAL_CALL)
// 00554cdf: ADD ESP,0x4
// 00554ce2: TEST EAX,EAX
// 00554ce4: JNZ 0x00554d0f
//   XREF to: 00554d0f (CONDITIONAL_JUMP)
// 00554ce6: POP EBX
// 00554ce7: RET
// 00554ce8: MOV ECX,0x640a73
//   Label: LAB_00554ce8
//   XREF to: 00640a73 (PARAM)
// 00554ced: MOV EBX,0x61
// 00554cf2: PUSH 0x640ba3
//   XREF to: 00640ba3 (DATA)
// 00554cf7: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00554cfd: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00554d03: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00554d08: ADD ESP,0x4
// 00554d0b: XOR EAX,EAX
// 00554d0d: POP EBX
// 00554d0e: RET
// 00554d0f: PUSH 0x79
//   Label: LAB_00554d0f
// 00554d11: PUSH 0x640ab5
//   XREF to: 00640ab5 (DATA)
// 00554d16: MOV EAX,dword ptr [EBX + 0x4]
// 00554d19: PUSH EAX
// 00554d1a: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00554d1f: ADD ESP,0xc
// 00554d22: LEA EAX,[EBX + 0x4830]
// 00554d28: PUSH EAX
// 00554d29: PUSH EBX
// 00554d2a: MOV dword ptr [EBX + 0x4],0x0
// 00554d31: CALL shape_quantize.cpp_CColorQuantizer_generateSortedPalette_FUN_00555ff0
//   XREF to: 00555ff0 (UNCONDITIONAL_CALL)
// 00554d36: MOV EAX,0x1
// 00554d3b: ADD ESP,0x8
// 00554d3e: POP EBX
// 00554d3f: RET
