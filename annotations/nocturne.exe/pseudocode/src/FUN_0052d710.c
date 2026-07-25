// Name: FUN_0052d710
// Address: 0052d710
// Address Range: [[0052d710, 0052d779]]
// Convention: unknown
// Signature: void FUN_0052d710(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_0052d710(void)

{
  if (&stack0x00000000 == &DAT_02dc9d50) {
    _DAT_02dc9d54 = 0xffffffff;
    return;
  }
  _DAT_02dc9d44 = -*(float *)(0x01E57284 + 0x15a878);
  _DAT_02dc9d48 = -*(float *)(0x01E57284 + 0x15a87c);
  _DAT_02dc9d4c = -*(float *)(0x01E57284 + 0x15a880);
  _DAT_02dc9d54 = 0xffffffff;
  return;
}
