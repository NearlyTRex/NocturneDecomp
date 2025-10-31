// Name: shape_quantize.cpp_CallFreeAndAllocateThenQuantize_FUN_00556470
// Address: 00556470
// Address Range: [[00556470, 00556484]]
// Convention: unknown
// Signature: undefined shape_quantize.cpp_CallFreeAndAllocateThenQuantize_FUN_00556470()
// Cross-references:
//   shape_quantize.cpp_ColorQuantizationMaybe_FUN_00556490 (00556490) at 00556610 [UNCONDITIONAL_CALL]
// Function calls:
//   shape_quantize.cpp_FreeAndAllocate_ThenQuantize_FUN_005563d0

#include "nocturne.h"

/* Signature: undefined1 shape_quantize.cpp_CallFreeAndAllocateThenQuantize(undefined4 param_1,
   undefined4 param_2) */

void shape_quantize_cpp_CallFreeAndAllocateThenQuantize_FUN_00556470(void)

{
  shape_quantize_cpp_FreeAndAllocate_ThenQuantize_FUN_005563d0();
  return;
}


// Assembly code:
// 00556470: MOV EDX,dword ptr [ESP + 0x8]
//   Label: shape_quantize.cpp_CallFreeAndAllocateThenQuantize_FUN_00556470
//   XREF to: Stack[0x8] (READ)
// 00556474: PUSH EDX
// 00556475: PUSH 0x1
// 00556477: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0055647b: PUSH ECX
// 0055647c: CALL shape_quantize.cpp_FreeAndAllocate_ThenQuantize_FUN_005563d0
//   XREF to: 005563d0 (UNCONDITIONAL_CALL)
// 00556481: ADD ESP,0xc
// 00556484: RET
