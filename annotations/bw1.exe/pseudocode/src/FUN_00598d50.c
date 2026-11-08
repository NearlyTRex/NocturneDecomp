// Name: FUN_00598d50
// Address: 00598d50
// Address Range: [[00598d50, 00598f85]]
// Convention: unknown
// Signature: void FUN_00598d50(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00598d50(int param_1,uint param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  double dVar5;
  byte auStack_1dc [272];
  int iStack_cc;
  byte auStack_8c [100];
  double dStack_28;
  double dStack_20;
  float fStack_18;
  
  FUN_005ad770(param_1,param_2);
  if (*(int *)(param_1 + 0x578) < 1) {
    dStack_20 = (double)FUN_00573660(*(uint *)(param_1 + 0x57c),2);
    fVar1 = (float)dStack_20;
    if (0.0 <= fVar1) {
      FUN_00575d20();
      dStack_28 = (double)(fVar1 * _DAT_005f7f44);
      dVar5 = (double)FUN_005c0880(dStack_28);
      fVar4 = (float10)dStack_28;
      dStack_20 = dVar5;
      FUN_00572340();
      iVar2 = FUN_00573620(*(uint *)(param_1 + 0x57c),auStack_1dc);
      if (iVar2 != 0) {
        fStack_18 = (float)iStack_cc;
        fVar4 = (float10)iStack_cc * (float10)(float)(fVar4 - (float10)dVar5) *
                (float10)_DAT_005f7f48;
        FUN_005c03a0();
        iVar2 = (int)ROUND(fVar4);
        FUN_00572ac0();
        fStack_18 = (float)iVar2;
        if (0.0 < (double)iVar2) {
          FUN_00572a50((double)iVar2,0);
        }
        uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"m-gun-t.wav");
        *(uint *)(param_1 + 0x580) = uVar3;
        FUN_00572b40();
      }
      FUN_00573a80();
      FUN_00573e70();
      return;
    }
    FUN_00573a80();
    return;
  }
  *(int *)(param_1 + 0x578) = *(int *)(param_1 + 0x578) + -1;
  fVar1 = (float)FUN_0040cc00(0x3f666666,0x3f8e38e4);
  fStack_18 = fVar1;
  iVar2 = FUN_00573980(*(uint *)(param_1 + 0x57c),fVar1);
  if (iVar2 != 0) {
    return;
  }
  FUN_00573a80();
  FUN_005bfb40(auStack_8c,"$@m-gun1.wav @ 2.3 * %f" + 2,(double)fVar1);
  FUN_00573a80();
  uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x30))(param_1,auStack_8c);
  *(uint *)(param_1 + 0x57c) = uVar3;
  return;
}
