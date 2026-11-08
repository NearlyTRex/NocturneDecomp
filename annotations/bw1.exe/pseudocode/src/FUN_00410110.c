// Name: FUN_00410110
// Address: 00410110
// Address Range: [[00410110, 00410178]]
// Convention: unknown
// Signature: void FUN_00410110(int param_1,float param_2)

#include "nocturne.h"

void FUN_00410110(int param_1,float param_2)

{
  uint uVar1;
  
  do {
    uVar1 = FUN_00524270(param_1 + 0x158,&param_2);
    if (99 < uVar1) {
      if (uVar1 < 0x65) {
        FUN_0040fcf0(param_1);
      }
      else if (uVar1 == 0x6e) {
        *(uint *)(param_1 + 0x200a4) = 0;
        *(uint *)(param_1 + 0x200a8) = 0;
        *(uint *)(param_1 + 0x20084) = 0;
      }
    }
  } while (0.0 < param_2);
  return;
}
