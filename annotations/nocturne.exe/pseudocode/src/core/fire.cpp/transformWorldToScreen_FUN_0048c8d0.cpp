// Name: core_fire.cpp_transformWorldToScreen_FUN_0048c8d0
// Address: 0048c8d0
// Address Range: [[0048c8d0, 0048c910]]
// Convention: unknown
// Signature: void core_fire_cpp_transformWorldToScreen_FUN_0048c8d0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_fire_cpp_transformWorldToScreen_FUN_0048c8d0(void)

{
  SProjectedVertex *in_stack_00000008;
  float *in_stack_0000000c;
  CVector3i local_10;
  
  local_10.x = (int)ROUND(*in_stack_0000000c * 256.0f);
  local_10.y = (int)ROUND(in_stack_0000000c[1] * 256.0f);
  local_10.z = (int)ROUND(in_stack_0000000c[2] * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25(in_stack_00000008,&local_10);
  return;
}
