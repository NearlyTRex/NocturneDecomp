// Name: engine_3d.c_FUN_00404430
// Address: 00404430
// Address Range: [[00404430, 00404477]]
// Convention: unknown
// Signature: undefined4 * engine_3d_c_FUN_00404430(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * engine_3d_c_FUN_00404430(uint *param_1)

{
  byte local_54 [80];
  
  _sprintf(local_54,"Old func : %d",*param_1);
  _DAT_01cc4804 = 0xd9;
  _DAT_01cc4800 = "..\\engine\\3d.c";
  FUN_004c8440(local_54);
  return &DAT_006b0288;
}
