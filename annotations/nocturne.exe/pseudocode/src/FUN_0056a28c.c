// Name: FUN_0056a28c
// Address: 0056a28c
// Address Range: [[0056a28c, 0056a31f]]
// Convention: unknown
// Signature: void FUN_0056a28c(float10 *param_1,int param_2)

#include "nocturne.h"

void FUN_0056a28c(float10 *param_1,int param_2)

{
  uint local_1c;
  uint uStack_18;
  ushort uStack_14;
  
  if (param_2 != 0) {
    uStack_14 = 0x3fff;
    local_1c = 0;
    uStack_18 = 0x80000000;
    if (param_2 < 0) {
      FUN_0056a234(&local_1c,-param_2);
      *param_1 = *param_1 / (float10)CONCAT28(uStack_14,CONCAT44(uStack_18,local_1c));
    }
    else {
      FUN_0056a234(&local_1c,param_2);
      *param_1 = (float10)CONCAT28(uStack_14,CONCAT44(uStack_18,local_1c)) * *param_1;
    }
  }
  return;
}
