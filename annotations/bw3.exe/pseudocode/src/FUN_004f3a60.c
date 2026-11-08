// Name: FUN_004f3a60
// Address: 004f3a60
// Address Range: [[004f3a60, 004f3aa4]]
// Convention: unknown
// Signature: void FUN_004f3a60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_004f3a60(uint param_1,uint param_2,uint param_3,uint param_4)

{
  FUN_004f3ab0(param_1,param_2,param_3);
  FUN_004f3ab0(param_1,param_4,param_3);
  FUN_004f3ad0(param_1,param_2,param_4);
  FUN_004f3ad0(param_3,param_2,param_4);
  return;
}
