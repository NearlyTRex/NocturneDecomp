// Name: core_fire.cpp_FUN_004c9400
// Address: 004c9400
// Address Range: [[004c9400, 004c9440]]
// Convention: unknown
// Signature: undefined core_fire.cpp_FUN_004c9400()

#include "nocturne.h"

void core_fire_cpp_FUN_004c9400(void)

{
  BADSPACEBASE *in_ESP;
  SProjectedVertex *in_stack_00000008;
  float *in_stack_0000000c;
  CVector3i local_10;
  
  local_10.x = (int)ROUND(*in_stack_0000000c * 256f);
  local_10.y = (int)ROUND(in_stack_0000000c[1] * 256f);
  local_10.z = (int)ROUND(in_stack_0000000c[2] * 256f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25(in_stack_00000008,&local_10);
  return;
}
