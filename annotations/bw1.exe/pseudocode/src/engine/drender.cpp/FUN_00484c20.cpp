// Name: FUN_00484c20
// Address: 00484c20
// Address Range: [[00484c20, 00484d91]]
// Convention: unknown
// Signature: void FUN_00484c20(int *param_1,ushort *param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484c20(int *param_1,ushort *param_2,uint param_3)

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
    iVar5 = FUN_0053e000(param_2);
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
  if (4999 < _DAT_01bc1280) {
    _DAT_01d1d400 = "..\\engine\\drender.cpp";
    _DAT_01d1d404 = 0xb78;
    FUN_005030e0("CDR::captureFace - too many faces captured");
  }
  uVar3 = _DAT_01bc1284;
  iVar6 = _DAT_01bc1280 * 0x20;
  puVar9 = (uint *)(iVar6 + 0x1bc1298 + (uint)bVar11 * -8);
  puVar7 = param_2 + (uint)bVar11 * -4 + 2;
  *(uint *)(iVar6 + 0x1bc1294) = *(uint *)param_2;
  puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
  puVar8 = puVar7 + (uint)bVar11 * -4 + 2;
  *puVar9 = *(uint *)puVar7;
  *puVar10 = *(uint *)puVar8;
  puVar10[(uint)bVar11 * -2 + 1] = *(uint *)(puVar8 + (uint)bVar11 * -4 + 2);
  *(ushort *)(puVar10 + (uint)bVar11 * -2 + 1 + (uint)bVar11 * -2 + 1) =
       (puVar8 + (uint)bVar11 * -4 + 2)[(uint)bVar11 * -4 + 2];
  *(uint *)(&DAT_01bc1288 + iVar6) = uVar3;
  *(uint *)(&DAT_01bc128c + iVar6) = param_3;
  iVar5 = *param_1;
  iVar1 = *(int *)(iVar5 + 8 + (uint)*param_2 * 0x30);
  iVar2 = *(int *)(iVar5 + (uint)param_2[1] * 0x30 + 8);
  iVar5 = *(int *)(iVar5 + 8 + (uint)param_2[2] * 0x30);
  if ((iVar1 < iVar2) && (iVar1 < iVar5)) {
    *(int *)(iVar6 + 0x1bc1290) = iVar1;
    _DAT_01bc1280 = _DAT_01bc1280 + 1;
    return;
  }
  if (iVar5 <= iVar2) {
    *(int *)(_DAT_01bc1280 * 0x20 + 0x1bc1290) = iVar5;
    _DAT_01bc1280 = _DAT_01bc1280 + 1;
    return;
  }
  *(int *)(_DAT_01bc1280 * 0x20 + 0x1bc1290) = iVar2;
  _DAT_01bc1280 = _DAT_01bc1280 + 1;
  return;
}
