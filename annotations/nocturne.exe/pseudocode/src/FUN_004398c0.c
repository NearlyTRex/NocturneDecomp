// Name: FUN_004398c0
// Address: 004398c0
// Address Range: [[004398c0, 0043999d]]
// Convention: unknown
// Signature: undefined4 FUN_004398c0(int param_1,int *param_2,int *param_3,undefined4 param_4)

#include "nocturne.h"

uint FUN_004398c0(int param_1,int *param_2,int *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte local_14 [4];
  
  iVar4 = param_1 + 0x18;
  iVar1 = param_1 + 4;
LAB_004398d8:
  do {
    if (*param_3 < 1) {
LAB_004398de:
      uVar2 = 0xffffffff;
    }
    else {
      FUN_00564c53(param_2,local_14,iVar4);
      if (*(int *)((int)param_2 + *(int *)(*param_2 + 4) + 0x10) != 0) goto LAB_004398de;
      *param_3 = *param_3 + -1;
      uVar2 = (uint)local_14[0];
    }
    if ((int)uVar2 < 0) {
      return 1;
    }
    uVar2 = *(uint *)(param_1 + 0x28) & uVar2;
    iVar3 = FUN_004394b0(iVar1,uVar2,*(uint *)(param_1 + 0x30));
    if (-1 < iVar3) {
      *(int *)(param_1 + 0x30) = iVar3;
      goto LAB_004398d8;
    }
    FUN_004396d0(iVar1,*(uint *)(param_1 + 0x30),iVar4,param_4);
    if (-1 < *(int *)(param_1 + 0x34)) {
      iVar3 = FUN_004394f0(iVar1,*(uint *)(param_1 + 0x2c),*(int *)(param_1 + 0x34));
      if (iVar3 != 0) {
        *(uint *)(param_1 + 0x34) = 0xffffffff;
        *(uint *)(param_1 + 0x30) = uVar2;
        *(uint *)(param_1 + 0x2c) = uVar2;
        goto LAB_004398d8;
      }
    }
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = uVar2;
    *(uint *)(param_1 + 0x2c) = uVar2;
  } while( true );
}
