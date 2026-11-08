// Name: FUN_005c69bc
// Address: 005c69bc
// Address Range: [[005c69bc, 005c6a05]]
// Convention: unknown
// Signature: bool FUN_005c69bc(uint *param_1)

#include "nocturne.h"

bool FUN_005c69bc(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 + 7 & 0xfffffff8;
  if (uVar1 == 0) {
    return false;
  }
  *param_1 = uVar1;
  uVar1 = uVar1 + 0x3c;
  if (uVar1 < *param_1) {
    return false;
  }
  if (uVar1 < 0x00010000) {
    uVar1 = 0x00010000 & 0xfffffffe;
  }
  *param_1 = uVar1;
  if (uVar1 + 0xfff < *param_1) {
    return false;
  }
  uVar1 = uVar1 + 0xfff >> 8 & 0xfffff0;
  *param_1 = uVar1 << 8;
  return uVar1 != 0;
}
