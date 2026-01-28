// Name: shape_design.c_clampedArccos_FUN_00461c50
// Address: 00461c50
// Address Range: [[00461c50, 00461cab]]
// Convention: __cdecl
// Signature: double __cdecl shape_design_c_clampedArccos_FUN_00461c50(double dot_product)

#include "nocturne.h"

double __cdecl shape_design_c_clampedArccos_FUN_00461c50(double dot_product)

{
  uint in_stack_00000004;
  ulonglong local_18;
  
  if (-1 < (double)CONCAT44(dot_product._0_4_,in_stack_00000004)) {
    if ((double)CONCAT44(dot_product._0_4_,in_stack_00000004) < 1.0) {
      local_18 = crt_math_c_acos_FUN_00600162((double)CONCAT44(dot_product._0_4_,in_stack_00000004))
      ;
    }
    else {
      local_18 = 0.0;
    }
  }
  else {
    local_18 = 3.141592654;
  }
  return local_18;
}
