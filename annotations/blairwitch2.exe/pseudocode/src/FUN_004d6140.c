// Name: FUN_004d6140
// Address: 004d6140
// Address Range: [[004d6140, 004d622f]]
// Convention: unknown
// Signature: void FUN_004d6140(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d6140(int param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  do {
    uVar1 = FUN_005030c0(param_1 + 0x2b4,&param_2);
    switch(uVar1) {
    case 100:
      iVar2 = *(int *)(param_1 + 0x25644) + 1;
      *(int *)(param_1 + 0x25644) = iVar2;
      if (4 < iVar2) {
        *(uint *)(param_1 + 0x25644) = 0;
      }
      break;
    case 0x65:
      FUN_004d6230(param_1,_DAT_01cee0e8);
      break;
    case 0x66:
      FUN_004d6230(param_1,_DAT_01cee0ec);
      break;
    case 0x67:
      uVar3 = FUN_005b849c();
      if ((uVar3 & 3) == 0) {
        FUN_00503620(param_1 + 0x2b4,0x15,1);
      }
      break;
    case 0x68:
      iVar2 = *(int *)(param_1 + 0x25664);
      if (iVar2 != 0) {
        *(uint *)(param_1 + 0x25664) = 0;
        FUN_00428b10(param_1,1,iVar2,0x3e4ccccd,0);
      }
      break;
    case 0x69:
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x130))(param_1,1,0);
      break;
    default:
      FUN_0042aa00(param_1,uVar1);
    }
  } while (0.0 < param_2);
  return;
}
