// Name: crt_math.c_handle_math_error_FUN_0060c02b
// Address: 0060c02b
// Address Range: [[0060c02b, 0060c0ba]]
// Convention: __mathinternal
// Signature: double crt_math.c_handle_math_error_FUN_0060c02b(void)

#include "nocturne.h"

double __mathinternal crt_math_c_handle_math_error_FUN_0060c02b(void)

{
  uint errorFlags;
  double dVar1;
  double in_stack_00000004;
  byte in_stack_0000000c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  if (in_stack_0000000c == 0) {
LAB_0060c06b:
    errorFlags = in_stack_0000000c | 0x8100;
    if ((in_stack_0000000c == 6) && (in_stack_00000004 < 0.0)) {
      errorFlags = 0x1106;
    }
  }
  else {
    if (3 < in_stack_0000000c) {
      if ((in_stack_0000000c == 4) && (in_stack_00000004 < 0.0)) {
        local_18 = 0;
        local_14 = 0;
        goto LAB_0060c0a7;
      }
      goto LAB_0060c06b;
    }
    errorFlags = in_stack_0000000c | 0x2040;
  }
  dVar1 = crt_math_c_set_math_errno_FUN_0060befa(errorFlags,&stack0x00000004);
  local_10 = SUB84(dVar1,0);
  local_18 = local_10;
  local_c = (uint)((ulonglong)dVar1 >> 0x20);
  local_14 = local_c;
LAB_0060c0a7:
  return (double)CONCAT44(local_14,local_18);
}
