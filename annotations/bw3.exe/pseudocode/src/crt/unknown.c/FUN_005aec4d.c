// Name: crt_unknown.c_FUN_005aec4d
// Address: 005aec4d
// Address Range: [[005aec4d, 005aed4a]]
// Convention: unknown
// Signature: undefined8 crt_unknown_c_FUN_005aec4d(uint param_1,undefined4 *param_2,double *param_3)

#include "nocturne.h"

ulonglong FUN_005aec4d(uint param_1,uint *param_2,double *param_3)

{
  ulonglong uVar1;
  uint unaff_EBX;
  uint local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  double local_24;
  
  local_34 = *param_2;
  local_30 = param_2[1];
  local_2c = *(uint *)param_3;
  local_28 = *(uint *)((int)param_3 + 4);
  if ((param_1 & 0x40) == 0) {
    if ((param_1 & 0x80) == 0) {
      if ((param_1 & 0x100) == 0) {
        if ((param_1 & 0x800) == 0) {
          if ((param_1 & 0x200) == 0) {
            if ((param_1 & 0x400) != 0) {
              unaff_EBX = 5;
            }
          }
          else {
            unaff_EBX = 6;
          }
        }
        else {
          unaff_EBX = 4;
        }
      }
      else {
        unaff_EBX = 3;
      }
    }
    else {
      unaff_EBX = 2;
    }
  }
  else {
    unaff_EBX = 1;
  }
  local_38 = (&g_INT_00607e18)[param_1 & 0x1f];
  if ((param_1 & 0x1000) == 0) {
    if ((param_1 & 0x2000) == 0) {
      if ((param_1 & 0x4000) == 0) {
        local_24 = INFINITY;
        if ((param_1 & 0x8000) == 0) {
          local_24 = *param_3;
        }
      }
      else {
        local_24 = 1.0;
      }
    }
    else {
      local_24 = 0.0;
    }
  }
  else {
    local_24 = -INFINITY;
  }
  local_3c = unaff_EBX;
  uVar1 = FUN_005b083d(&local_3c);
  return uVar1;
}
