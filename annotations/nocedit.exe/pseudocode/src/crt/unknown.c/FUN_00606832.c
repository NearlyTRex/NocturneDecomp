// Name: crt_unknown.c_FUN_00606832
// Address: 00606832
// Address Range: [[00606832, 006068d7]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606832()

#include "nocturne.h"

/* Signature: byte FUN_00606832(ulonglong param_1, ulonglong param_2, byte param_3) */

ulonglong crt_unknown_c_FUN_00606832(void)

{
  int errorFlags;
  BADSPACEBASE *in_ESP;
  double dVar1;
  double in_stack_00000004;
  double in_stack_0000000c;
  byte in_stack_00000014;
  uint local_18;
  uint local_14;
  ulonglong local_10;
  
  if (in_stack_00000014 < 2) {
    if (in_stack_00000014 == 0) {
      if (0.0 < in_stack_0000000c) {
        local_18 = 0;
        local_14 = 0;
        goto LAB_006068c0;
      }
      if (0.0 <= in_stack_0000000c) {
        errorFlags = 0x4047;
      }
      else {
        errorFlags = 0x8047;
      }
    }
    else {
      errorFlags = 0x2047;
    }
  }
  else {
    if (in_stack_0000000c <= 0.0) {
      local_18 = 0;
      local_14 = 0;
      goto LAB_006068c0;
    }
    if (in_stack_00000004 <= 0.0) {
      errorFlags = 0x1107;
    }
    else {
      errorFlags = 0x8107;
    }
  }
  dVar1 = crt_math_c_process_math_error_FUN_0060bf2d(errorFlags,&stack0x00000004,&stack0x0000000c);
  local_10._0_4_ = SUB84 /* extract 2-byte value */(dVar1,0);
  local_18 = (uint)local_10;
  local_10._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
  local_14 = local_10._4_4_;
LAB_006068c0:
  local_10 = CONCAT44 /* combine 2-byte values */(local_14,local_18);
  return local_10;
}
