// Name: FUN_0049b830
// Address: 0049b830
// Address Range: [[0049b830, 0049be44]]
// Convention: unknown
// Signature: void FUN_0049b830(int *param_1)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0049bd6a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049b830(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  char local_164 [300];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int *local_14;
  
  FUN_00496ee0(0x01C3EB54);
  FUN_00497660(0x01C3EB54,1);
  local_28 = _DAT_01c4f008;
  local_24 = param_1[0x66];
  local_34 = 0;
  if (0 < param_1[0x6a]) {
    do {
      local_1c = _DAT_01c4f00c;
      local_2c = 0;
      if (0 < param_1[0x68]) {
        do {
          iVar6 = local_1c;
          iVar7 = local_28;
          if (*param_1 <= local_24) break;
          if (local_24 == param_1[0x65]) {
            iVar9 = local_28 + param_1[0x69] + -1;
            iVar8 = local_1c + param_1[99] + -1;
            uVar10 = _DAT_01c3f5a0;
            if (param_1[0x62] != 0) {
              uVar10 = _DAT_01c3f5a4;
            }
            local_38 = iVar9;
            local_30 = iVar8;
            if (_DAT_01c3f544 == 0) {
              FUN_004031c0(local_28,local_1c,iVar9,iVar8,uVar10);
            }
            else {
              iVar3 = (uVar10 & 0xff) * 3;
              FUN_00517d50((uint)(byte)(&DAT_01c4e9fa)[iVar3] |
                           (uint)(byte)(&DAT_01c4e9f8)[iVar3] << 0x10 |
                           (uint)(byte)(&DAT_01c4e9f9)[iVar3] << 8);
              FUN_00518010(iVar7,iVar6,local_38,local_30);
            }
            if (param_1[0xef] == -1) {
              uVar10 = _DAT_01c3f544;
              if (_DAT_01c3f544 != 0) {
                FUN_00517d50((uint)DAT_01c4e9fa |
                             (uint)DAT_01c4e9f9 << 8 | (uint)DAT_01c4e9f8 << 0x10);
                uVar10 = _DAT_01c4f020;
              }
              _DAT_01c4f020 = uVar10;
              FUN_00492a40(local_28,local_1c,iVar9,iVar8,1);
            }
          }
          local_18 = 0;
          pcVar11 = (char *)FUN_004998a0(param_1,local_24);
          iVar6 = local_28 + param_1[100];
          local_20 = _DAT_01c3f598;
          iVar7 = FUN_0049c100(param_1,local_24);
          if (iVar7 == 0) {
            local_20 = _DAT_01c3f59c;
          }
          local_14 = param_1 + local_18;
          do {
            cVar2 = *pcVar11;
            pcVar4 = pcVar11;
            pcVar12 = local_164;
            while ((pcVar11 = pcVar4, cVar2 != '\0' && (pcVar11 = pcVar4 + 1, *pcVar4 != '\t'))) {
              *pcVar12 = *pcVar4;
              pcVar12 = pcVar12 + 1;
              cVar2 = *pcVar11;
              pcVar4 = pcVar11;
            }
            *pcVar12 = '\0';
            FUN_00406bd0(0xffff);
            FUN_00512320(0x3f800000);
            FUN_004c1dd0(_DAT_01c3eb50,local_164,iVar6,local_1c,local_20,0xffffffff);
            piVar1 = local_14 + 1;
            iVar6 = iVar6 + local_14[4];
            local_18 = local_18 + 1;
            local_14 = piVar1;
          } while (*pcVar11 != '\0');
          local_1c = local_1c + param_1[99];
          local_24 = local_24 + 1;
          local_2c = local_2c + 1;
        } while (local_2c < param_1[0x68]);
      }
      uVar10 = _DAT_01c4f020;
      if (0 < local_34) {
        uVar5 = _DAT_01c3f5a8;
        if (_DAT_01c3f544 != 0) {
          iVar7 = (_DAT_01c3f5a8 & 0xff) * 3;
          FUN_00517d50((uint)(byte)(&DAT_01c4e9fa)[iVar7] |
                       (uint)(byte)(&DAT_01c4e9f9)[iVar7] << 8 |
                       (uint)(byte)(&DAT_01c4e9f8)[iVar7] << 0x10);
          uVar5 = _DAT_01c4f020;
        }
        _DAT_01c4f020 = uVar5;
        iVar6 = FUN_0049d450();
        iVar7 = DAT_0061b49c / 0x60;
        if (param_1[0x7c] == 2) {
          iVar8 = 3;
        }
        else {
          iVar8 = 1;
        }
        iVar9 = FUN_0049d9e0(0);
        if (param_1[0x7c] != 2) {
          iVar6 = 0;
        }
        FUN_004011a0(local_28,_DAT_01c4f00c,local_28,_DAT_01c4f014 - (iVar6 + iVar9 + iVar7 * iVar8)
                    );
      }
      local_34 = local_34 + 1;
      local_28 = local_28 + param_1[0x69];
      _DAT_01c4f020 = uVar10;
    } while (local_34 < param_1[0x6a]);
  }
  if (param_1[0x7c] == 1) {
    param_1[0x6f] = param_1[0x66];
    param_1[0x70] = *param_1;
    param_1[0x71] = param_1[0x68];
  }
  else {
    if (param_1[0x7c] != 2) goto LAB_0049ba48;
    param_1[0x6f] = param_1[0x66] / param_1[0x68];
    param_1[0x70] = (*param_1 + param_1[0x68] + -1) / param_1[0x68];
    param_1[0x71] = param_1[0x6a];
  }
  FUN_0049caa0(param_1 + 0x6f);
LAB_0049ba48:
  if ((char)param_1[0x17] != '\0') {
    FUN_0049d580(param_1 + 0x7d,param_1[0xef] == 0);
  }
  if ((char)param_1[0x30] != '\0') {
    FUN_0049d580(param_1 + 0xb6,param_1[0xef] == 1);
  }
  if (param_1[0x16] == 0) {
    FUN_00497870(0x01C3EB54,0);
    return;
  }
  return;
}
