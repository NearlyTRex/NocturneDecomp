// Name: FUN_005b1640
// Address: 005b1640
// Address Range: [[005b1640, 005b173d]]
// Convention: unknown
// Signature: void FUN_005b1640(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b1640(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    _DAT_01d046a0 = "..\\core\\cloth.cpp";
    _DAT_01d046a4 = 0x5f1;
    FUN_004e4500("CClothList::remove - invalid index");
  }
  if (param_1[param_2 + 0x65] != 0) {
    uVar3 = FUN_005ade00(param_1[param_2 + 0x65],0);
    FUN_005b7fdc(uVar3);
  }
  param_2 = param_2 + 1;
  if (param_2 < *param_1) {
    piVar6 = param_1 + param_2 * 10 + -9;
    piVar5 = param_1 + param_2 * 10 + 1;
    piVar4 = param_1 + param_2;
    do {
      piVar7 = piVar5;
      piVar8 = piVar6;
      do {
        iVar2 = *piVar7;
        *(char *)piVar8 = (char)iVar2;
        if ((char)iVar2 == '\0') break;
        cVar1 = *(char *)((int)piVar7 + 1);
        piVar7 = (int *)((int)piVar7 + 2);
        *(char *)((int)piVar8 + 1) = cVar1;
        piVar8 = (int *)((int)piVar8 + 2);
      } while (cVar1 != '\0');
      piVar4[100] = piVar4[0x65];
      param_2 = param_2 + 1;
      piVar6 = piVar6 + 10;
      piVar5 = piVar5 + 10;
      piVar4 = piVar4 + 1;
    } while (param_2 < *param_1);
  }
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  *(byte *)(param_1 + (iVar2 + -1) * 10 + 1) = 0;
  param_1[*param_1 + 0x65] = 0;
  return;
}
