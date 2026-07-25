// Name: engine_3d.c_oldFunction5_FUN_004054f0
// Address: 004054f0
// Address Range: [[004054f0, 00405537]]
// Convention: unknown
// Signature: undefined4 * engine_3d_c_oldFunction5_FUN_004054f0(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * engine_3d_c_oldFunction5_FUN_004054f0(uint *param_1)

{
  byte local_54 [80];
  
  _sprintf(local_54,"Old func : %d",*param_1);
  _DAT_01cc4804 = 0xd9;
  _DAT_01cc4800 = "..\\engine\\3d.c";
  FUN_004c8440(local_54);
  return &DAT_006b0288;
}
