// Name: FUN_00425120
// Address: 00425120
// Address Range: [[00425120, 004253a2]]
// Convention: unknown
// Signature: void FUN_00425120(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00425120(int param_1)

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
  FUN_004a0510(param_1);
  *(uint *)(param_1 + 0x12670) = 4;
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x12670)) {
    iVar3 = param_1 + 0x12674;
    pcVar9 = (char *)(param_1 + 0x126ec);
    do {
      if (*pcVar9 == '\0') {
        iVar5 = *(int *)(param_1 + 0x12670) + -1;
        *(int *)(param_1 + 0x12670) = iVar5;
        if (iVar6 < iVar5) {
          iStack_20 = iVar3 + iVar6 * 0x17c;
          iStack_1c = iVar6 * 0x17c + 500 + iVar3;
          iVar5 = iVar6;
          do {
            FUN_00468950(iStack_20,iStack_1c);
            iVar5 = iVar5 + 1;
            iStack_20 = iStack_20 + 0x17c;
            iStack_1c = iStack_1c + 0x17c;
          } while (iVar5 < *(int *)(param_1 + 0x12670));
        }
      }
      else {
        FUN_004688e0(iVar6 * 0x17c + iVar3);
        pcVar9 = pcVar9 + 0x17c;
        iVar6 = iVar6 + 1;
      }
    } while (iVar6 < *(int *)(param_1 + 0x12670));
  }
  iStack_28 = 0;
  if (0 < *(int *)(param_1 + 0xc26c)) {
    fVar11 = _DAT_005fd228 * _DAT_005d5038;
    fVar12 = _DAT_005fd228 * _DAT_005d503c;
    puVar10 = (uint *)(param_1 + 0xc290);
    puVar7 = (uint *)(param_1 + 0xc284);
    puStack_2c = (uint *)(param_1 + 0xc278);
    do {
      puVar8 = (uint *)(iStack_28 * 0x40 + param_1 + 0xc270);
      *puVar8 = 0;
      uVar4 = FUN_0040cc60(0,*(int *)(param_1 + 0x12670) + -1,fVar11,fVar12);
      fVar1 = fVar11 * (float)_DAT_005d5040;
      fVar2 = fVar12 * (float)_DAT_005d5040;
      puVar8[1] = uVar4;
      uVar4 = FUN_0040cc00(fVar2,fVar1);
      puVar8[3] = 0;
      puVar8[2] = uVar4;
      uVar4 = FUN_0040cc00(fVar2,fVar1);
      puVar8[4] = uVar4;
      puVar7[2] = 0;
      puVar7[1] = puVar7[2];
      *puVar7 = puVar7[1];
      uVar4 = FUN_0040cc00(0xc0490fdb,0x40490fdb);
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
    } while (iStack_28 < *(int *)(param_1 + 0xc26c));
  }
  FUN_00427a30(param_1);
  *(uint *)(param_1 + 0x19d90) = 0xffffd8f1;
  *(uint *)(param_1 + 0x19d94) = 0xffffd8f1;
  *(uint *)(param_1 + 0x100) = 1;
  *(uint *)(param_1 + 0x19da0) = 0;
  return;
}
