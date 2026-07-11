// Name: FUN_004b3e00
// Address: 004b3e00
// Address Range: [[004b3e00, 004b3f35]]
// Convention: unknown
// Signature: void FUN_004b3e00(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b3e00(int param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  
  do {
    uVar1 = FUN_004e11c0(param_1 + 0x150,&param_2);
    switch(uVar1) {
    case 0x65:
      FUN_004b3f40(param_1,_DAT_01cae04c);
      iVar2 = *(int *)(param_1 + 0x1fa40);
      goto LAB_004b3e4c;
    case 0x66:
      FUN_004b3f40(param_1,_DAT_01cae050);
      iVar2 = *(int *)(param_1 + 0x1fa40);
LAB_004b3e4c:
      *(uint *)(param_1 + 0x1fa40) = (uint)(iVar2 == 0);
      break;
    case 0x67:
    case 0x69:
    case 0x6b:
      iVar2 = FUN_00527880((double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
                           (double)*(float *)(param_1 + 0x28),0,0x40440000);
      if (iVar2 != 0) {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"box-swing?.wav");
      }
      break;
    case 0x68:
    case 0x6a:
    case 0x6c:
      iVar2 = FUN_00527880((double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
                           (double)*(float *)(param_1 + 0x28),0,0x40440000);
      if ((iVar2 != 0) && (iVar2 = FUN_0040dea0(0x3ecccccd), iVar2 != 0)) {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"box-punch?.wav");
      }
      break;
    default:
      FUN_0042add0(param_1,uVar1);
    }
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
