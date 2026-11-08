// Name: FUN_004803d0
// Address: 004803d0
// Address Range: [[004803d0, 0048040c]]
// Convention: unknown
// Signature: undefined4 FUN_004803d0(void)

#include "nocturne.h"

uint FUN_004803d0(void)

{
  uint uVar1;
  
  uVar1 = FUN_005806a0();
  uVar1 = uVar1 & 0x30000;
  if (uVar1 < 0x10000) {
    if (uVar1 == 0) {
      return 0;
    }
  }
  else {
    if (uVar1 < 0x10001) {
      return 0xff;
    }
    if (0x1ffff < uVar1) {
      if (uVar1 < 0x20001) {
        return 2;
      }
      if (uVar1 == 0x30000) {
        return 0xfd;
      }
    }
  }
  return 0;
}
