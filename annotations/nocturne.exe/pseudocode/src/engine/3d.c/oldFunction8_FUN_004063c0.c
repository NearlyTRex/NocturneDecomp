// Name: engine_3d.c_oldFunction8_FUN_004063c0
// Address: 004063c0
// Address Range: [[004063c0, 00406407]]
// Convention: unknown
// Signature: undefined4 * engine_3d_c_oldFunction8_FUN_004063c0(undefined4 *param_1)

#include "nocturne.h"

uint * engine_3d_c_oldFunction8_FUN_004063c0(uint *param_1)

{
  byte local_54 [80];
  
  _sprintf(local_54,"Old func : %d",*param_1);
  INT_01cc4804 = 0xd9;
  PTR_01cc4800 = "..\\engine\\3d.c";
  core_main_c_FUN_004c8440(local_54);
  return &DAT_006b0288;
}
