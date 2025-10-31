// Name: shape_cramtex.cpp_qsortRectanglesByActiveFlag_FUN_00446140
// Address: 00446140
// Address Range: [[00446140, 0044615c]]
// Convention: __cdecl
// Signature: int shape_cramtex.cpp_qsortRectanglesByActiveFlag_FUN_00446140(SCramRectangle * * rect_a, SCramRectangle * * rect_b)
// Cross-references:
//   shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160 (00446160) at 00446249 [DATA]
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

int __cdecl
shape_cramtex_cpp_qsortRectanglesByActiveFlag_FUN_00446140
          (SCramRectangle **rect_a,SCramRectangle **rect_b)

{
  crt_stack_c_stack_probe_FUN_005ff9f3(4);
  return (*rect_a)->active_flag - (*rect_b)->active_flag;
}


// Assembly code:
// 00446140: PUSH 0x4
//   Label: shape_cramtex.cpp_qsortRectanglesByActiveFlag_FUN_00446140
// 00446145: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0044614a: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0044614e: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00446152: MOV EAX,dword ptr [EAX]
// 00446154: MOV EDX,dword ptr [EDX]
// 00446156: MOV EAX,dword ptr [EAX + 0x24]
// 00446159: SUB EAX,dword ptr [EDX + 0x24]
// 0044615c: RET
