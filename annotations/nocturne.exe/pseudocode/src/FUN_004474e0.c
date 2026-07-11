// Name: FUN_004474e0
// Address: 004474e0
// Address Range: [[004474e0, 0044759e]]
// Convention: unknown
// Signature: void FUN_004474e0(undefined4 param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004474e0(uint param_1,int *param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  DAT_005ad450 = *param_2;
  DAT_005ad454 = param_2[1];
  DAT_005ad458 = param_2[2];
  FUN_00532af0(*(uint *)(&DAT_00b0e1fc + *param_2 * 4) & 0xff,
               *(uint *)(&DAT_00b0e1fc + param_2[1] * 4) & 0xff,
               *(uint *)(&DAT_00b0e1fc + DAT_005ad458 * 4) & 0xff);
  fVar1 = (float10)_DAT_0057bae3;
  fVar2 = (float10)(float)param_2[3] * fVar1;
  fVar3 = (float10)(float)param_2[4] * fVar1;
  fVar4 = (float10)(float)param_2[5] * fVar1;
  fVar5 = (float10)(float)param_2[6] * (float10)_DAT_0057baeb;
  fVar1 = (float10)(float)param_2[7] * fVar1;
  FUN_00563a30();
  FUN_00563a30();
  FUN_00563a30();
  FUN_00563a30();
  FUN_00563a30();
  _DAT_0140e790 = (int)ROUND(fVar2);
  _DAT_0140e794 = (int)ROUND(fVar3);
  _DAT_0140e798 = (int)ROUND(fVar4);
  _DAT_0140e79c = (int)ROUND(fVar5);
  _DAT_0140e7a0 = (int)ROUND(fVar1);
  return;
}
