// Name: FUN_00574264
// Address: 00574264
// Address Range: [[00574264, 00574401]]
// Convention: unknown
// Signature: undefined4 FUN_00574264(short *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00574264(short *param_1)

{
  short sVar1;
  short *psVar2;
  short *in_EAX;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  puVar3 = _DAT_02de54a8;
  if (param_1 == (short *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 != 0) {
    sVar1 = param_1[1];
    psVar2 = param_1;
    while ((in_EAX = psVar2 + 1, sVar1 != 0 && (*in_EAX != 0x3d))) {
      sVar1 = psVar2[2];
      psVar2 = in_EAX;
    }
  }
  if (*in_EAX == 0) {
    return 0xffffffff;
  }
  bVar8 = in_EAX[1] == 0;
  if (_DAT_02de54a8 == (uint *)0x0) {
    if (bVar8) {
      return 0;
    }
    puVar3 = (uint *)FUN_005635b0(9);
    if (puVar3 == (uint *)0x0) {
      return 0xffffffff;
    }
    _DAT_02de54a0 = puVar3 + 2;
    _DAT_02de54a8 = puVar3;
    *puVar3 = 0;
    puVar3[1] = 0;
    iVar5 = 0;
  }
  else {
    iVar4 = FUN_00574404(param_1,bVar8);
    if (bVar8) {
      return 0;
    }
    if (iVar4 < 1) {
      iVar5 = -iVar4;
      iVar6 = iVar4 * -4;
      iVar7 = iVar5 + 1 + iVar6 + 8;
      if (_DAT_02de54a0 == (uint *)0x0) {
        puVar3 = (uint *)FUN_005635b0(iVar7);
        if (puVar3 == (uint *)0x0) {
          return 0xffffffff;
        }
        FUN_00571410(puVar3,_DAT_02de54a8,iVar6);
        _DAT_02de54a0 = puVar3 + (2 - iVar4);
        FUN_00563cc0(_DAT_02de54a0,0,iVar5 + 1);
      }
      else {
        puVar3 = (uint *)FUN_00564a70(puVar3,iVar7,iVar6);
        if (puVar3 == (uint *)0x0) {
          return 0xffffffff;
        }
        FUN_00566170(puVar3 + (2 - iVar4),_DAT_02de54a0,iVar5);
        _DAT_02de54a0 = puVar3 + (2 - iVar4);
      }
      puVar3[1 - iVar4] = 0;
      _DAT_02de54a8 = puVar3;
    }
    else {
      iVar5 = iVar4 + -1;
    }
  }
  puVar3[iVar5] = param_1;
  *(byte *)(iVar5 + (int)_DAT_02de54a0) = 0;
  return 0;
}
