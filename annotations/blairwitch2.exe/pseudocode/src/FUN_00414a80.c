// Name: FUN_00414a80
// Address: 00414a80
// Address Range: [[00414a80, 00414b05]]
// Convention: unknown
// Signature: void FUN_00414a80(int param_1,float param_2)

#include "nocturne.h"

void FUN_00414a80(int param_1,float param_2)

{
  int iVar1;
  float fStack_10;
  
  iVar1 = FUN_004244b0(param_1,param_2);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x2510) = 0;
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
    fStack_10 = param_2 * *(float *)(param_1 + 0x10a60);
    while (0.0 < fStack_10) {
      FUN_005030c0(param_1 + 0x2b4,&fStack_10);
    }
    FUN_00424470(param_1);
    FUN_00544f00(param_1 + 0x2b4);
    FUN_00429e90(param_1,param_2);
  }
  return;
}
