// Name: FUN_00483850
// Address: 00483850
// Address Range: [[00483850, 00483981]]
// Convention: unknown
// Signature: void FUN_00483850(undefined4 param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00483850(uint param_1,float *param_2,float *param_3)

{
  uint extraout_ECX;
  uint extraout_ECX_00;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (param_3 == (float *)0x0) {
    fVar1 = (float10)param_2[1] * (float10)_DAT_005db38c * (float10)_DAT_005db394;
    fVar5 = (float10)*param_2 * (float10)_DAT_005db38c * (float10)_DAT_005db394;
    FUN_005c03a0(0,0,0);
    FUN_005c03a0();
    FUN_005c03a0((int)ROUND(fVar1));
    FUN_00507c70((int)ROUND(fVar5),extraout_ECX);
    return;
  }
  fVar5 = (float10)param_3[1] * (float10)_DAT_005db384;
  fVar6 = (float10)*param_3 * (float10)_DAT_005db384;
  fVar1 = (float10)_DAT_005db38c;
  fVar2 = (float10)_DAT_005db394;
  fVar3 = (float10)param_2[1] * fVar1 * fVar2;
  fVar4 = (float10)param_2[2] * fVar1 * fVar2;
  fVar2 = (float10)*param_2 * fVar1 * fVar2;
  FUN_005c03a0();
  FUN_005c03a0();
  FUN_005c03a0();
  FUN_005c03a0();
  FUN_005c03a0();
  FUN_005c03a0((int)ROUND(fVar3),(int)ROUND(fVar6),(int)ROUND(fVar5),extraout_ECX_00);
  FUN_00507c70((int)ROUND(fVar2),(int)ROUND(fVar4));
  return;
}
