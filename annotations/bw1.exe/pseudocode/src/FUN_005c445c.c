// Name: FUN_005c445c
// Address: 005c445c
// Address Range: [[005c445c, 005c44ef]]
// Convention: unknown
// Signature: void FUN_005c445c(float10 *param_1,int param_2)

#include "nocturne.h"

void FUN_005c445c(float10 *param_1,int param_2)

{
  uint local_1c;
  uint uStack_18;
  ushort uStack_14;
  
  if (param_2 != 0) {
    uStack_14 = 0x3fff;
    local_1c = 0;
    uStack_18 = 0x80000000;
    if (param_2 < 0) {
      FUN_005c4404(&local_1c,-param_2);
      *param_1 = *param_1 / (float10)CONCAT28(uStack_14,CONCAT44(uStack_18,local_1c));
    }
    else {
      FUN_005c4404(&local_1c,param_2);
      *param_1 = (float10)CONCAT28(uStack_14,CONCAT44(uStack_18,local_1c)) * *param_1;
    }
    FUN_005c4bee();
    return;
  }
  return;
}
