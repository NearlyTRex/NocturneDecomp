// Name: FUN_004484c0
// Address: 004484c0
// Address Range: [[004484c0, 0044864e]]
// Convention: unknown
// Signature: void FUN_004484c0(float *param_1,float *param_2,float *param_3,int param_4,uint param_5,int param_6,uint param_7,int param_8,uint param_9,double param_10)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004484c0(float *param_1,float *param_2,float *param_3,int param_4,uint param_5,int param_6,uint param_7,int param_8,uint param_9,double param_10)

{
  double dVar1;
  float fVar2;
  int local_28;
  
  fVar2 = (param_2[2] - param_1[2]) * (float)__BITCAST_DOUBLE(CONCAT44(param_9,param_8)) +
          (*param_2 - *param_1) * (float)__BITCAST_DOUBLE(CONCAT44(param_5,param_4)) +
          (param_2[1] - param_1[1]) * (float)__BITCAST_DOUBLE(CONCAT44(param_7,param_6));
  dVar1 = (double)fVar2;
  local_28 = SUB84(__BITCAST_UINT64(dVar1),0);
  if ((((ulonglong)dVar1 & 0x7fffffff00000000) == 0) && (local_28 == 0)) {
    _DAT_01cc4800 = "@..\\core\\dcube.cpp" + 1;
    _DAT_01cc4804 = 0x6e;
    FUN_004c8440("Bad clip!");
  }
  fVar2 = -(param_1[2] * (float)__BITCAST_DOUBLE(CONCAT44(param_9,param_8)) +
           param_1[1] * (float)__BITCAST_DOUBLE(CONCAT44(param_7,param_6)) +
           (float)__BITCAST_DOUBLE(CONCAT44(param_5,param_4)) * *param_1 + (float)param_10) / fVar2;
  *param_3 = (*param_2 - *param_1) * fVar2 + *param_1;
  param_3[1] = (param_2[1] - param_1[1]) * fVar2 + param_1[1];
  param_3[2] = (param_2[2] - param_1[2]) * fVar2 + param_1[2];
  if (((((param_5 & 0x7fffffff) != 0) || (param_4 != 0)) && ((param_7 & 0x7fffffff) == 0)) &&
     (((param_6 == 0 && ((param_9 & 0x7fffffff) == 0)) && (param_8 == 0)))) {
    *param_3 = (float)(-(float10)__BITCAST_DOUBLE(CONCAT44(param_5,param_4)) * (float10)param_10);
  }
  if ((((param_5 & 0x7fffffff) == 0) && (param_4 == 0)) &&
     ((((param_7 & 0x7fffffff) != 0 || (param_6 != 0)) &&
      (((param_9 & 0x7fffffff) == 0 && (param_8 == 0)))))) {
    param_3[1] = (float)(-(float10)__BITCAST_DOUBLE(CONCAT44(param_7,param_6)) * (float10)param_10);
  }
  if ((((((param_5 & 0x7fffffff) == 0) && (param_4 == 0)) && ((param_7 & 0x7fffffff) == 0)) &&
      (param_6 == 0)) && (((param_9 & 0x7fffffff) != 0 || (param_8 != 0)))) {
    param_3[2] = (float)(-(float10)__BITCAST_DOUBLE(CONCAT44(param_9,param_8)) * (float10)param_10);
    return;
  }
  return;
}
