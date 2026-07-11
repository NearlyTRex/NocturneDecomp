// Name: FUN_004bb2d0
// Address: 004bb2d0
// Address Range: [[004bb2d0, 004bb3bd]]
// Convention: unknown
// Signature: void FUN_004bb2d0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bb2d0(int param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  do {
    uVar1 = FUN_004e11c0(param_1 + 0x150,&param_2);
    switch(uVar1) {
    case 100:
      iVar2 = *(int *)(param_1 + 0x1fa40) + 1;
      *(int *)(param_1 + 0x1fa40) = iVar2;
      if (4 < iVar2) {
        *(uint *)(param_1 + 0x1fa40) = 0;
      }
      break;
    case 0x65:
      FUN_004bb3c0(param_1,_DAT_01cae2bc);
      break;
    case 0x66:
      FUN_004bb3c0(param_1,_DAT_01cae2c0);
      break;
    case 0x67:
      uVar3 = FUN_0056488c();
      if ((uVar3 & 3) == 0) {
        FUN_004e16b0(param_1 + 0x150,0x15,1);
      }
      break;
    case 0x68:
      iVar2 = *(int *)(param_1 + 0x1fa60);
      if (iVar2 != 0) {
        *(uint *)(param_1 + 0x1fa60) = 0;
        FUN_00428f40(param_1,1,iVar2,0x3e4ccccd);
      }
      break;
    case 0x69:
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,1,0);
      break;
    default:
      FUN_0042add0(param_1,uVar1);
    }
  } while (0.0 < param_2);
  return;
}
