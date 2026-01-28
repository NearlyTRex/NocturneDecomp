// Name: shape_design.c_floatEpsilonCompare_FUN_004676b0
// Address: 004676b0
// Address Range: [[004676b0, 004676eb]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_floatEpsilonCompare_FUN_004676b0(float value1,float value2,float epsilon)

#include "nocturne.h"

int __cdecl shape_design_c_floatEpsilonCompare_FUN_004676b0(float value1,float value2,float epsilon)

{
  uint local_18;
  
  local_18 = (uint)(ABS(value1 - value2) < epsilon);
  return local_18;
}
