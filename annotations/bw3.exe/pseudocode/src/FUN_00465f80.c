// Name: FUN_00465f80
// Address: 00465f80
// Address Range: [[00465f80, 00465fe2]]
// Convention: unknown
// Signature: void FUN_00465f80(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00465f80(uint param_1,uint param_2)

{
  byte local_208 [256];
  byte local_108 [256];
  byte local_8 [4];
  
  FUN_00465e50(param_1,local_8,local_108,local_208,0);
  FUN_00465e80(param_1,local_8,local_108,local_208,param_2);
  return;
}
