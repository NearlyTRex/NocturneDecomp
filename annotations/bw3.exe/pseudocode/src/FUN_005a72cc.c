// Name: FUN_005a72cc
// Address: 005a72cc
// Address Range: [[005a72cc, 005a735f]]
// Convention: unknown
// Signature: void FUN_005a72cc(float10 *param_1,int param_2)

#include "nocturne.h"

void FUN_005a72cc(float10 *param_1,int param_2)

{
  uint local_1c;
  uint uStack_18;
  ushort uStack_14;
  
  if (param_2 != 0) {
    uStack_14 = 0x3fff;
    local_1c = 0;
    uStack_18 = 0x80000000;
    if (param_2 < 0) {
      FUN_005a7274(&local_1c,-param_2);
      *param_1 = *param_1 / (float10)CONCAT28(uStack_14,CONCAT44(uStack_18,local_1c));
    }
    else {
      FUN_005a7274(&local_1c,param_2);
      *param_1 = (float10)CONCAT28(uStack_14,CONCAT44(uStack_18,local_1c)) * *param_1;
    }
    FUN_005a7a5e();
    return;
  }
  return;
}
