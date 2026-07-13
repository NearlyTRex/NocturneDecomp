// Name: FUN_004063c0
// Address: 004063c0
// Address Range: [[004063c0, 00406407]]
// Convention: unknown
// Signature: undefined * FUN_004063c0(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_004063c0(uint *param_1)

{
  byte local_54 [80];
  
  FUN_00563c90(local_54,"Old func : %d",*param_1);
  _DAT_01cc4804 = 0xd9;
  _DAT_01cc4800 = "..\\engine\\3d.c";
  FUN_004c8440(local_54);
  return &DAT_006b0288;
}
