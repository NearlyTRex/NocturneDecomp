// Name: FUN_00543860
// Address: 00543860
// Address Range: [[00543860, 0054388d]]
// Convention: unknown
// Signature: void FUN_00543860(undefined4 param_1,undefined4 *param_2)

#include "nocturne.h"

void FUN_00543860(uint param_1,uint *param_2)

{
  param_2[1] = 0xbf800000;
  param_2[2] = 0xc0e00000;
  param_2[3] = 0x40e00000;
  param_2[4] = 0x41000000;
  param_2[5] = 0x40e00000;
  *param_2 = 0xc0e00000;
  return;
}
