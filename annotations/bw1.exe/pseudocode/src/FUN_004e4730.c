// Name: FUN_004e4730
// Address: 004e4730
// Address Range: [[004e4730, 004e4784]]
// Convention: unknown
// Signature: undefined4 FUN_004e4730(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004e4730(int param_1,int param_2)

{
  if ((float)_DAT_005e4035 < *(float *)(param_2 + 4)) {
    FUN_004e5ff0(0x01CD0E3C,param_1,*(uint *)(param_1 + 0x40));
    return 1;
  }
  FUN_004e6020(0x01CD0E3C,param_1,param_2,*(uint *)(param_1 + 0x40));
  return 1;
}
