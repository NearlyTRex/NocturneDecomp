// Name: crt_unknown.c_FUN_005653e0
// Address: 005653e0
// Address Range: [[005653e0, 0056551b]]
// Convention: unknown
// Signature: uint crt_unknown_c_FUN_005653e0(byte *param_1,byte *param_2)

#include "nocturne.h"

uint FUN_005653e0(byte *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  
  bVar2 = true;
  bVar4 = false;
  bVar5 = false;
  bVar3 = false;
  if (param_2 != (byte *)0x0) {
    if (DAT_005c1d50 == 1) {
      param_2[0] = 1;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
    }
    else {
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
    }
  }
  bVar1 = *param_1;
  if (bVar1 < 0x72) {
    if (bVar1 != 0x61) {
LAB_00565432:
      FUN_00568e80(9);
      return 0;
    }
    uVar6 = 0x82;
  }
  else if (bVar1 < 0x73) {
    uVar6 = 1;
  }
  else {
    if (bVar1 != 0x77) goto LAB_00565432;
    uVar6 = 2;
  }
  bVar1 = param_1[1];
  while ((bVar1 != 0 && (bVar2))) {
    bVar1 = param_1[1];
    if (bVar1 < 99) {
      if (0x2a < bVar1) {
        if (bVar1 < 0x2c) {
          if (bVar3) {
            bVar2 = false;
          }
          else {
            uVar6 = uVar6 | 3;
            bVar3 = true;
          }
        }
        else if (bVar1 == 0x62) {
          if (bVar4) {
            bVar2 = false;
          }
          else {
            bVar4 = true;
            uVar6 = uVar6 | 0x40;
          }
        }
      }
    }
    else if (bVar1 < 100) {
      if (bVar5) {
        bVar2 = false;
      }
      else {
        bVar5 = true;
        *param_2 = *param_2 | 1;
      }
    }
    else if (0x6d < bVar1) {
      if (bVar1 < 0x6f) {
        if (bVar5) {
          bVar2 = false;
        }
        else {
          bVar5 = true;
          *param_2 = *param_2 & 0xfe;
        }
      }
      else if (bVar1 == 0x74) {
        if (bVar4) {
          bVar2 = false;
        }
        else {
          bVar4 = true;
        }
      }
    }
    bVar1 = param_1[2];
    param_1 = param_1 + 1;
  }
  if ((!bVar4) && (0x00000100 == 0x200)) {
    uVar6 = uVar6 | 0x40;
  }
  return uVar6;
}
