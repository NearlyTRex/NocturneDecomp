// Name: FUN_004cd660
// Address: 004cd660
// Address Range: [[004cd660, 004cd791]]
// Convention: unknown
// Signature: void FUN_004cd660(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cd660(int param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  
  do {
    uVar1 = FUN_005030c0();
    switch(uVar1) {
    case 0x65:
      FUN_004cd7a0();
      iVar2 = *(int *)(param_1 + 0x25644);
      goto LAB_004cd6ac;
    case 0x66:
      FUN_004cd7a0();
      iVar2 = *(int *)(param_1 + 0x25644);
LAB_004cd6ac:
      *(uint *)(param_1 + 0x25644) = (uint)(iVar2 == 0);
      break;
    case 0x67:
    case 0x69:
    case 0x6b:
      iVar2 = FUN_005515e0((double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
                           (double)*(float *)(param_1 + 0x28),0x42200000);
      if (iVar2 != 0) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))();
      }
      break;
    case 0x68:
    case 0x6a:
    case 0x6c:
      iVar2 = FUN_005515e0((double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
                           (double)*(float *)(param_1 + 0x28),0x42200000);
      if ((iVar2 != 0) && (iVar2 = FUN_0040d060(0x3ecccccd), iVar2 != 0)) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))();
      }
      break;
    default:
      FUN_0042aa00();
    }
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
