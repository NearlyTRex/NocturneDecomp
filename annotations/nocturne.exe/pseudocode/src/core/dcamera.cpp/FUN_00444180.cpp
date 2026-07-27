// Name: core_dcamera.cpp_FUN_00444180
// Address: 00444180
// Address Range: [[00444180, 00444294]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_00444180(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcamera_cpp_FUN_00444180(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar4 = param_1 - _DAT_01c00c5c;
  if (((_DAT_012b0660 != 1) || ((uVar4 & 1) == 0)) && ((_DAT_012b0660 != 2 || ((uVar4 & 3) == 0))))
  {
    iVar7 = (int)uVar4 >> (DAT_012b0660 & 0x1f);
    uVar6 = (*(int *)(param_2 + 8) >> 0x10) - _DAT_01c00c58 >> (DAT_012b0660 & 0x1f);
    uVar8 = (*(int *)(param_3 + 8) >> 0x10) - _DAT_01c00c58 >> (DAT_012b0660 & 0x1f);
    iVar5 = param_3;
    uVar4 = uVar6;
    if ((int)uVar8 < (int)uVar6) {
      iVar5 = param_2;
      uVar4 = uVar8;
      uVar8 = uVar6;
      param_2 = param_3;
    }
    iVar2 = iVar7 * 4;
    if (uVar4 < *(uint *)(iVar2 + 0x146b290)) {
      *(uint *)(iVar2 + 0x146b290) = uVar4;
      *(uint *)(iVar2 + 0x14b6a10) = *(uint *)(param_2 + 0x10);
    }
    iVar2 = iVar7 * 4;
    if (*(uint *)(iVar2 + 0x146b650) < uVar8) {
      *(uint *)(iVar2 + 0x146b650) = uVar8;
      *(uint *)(iVar2 + 0x14b6dd0) = *(uint *)(iVar5 + 0x10);
    }
    iVar2 = *(int *)(param_2 + 0x28);
    iVar3 = uVar8 - uVar4;
    iVar5 = *(int *)(iVar5 + 0x28) - iVar2;
    piVar1 = (int *)(uVar4 * 4 + iVar7 * 0x500 + 0x146ba10);
    for (; (int)uVar4 < (int)uVar8; uVar4 = uVar4 + 1) {
      iVar7 = iVar2 >> 8;
      iVar2 = iVar2 + iVar5 / (iVar3 + 1);
      *piVar1 = iVar7;
      piVar1 = piVar1 + 1;
    }
  }
  return;
}
