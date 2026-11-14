// Name: crt_unknown.c_FUN_005cbddd
// Address: 005cbddd
// Address Range: [[005cbddd, 005cbeda]]
// Convention: unknown
// Signature: undefined8 crt_unknown_c_FUN_005cbddd(uint param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

ulonglong FUN_005cbddd(uint param_1,uint *param_2,uint *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_EBX;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  ulonglong local_24;
  
  local_34 = *param_2;
  local_30 = param_2[1];
  local_2c = *param_3;
  local_28 = param_3[1];
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
  local_38 = (&DAT_00626a74)[param_1 & 0x1f];
  if ((param_1 & 0x1000) == 0) {
    if ((param_1 & 0x2000) == 0) {
      if ((param_1 & 0x4000) == 0) {
        uVar3 = 0x7FF00000;
        uVar2 = DAT_00608560;
        if ((param_1 & 0x8000) == 0) {
          uVar3 = param_3[1];
          uVar2 = *param_3;
        }
        local_24 = __BITCAST_DOUBLE(CONCAT44(uVar3,uVar2));
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
    local_24 = -__BITCAST_DOUBLE(CONCAT44(0x7FF00000,DAT_00608560));
  }
  local_3c = unaff_EBX;
  uVar1 = FUN_005cdaad(&local_3c);
  return uVar1;
}
