// Name: FUN_0054b3a0
// Address: 0054b3a0
// Address Range: [[0054b3a0, 0054b3d1]]
// Convention: unknown
// Signature: void FUN_0054b3a0(undefined4 param_1,int *param_2)

#include "nocturne.h"

void FUN_0054b3a0(uint param_1,int *param_2)

{
  if (*param_2 == 0) {
    FUN_005c03c0(param_1,"\"%s\"\n","(none)");
    return;
  }
  FUN_005c03c0(param_1,"\"%s\"\n",*param_2);
  return;
}
