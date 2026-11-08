// Name: FUN_00441190
// Address: 00441190
// Address Range: [[00441190, 00441288]]
// Convention: unknown
// Signature: undefined4 FUN_00441190(int param_1,int *param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_00441190(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1 + 4;
  do {
    if (-1 < *(int *)(param_1 + 0x34)) {
      iVar4 = FUN_00440ef0(iVar1,*(uint *)(param_1 + 0x30),param_1 + 0x18,param_3);
      if (iVar4 != 0) {
        if (iVar4 == -1) {
          return 2;
        }
        if (iVar4 != -2) {
          return 0;
        }
      }
      *(uint *)(param_1 + 0x34) = 0xffffffff;
      if ((*(int *)(param_1 + 0x38) < 0) ||
         (iVar5 = FUN_00440d70(iVar1,*(uint *)(param_1 + 0x2c),*(int *)(param_1 + 0x38)),
         iVar5 == 0)) {
        *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x30);
      }
      else {
        *(uint *)(param_1 + 0x38) = 0xffffffff;
      }
      uVar2 = *(uint *)(param_1 + 0x3c);
      *(uint *)(param_1 + 0x3c) = 0xffffffff;
      *(uint *)(param_1 + 0x2c) = uVar2;
      *(uint *)(param_1 + 0x30) = uVar2;
      if (iVar4 != 0) {
        return 2;
      }
    }
    uVar3 = (**(code **)(*param_2 + 4))(param_2);
    if ((int)uVar3 < 0) {
      if (uVar3 != 0xffffffff) {
        return 0;
      }
      return 1;
    }
    uVar3 = *(uint *)(param_1 + 0x28) & uVar3;
    iVar4 = FUN_00440d30(iVar1,uVar3,*(uint *)(param_1 + 0x30));
    if (iVar4 < 0) {
      *(uint *)(param_1 + 0x3c) = uVar3;
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x30);
    }
    else {
      *(int *)(param_1 + 0x30) = iVar4;
    }
  } while( true );
}
