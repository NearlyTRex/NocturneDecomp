// Name: FUN_00421060
// Address: 00421060
// Address Range: [[00421060, 004212e2]]
// Convention: unknown
// Signature: void FUN_00421060(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00421060(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  char *pcVar9;
  uint *puVar10;
  float fVar11;
  float fVar12;
  uint *puStack_2c;
  int iStack_28;
  int iStack_20;
  int iStack_1c;
  
  *(uint *)(param_1 + 0x38) = 0;
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x34);
  FUN_00489110(param_1);
  *(uint *)(param_1 + 0x1345c) = 1;
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x1345c)) {
    iVar3 = param_1 + 0x13460;
    pcVar9 = (char *)(param_1 + 0x134d8);
    do {
      if (*pcVar9 == '\0') {
        iVar5 = *(int *)(param_1 + 0x1345c) + -1;
        *(int *)(param_1 + 0x1345c) = iVar5;
        if (iVar6 < iVar5) {
          iStack_20 = iVar3 + iVar6 * 0x17c;
          iStack_1c = iVar6 * 0x17c + 500 + iVar3;
          iVar5 = iVar6;
          do {
            FUN_004625f0(iStack_20,iStack_1c);
            iVar5 = iVar5 + 1;
            iStack_20 = iStack_20 + 0x17c;
            iStack_1c = iStack_1c + 0x17c;
          } while (iVar5 < *(int *)(param_1 + 0x1345c));
        }
      }
      else {
        FUN_00462580(iVar6 * 0x17c + iVar3);
        pcVar9 = pcVar9 + 0x17c;
        iVar6 = iVar6 + 1;
      }
    } while (iVar6 < *(int *)(param_1 + 0x1345c));
  }
  iStack_28 = 0;
  if (0 < *(int *)(param_1 + 0xd058)) {
    fVar11 = _DAT_005dcbc8 * _DAT_005b7729;
    fVar12 = _DAT_005dcbc8 * _DAT_005b772d;
    puVar10 = (uint *)(param_1 + 0xd07c);
    puVar7 = (uint *)(param_1 + 0xd070);
    puStack_2c = (uint *)(param_1 + 0xd064);
    do {
      puVar8 = (uint *)(iStack_28 * 0x40 + param_1 + 0xd05c);
      *puVar8 = 0;
      uVar4 = FUN_0040cea0(0,*(int *)(param_1 + 0x1345c) + -1,fVar11,fVar12);
      fVar1 = fVar11 * (float)_DAT_005b7731;
      fVar2 = fVar12 * (float)_DAT_005b7731;
      puVar8[1] = uVar4;
      uVar4 = FUN_0040ce40(fVar2,fVar1);
      puVar8[3] = 0;
      puVar8[2] = uVar4;
      uVar4 = FUN_0040ce40(fVar2,fVar1);
      puVar8[4] = uVar4;
      puVar7[2] = 0;
      puVar7[1] = puVar7[2];
      *puVar7 = puVar7[1];
      uVar4 = FUN_0040ce40(0xc0490fdb,0x40490fdb);
      puVar8[6] = uVar4;
      if (puVar10 != puStack_2c) {
        *puVar10 = puVar7[-3];
        puVar10[1] = puVar7[-2];
        puVar10[2] = puVar7[-1];
      }
      puVar10 = puVar10 + 0x10;
      puVar7 = puVar7 + 0x10;
      puStack_2c = puStack_2c + 0x10;
      iStack_28 = iStack_28 + 1;
    } while (iStack_28 < *(int *)(param_1 + 0xd058));
  }
  FUN_00423bc0(param_1);
  *(uint *)(param_1 + 0x1be80) = 0xffffd8f1;
  *(uint *)(param_1 + 0x1be84) = 0xffffd8f1;
  *(uint *)(param_1 + 0x100) = 1;
  *(uint *)(param_1 + 0x1be90) = 0;
  return;
}
