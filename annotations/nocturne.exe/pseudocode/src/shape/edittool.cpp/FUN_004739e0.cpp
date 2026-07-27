// Name: shape_edittool.cpp_FUN_004739e0
// Address: 004739e0
// Address Range: [[004739e0, 00473a52]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_004739e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void shape_edittool_cpp_FUN_004739e0(void)

{
  uint in_stack_00000004;
  float *in_stack_00000008;
  uint in_stack_0000000c;
  byte local_40 [16];
  uint local_30;
  int local_2c;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = (int)ROUND(*in_stack_00000008 * _DAT_0059ca4c);
  local_c = (int)ROUND(in_stack_00000008[1] * _DAT_0059ca4c);
  local_8 = (int)ROUND(in_stack_00000008[2] * _DAT_0059ca4c);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c(local_40,&local_10);
  if ((local_30 & 0x80000000) != 0) {
    return;
  }
  shape_edittool_cpp_FUN_004737a0
            (in_stack_00000004,(int)local_30 >> 0x10,local_2c >> 0x10,in_stack_0000000c);
  return;
}
