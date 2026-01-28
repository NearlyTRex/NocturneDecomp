// Name: shape_cramtex.cpp_qsortRectanglesByActiveFlag_FUN_00446140
// Address: 00446140
// Address Range: [[00446140, 0044615c]]
// Convention: __cdecl
// Signature: int __cdecl shape_cramtex_cpp_qsortRectanglesByActiveFlag_FUN_00446140 (SCramRectangle **rect_a,SCramRectangle **rect_b)

#include "nocturne.h"

int __cdecl
shape_cramtex_cpp_qsortRectanglesByActiveFlag_FUN_00446140
          (SCramRectangle **rect_a,SCramRectangle **rect_b)

{
  int *in_stack_00000004;
  int *in_stack_00000008;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(4);
  return *(int *)(*in_stack_00000004 + 0x24) - *(int *)(*in_stack_00000008 + 0x24);
}
