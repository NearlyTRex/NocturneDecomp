// Name: FUN_005ce6dc
// Address: 005ce6dc
// Address Range: [[005ce6dc, 005ce87e]]
// Convention: unknown
// Signature: undefined4 FUN_005ce6dc(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005ce6dc(char *param_1)

{
  char cVar1;
  char *in_EAX;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  byte bVar10;
  
  puVar2 = _DAT_02c9f6d4;
  bVar10 = 0;
  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 != '\0') {
    in_EAX = param_1 + 1;
    cVar1 = *in_EAX;
    for (; (cVar1 != '\0' && (*in_EAX != '=')); in_EAX = in_EAX + 1) {
      cVar1 = in_EAX[1];
    }
  }
  if (*in_EAX == '\0') {
    return 0xffffffff;
  }
  bVar9 = in_EAX[1] == '\0';
  if (_DAT_02c9f6d4 == (uint *)0x0) {
    if (bVar9) {
      return 0;
    }
    puVar2 = (uint *)FUN_005c08d0(9);
    if (puVar2 == (uint *)0x0) {
      return 0xffffffff;
    }
    _DAT_02c9f6d0 = puVar2 + 2;
    _DAT_02c9f6d4 = puVar2;
    *puVar2 = 0;
    puVar2[1] = 0;
    iVar4 = 0;
  }
  else {
    iVar3 = FUN_005ce880(param_1,bVar9);
    if (bVar9) {
      return 0;
    }
    if (iVar3 < 1) {
      iVar4 = -iVar3;
      iVar5 = iVar3 * -4 + 8U + iVar4 + 1;
      if (_DAT_02c9f6d0 == (uint *)0x0) {
        puVar2 = (uint *)FUN_005c08d0(iVar5);
        if (puVar2 == (uint *)0x0) {
          return 0xffffffff;
        }
        puVar7 = _DAT_02c9f6d4;
        puVar8 = puVar2;
        for (uVar6 = (uint)(iVar3 * -4) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
        }
        for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(byte *)puVar8 = *(byte *)puVar7;
          puVar7 = (uint *)((int)puVar7 + (uint)bVar10 * -2 + 1);
          puVar8 = (uint *)((int)puVar8 + (uint)bVar10 * -2 + 1);
        }
        _DAT_02c9f6d0 = puVar2 + (2 - iVar3);
        FUN_005bfb70(_DAT_02c9f6d0,0,iVar4 + 1);
      }
      else {
        puVar2 = (uint *)FUN_005c10d0(puVar2,iVar5);
        if (puVar2 == (uint *)0x0) {
          return 0xffffffff;
        }
        FUN_005c25d0(puVar2 + (2 - iVar3),_DAT_02c9f6d0,iVar4);
        _DAT_02c9f6d0 = puVar2 + (2 - iVar3);
      }
      puVar2[1 - iVar3] = 0;
      _DAT_02c9f6d4 = puVar2;
    }
    else {
      iVar4 = iVar3 + -1;
    }
  }
  puVar2[iVar4] = param_1;
  *(byte *)((int)_DAT_02c9f6d0 + iVar4) = 0;
  return 0;
}
