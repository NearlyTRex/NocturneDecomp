// Name: FUN_004a3790
// Address: 004a3790
// Address Range: [[004a3790, 004a3916]]
// Convention: unknown
// Signature: undefined4 FUN_004a3790(undefined4 param_1,float *param_2,float param_3,float *param_4,float *param_5,float *param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004a3790(uint param_1,float *param_2,float param_3,float *param_4,float *param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float local_70;
  float local_6c;
  float local_68;
  float local_34 [3];
  float local_28 [6];
  
  pfVar5 = (float *)0x1cf6090;
  iVar4 = 0;
  do {
    if ((float)_DAT_005c0a30 < pfVar5[3]) {
      if (&local_70 != local_34) {
        local_70 = *param_2 - *pfVar5;
        local_6c = param_2[1] - pfVar5[1];
        local_68 = param_2[2] - pfVar5[2];
      }
      fVar1 = SQRT(local_68 * local_68 + local_70 * local_70 + local_6c * local_6c);
      if (fVar1 < pfVar5[4] * (float)_DAT_005c0a30 + param_3) {
        if (param_4 != (float *)0x0) {
          fVar1 = 1.0 / fVar1;
          fVar2 = local_6c * fVar1 * _DAT_005c0a38;
          fVar3 = local_68 * fVar1 * _DAT_005c0a38;
          if (local_28 != param_4) {
            *param_4 = local_70 * fVar1 * _DAT_005c0a38;
            param_4[1] = fVar2;
            param_4[2] = fVar3;
          }
        }
        if (param_5 != (float *)0x0) {
          *param_5 = pfVar5[5];
        }
        if (param_6 != (float *)0x0) {
          *param_6 = pfVar5[7];
        }
        return 1;
      }
    }
    iVar4 = iVar4 + 1;
    pfVar5 = pfVar5 + 8;
    if (9 < iVar4) {
      return 0;
    }
  } while( true );
}
