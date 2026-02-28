// Name: crt_math.c_math_domain_error_FUN_00606832
// Address: 00606832
// Address Range: [[00606832, 006068d7]]
// Convention: __cdecl
// Signature: double __cdecl crt_math_c_math_domain_error_FUN_00606832(double x,double y,uchar error_type)

#include "nocturne.h"

double __cdecl math_domain_error(double x,double y,uchar error_type)

{
  int errorFlags;
  double dVar1;
  uint in_stack_00000004;
  uint local_18;
  uint local_14;
  ulonglong local_10;
  
  if (y._4_1_ < 2) {
    if (y._4_1_ == 0) {
      if (0.0 < __BITCAST_DOUBLE(CONCAT44(y._0_4_,x._4_4_))) {
        local_18 = 0;
        local_14 = 0;
        goto LAB_006068c0;
      }
      if (0.0 <= __BITCAST_DOUBLE(CONCAT44(y._0_4_,x._4_4_))) {
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
    if (__BITCAST_DOUBLE(CONCAT44(y._0_4_,x._4_4_)) <= 0.0) {
      local_18 = 0;
      local_14 = 0;
      goto LAB_006068c0;
    }
    if (__BITCAST_DOUBLE(CONCAT44(x._0_4_,in_stack_00000004)) <= 0.0) {
      errorFlags = 0x1107;
    }
    else {
      errorFlags = 0x8107;
    }
  }
  dVar1 = process_math_error
                    (errorFlags,(double *)&stack0x00000004,(double *)((int)&x + 4));
  local_10._0_4_ = SUB84(__BITCAST_UINT64(dVar1),0);
  local_18 = (uint)local_10;
  local_10._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
  local_14 = local_10._4_4_;
LAB_006068c0:
  local_10 = __BITCAST_DOUBLE(CONCAT44(local_14,local_18));
  return local_10;
}
