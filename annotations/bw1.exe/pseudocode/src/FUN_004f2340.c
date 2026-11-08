// Name: FUN_004f2340
// Address: 004f2340
// Address Range: [[004f2340, 004f242f]]
// Convention: unknown
// Signature: void FUN_004f2340(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f2340(int param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  do {
    uVar1 = FUN_00524270(param_1 + 0x158,&param_2);
    switch(uVar1) {
    case 100:
      iVar2 = *(int *)(param_1 + 0x1ffb0) + 1;
      *(int *)(param_1 + 0x1ffb0) = iVar2;
      if (4 < iVar2) {
        *(uint *)(param_1 + 0x1ffb0) = 0;
      }
      break;
    case 0x65:
      FUN_004f2430(param_1,_DAT_01d06ca8);
      break;
    case 0x66:
      FUN_004f2430(param_1,_DAT_01d06cac);
      break;
    case 0x67:
      uVar3 = FUN_005c084c();
      if ((uVar3 & 3) == 0) {
        FUN_005247c0(param_1 + 0x158,0x15,1);
      }
      break;
    case 0x68:
      iVar2 = *(int *)(param_1 + 0x1ffd0);
      if (iVar2 != 0) {
        *(uint *)(param_1 + 0x1ffd0) = 0;
        FUN_004325b0(param_1,1,iVar2,0x3e4ccccd,0);
      }
      break;
    case 0x69:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,0);
      break;
    default:
      FUN_00434a80(param_1,uVar1);
    }
  } while (0.0 < param_2);
  return;
}
