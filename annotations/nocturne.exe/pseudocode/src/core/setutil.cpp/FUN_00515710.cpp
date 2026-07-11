// Name: FUN_00515710
// Address: 00515710
// Address Range: [[00515710, 005157f3]]
// Convention: unknown
// Signature: void FUN_00515710(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00515710(int param_1,char *param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (0x1f < *(int *)(param_1 + 0x11ec)) {
    _DAT_01cc4800 = "..\\core\\setutil.cpp";
    _DAT_01cc4804 = 899;
    FUN_004c8440("C3DSLight::addFilter - too many filters (max is %d)",0x20);
  }
  pcVar3 = (char *)(param_1 + 0x11f4 + *(int *)(param_1 + 0x11ec) * 0x28);
  do {
    cVar1 = *param_2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  *(uint *)(param_1 + 0x16f4 + *(int *)(param_1 + 0x11ec) * 4) = param_3;
  *(uint *)(param_1 + 0x1774 + *(int *)(param_1 + 0x11ec) * 4) = param_4;
  uVar2 = FUN_0044bd20(0x014B8DE8,param_1 + 0x11f4 + *(int *)(param_1 + 0x11ec) * 0x28,
                       *(uint *)(param_1 + 0x11f0));
  *(uint *)(param_1 + 0x1810 + *(int *)(param_1 + 0x11ec) * 4) = uVar2;
  *(int *)(param_1 + 0x11ec) = *(int *)(param_1 + 0x11ec) + 1;
  return;
}
