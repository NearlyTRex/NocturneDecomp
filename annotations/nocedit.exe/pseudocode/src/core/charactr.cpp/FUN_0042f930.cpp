// Name: core_charactr.cpp_FUN_0042f930
// Address: 0042f930
// Address Range: [[0042f930, 0042f984]]
// Convention: unknown
// Signature: undefined core_charactr.cpp_FUN_0042f930()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_0042f930(void)

{
  BADSPACEBASE *in_ESP;
  int *in_stack_00000004;
  int in_stack_00000008;
  float *in_stack_0000000c;
  CVector3i local_10;
  
  local_10.x = (int)ROUND(*in_stack_0000000c * _DAT_0065b810);
  local_10.y = (int)ROUND(in_stack_0000000c[1] * _DAT_0065b810);
  local_10.z = (int)ROUND(in_stack_0000000c[2] * _DAT_0065b810);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            ((SProjectedVertex *)(in_stack_00000008 * 0x30 + *in_stack_00000004),&local_10);
  return;
}
