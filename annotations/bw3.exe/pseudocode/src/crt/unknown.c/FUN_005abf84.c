// Name: crt_unknown.c_FUN_005abf84
// Address: 005abf84
// Address Range: [[005abf84, 005ac257]]
// Convention: unknown
// Signature: uint crt_unknown_c_FUN_005abf84(int param_1)

#include "nocturne.h"

uint FUN_005abf84(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  int local_14;
  
  uVar8 = 0;
  if (*PTR_DAT_00607d38 == '\0') goto LAB_005ac24b;
  uVar1 = FUN_005abf28(&DAT_00607be8,&DAT_00607c0c,*(uint *)(param_1 + 0x14));
  if (uVar1 == 0) {
    puVar7 = (uint *)&DAT_00607be8;
    puVar9 = &DAT_00607c0c;
  }
  else {
    puVar7 = &DAT_00607c0c;
    puVar9 = (uint *)&DAT_00607be8;
  }
  iVar4 = *(int *)(param_1 + 0x10);
  iVar2 = FUN_005abdf0(*(int *)(param_1 + 0x14) + 0x76c);
  iVar6 = iVar4 * 2;
  if (iVar2 == 0) {
    iVar2 = *(int *)(&DAT_005e8804 + iVar6);
    iVar6 = *(int *)(&DAT_005e8802 + iVar6);
  }
  else {
    iVar2 = *(int *)(&DAT_005e881e + iVar6);
    iVar6 = *(int *)(&DAT_005e881c + iVar6);
  }
  iVar6 = (iVar2 >> 0x10) - (iVar6 >> 0x10);
  if (puVar7[8] == 0) {
    if ((int)puVar7[4] < iVar4) {
      uVar8 = 1;
    }
    else if (iVar4 == puVar7[4]) {
      iVar2 = *(int *)(param_1 + 0xc) - ((*(int *)(param_1 + 0x18) + 7) - puVar7[6]) % 7;
      iVar5 = (*(int *)(param_1 + 0xc) + -1) - ((*(int *)(param_1 + 0x18) + 6) - puVar7[6]) % 7;
      if (puVar7[3] == 5) {
        iVar3 = iVar6 + -7;
        if ((iVar3 < iVar2) && (uVar8 = 1, iVar5 <= iVar3)) {
LAB_005ac125:
          iVar2 = FUN_005ac258(param_1,puVar7);
          uVar8 = (uint)(iVar2 == 0);
        }
      }
      else {
        iVar3 = (puVar7[3] + -1) * 7 + 1;
        if ((iVar3 <= iVar2) && (uVar8 = 1, iVar5 < iVar3)) goto LAB_005ac125;
      }
    }
  }
  else {
    local_14 = puVar7[7];
    if (puVar7[8] == 1) {
      iVar2 = FUN_005abdf0(*(int *)(param_1 + 0x14) + 0x76c);
      if ((iVar2 != 0) && (0x003B001F >> 0x10 < local_14)) {
        local_14 = local_14 + 1;
      }
      local_14 = local_14 + -1;
    }
    if ((local_14 <= *(int *)(param_1 + 0x1c)) && (uVar8 = 1, *(int *)(param_1 + 0x1c) == local_14))
    goto LAB_005ac125;
  }
  if (uVar8 == 0) {
    if (uVar1 != 0) {
      uVar8 = uVar1;
    }
    goto LAB_005ac24b;
  }
  if (puVar9[8] == 0) {
    if ((int)puVar9[4] < iVar4) {
      uVar8 = 0;
    }
    else if (iVar4 == puVar9[4]) {
      iVar2 = *(int *)(param_1 + 0xc) - ((*(int *)(param_1 + 0x18) + 7) - puVar9[6]) % 7;
      uVar8 = 0;
      iVar4 = (*(int *)(param_1 + 0xc) + -1) - ((*(int *)(param_1 + 0x18) + 6) - puVar9[6]) % 7;
      if (puVar9[3] == 5) {
        iVar6 = iVar6 + -7;
        if (iVar6 < iVar2) {
          if (iVar4 <= iVar6) {
LAB_005ac233:
            uVar8 = FUN_005ac258(param_1,puVar9);
          }
        }
        else {
          uVar8 = 1;
        }
      }
      else {
        iVar6 = (puVar9[3] + -1) * 7 + 1;
        if (iVar2 < iVar6) {
          uVar8 = 1;
        }
        else if (iVar4 < iVar6) goto LAB_005ac233;
      }
    }
  }
  else {
    iVar4 = puVar9[7];
    if (puVar9[8] == 1) {
      iVar6 = FUN_005abdf0(*(int *)(param_1 + 0x14) + 0x76c);
      if ((iVar6 != 0) && (0x003B001F >> 0x10 < iVar4)) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 + -1;
    }
    if ((iVar4 <= *(int *)(param_1 + 0x1c)) && (uVar8 = 0, iVar4 == *(int *)(param_1 + 0x1c)))
    goto LAB_005ac233;
  }
  if (uVar1 != 0) {
    uVar8 = uVar1 - uVar8;
  }
LAB_005ac24b:
  *(uint *)(param_1 + 0x20) = uVar8;
  return uVar8;
}
