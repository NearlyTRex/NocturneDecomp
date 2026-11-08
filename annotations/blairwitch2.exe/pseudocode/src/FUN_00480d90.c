// Name: FUN_00480d90
// Address: 00480d90
// Address Range: [[00480d90, 00480dba]]
// Convention: unknown
// Signature: undefined4 * FUN_00480d90(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

uint * FUN_00480d90(uint *param_1,uint param_2)

{
  param_1[3] = &PTR_FUN_005f5d14;
  *param_1 = 0;
  param_1[2] = 0;
  FUN_00480dc0(param_1,param_2);
  return param_1;
}
