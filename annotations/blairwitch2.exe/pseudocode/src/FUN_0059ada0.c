// Name: FUN_0059ada0
// Address: 0059ada0
// Address Range: [[0059ada0, 0059ade4]]
// Convention: unknown
// Signature: void FUN_0059ada0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059ada0(int param_1)

{
  FUN_0055b1f0();
  _DAT_01c35e60 = 0xff;
  FUN_00403170(*(uint *)(param_1 + 4),*(uint *)(param_1 + 8),
               *(uint *)(param_1 + 0xc),*(uint *)(param_1 + 0x10));
  FUN_0047f210(0x01C25594,0);
  return;
}
