// Name: FUN_00576130
// Address: 00576130
// Address Range: [[00576130, 00576365]]
// Convention: unknown
// Signature: void FUN_00576130(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00576130(int param_1,uint param_2)

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
  
  FUN_00589c80(param_1,param_2);
  if (*(int *)(param_1 + 0x6d4) < 1) {
    dStack_20 = (double)FUN_00550c30(*(uint *)(param_1 + 0x6d8),2);
    fVar1 = (float)dStack_20;
    if (0.0 <= fVar1) {
      FUN_005532f0();
      dStack_28 = (double)(fVar1 * _DAT_005eccd0);
      dVar5 = (double)FUN_005b84d0(dStack_28);
      fVar4 = (float10)dStack_28;
      dStack_20 = dVar5;
      FUN_0054fcd0();
      iVar2 = FUN_00550bf0(*(uint *)(param_1 + 0x6d8),auStack_1dc);
      if (iVar2 != 0) {
        fStack_18 = (float)iStack_cc;
        fVar4 = (float10)iStack_cc * (float10)(float)(fVar4 - (float10)dVar5) *
                (float10)_DAT_005eccd4;
        FUN_005b7ff0();
        iVar2 = (int)ROUND(fVar4);
        FUN_00550450();
        fStack_18 = (float)iVar2;
        if (0.0 < (double)iVar2) {
          FUN_005503e0((double)iVar2,0);
        }
        uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"m-gun-t.wav");
        *(uint *)(param_1 + 0x6dc) = uVar3;
        FUN_005504d0();
      }
      FUN_00551050();
      FUN_00551440();
      return;
    }
    FUN_00551050();
    return;
  }
  *(int *)(param_1 + 0x6d4) = *(int *)(param_1 + 0x6d4) + -1;
  fVar1 = (float)FUN_0040cf60(0x3f666666,0x3f8e38e4);
  fStack_18 = fVar1;
  iVar2 = FUN_00550f50(*(uint *)(param_1 + 0x6d8),fVar1);
  if (iVar2 != 0) {
    return;
  }
  FUN_00551050();
  FUN_005b7790(auStack_8c,"$@m-gun1.wav @ 2.3 * %f" + 2,(double)fVar1);
  FUN_00551050();
  uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x38))(param_1,auStack_8c);
  *(uint *)(param_1 + 0x6d8) = uVar3;
  return;
}
