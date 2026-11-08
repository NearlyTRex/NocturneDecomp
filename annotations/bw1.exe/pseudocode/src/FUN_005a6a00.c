// Name: FUN_005a6a00
// Address: 005a6a00
// Address Range: [[005a6a00, 005a6afb]]
// Convention: unknown
// Signature: void FUN_005a6a00(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a6a00(int param_1,float param_2)

{
  uint uVar1;
  float local_78;
  byte local_74 [104];
  
  if (0.0 < param_2) {
LAB_005a6a22:
    do {
      uVar1 = FUN_00524270(param_1 + 0xc268,&param_2);
      if (uVar1 < 0x66) {
        if (uVar1 == 0x65) {
          local_78 = 0.0;
          if (*(int *)(param_1 + 0xbe79c) == 1) {
            local_78 = *(float *)(param_1 + 0xbf3cc);
          }
          if (*(int *)(param_1 + 0xbe79c) == 2) {
            local_78 = 1.0;
          }
          if (*(int *)(param_1 + 0xbe79c) == 3) {
            local_78 = *(float *)(param_1 + 0xbf3cc);
          }
          if (0.0 < (double)local_78) {
            FUN_005bfb40(local_74,"wing?.wav @%f",(double)local_78 * _DAT_005f8e20);
            goto LAB_005a6ab9;
          }
        }
      }
      else {
        if ((0x66 < uVar1) && (uVar1 != 0x67)) {
          if (param_2 <= 0.0) {
            return;
          }
          goto LAB_005a6a22;
        }
LAB_005a6ab9:
        (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
      }
    } while (0.0 < param_2);
  }
  return;
}
