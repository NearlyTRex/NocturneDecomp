// Name: core_fire.cpp_FUN_0049eb90
// Address: 0049eb90
// Address Range: [[0049eb90, 0049ebd0]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049eb90(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_fire_cpp_FUN_0049eb90(void)

{
  SProjectedVertex *in_stack_00000008;
  float *in_stack_0000000c;
  CVector3i CStack_10;
  
  CStack_10.x = (int)ROUND(*in_stack_0000000c * _DAT_005f64e4);
  CStack_10.y = (int)ROUND(in_stack_0000000c[1] * _DAT_005f64e4);
  CStack_10.z = (int)ROUND(in_stack_0000000c[2] * _DAT_005f64e4);
  engine_special_cpp_FUN_0055d9ec(in_stack_00000008,&CStack_10);
  return;
}
