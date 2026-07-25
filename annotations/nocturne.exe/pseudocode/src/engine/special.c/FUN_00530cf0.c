// Name: FUN_00530cf0
// Address: 00530cf0
// Address Range: [[00530cf0, 00530d22]]
// Convention: unknown
// Signature: void FUN_00530cf0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00530cf0(int *param_1,int param_2)

{
  *param_1 = param_2;
  if (param_2 != 0) {
    return;
  }
  _DAT_01cc4800 = "..\\engine\\special.c";
  _DAT_01cc4804 = 0x86;
  FUN_004c8440("Unable to find function!");
  return;
}
