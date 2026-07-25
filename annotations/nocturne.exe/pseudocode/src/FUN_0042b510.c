// Name: FUN_0042b510
// Address: 0042b510
// Address Range: [[0042b510, 0042b564]]
// Convention: unknown
// Signature: void FUN_0042b510(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_0042b510(void)

{
  int *in_stack_00000004;
  int in_stack_00000008;
  float *in_stack_0000000c;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = (int)ROUND(*in_stack_0000000c * _DAT_0059b070);
  local_c = (int)ROUND(in_stack_0000000c[1] * _DAT_0059b070);
  local_8 = (int)ROUND(in_stack_0000000c[2] * _DAT_0059b070);
  wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c
            (in_stack_00000008 * 0x30 + *in_stack_00000004,&local_10);
  return;
}
