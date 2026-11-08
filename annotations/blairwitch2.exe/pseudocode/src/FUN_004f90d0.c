// Name: FUN_004f90d0
// Address: 004f90d0
// Address Range: [[004f90d0, 004f9320]]
// Convention: unknown
// Signature: void FUN_004f90d0(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f90d0(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float *pfVar7;
  float fVar8;
  float10 fVar9;
  
  if ((float)param_1 < _DAT_01d0986c) {
    fVar9 = (float10)_DAT_01d0986c;
    FUN_005b7ff0();
    param_1 = (int)ROUND(fVar9);
  }
  if (_DAT_01d09874 < (float)param_3) {
    fVar9 = (float10)_DAT_01d09874;
    FUN_005b7ff0();
    param_3 = (int)ROUND(fVar9);
  }
  if (param_1 <= param_3) {
    if ((float)param_2 < _DAT_01d09870) {
      fVar9 = (float10)_DAT_01d09870;
      FUN_005b7ff0();
      param_2 = (int)ROUND(fVar9);
    }
    if (_DAT_01d09878 < (float)param_4) {
      fVar9 = (float10)_DAT_01d09878;
      FUN_005b7ff0();
      param_4 = (int)ROUND(fVar9);
    }
    if (param_2 <= param_4) {
      fVar8 = (float)FUN_004f93d0();
      pfVar7 = _DAT_01d12114;
      fVar1 = 1.0 / fVar8;
      _DAT_01d12114[5] = 0.0;
      pfVar7[6] = 0.5;
      fVar4 = _DAT_005ddff8;
      fVar2 = (float)param_1 + _DAT_005ddff8;
      pfVar7[7] = 0.5;
      *pfVar7 = fVar2;
      pfVar7[0xd] = 0.0;
      pfVar7[0xe] = 0.5;
      pfVar7[0xf] = 0.5;
      pfVar7[1] = (float)param_2 + fVar4;
      pfVar7[2] = fVar8;
      pfVar7[3] = fVar1;
      pfVar7[4] = _DAT_01d0d2e4;
      pfVar7[0x15] = 0.0;
      pfVar7[0x16] = 0.5;
      fVar5 = _DAT_005ddffc;
      fVar3 = (float)param_3 + _DAT_005ddffc;
      pfVar7[0x17] = 0.5;
      pfVar7[8] = fVar3;
      pfVar7[9] = (float)param_2 + fVar4;
      pfVar7[10] = fVar8;
      pfVar7[0xb] = fVar1;
      pfVar7[0xc] = _DAT_01d0d2e4;
      pfVar7[0x10] = fVar3;
      pfVar7[0x1d] = 0.0;
      pfVar7[0x1e] = 0.5;
      pfVar7[0x1f] = 0.5;
      pfVar7[0x11] = (float)param_4 + fVar5;
      pfVar7[0x12] = fVar8;
      pfVar7[0x13] = fVar1;
      pfVar7[0x14] = _DAT_01d0d2e4;
      pfVar7[0x18] = fVar2;
      pfVar7[0x19] = (float)param_4 + fVar5;
      pfVar7[0x1a] = fVar8;
      pfVar7[0x1b] = fVar1;
      pfVar7[0x1c] = _DAT_01d0d2e4;
      FUN_004f3380(&DAT_00618100);
      uVar6 = _DAT_01d09858;
      _DAT_01d09858 = 0;
      FUN_004f40a0(pfVar7,4,&DAT_006180f0,2);
      _DAT_01d09858 = uVar6;
      return;
    }
  }
  return;
}
