// Name: FUN_0049d580
// Address: 0049d580
// Address Range: [[0049d580, 0049d890]]
// Convention: unknown
// Signature: void FUN_0049d580(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049d580(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  byte bVar13;
  char local_dc [200];
  int local_14;
  
  uVar1 = _DAT_01c4f00c;
  bVar13 = 0;
  _DAT_01c4f00c = *(uint *)(param_1 + 0xc);
  FUN_0049c500(*(uint *)(param_1 + 8),_DAT_01c4f00c,*(uint *)(param_1 + 0x10),
               *(uint *)(param_1 + 0x14),*(uint *)(param_1 + 0x18));
  iVar6 = param_1 + 0x1c;
  _DAT_01c4f00c = uVar1;
  iVar3 = FUN_004c3ea0(_DAT_01c3eb50,iVar6);
  iVar4 = FUN_004c3f50(_DAT_01c3eb50,iVar6);
  iVar5 = FUN_004c4540(_DAT_01c3eb50,0x41);
  iVar3 = *(int *)(param_1 + 0x18) +
          ((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 8)) - iVar3) / 2;
  local_14 = *(int *)(param_1 + 0x18) +
             ((*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x14)) - (iVar4 + iVar5)) / 2;
  FUN_004c1dd0(_DAT_01c3eb50,iVar6,iVar3,local_14,_DAT_01c3f5b8,0xffffffff);
  if (_DAT_01c3f544 == 0) {
    _DAT_01c4f020 = _DAT_01c3f5b8;
  }
  else {
    iVar6 = (_DAT_01c3f5b8 & 0xff) * 3;
    FUN_00517d50((uint)(byte)(&DAT_01c4e9fa)[iVar6] |
                 (uint)(byte)(&DAT_01c4e9f9)[iVar6] << 8 |
                 (uint)(byte)(&DAT_01c4e9f8)[iVar6] << 0x10);
  }
  pcVar11 = local_dc;
  pcVar10 = local_dc;
  pcVar12 = local_dc;
  if (param_2 != 0) {
    FUN_00492a40(*(int *)(param_1 + 8) + 3,*(int *)(param_1 + 0xc) + 3,*(int *)(param_1 + 0x10) + -5
                 ,*(int *)(param_1 + 0x14) + -4,1);
  }
  pcVar9 = (char *)(param_1 + 0x1c);
  do {
    cVar2 = *pcVar9;
    *pcVar11 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar11[1] = cVar2;
    pcVar11 = pcVar11 + 2;
  } while (cVar2 != '\0');
  uVar7 = 0;
  do {
    uVar8 = 0xffffffff;
    pcVar11 = local_dc;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + (uint)bVar13 * -2 + 1;
    } while (cVar2 != '\0');
    if (~uVar8 - 1 <= uVar7) break;
    cVar2 = FUN_005c12b0(local_dc[uVar7]);
    local_dc[uVar7] = cVar2;
    uVar7 = uVar7 + 1;
  } while( true );
  cVar2 = FUN_005c12b0(*(byte *)(param_1 + 4));
  do {
    pcVar11 = pcVar10;
    if (*pcVar10 == cVar2) goto LAB_0049d747;
    if (*pcVar10 == '\0') break;
    pcVar11 = pcVar10 + 1;
    if (*pcVar11 == cVar2) goto LAB_0049d747;
    pcVar10 = pcVar10 + 2;
  } while (*pcVar11 != '\0');
  pcVar11 = (char *)0x0;
LAB_0049d747:
  if (pcVar11 == (char *)0x0) {
    return;
  }
  pcVar10 = (char *)(param_1 + 0x1c);
  do {
    cVar2 = *pcVar10;
    *pcVar12 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar12[1] = cVar2;
    pcVar12 = pcVar12 + 2;
  } while (cVar2 != '\0');
  *pcVar11 = '\0';
  iVar6 = FUN_004c3ea0(_DAT_01c3eb50,local_dc);
  uVar7 = iVar6 + *(int *)(_DAT_01c3eb50 + 0x41f4);
  bVar13 = *(byte *)(param_1 + 0x1c);
  uVar8 = FUN_005c12b0(*(byte *)(param_1 + 4));
  if (uVar8 == bVar13) {
    uVar7 = uVar8 ^ bVar13;
  }
  iVar3 = iVar3 + uVar7;
  iVar6 = FUN_004c4510(_DAT_01c3eb50,0x41);
  local_14 = local_14 + iVar6 + 1;
  uVar7 = _DAT_01c3f5b8;
  if (_DAT_01c3f544 != 0) {
    iVar6 = (_DAT_01c3f5b8 & 0xff) * 3;
    FUN_00517d50((uint)(byte)(&DAT_01c4e9fa)[iVar6] |
                 (uint)(byte)(&DAT_01c4e9f9)[iVar6] << 8 |
                 (uint)(byte)(&DAT_01c4e9f8)[iVar6] << 0x10);
    uVar7 = _DAT_01c4f020;
  }
  _DAT_01c4f020 = uVar7;
  iVar6 = FUN_004c44e0(_DAT_01c3eb50,*(byte *)(param_1 + 4));
  iVar6 = iVar6 + iVar3 + -1;
  if (_DAT_01c3f544 == 0) {
    FUN_00402f30(iVar3,local_14,iVar6);
    return;
  }
  FUN_005182e0(iVar3,local_14,iVar6);
  return;
}
