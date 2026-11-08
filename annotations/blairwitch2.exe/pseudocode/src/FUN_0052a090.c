// Name: FUN_0052a090
// Address: 0052a090
// Address Range: [[0052a090, 0052a0c1]]
// Convention: unknown
// Signature: void FUN_0052a090(undefined4 param_1,int *param_2)

#include "nocturne.h"

void FUN_0052a090(uint param_1,int *param_2)

{
  if (*param_2 == 0) {
    FUN_005b8010(param_1,"\"%s\"\n","(none)");
    return;
  }
  FUN_005b8010(param_1,"\"%s\"\n",*param_2);
  return;
}
