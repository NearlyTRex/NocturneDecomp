// Name: FUN_004f9340
// Address: 004f9340
// Address Range: [[004f9340, 004f9384]]
// Convention: unknown
// Signature: void FUN_004f9340(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_004f9340(uint param_1,uint param_2,uint param_3,uint param_4)

{
  FUN_004f9390(param_1,param_2,param_3);
  FUN_004f9390(param_1,param_4,param_3);
  FUN_004f93b0(param_1,param_2,param_4);
  FUN_004f93b0(param_3,param_2,param_4);
  return;
}
