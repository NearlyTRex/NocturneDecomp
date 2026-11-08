// Name: FUN_004831d0
// Address: 004831d0
// Address Range: [[004831d0, 004837e4]]
// Convention: unknown
// Signature: void FUN_004831d0(int *param_1)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0048370a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004831d0(int *param_1)

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
  
  FUN_0047e870(0x01C25594);
  FUN_0047eff0(0x01C25594,1);
  local_28 = _DAT_01c35e48;
  local_24 = param_1[0x66];
  local_34 = 0;
  if (0 < param_1[0x6a]) {
    do {
      local_1c = _DAT_01c35e4c;
      local_2c = 0;
      if (0 < param_1[0x68]) {
        do {
          iVar6 = local_1c;
          iVar7 = local_28;
          if (*param_1 <= local_24) break;
          if (local_24 == param_1[0x65]) {
            iVar9 = local_28 + param_1[0x69] + -1;
            iVar8 = local_1c + param_1[99] + -1;
            uVar10 = _DAT_01c263e0;
            if (param_1[0x62] != 0) {
              uVar10 = _DAT_01c263e4;
            }
            local_38 = iVar9;
            local_30 = iVar8;
            if (_DAT_01c25f84 == 0) {
              FUN_004031c0(local_28,local_1c,iVar9,iVar8,uVar10);
            }
            else {
              iVar3 = (uVar10 & 0xff) * 3;
              FUN_004f8e20((uint)(byte)(&DAT_01c3583a)[iVar3] |
                           (uint)(byte)(&DAT_01c35838)[iVar3] << 0x10 |
                           (uint)(byte)(&DAT_01c35839)[iVar3] << 8);
              FUN_004f90d0(iVar7,iVar6,local_38,local_30);
            }
            if (param_1[0xef] == -1) {
              uVar10 = _DAT_01c25f84;
              if (_DAT_01c25f84 != 0) {
                FUN_004f8e20((uint)DAT_01c3583a |
                             (uint)DAT_01c35839 << 8 | (uint)DAT_01c35838 << 0x10);
                uVar10 = _DAT_01c35e60;
              }
              _DAT_01c35e60 = uVar10;
              FUN_0047a590(local_28,local_1c,iVar9,iVar8,1);
            }
          }
          local_18 = 0;
          pcVar11 = (char *)FUN_00481240(param_1,local_24);
          iVar6 = local_28 + param_1[100];
          local_20 = _DAT_01c263d8;
          iVar7 = FUN_00483aa0(param_1,local_24);
          if (iVar7 == 0) {
            local_20 = _DAT_01c263dc;
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
            FUN_00406da0(0xffff);
            FUN_004f3570(0x3f800000);
            FUN_004a8df0(_DAT_01c25590,local_164,iVar6,local_1c,local_20,0xffffffff);
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
      uVar10 = _DAT_01c35e60;
      if (0 < local_34) {
        uVar5 = _DAT_01c263e8;
        if (_DAT_01c25f84 != 0) {
          iVar7 = (_DAT_01c263e8 & 0xff) * 3;
          FUN_004f8e20((uint)(byte)(&DAT_01c3583a)[iVar7] |
                       (uint)(byte)(&DAT_01c35839)[iVar7] << 8 |
                       (uint)(byte)(&DAT_01c35838)[iVar7] << 0x10);
          uVar5 = _DAT_01c35e60;
        }
        _DAT_01c35e60 = uVar5;
        iVar6 = FUN_00484df0();
        iVar7 = DAT_006141bc / 0x60;
        if (param_1[0x7c] == 2) {
          iVar8 = 3;
        }
        else {
          iVar8 = 1;
        }
        iVar9 = FUN_00485380(0);
        if (param_1[0x7c] != 2) {
          iVar6 = 0;
        }
        FUN_004011a0(local_28,_DAT_01c35e4c,local_28,_DAT_01c35e54 - (iVar6 + iVar9 + iVar7 * iVar8)
                    );
      }
      local_34 = local_34 + 1;
      local_28 = local_28 + param_1[0x69];
      _DAT_01c35e60 = uVar10;
    } while (local_34 < param_1[0x6a]);
  }
  if (param_1[0x7c] == 1) {
    param_1[0x6f] = param_1[0x66];
    param_1[0x70] = *param_1;
    param_1[0x71] = param_1[0x68];
  }
  else {
    if (param_1[0x7c] != 2) goto LAB_004833e8;
    param_1[0x6f] = param_1[0x66] / param_1[0x68];
    param_1[0x70] = (*param_1 + param_1[0x68] + -1) / param_1[0x68];
    param_1[0x71] = param_1[0x6a];
  }
  FUN_00484440(param_1 + 0x6f);
LAB_004833e8:
  if ((char)param_1[0x17] != '\0') {
    FUN_00484f20(param_1 + 0x7d,param_1[0xef] == 0);
  }
  if ((char)param_1[0x30] != '\0') {
    FUN_00484f20(param_1 + 0xb6,param_1[0xef] == 1);
  }
  if (param_1[0x16] == 0) {
    FUN_0047f210(0x01C25594,0);
    return;
  }
  return;
}
