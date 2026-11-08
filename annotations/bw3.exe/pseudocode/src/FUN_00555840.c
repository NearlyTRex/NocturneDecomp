// Name: FUN_00555840
// Address: 00555840
// Address Range: [[00555840, 0055588a]]
// Convention: unknown
// Signature: int FUN_00555840(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00555840(int param_1)

{
  float fVar1;
  float fVar2;
  
  FUN_005a28f0(param_1,0,0x150);
  fVar1 = _DAT_02ce7210 * _DAT_00604244;
  fVar2 = _DAT_005e4858 * _DAT_00604244;
  *(float *)(param_1 + 0x114) = _DAT_005e4854 * _DAT_00604244;
  *(float *)(param_1 + 0x118) = fVar1;
  *(float *)(param_1 + 0x11c) = fVar2;
  return param_1;
}
