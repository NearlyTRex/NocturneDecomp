// Name: FUN_0040ef00
// Address: 0040ef00
// Address Range: [[0040ef00, 0040f03f]]
// Convention: unknown
// Signature: void FUN_0040ef00(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_0040ef00(int param_1,float param_2)

{
  int iVar1;
  float afStack_20 [4];
  
  iVar1 = FUN_004244b0(param_1,param_2);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x2510) = 0;
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
    afStack_20[0] = param_2 * *(float *)(param_1 + 0x10a60);
    while (0.0 < afStack_20[0]) {
      FUN_005030c0(param_1 + 0x2b4,afStack_20);
    }
    *(uint *)(param_1 + 0x2594) = *(uint *)(param_1 + 0x2510);
    FUN_0042b2a0(param_1,param_2 * *(float *)(param_1 + 0x10a60));
    FUN_005035c0(param_1 + 0x2b4);
    iVar1 = FUN_004287f0(param_1,param_2);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x2510) = 0;
      *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
      *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
    }
    FUN_00544f00(param_1 + 0x2b4);
    FUN_00429e90(param_1,param_2);
    iVar1 = FUN_0048e340(0x01C38BC0,param_1 + 0x10af8);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"armour.wav");
      afStack_20[1] = 0.0;
      afStack_20[2] = 0.0;
      afStack_20[3] = 5.0;
      FUN_00427360(param_1,afStack_20 + 1,0xbf800000,1);
      return;
    }
  }
  return;
}
