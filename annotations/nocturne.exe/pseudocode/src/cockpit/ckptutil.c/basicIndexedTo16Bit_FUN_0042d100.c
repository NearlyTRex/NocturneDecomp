// Name: cockpit_ckptutil.c_basicIndexedTo16Bit_FUN_0042d100
// Address: 0042d100
// Address Range: [[0042d100, 0042d12f]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_basicIndexedTo16Bit_FUN_0042d100(undefined2 *param_1,byte *param_2,uint param_3)

#include "nocturne.h"

void cockpit_ckptutil_c_basicIndexedTo16Bit_FUN_0042d100(ushort *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      uVar2 = uVar2 + 1;
      *param_1 = *(ushort *)((uint)bVar1 * 2 + 0x1c00424);
      param_1 = param_1 + 1;
    } while (uVar2 < param_3);
  }
  return;
}
