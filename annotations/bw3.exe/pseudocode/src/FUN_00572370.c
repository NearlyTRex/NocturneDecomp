// Name: FUN_00572370
// Address: 00572370
// Address Range: [[00572370, 005723aa]]
// Convention: unknown
// Signature: void FUN_00572370(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00572370(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 0x01D5B8A8;
  *param_1 = 0;
  FUN_004cfbd0(uVar1);
  FUN_004cfcd0(0x01D5B8A8,"junk.jnk");
  _DAT_02cfd8bc = 1;
  return;
}
