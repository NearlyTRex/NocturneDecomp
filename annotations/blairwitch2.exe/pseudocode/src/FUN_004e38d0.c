// Name: FUN_004e38d0
// Address: 004e38d0
// Address Range: [[004e38d0, 004e3ac3]]
// Convention: unknown
// Signature: void FUN_004e38d0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e38d0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  
  FUN_00589c80(param_1,param_2);
  fVar2 = (float)FUN_004dcfb0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,_DAT_005f95d0);
  fVar2 = (_DAT_005f95d0 / fVar2) * param_2 + *(float *)(param_1 + 0x6dc);
  *(float *)(param_1 + 0x6dc) = fVar2;
  if (_DAT_005f95d0 < fVar2) {
    *(float *)(param_1 + 0x6dc) = _DAT_005f95d0;
  }
  *(float *)(param_1 + 0x6e0) = *(float *)(param_1 + 0x6dc) / _DAT_005f95d0;
  if (*(int *)(param_1 + 0x430) == 2) {
    fVar2 = (_DAT_005f95dc - 0x40000000) * *(float *)(param_1 + 0x6e0) + 0x40000000;
    fVar1 = _DAT_005f95e0 + (_DAT_005f95e4 - _DAT_005f95e0) * *(float *)(param_1 + 0x6e0);
    iVar3 = FUN_00550b70(*(uint *)(param_1 + 0x6d8));
    if (iVar3 == 0) {
      FUN_00550450();
      FUN_00550170(param_1 + 0x20);
      FUN_00550270(fVar2);
      FUN_00550290(fVar1);
      uVar4 = FUN_005506b0("@cre-charge.wav" + 1);
      *(uint *)(param_1 + 0x6d8) = uVar4;
      FUN_005504d0();
    }
    else {
      FUN_00550f20(*(uint *)(param_1 + 0x6d8),fVar2);
      FUN_00550f50(*(uint *)(param_1 + 0x6d8),fVar1);
    }
    FUN_004e2bf0(param_1);
    if (*(int *)(param_1 + 0x6d4) != 0) {
      _DAT_01cb5620 = 1;
      uVar4 = FUN_00447660(0x015111A8,"spark2.raw",0);
      FUN_0044b600(0x1cb3950,uVar4,0,0,0);
      FUN_0058aa30(0x02661F80,0x3dcccccd,0);
    }
    FUN_00530630(0x01E661B8,0x1cb3950);
    *(uint *)(param_1 + 0x6d4) = 0;
    return;
  }
  FUN_00551050(*(uint *)(param_1 + 0x6d8));
  *(uint *)(param_1 + 0x6d4) = 0;
  return;
}
