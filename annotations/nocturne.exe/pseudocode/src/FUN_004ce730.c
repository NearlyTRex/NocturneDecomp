// Name: FUN_004ce730
// Address: 004ce730
// Address Range: [[004ce730, 004ce758]]
// Convention: unknown
// Signature: void FUN_004ce730(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ce730(uint param_1,uint param_2,uint param_3)

{
  _DAT_01c039d0 = param_1;
  _DAT_01c039d4 = param_2;
  _DAT_01c039d8 = param_3;
  FUN_004ccdc0(param_1,param_2,param_3);
  return;
}
