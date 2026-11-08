// Name: FUN_00481f90
// Address: 00481f90
// Address Range: [[00481f90, 00481fba]]
// Convention: unknown
// Signature: undefined4 * FUN_00481f90(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

uint * FUN_00481f90(uint *param_1,uint param_2)

{
  param_1[3] = &PTR_FUN_005df024;
  *param_1 = 0;
  param_1[2] = 0;
  FUN_00481fc0(param_1,param_2);
  return param_1;
}
