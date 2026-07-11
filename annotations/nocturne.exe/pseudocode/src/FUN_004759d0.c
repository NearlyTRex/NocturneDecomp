// Name: FUN_004759d0
// Address: 004759d0
// Address Range: [[004759d0, 00475da1]]
// Convention: unknown
// Signature: void FUN_004759d0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004759d0(int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  char local_15c [300];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  char *local_14;
  
  FUN_004722b0(0x01BCD074);
  local_28 = _DAT_01c00c58;
  local_24 = param_1[0x47];
  local_30 = 0;
  if (0 < param_1[0x4b]) {
    do {
      local_1c = _DAT_01c00c5c;
      local_2c = 0;
      if (0 < param_1[0x49]) {
        do {
          if (*param_1 <= local_24) break;
          if (local_24 == param_1[0x46]) {
            uVar2 = _DAT_01bcde10;
            if (param_1[0x43] != 0) {
              uVar2 = _DAT_01bcde14;
            }
            FUN_00403e60(local_28,local_1c,local_28 + param_1[0x4a] + -1,
                         local_1c + param_1[0x44] + -1,uVar2);
          }
          iVar3 = local_24;
          local_18 = 0;
          local_14 = (char *)FUN_00474080(param_1,local_24);
          iVar7 = local_28 + param_1[0x45];
          local_20 = _DAT_01bcde08;
          iVar3 = FUN_00476040(param_1,iVar3);
          if (iVar3 == 0) {
            local_20 = _DAT_01bcde0c;
          }
          piVar5 = param_1 + local_18;
          do {
            cVar1 = *local_14;
            pcVar4 = local_15c;
            while ((pcVar6 = local_14, cVar1 != '\0' && (pcVar6 = local_14 + 1, *local_14 != '\t')))
            {
              *pcVar4 = *local_14;
              pcVar4 = pcVar4 + 1;
              cVar1 = *pcVar6;
              local_14 = pcVar6;
            }
            *pcVar4 = '\0';
            local_14 = pcVar6;
            FUN_00408370(0xffff);
            FUN_00490980(_DAT_01bcd070,local_15c,iVar7,local_1c,local_20,0xffffffff);
            local_18 = local_18 + 1;
            iVar7 = iVar7 + piVar5[0x1f];
            piVar5 = piVar5 + 1;
          } while (*pcVar6 != '\0');
          local_24 = local_24 + 1;
          local_1c = local_1c + param_1[0x44];
          local_2c = local_2c + 1;
        } while (local_2c < param_1[0x49]);
      }
      uVar2 = _DAT_01c00c70;
      if (0 < local_30) {
        _DAT_01c00c70 = _DAT_01bcde18;
        FUN_004015a0(local_28,_DAT_01c00c5c,local_28,_DAT_01c00c64);
      }
      local_30 = local_30 + 1;
      local_28 = local_28 + param_1[0x4a];
      _DAT_01c00c70 = uVar2;
    } while (local_30 < param_1[0x4b]);
  }
  if (param_1[0x5b] == 1) {
    param_1[0x4e] = param_1[0x47];
    param_1[0x4f] = *param_1;
    param_1[0x50] = param_1[0x49];
  }
  else {
    if (param_1[0x5b] != 2) goto LAB_00475b35;
    param_1[0x4e] = param_1[0x47] / param_1[0x49];
    param_1[0x4f] = (*param_1 + param_1[0x49] + -1) / param_1[0x49];
    param_1[0x50] = param_1[0x4b];
  }
  FUN_00476580(param_1 + 0x4e);
LAB_00475b35:
  if (param_1[0x1e] != 0) {
    return;
  }
  FUN_004724e0(0x01BCD074,1);
  return;
}
