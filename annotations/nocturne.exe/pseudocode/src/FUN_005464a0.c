// Name: FUN_005464a0
// Address: 005464a0
// Address Range: [[005464a0, 00546734]]
// Convention: unknown
// Signature: void FUN_005464a0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005464a0(int param_1,uint param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  byte local_1b4 [272];
  int local_a4;
  byte local_8c [100];
  ulonglong local_28;
  double local_20;
  float local_18;
  
  FUN_00554030(param_1,param_2);
  if (*(int *)(param_1 + 0x570) < 1) {
    local_20 = (double)FUN_00526d10(*(uint *)(param_1 + 0x574),2);
    fVar1 = (float)local_20;
    if (fVar1 < 0.0) {
      FUN_00527230();
    }
    else {
      FUN_00528800();
      local_20 = (double)(fVar1 * _DAT_005968f5);
      local_28 = (double)FUN_005648c0(local_20);
      fVar4 = (float10)local_28;
      fVar5 = (float10)local_20;
      FUN_00525b70();
      iVar2 = FUN_00526cd0(*(uint *)(param_1 + 0x574),local_1b4);
      if (iVar2 != 0) {
        local_18 = (float)local_a4;
        fVar5 = (float10)local_a4 * (float10)(float)(fVar5 - fVar4) * (float10)_DAT_005968f9;
        FUN_00563a30();
        iVar2 = (int)ROUND(fVar5);
        FUN_00526340();
        local_18 = (float)iVar2;
        if (0.0 < (double)iVar2) {
          FUN_005262d0((double)iVar2,0);
        }
        uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"m-gun-t.wav");
        *(uint *)(param_1 + 0x578) = uVar3;
        FUN_005263c0();
      }
      FUN_00527230();
      FUN_00528890();
    }
    iVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x8c))();
    if (iVar2 == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
      FUN_004940d0();
      return;
    }
  }
  else {
    *(int *)(param_1 + 0x570) = *(int *)(param_1 + 0x570) + -1;
    fVar1 = (float)FUN_0040dda0(0x3f666666,0x3f8e38e4);
    local_18 = fVar1;
    iVar2 = FUN_00527130(*(uint *)(param_1 + 0x574),fVar1);
    if (iVar2 == 0) {
      FUN_00527230();
      FUN_00563c90(local_8c,"$@m-gun1.wav @ 2.3 * %f" + 2,(double)fVar1);
      FUN_00527230();
      uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x28))(param_1,local_8c);
      *(uint *)(param_1 + 0x574) = uVar3;
    }
    iVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x8c))();
    if (iVar2 == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
      FUN_004940d0();
      return;
    }
  }
  return;
}
