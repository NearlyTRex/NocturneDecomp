// Name: FUN_0057b800
// Address: 0057b800
// Address Range: [[0057b800, 0057b83a]]
// Convention: unknown
// Signature: void FUN_0057b800(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057b800(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 0x01CEDD88;
  *param_1 = 0;
  FUN_004ca9c0(uVar1);
  FUN_004caac0(0x01CEDD88,"junk.jnk");
  _DAT_02653650 = 1;
  return;
}
