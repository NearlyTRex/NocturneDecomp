// Name: crt_unknown.c_FUN_00570554
// Address: 00570554
// Address Range: [[00570554, 005705b3]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00570554(uint param_1,byte *param_2)

#include "nocturne.h"

void FUN_00570554(uint param_1,byte *param_2)

{
  uint uVar1;
  
  uVar1 = param_1 & 0x70;
  if (uVar1 < 0x20) {
    if (uVar1 != 0) {
      if (uVar1 != 0x10) {
        return;
      }
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      return;
    }
    param_2[0] = 1;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    if ((param_1 & 7) == 0) {
      *param_2 = *param_2 | 2;
      return;
    }
  }
  else {
    if (uVar1 < 0x21) {
      param_2[0] = 1;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      return;
    }
    if (0x2f < uVar1) {
      if (uVar1 < 0x31) {
        param_2[0] = 2;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        return;
      }
      if (uVar1 != 0x40) {
        return;
      }
      param_2[0] = 3;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
    }
  }
  return;
}
