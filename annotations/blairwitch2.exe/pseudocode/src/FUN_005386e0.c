// Name: FUN_005386e0
// Address: 005386e0
// Address Range: [[005386e0, 0053896e]]
// Convention: unknown
// Signature: float FUN_005386e0(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_005386e0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  uint uVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  float local_50;
  int aiStack_4c [6];
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_24;
  int local_20;
  uint local_1c;
  
  FUN_005389b0(param_1);
  local_1c = 0x800000ff;
  local_24 = 0;
  FUN_0046b2b0(DAT_0060b280,param_2 + 0x20);
  local_34 = *(uint *)(param_2 + 0x30);
  local_2c = *(uint *)(param_2 + 0x38);
  local_30 = *(uint *)(param_1 + 0x18);
  FUN_0046b350(DAT_0060b280,&local_34,0);
  iVar7 = 0;
  do {
    FUN_0055d723(*DAT_0060b280 + iVar7,param_3);
    param_3 = param_3 + 0xc;
    uVar2 = *(uint *)(iVar7 + 0x10 + *DAT_0060b280);
    local_1c = local_1c & uVar2;
    iVar7 = iVar7 + 0x30;
    local_24 = local_24 | uVar2;
  } while (iVar7 != 0x180);
  if (((local_1c & 0x80000000) != 0) && ((char)local_1c != '\0')) {
    FUN_00408a10(param_2);
    FUN_00538a30(param_1);
    return 0.0;
  }
  iVar5 = 0;
  local_20 = 0;
  iVar7 = param_4 + 0x1b0;
  do {
    *(int *)((int)aiStack_4c + iVar5) = param_4;
    iVar5 = iVar5 + 4;
    local_20 = local_20 + 1;
    param_4 = param_4 + 0x48;
  } while (param_4 != iVar7);
  iVar7 = 0;
  FUN_00408a10(param_2);
  do {
    piVar6 = (int *)(*DAT_0060b280 + iVar7);
    iVar5 = piVar6[2];
    if (0 < iVar5) {
      iVar8 = iVar5 + 0x80;
      *piVar6 = (int)(((longlong)*piVar6 * (longlong)iVar8) / (longlong)iVar5);
      piVar6[1] = (int)(((longlong)piVar6[1] * (longlong)iVar8) / (longlong)piVar6[2]);
      piVar6[2] = iVar8;
      FUN_004e8eb0(piVar6);
    }
    iVar7 = iVar7 + 0x30;
  } while (iVar7 != 0x180);
  local_50 = 1.0;
  if (param_5 != 0) {
    iVar7 = 0;
    do {
      if ((*(byte *)(*DAT_0060b280 + iVar7 + 0x13) & 0x80) != 0) {
        dVar3 = _DAT_005e5fed;
        if (0 < *(int *)(*DAT_0060b280 + iVar7 + 8)) {
          dVar3 = _DAT_005e5fe5;
        }
        local_50 = local_50 * (float)dVar3;
      }
      iVar7 = iVar7 + 0x30;
    } while (iVar7 != 0x180);
  }
  FUN_0046b880(DAT_0060b280,0);
  FUN_00538970(param_1);
  FUN_0046b880(DAT_0060b280,1);
  FUN_0046b920(DAT_0060b280,(local_24 & 0x80000000) != 0);
  iVar7 = 0;
  if (0 < local_20) {
    iVar5 = local_20 * 4;
    iVar8 = 0;
    do {
      puVar1 = (uint *)((int)aiStack_4c + iVar8);
      iVar8 = iVar8 + 4;
      iVar4 = FUN_004698a0(DAT_0060b280,*puVar1);
      iVar7 = iVar7 + iVar4;
    } while (iVar8 < iVar5);
  }
  FUN_0046b920(DAT_0060b280,1);
  FUN_0046b880(DAT_0060b280,0);
  FUN_00538a30(param_1);
  return (float)iVar7 * local_50;
}
