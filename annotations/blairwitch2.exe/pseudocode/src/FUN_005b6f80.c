// Name: FUN_005b6f80
// Address: 005b6f80
// Address Range: [[005b6f80, 005b6fb4]]
// Convention: unknown
// Signature: void FUN_005b6f80(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_005b6f80(int param_1,int param_2,uint param_3)

{
  param_1 = param_1 + param_2 * 0x608;
  FUN_005b6030(param_1);
  FUN_005b6350(param_1,param_3);
  return;
}
