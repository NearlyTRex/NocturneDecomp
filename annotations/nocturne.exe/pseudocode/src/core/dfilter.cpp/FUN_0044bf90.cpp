// Name: FUN_0044bf90
// Address: 0044bf90
// Address Range: [[0044bf90, 0044c18c]]
// Convention: unknown
// Signature: void FUN_0044bf90(int *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044bf90(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int extraout_EDX;
  float10 fVar3;
  
  iVar2 = FUN_00456a60(&DAT_0057bf21,param_2,&DAT_0057bf1e);
  if (iVar2 == 0) {
    _DAT_01cc4800 = "..\\core\\dfilter.cpp";
    _DAT_01cc4804 = 0xab;
    FUN_004c8440("CDemonFilter::load - Bad filename : %s",param_2);
  }
  FUN_00563380(iVar2);
  iVar2 = FUN_004568c0(&DAT_0057bf60,param_2);
  fVar3 = SQRT((float10)iVar2);
  FUN_00563a30();
  *param_1 = (int)ROUND(fVar3);
  param_1[1] = extraout_EDX / *param_1;
  if (*param_1 != param_1[1]) {
    _DAT_01cc4800 = "..\\core\\dfilter.cpp";
    _DAT_01cc4804 = 0xb7;
    FUN_004c8440("CDemonFilter::load - Non-square filter %dx%d",*param_1,param_1[1]);
  }
  if ((*param_1 < 0x40) || (0x100 < *param_1)) {
    _DAT_01cc4800 = "..\\core\\dfilter.cpp";
    _DAT_01cc4804 = 0xb9;
    FUN_004c8440("CDemonFilter::load - Bad filter size %d",*param_1);
  }
  if ((param_1[1] < 0x40) || (0x100 < param_1[1])) {
    _DAT_01cc4800 = "..\\core\\dfilter.cpp";
    _DAT_01cc4804 = 0xbc;
    FUN_004c8440("CDemonFilter::load - Bad filter size %d",param_1[1]);
  }
  FUN_0044bf20(param_1);
  iVar2 = FUN_00456a60(&DAT_0057c020,param_2,&DAT_0057c01d);
  if (iVar2 == 0) {
    _DAT_01cc4800 = "..\\core\\dfilter.cpp";
    _DAT_01cc4804 = 0xc6;
    FUN_004c8440("CDemonFilter::load - Bad filename");
  }
  FUN_005636d0(param_1[0x12],*param_1,param_1[1],iVar2);
  FUN_00563380(iVar2);
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
