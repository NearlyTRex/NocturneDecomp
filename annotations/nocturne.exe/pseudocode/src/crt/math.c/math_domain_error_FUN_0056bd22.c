// Name: crt_math.c_math_domain_error_FUN_0056bd22
// Address: 0056bd22
// Address Range: [[0056bd22, 0056bdc7]]
// Convention: __cdecl
// Signature: double __cdecl crt_math_c_math_domain_error_FUN_0056bd22(double x,double y,uchar error_type)

#include "nocturne.h"

double __cdecl math_domain_error(double x,double y,uchar error_type)

{
  int errorFlags;
  double dVar1;
  uint local_18;
  uint local_14;
  ulonglong local_10;
  
  if (error_type < 2) {
    if (error_type == '\0') {
      if (0.0 < y) {
        local_18 = 0;
        local_14 = 0;
        goto LAB_0056bdb0;
      }
      if (0.0 <= y) {
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
    if (y <= 0.0) {
      local_18 = 0;
      local_14 = 0;
      goto LAB_0056bdb0;
    }
    if (x <= 0.0) {
      errorFlags = 0x1107;
    }
    else {
      errorFlags = 0x8107;
    }
  }
  dVar1 = process_math_error(errorFlags,&x,&y);
  local_10._0_4_ = SUB84(__BITCAST_UINT64(dVar1),0);
  local_18 = (uint)local_10;
  local_10._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
  local_14 = local_10._4_4_;
LAB_0056bdb0:
  local_10 = __BITCAST_DOUBLE(CONCAT44(local_14,local_18));
  return local_10;
}
