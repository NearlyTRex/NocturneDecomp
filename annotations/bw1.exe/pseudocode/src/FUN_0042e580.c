// Name: FUN_0042e580
// Address: 0042e580
// Address Range: [[0042e580, 0042e8df]]
// Convention: unknown
// Signature: void FUN_0042e580(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042e580(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar3 = FUN_00483e60(DAT_00612560);
  if ((iVar3 != 0) || (*(int *)(param_1 + 0xc19c) == -1)) {
    return;
  }
  uVar4 = FUN_00569eb0(param_1 + 0x158);
  if (*(int *)(param_1 + 0xc19c) == -2) {
    iVar3 = FUN_00565780(uVar4,&DAT_005d5937,0);
    *(int *)(param_1 + 0xc19c) = iVar3;
    if (iVar3 == -1) {
      return;
    }
    iVar3 = FUN_00565780(uVar4,&DAT_005d593c,0);
    *(int *)(param_1 + 0xc1c0) = iVar3;
    if (iVar3 == -1) {
      *(uint *)(param_1 + 0xc19c) = 0xffffffff;
      return;
    }
    uVar5 = FUN_00565780(uVar4,&DAT_005d593f,1);
    *(uint *)(param_1 + 0xc1c4) = uVar5;
    uVar5 = FUN_00565780(uVar4,&DAT_005d5942,1);
    *(uint *)(param_1 + 0xc1c8) = uVar5;
    uVar5 = FUN_00565780(uVar4,&DAT_005d5945,1);
    *(uint *)(param_1 + 0xc1cc) = uVar5;
    uVar5 = FUN_00565780(uVar4,"e1_left",0);
    *(uint *)(param_1 + 0xc1a0) = uVar5;
    uVar5 = FUN_00565780(uVar4,"e2_left",0);
    *(uint *)(param_1 + 0xc1a4) = uVar5;
    uVar5 = FUN_00565780(uVar4,"e3_left",0);
    *(uint *)(param_1 + 0xc1a8) = uVar5;
    uVar5 = FUN_00565780(uVar4,"e4_left",0);
    *(uint *)(param_1 + 0xc1ac) = uVar5;
    uVar5 = FUN_00565780(uVar4,"e1_right",0);
    *(uint *)(param_1 + 0xc1b0) = uVar5;
    uVar5 = FUN_00565780(uVar4,"e2_right",0);
    *(uint *)(param_1 + 0xc1b4) = uVar5;
    uVar5 = FUN_00565780(uVar4,"e3_right",0);
    *(uint *)(param_1 + 0xc1b8) = uVar5;
    uVar5 = FUN_00565780(uVar4,"e4_right",0);
    *(uint *)(param_1 + 0xc1bc) = uVar5;
  }
  iVar3 = param_1;
  do {
    if (*(int *)(iVar3 + 0xc1a0) != -1) {
      *(uint *)(param_1 + 0x2298 + *(int *)(iVar3 + 0xc1a0) * 4) = 0;
    }
    if (*(int *)(iVar3 + 0xc1b0) != -1) {
      *(uint *)(param_1 + 0x2298 + *(int *)(iVar3 + 0xc1b0) * 4) = 0;
    }
    piVar1 = (int *)(iVar3 + 0xc1c0);
    iVar3 = iVar3 + 4;
    *(uint *)(param_1 + 0x2298 + *piVar1 * 4) = 0;
  } while (iVar3 != param_1 + 0x10);
  fVar2 = (float)_DAT_01c43530 * _DAT_005d598f;
  *(float *)(param_1 + 0xc194) = *(float *)(param_1 + 0xc194) - fVar2;
  if (*(int *)(param_1 + 0xc190) == 1) {
    if (*(float *)(param_1 + 0xc194) <= 0.0) {
      uVar5 = FUN_0040cc00(0x40a00000,0x41000000);
      *(uint *)(param_1 + 0xc184) = 0;
      *(uint *)(param_1 + 0xc188) = 0;
      *(uint *)(param_1 + 0xc190) = 0;
      *(uint *)(param_1 + 0xc194) = uVar5;
    }
  }
  else if (*(float *)(param_1 + 0xc194) <= 0.0) {
    *(uint *)(param_1 + 0xc188) = 3;
    *(uint *)(param_1 + 0xc190) = 1;
    *(uint *)(param_1 + 0xc194) = 0x3d4ccccd;
    *(uint *)(param_1 + 0xc184) = 3;
  }
  *(float *)(param_1 + 0xc198) = *(float *)(param_1 + 0xc198) - fVar2;
  if (*(float *)(param_1 + 0xc198) <= 0.0) {
    iVar3 = *(int *)(0x01E81C80 + 4);
    if (param_1 == iVar3) {
      *(uint *)(iVar3 + 0xc198) = 0x3e19999a;
      uVar6 = FUN_005c084c();
      *(uint *)(iVar3 + 0xc18c) = uVar6 & 3;
    }
    else {
      *(uint *)(param_1 + 0xc18c) = 0;
      *(uint *)(param_1 + 0xc198) = 0;
    }
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0xc184) * 4 + param_1 + 0xc1a0);
  if (iVar3 != -1) {
    FUN_0042e410(uVar4,*(uint *)(param_1 + 0xc19c),iVar3);
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0xc188) * 4 + param_1 + 0xc1b0);
  if (iVar3 != -1) {
    FUN_0042e410(uVar4,*(uint *)(param_1 + 0xc19c),iVar3);
  }
  FUN_0042e410(uVar4,*(uint *)(param_1 + 0xc19c),
               *(uint *)(param_1 + 0xc1c0 + *(int *)(param_1 + 0xc18c) * 4));
  return;
}
