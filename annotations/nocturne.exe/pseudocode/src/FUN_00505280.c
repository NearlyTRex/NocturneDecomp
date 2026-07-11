// Name: FUN_00505280
// Address: 00505280
// Address Range: [[00505280, 005052b1]]
// Convention: unknown
// Signature: void FUN_00505280(undefined4 param_1,int *param_2)

#include "nocturne.h"

void FUN_00505280(uint param_1,int *param_2)

{
  if (*param_2 == 0) {
    FUN_005644f0(param_1,"\"%s\"\n","(none)");
    return;
  }
  FUN_005644f0(param_1,"\"%s\"\n",*param_2);
  return;
}
