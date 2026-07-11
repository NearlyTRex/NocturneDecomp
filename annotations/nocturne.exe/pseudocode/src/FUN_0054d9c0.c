// Name: FUN_0054d9c0
// Address: 0054d9c0
// Address Range: [[0054d9c0, 0054dabb]]
// Convention: unknown
// Signature: void FUN_0054d9c0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054d9c0(int param_1,float param_2)

{
  uint uVar1;
  float local_78;
  byte local_74 [104];
  
  if (0.0 < param_2) {
LAB_0054d9e2:
    do {
      uVar1 = FUN_004e11c0(param_1 + 0xbd24,&param_2);
      if (uVar1 < 0x66) {
        if (uVar1 == 0x65) {
          local_78 = 0.0;
          if (*(int *)(param_1 + 0xbe168) == 1) {
            local_78 = *(float *)(param_1 + 0xbed98);
          }
          if (*(int *)(param_1 + 0xbe168) == 2) {
            local_78 = 1.0;
          }
          if (*(int *)(param_1 + 0xbe168) == 3) {
            local_78 = *(float *)(param_1 + 0xbed98);
          }
          if (0.0 < (double)local_78) {
            FUN_00563c90(local_74,"wing?.wav @%f",(double)local_78 * _DAT_0059715d);
            goto LAB_0054da79;
          }
        }
      }
      else {
        if ((0x66 < uVar1) && (uVar1 != 0x67)) {
          if (param_2 <= 0.0) {
            return;
          }
          goto LAB_0054d9e2;
        }
LAB_0054da79:
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))();
      }
    } while (0.0 < param_2);
  }
  return;
}
