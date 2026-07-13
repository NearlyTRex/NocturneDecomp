// Name: FUN_0046aff0
// Address: 0046aff0
// Address Range: [[0046aff0, 0046b1a9]]
// Convention: unknown
// Signature: float FUN_0046aff0(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0046aff0(int param_1,float *param_2)

{
  int iVar1;
  int *piVar2;
  float *extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float fStack_2c;
  int iStack_1c;
  int iStack_18;
  
  fVar3 = ((float10)*param_2 - (float10)*(float *)(param_1 + 0x10)) /
          (float10)*(float *)(param_1 + 0x28);
  fVar4 = ((float10)param_2[1] - (float10)*(float *)(param_1 + 0x14)) /
          (float10)*(float *)(param_1 + 0x2c);
  fVar5 = ((float10)param_2[2] - (float10)*(float *)(param_1 + 0x18)) /
          (float10)*(float *)(param_1 + 0x30);
  FUN_00563a30();
  fVar6 = (float10)_DAT_0057e3ae;
  fVar7 = ((float10)*extraout_EDX -
          ((float10)(int)ROUND(fVar3) * (float10)*(float *)(param_1 + 0x28) +
          (float10)*(float *)(param_1 + 0x10))) / ((float10)*(float *)(param_1 + 0x28) * fVar6);
  FUN_00563a30();
  iStack_1c = (int)ROUND(fVar4);
  fVar4 = ((float10)*(float *)(extraout_EDX_00 + 4) -
          ((float10)iStack_1c * (float10)*(float *)(param_1 + 0x2c) +
          (float10)*(float *)(param_1 + 0x14))) / ((float10)*(float *)(param_1 + 0x2c) * fVar6);
  FUN_00563a30();
  fVar6 = ((float10)*(float *)(extraout_EDX_01 + 8) -
          ((float10)(int)ROUND(fVar5) * (float10)*(float *)(param_1 + 0x30) +
          (float10)*(float *)(param_1 + 0x18))) / ((float10)*(float *)(param_1 + 0x30) * fVar6);
  FUN_00563a30();
  FUN_00563a30();
  iStack_18 = (int)ROUND(fVar4);
  FUN_00563a30();
  iVar1 = (int)ROUND(fVar6);
  if (((((extraout_EDX_02 < 0) || (iStack_18 < 0)) || (iVar1 < 0)) ||
      ((7 < extraout_EDX_02 || (7 < iStack_18)))) || (7 < iVar1)) {
    fStack_2c = -999.0;
  }
  else {
    while( true ) {
      piVar2 = (int *)FUN_004678d0(param_1,(int)ROUND(fVar3),iStack_1c,(int)ROUND(fVar5));
      if (piVar2 == (int *)0x0) break;
      if ((*piVar2 != 0) &&
         ((*(byte *)(iStack_18 + iVar1 * 8 + *piVar2) & (&DAT_005b6d08)[(int)ROUND(fVar7)]) != 0)) {
        return (float)iStack_18 * *(float *)(param_1 + 0x2c) * _DAT_0057e3ae +
               (float)iStack_1c * *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x14);
      }
      iStack_18 = iStack_18 + -1;
      if (iStack_18 < 0) {
        iStack_1c = iStack_1c + -1;
        iStack_18 = 7;
      }
    }
    fStack_2c = -999.9;
  }
  return fStack_2c;
}
