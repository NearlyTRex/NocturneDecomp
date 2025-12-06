// Name: crt_unknown.c_FUN_00600002
// Address: 00600002
// Address Range: [[00600002, 006000ce]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00600002()

#include "nocturne.h"

/* Signature: byte FUN_00600002(uint param_1, uint param_2, uint param_3) */

ulonglong crt_unknown_c_FUN_00600002(void)

{
  double dVar1;
  int in_stack_00000004;
  uint in_stack_00000008;
  int in_stack_0000000c;
  ushort local_20;
  ushort uStack_1e;
  ushort local_1c;
  ushort uStack_1a;
  uint uStack_18;
  
  local_20 = (ushort)in_stack_00000008;
  uStack_1e = (ushort)(in_stack_00000008 >> 0x10);
  if (((in_stack_00000008 & 0x7fffffff) != 0) || (in_stack_00000004 != 0)) {
    if (in_stack_0000000c < 0x3e81) {
      if (in_stack_0000000c < -16000) {
        in_stack_0000000c = -16000;
      }
    }
    else {
      in_stack_0000000c = 16000;
    }
    in_stack_0000000c = ((int)(short)(uStack_1e & 0x7ff0) >> 4) + in_stack_0000000c;
    if (in_stack_0000000c < 1) {
      local_1c = 0;
      uStack_1a = 0;
      uStack_18 = 0;
      goto LAB_006000b6;
    }
    if (0x7fe < in_stack_0000000c) {
      crt_math_c_set_range_error_errno_FUN_006027ac();
      if ((short)uStack_1e < 1) {
        dVar1 = -(double)CONCAT44 /* combine 2-byte values */(inf._4_4_,inf._0_4_);
        local_1c = SUB82 /* extract 2-byte value */(dVar1,0);
        uStack_1a = (ushort)((ulonglong)dVar1 >> 0x10);
        uStack_18 = (uint)((ulonglong)dVar1 >> 0x20);
      }
      else {
        local_1c = (ushort)inf._0_4_;
        uStack_1a = (ushort)((uint)inf._0_4_ >> 0x10);
        uStack_18 = inf._4_4_;
      }
      goto LAB_006000b6;
    }
    uStack_1e = uStack_1e & 0x800f | (short)in_stack_0000000c * 0x10;
  }
  local_1c = (ushort)in_stack_00000004;
  uStack_1a = (ushort)((uint)in_stack_00000004 >> 0x10);
  uStack_18 = CONCAT22 /* combine 2-byte values */(uStack_1e,local_20);
LAB_006000b6:
  return CONCAT44 /* combine 2-byte values */(uStack_18,CONCAT22 /* combine 2-byte values */(uStack_1a,local_1c));
}
