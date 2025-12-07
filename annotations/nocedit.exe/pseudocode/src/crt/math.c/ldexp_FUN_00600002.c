// Name: crt_math.c_ldexp_FUN_00600002
// Address: 00600002
// Address Range: [[00600002, 006000ce]]
// Convention: __cdecl
// Signature: double crt_math.c_ldexp_FUN_00600002(double x, int exp)

#include "nocturne.h"

double __cdecl crt_math_c_ldexp_FUN_00600002(double x,int exp)

{
  double dVar1;
  int iVar2;
  int in_stack_00000004;
  ushort local_20;
  ushort uStack_1e;
  ushort local_1c;
  ushort uStack_1a;
  uint uStack_18;
  
  local_20 = SUB82 /* extract 2-byte value */(x,0);
  uStack_1e = (ushort)((ulonglong)x >> 0x10);
  if ((((ulonglong)x & 0x7fffffff) != 0) || (in_stack_00000004 != 0)) {
    if ((longlong)x < 0x3e8100000000) {
      if (x._4_4_ < -16000) {
        x._4_4_ = -16000;
      }
    }
    else {
      x._4_4_ = 16000;
    }
    iVar2 = ((int)(short)(uStack_1e & 0x7ff0) >> 4) + x._4_4_;
    if (iVar2 < 1) {
      local_1c = 0;
      uStack_1a = 0;
      uStack_18 = 0;
      goto LAB_006000b6;
    }
    if (0x7fe < iVar2) {
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
    uStack_1e = uStack_1e & 0x800f | (short)iVar2 * 0x10;
  }
  local_1c = (ushort)in_stack_00000004;
  uStack_1a = (ushort)((uint)in_stack_00000004 >> 0x10);
  uStack_18 = CONCAT22 /* combine 2-byte values */(uStack_1e,local_20);
LAB_006000b6:
  return (double)CONCAT44 /* combine 2-byte values */(uStack_18,CONCAT22 /* combine 2-byte values */(uStack_1a,local_1c));
}
