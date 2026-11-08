// Name: FUN_0047f1c0
// Address: 0047f1c0
// Address Range: [[0047f1c0, 0047f207]]
// Convention: unknown
// Signature: undefined1 FUN_0047f1c0(void)

#include "nocturne.h"

byte FUN_0047f1c0(void)

{
  uint uVar1;
  
  uVar1 = FUN_0058e9e0();
  uVar1 = uVar1 & 0x30000;
  if (uVar1 < 0x10000) {
    if (uVar1 == 0) {
      return DAT_01c2c910;
    }
  }
  else {
    if (uVar1 < 0x10001) {
      return DAT_01c3490f;
    }
    if (0x1ffff < uVar1) {
      if (uVar1 < 0x20001) {
        return DAT_01c2ccf0;
      }
      if (uVar1 == 0x30000) {
        return DAT_01c3452f;
      }
    }
  }
  return 0;
}
