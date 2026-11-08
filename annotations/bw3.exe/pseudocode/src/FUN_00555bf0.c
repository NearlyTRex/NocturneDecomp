// Name: FUN_00555bf0
// Address: 00555bf0
// Address Range: [[00555bf0, 00555c8c]]
// Convention: unknown
// Signature: void FUN_00555bf0(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00555bf0(uint *param_1)

{
  uint uVar1;
  
  *param_1 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x3f800000;
  param_1[0xf] = 0x3f800000;
  *(ulonglong *)(param_1 + 3) = *(ulonglong *)(param_1 + 5);
  param_1[10] = param_1[0xb];
  *(ulonglong *)(param_1 + 1) = *(ulonglong *)(param_1 + 3);
  param_1[9] = param_1[10];
  FUN_005a28f0(param_1 + 0x11,0,8);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  uVar1 = _DAT_005e4824;
  param_1[0x17] = 0;
  param_1[0x10] = uVar1;
  return;
}
