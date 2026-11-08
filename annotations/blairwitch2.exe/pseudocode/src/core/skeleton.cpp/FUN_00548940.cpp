// Name: FUN_00548940
// Address: 00548940
// Address Range: [[00548940, 00548a8d]]
// Convention: unknown
// Signature: void FUN_00548940(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00548940(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  ulonglong uVar10;
  
  if (*(int *)(param_1 + 0x2230) < 0) {
    _DAT_01d046a0 = "..\\core\\skeleton.cpp";
    _DAT_01d046a4 = 0xfb6;
    FUN_004e4500("CDeformableModelInstance::computeCylindricalUVs - points not generated");
  }
  iVar1 = FUN_00547810(param_1);
  iVar1 = *(int *)(iVar1 + 0x2c + *(int *)(param_1 + 0x2230) * 4);
  iVar3 = *(int *)(param_1 + 0x2234);
  iVar7 = 1;
  iVar5 = *(int *)(iVar3 + 4);
  iVar6 = iVar5;
  iVar8 = iVar5;
  if (1 < iVar1) {
    do {
      iVar2 = *(int *)(iVar3 + 0x10);
      iVar6 = iVar2;
      if ((iVar8 <= iVar2) && (iVar6 = iVar8, iVar5 < iVar2)) {
        iVar5 = iVar2;
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar6;
      iVar3 = iVar3 + 0xc;
    } while (iVar7 < iVar1);
  }
  iVar5 = iVar5 - iVar6;
  if (iVar5 < 1) {
    iVar5 = 1;
  }
  if (0 < iVar1) {
    iVar8 = 0;
    iVar3 = 0;
    do {
      piVar4 = (int *)(*(int *)(param_1 + 0x2234) + iVar8);
      if ((*piVar4 == 0) && (piVar4[2] == 0)) {
        iVar7 = *DAT_0060b280;
        iVar2 = param_2;
      }
      else {
        fVar9 = (float10)*piVar4;
        FUN_005b9989();
        fVar9 = fVar9 * (float10)_DAT_005e7537;
        uVar10 = FUN_005b7ff0();
        piVar4 = (int *)((ulonglong)uVar10 >> 0x20);
        iVar2 = (int)uVar10 + (int)ROUND(fVar9);
        iVar7 = *DAT_0060b280;
        iVar3 = extraout_ECX;
      }
      *(int *)(iVar3 + 0x18 + iVar7) = iVar2;
      iVar7 = iVar3 + 0x30;
      *(int *)(iVar3 + 0x1c + *DAT_0060b280) =
           param_3 + (int)((longlong)
                           ((((longlong)(piVar4[1] - iVar6) & 0xffffffffffU) >> 8) << 0x20 |
                           (longlong)(piVar4[1] - iVar6) * 0x1000000 & 0xffffffffU) /
                          (longlong)iVar5);
      iVar8 = iVar8 + 0xc;
      iVar3 = iVar7;
    } while (iVar7 < iVar1 * 0x30);
  }
  return;
}
