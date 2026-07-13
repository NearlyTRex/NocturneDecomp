// Name: FUN_004c79a0
// Address: 004c79a0
// Address Range: [[004c79a0, 004c7c58]]
// Convention: unknown
// Signature: void FUN_004c79a0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c79a0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int extraout_EDX;
  float10 fVar5;
  
  FUN_00554030(param_1,param_2);
  fVar2 = (float)FUN_004c1b20(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0,0x41F00000);
  fVar2 = (0x41F00000 / fVar2) * param_2 + *(float *)(param_1 + 0x578);
  *(float *)(param_1 + 0x578) = fVar2;
  if (0x41F00000 < fVar2) {
    *(float *)(param_1 + 0x578) = 0x41F00000;
  }
  fVar5 = (float10)*(float *)(param_1 + 0x578) / (float10)0x41F00000;
  *(float *)(param_1 + 0x57c) = (float)fVar5;
  fVar5 = fVar5 * (float10)_DAT_00587aa5;
  FUN_00563a30();
  *(int *)(param_1 + 0x560) = (int)ROUND(fVar5);
  if (extraout_EDX == 2) {
    fVar2 = (_DAT_0059fd6c - 0x40000000) * *(float *)(param_1 + 0x57c) + 0x40000000;
    fVar1 = _DAT_0059fd70 + (_DAT_0059fd74 - _DAT_0059fd70) * *(float *)(param_1 + 0x57c);
    iVar3 = FUN_00526c50(*(uint *)(param_1 + 0x574));
    if (iVar3 == 0) {
      FUN_00526340();
      FUN_00525fc0(param_1 + 0x20);
      FUN_005260f0(fVar2);
      FUN_00526120(fVar1);
      uVar4 = FUN_005265a0("?cre-charge.wav" + 1);
      *(uint *)(param_1 + 0x574) = uVar4;
      FUN_005263c0();
    }
    else {
      FUN_005270d0(*(uint *)(param_1 + 0x574),fVar2);
      FUN_00527130(*(uint *)(param_1 + 0x574),fVar1);
    }
    iVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x8c))(param_1);
    if (iVar3 == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
      FUN_004940d0(0x01C70F74,
                   _DAT_0059fd80 + (_DAT_0059fd84 - _DAT_0059fd80) * *(float *)(param_1 + 0x57c),
                   (_DAT_0059fd7c - _DAT_0059fd78) * *(float *)(param_1 + 0x57c) + _DAT_0059fd78);
    }
    FUN_004c6ff0(param_1);
    if (*(int *)(param_1 + 0x570) == 0) {
      _DAT_01c76310 = 0;
    }
    else {
      _DAT_01c76310 = 1;
      uVar4 = FUN_0044bd20(0x014B8DE8,"lgunmask.raw",0);
      FUN_004501c0(&DAT_01c74640,uVar4,0,0,0);
      FUN_00554d40(0x02DDF9F0,0x3dcccccd,0);
    }
    FUN_0050a970(0x01E57284,&DAT_01c74640);
    *(uint *)(param_1 + 0x570) = 0;
    return;
  }
  FUN_00527230(*(uint *)(param_1 + 0x574));
  iVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x8c))(param_1);
  if (iVar3 == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    FUN_004940d0(0x01C70F74);
  }
  *(uint *)(param_1 + 0x570) = 0;
  return;
}
