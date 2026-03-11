// Name: crt_math.c_ldexp_FUN_00600002
// Address: 00600002
// Address Range: [[00600002, 006000ce]]
// Convention: __cdecl
// Signature: double __cdecl crt_math_c_ldexp_FUN_00600002(double x,int exp)

#include "nocturne.h"

double __cdecl ldexp(double x,int exp)

{
  double dVar1;
  int iVar2;
  ushort local_20;
  ushort uStack_1e;
  ushort local_1c;
  ushort uStack_1a;
  uint uStack_18;
  
  local_20 = (ushort)((ulonglong)x >> 0x20);
  uStack_1e = (ushort)((ulonglong)x >> 0x30);
  if ((((ulonglong)x & 0x7fffffff00000000) != 0) || (x._0_4_ != 0)) {
    if (exp < 0x3e81) {
      if (exp < -16000) {
        exp = -16000;
      }
    }
    else {
      exp = 16000;
    }
    iVar2 = ((int)(short)(uStack_1e & 0x7ff0) >> 4) + exp;
    if (iVar2 < 1) {
      local_1c = 0;
      uStack_1a = 0;
      uStack_18 = 0;
      goto LAB_006000b6;
    }
    if (0x7fe < iVar2) {
      set_range_error_errno();
      if ((short)uStack_1e < 1) {
        dVar1 = -__BITCAST_DOUBLE(CONCAT44(INFINITY._4_4_,INFINITY._0_4_));
        local_1c = SUB82(__BITCAST_UINT64(dVar1),0);
        uStack_1a = (ushort)((ulonglong)dVar1 >> 0x10);
        uStack_18 = (uint)((ulonglong)dVar1 >> 0x20);
      }
      else {
        local_1c = (ushort)INFINITY._0_4_;
        uStack_1a = (ushort)((uint)INFINITY._0_4_ >> 0x10);
        uStack_18 = INFINITY._4_4_;
      }
      goto LAB_006000b6;
    }
    uStack_1e = uStack_1e & 0x800f | (short)iVar2 * 0x10;
  }
  local_1c = SUB82(x,0);
  uStack_1a = (ushort)((ulonglong)x >> 0x10);
  uStack_18 = CONCAT22(uStack_1e,local_20);
LAB_006000b6:
  return __BITCAST_DOUBLE(CONCAT44(uStack_18,CONCAT22(uStack_1a,local_1c)));
}
