// Name: FUN_00582dc0
// Address: 00582dc0
// Address Range: [[00582dc0, 00582ebb]]
// Convention: unknown
// Signature: void FUN_00582dc0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00582dc0(int param_1,float param_2)

{
  uint uVar1;
  float local_78;
  byte local_74 [104];
  
  if (0.0 < param_2) {
LAB_00582de2:
    do {
      uVar1 = FUN_005030c0(param_1 + 0x10af8,&param_2);
      if (uVar1 < 0x66) {
        if (uVar1 == 0x65) {
          local_78 = 0.0;
          if (*(int *)(param_1 + 0xc2f3c) == 1) {
            local_78 = *(float *)(param_1 + 0xc3b6c);
          }
          if (*(int *)(param_1 + 0xc2f3c) == 2) {
            local_78 = 1.0;
          }
          if (*(int *)(param_1 + 0xc2f3c) == 3) {
            local_78 = *(float *)(param_1 + 0xc3b6c);
          }
          if (0.0 < (double)local_78) {
            FUN_005b7790(local_74,"wing?.wav @%f",(double)local_78 * _DAT_005edac4);
            goto LAB_00582e79;
          }
        }
      }
      else {
        if ((0x66 < uVar1) && (uVar1 != 0x67)) {
          if (param_2 <= 0.0) {
            return;
          }
          goto LAB_00582de2;
        }
LAB_00582e79:
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))();
      }
    } while (0.0 < param_2);
  }
  return;
}
