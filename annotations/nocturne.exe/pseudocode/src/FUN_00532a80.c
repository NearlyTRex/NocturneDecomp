// Name: FUN_00532a80
// Address: 00532a80
// Address Range: [[00532a80, 00532ae2]]
// Convention: unknown
// Signature: undefined4 FUN_00532a80(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00532a80(int param_1)

{
  uint uVar1;
  
  param_1 = param_1 * 3;
  _DAT_02dc9e0c = (uint)(byte)(&DAT_01c00648)[param_1];
  _DAT_02dc9e10 = (uint)*(byte *)(param_1 + 0x1c00649);
  _DAT_02dc9e14 = (uint)*(byte *)(param_1 + 0x1c0064a);
  if (_DAT_01c02594 == 0) {
    return 0;
  }
  uVar1 = (*_DAT_02dc9dcc)(_DAT_02dc9e0c,_DAT_02dc9e10,_DAT_02dc9e14);
  return uVar1;
}
