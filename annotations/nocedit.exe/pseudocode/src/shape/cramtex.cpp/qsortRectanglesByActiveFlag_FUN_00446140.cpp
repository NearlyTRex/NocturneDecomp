// Name: shape_cramtex.cpp_qsortRectanglesByActiveFlag_FUN_00446140
// Address: 00446140
// Address Range: [[00446140, 0044615c]]
// Convention: __cdecl
// Signature: int shape_cramtex.cpp_qsortRectanglesByActiveFlag_FUN_00446140(SCramRectangle * * rect_a, SCramRectangle * * rect_b)

#include "nocturne.h"

int __cdecl
shape_cramtex_cpp_qsortRectanglesByActiveFlag_FUN_00446140
          (SCramRectangle **rect_a,SCramRectangle **rect_b)

{
  crt_stack_c_stack_probe_FUN_005ff9f3(4);
  return (*rect_a)->active_flag - (*rect_b)->active_flag;
}
