// Name: FUN_0049e3e0
// Address: 0049e3e0
// Address Range: [[0049e3e0, 0049e556]]
// Convention: unknown
// Signature: undefined4 FUN_0049e3e0(undefined4 param_1,float *param_2,float param_3,float *param_4,float *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0049e3e0(uint param_1,float *param_2,float param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float local_58 [9];
  float local_34;
  float local_30;
  float local_2c;
  float local_28 [6];
  
  pfVar5 = (float *)0x1c975e4;
  iVar4 = 0;
  do {
    if ((float)_DAT_005d5812 < pfVar5[3]) {
      if (&local_34 != local_58) {
        local_34 = *param_2 - *pfVar5;
        local_30 = param_2[1] - pfVar5[1];
        local_2c = param_2[2] - pfVar5[2];
      }
      fVar1 = SQRT(local_2c * local_2c + local_34 * local_34 + local_30 * local_30);
      if (fVar1 < pfVar5[4] * (float)_DAT_005d5812 + param_3) {
        if (param_4 != (float *)0x0) {
          fVar1 = 1.0 / fVar1;
          fVar2 = local_30 * fVar1 * _DAT_005d581a;
          fVar3 = local_2c * fVar1 * _DAT_005d581a;
          if (local_28 != param_4) {
            *param_4 = local_34 * fVar1 * _DAT_005d581a;
            param_4[1] = fVar2;
            param_4[2] = fVar3;
          }
        }
        if (param_5 != (float *)0x0) {
          *param_5 = pfVar5[5];
        }
        return 1;
      }
    }
    iVar4 = iVar4 + 1;
    pfVar5 = pfVar5 + 7;
    if (9 < iVar4) {
      return 0;
    }
  } while( true );
}
