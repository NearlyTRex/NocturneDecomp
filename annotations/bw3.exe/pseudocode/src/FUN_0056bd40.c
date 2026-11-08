// Name: FUN_0056bd40
// Address: 0056bd40
// Address Range: [[0056bd40, 0056bf75]]
// Convention: unknown
// Signature: void FUN_0056bd40(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056bd40(int param_1,uint param_2)

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
  
  FUN_0057b160(param_1,param_2);
  if (*(int *)(param_1 + 0x594) < 1) {
    dStack_20 = (double)FUN_005567c0(*(uint *)(param_1 + 0x598),2);
    fVar1 = (float)dStack_20;
    if (0.0 <= fVar1) {
      FUN_00558e90();
      dStack_28 = (double)(fVar1 * _DAT_005d64b3);
      dVar5 = (double)FUN_005a3600(dStack_28);
      fVar4 = (float10)dStack_28;
      dStack_20 = dVar5;
      FUN_00555840();
      iVar2 = FUN_00556780(*(uint *)(param_1 + 0x598),auStack_1dc);
      if (iVar2 != 0) {
        fStack_18 = (float)iStack_cc;
        fVar4 = (float10)iStack_cc * (float10)(float)(fVar4 - (float10)dVar5) *
                (float10)_DAT_005d64b7;
        FUN_005a3120();
        iVar2 = (int)ROUND(fVar4);
        FUN_00555fd0();
        fStack_18 = (float)iVar2;
        if (0.0 < (double)iVar2) {
          FUN_00555f60((double)iVar2,0);
        }
        uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"m-gun-t.wav");
        *(uint *)(param_1 + 0x59c) = uVar3;
        FUN_00556050();
      }
      FUN_00556be0();
      FUN_00556fd0();
      return;
    }
    FUN_00556be0();
    return;
  }
  *(int *)(param_1 + 0x594) = *(int *)(param_1 + 0x594) + -1;
  fVar1 = (float)FUN_0040ce40(0x3f666666,0x3f8e38e4);
  fStack_18 = fVar1;
  iVar2 = FUN_00556ae0(*(uint *)(param_1 + 0x598),fVar1);
  if (iVar2 != 0) {
    return;
  }
  FUN_00556be0();
  FUN_005a28c0(auStack_8c,"$@m-gun1.wav @ 2.3 * %f" + 2,(double)fVar1);
  FUN_00556be0();
  uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x30))(param_1,auStack_8c);
  *(uint *)(param_1 + 0x598) = uVar3;
  return;
}
