// Name: FUN_004478d0
// Address: 004478d0
// Address Range: [[004478d0, 00447acc]]
// Convention: unknown
// Signature: void FUN_004478d0(int *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004478d0(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int extraout_EDX;
  float10 fVar3;
  
  iVar2 = FUN_00460c70(&DAT_005ceb6c,param_2,&DAT_005ceb69);
  if (iVar2 == 0) {
    _DAT_01d046a0 = "..\\core\\dfilter.cpp";
    _DAT_01d046a4 = 0xab;
    FUN_004e4500("CDemonFilter::load - Bad filename : %s",param_2);
  }
  FUN_005b89c0(iVar2);
  iVar2 = FUN_00460aa0(&DAT_005cebab,param_2);
  fVar3 = SQRT((float10)iVar2);
  FUN_005b7ff0();
  *param_1 = (int)ROUND(fVar3);
  param_1[1] = extraout_EDX / *param_1;
  if (*param_1 != param_1[1]) {
    _DAT_01d046a0 = "..\\core\\dfilter.cpp";
    _DAT_01d046a4 = 0xb7;
    FUN_004e4500("CDemonFilter::load - Non-square filter %dx%d",*param_1,param_1[1]);
  }
  if ((*param_1 < 0x40) || (0x100 < *param_1)) {
    _DAT_01d046a0 = "..\\core\\dfilter.cpp";
    _DAT_01d046a4 = 0xb9;
    FUN_004e4500("CDemonFilter::load - Bad filter size %d",*param_1);
  }
  if ((param_1[1] < 0x40) || (0x100 < param_1[1])) {
    _DAT_01d046a0 = "..\\core\\dfilter.cpp";
    _DAT_01d046a4 = 0xbc;
    FUN_004e4500("CDemonFilter::load - Bad filter size %d",param_1[1]);
  }
  FUN_00447860(param_1);
  iVar2 = FUN_00460c70(&DAT_005cec6b,param_2,&DAT_005cec68);
  if (iVar2 == 0) {
    _DAT_01d046a0 = "..\\core\\dfilter.cpp";
    _DAT_01d046a4 = 0xc6;
    FUN_004e4500("CDemonFilter::load - Bad filename");
  }
  FUN_005b87c0(param_1[0x12],*param_1,param_1[1],iVar2);
  FUN_005b89c0(iVar2);
  for (iVar2 = 0; iVar2 < *param_1 * param_1[1]; iVar2 = iVar2 + 1) {
    *(char *)(iVar2 + param_1[0x12]) = (char)((int)(uint)*(byte *)(iVar2 + param_1[0x12]) >> 2);
  }
  param_1 = param_1 + 2;
  do {
    cVar1 = *param_2;
    *(char *)param_1 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    *(char *)((int)param_1 + 1) = cVar1;
    param_1 = (int *)((int)param_1 + 2);
  } while (cVar1 != '\0');
  return;
}
