// Name: FUN_0046c720
// Address: 0046c720
// Address Range: [[0046c720, 0046c891]]
// Convention: unknown
// Signature: void FUN_0046c720(int *param_1,ushort *param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046c720(int *param_1,ushort *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  
  bVar11 = 0;
  if (param_1[4] == 0) {
    iVar5 = FUN_0051ca00(param_2);
    if (iVar5 == 0) {
      return;
    }
  }
  else {
    iVar5 = *param_1;
    uVar4 = *(uint *)(iVar5 + 0x10 + (uint)param_2[2] * 0x30) &
            *(uint *)(iVar5 + 0x10 + (uint)*param_2 * 0x30) &
            *(uint *)(iVar5 + (uint)param_2[1] * 0x30 + 0x10);
    if (((uVar4 & 0x80000000) != 0) && ((char)uVar4 != '\0')) {
      return;
    }
  }
  if (4999 < _DAT_01ba5cc4) {
    _DAT_01d046a0 = "..\\engine\\drender.cpp";
    _DAT_01d046a4 = 0xb78;
    FUN_004e4500("CDR::captureFace - too many faces captured");
  }
  uVar3 = _DAT_01ba5cc8;
  iVar6 = _DAT_01ba5cc4 * 0x20;
  puVar9 = (uint *)(iVar6 + 0x1ba5cdc + (uint)bVar11 * -8);
  puVar7 = param_2 + (uint)bVar11 * -4 + 2;
  *(uint *)(iVar6 + 0x1ba5cd8) = *(uint *)param_2;
  puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
  puVar8 = puVar7 + (uint)bVar11 * -4 + 2;
  *puVar9 = *(uint *)puVar7;
  *puVar10 = *(uint *)puVar8;
  puVar10[(uint)bVar11 * -2 + 1] = *(uint *)(puVar8 + (uint)bVar11 * -4 + 2);
  *(ushort *)(puVar10 + (uint)bVar11 * -2 + 1 + (uint)bVar11 * -2 + 1) =
       (puVar8 + (uint)bVar11 * -4 + 2)[(uint)bVar11 * -4 + 2];
  *(uint *)(&DAT_01ba5ccc + iVar6) = uVar3;
  *(uint *)(&DAT_01ba5cd0 + iVar6) = param_3;
  iVar5 = *param_1;
  iVar1 = *(int *)(iVar5 + 8 + (uint)*param_2 * 0x30);
  iVar2 = *(int *)(iVar5 + (uint)param_2[1] * 0x30 + 8);
  iVar5 = *(int *)(iVar5 + 8 + (uint)param_2[2] * 0x30);
  if ((iVar1 < iVar2) && (iVar1 < iVar5)) {
    *(int *)(iVar6 + 0x1ba5cd4) = iVar1;
    _DAT_01ba5cc4 = _DAT_01ba5cc4 + 1;
    return;
  }
  if (iVar5 <= iVar2) {
    *(int *)(_DAT_01ba5cc4 * 0x20 + 0x1ba5cd4) = iVar5;
    _DAT_01ba5cc4 = _DAT_01ba5cc4 + 1;
    return;
  }
  *(int *)(_DAT_01ba5cc4 * 0x20 + 0x1ba5cd4) = iVar2;
  _DAT_01ba5cc4 = _DAT_01ba5cc4 + 1;
  return;
}
