// Name: FUN_004e9f20
// Address: 004e9f20
// Address Range: [[004e9f20, 004ea051]]
// Convention: unknown
// Signature: void FUN_004e9f20(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e9f20(int param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  
  do {
    uVar1 = FUN_00524270();
    switch(uVar1) {
    case 0x65:
      FUN_004ea060();
      iVar2 = *(int *)(param_1 + 0x1ffb0);
      goto LAB_004e9f6c;
    case 0x66:
      FUN_004ea060();
      iVar2 = *(int *)(param_1 + 0x1ffb0);
LAB_004e9f6c:
      *(uint *)(param_1 + 0x1ffb0) = (uint)(iVar2 == 0);
      break;
    case 0x67:
    case 0x69:
    case 0x6b:
      iVar2 = FUN_00574010((double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
                           (double)*(float *)(param_1 + 0x28),0x42200000);
      if (iVar2 != 0) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
      }
      break;
    case 0x68:
    case 0x6a:
    case 0x6c:
      iVar2 = FUN_00574010((double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
                           (double)*(float *)(param_1 + 0x28),0x42200000);
      if ((iVar2 != 0) && (iVar2 = FUN_0040cd00(0x3ecccccd), iVar2 != 0)) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))();
      }
      break;
    default:
      FUN_00434a80();
    }
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
