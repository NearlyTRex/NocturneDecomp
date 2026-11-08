// Name: FUN_004843d0
// Address: 004843d0
// Address Range: [[004843d0, 004849e4]]
// Convention: unknown
// Signature: void FUN_004843d0(int *param_1)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0048490a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004843d0(int *param_1)

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
  
  FUN_0047fa80(0x01C5B0E4);
  FUN_00480200(0x01C5B0E4,1);
  local_28 = _DAT_01c6b5a8;
  local_24 = param_1[0x66];
  local_34 = 0;
  if (0 < param_1[0x6a]) {
    do {
      local_1c = _DAT_01c6b5ac;
      local_2c = 0;
      if (0 < param_1[0x68]) {
        do {
          iVar6 = local_1c;
          iVar7 = local_28;
          if (*param_1 <= local_24) break;
          if (local_24 == param_1[0x65]) {
            iVar9 = local_28 + param_1[0x69] + -1;
            iVar8 = local_1c + param_1[99] + -1;
            uVar10 = _DAT_01c5bb48;
            if (param_1[0x62] != 0) {
              uVar10 = _DAT_01c5bb4c;
            }
            local_38 = iVar9;
            local_30 = iVar8;
            if (_DAT_01c5baec == 0) {
              FUN_004031c0(local_28,local_1c,iVar9,iVar8,uVar10);
            }
            else {
              iVar3 = (uVar10 & 0xff) * 3;
              FUN_004f3520((uint)(byte)(&DAT_01c6af9a)[iVar3] |
                           (uint)(byte)(&DAT_01c6af98)[iVar3] << 0x10 |
                           (uint)(byte)(&DAT_01c6af99)[iVar3] << 8);
              FUN_004f37e0(iVar7,iVar6,local_38,local_30);
            }
            if (param_1[0xef] == -1) {
              uVar10 = _DAT_01c5baec;
              if (_DAT_01c5baec != 0) {
                FUN_004f3520((uint)DAT_01c6af9a |
                             (uint)DAT_01c6af99 << 8 | (uint)DAT_01c6af98 << 0x10);
                uVar10 = _DAT_01c6b5c0;
              }
              _DAT_01c6b5c0 = uVar10;
              FUN_0047b5e0(local_28,local_1c,iVar9,iVar8,1);
            }
          }
          local_18 = 0;
          pcVar11 = (char *)FUN_00482440(param_1,local_24);
          iVar6 = local_28 + param_1[100];
          local_20 = _DAT_01c5bb40;
          iVar7 = FUN_00484ca0(param_1,local_24);
          if (iVar7 == 0) {
            local_20 = _DAT_01c5bb44;
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
            FUN_00406bf0(0xffff);
            FUN_004edaf0(0x3f800000);
            FUN_004b0a20(_DAT_01c5b0e0,local_164,iVar6,local_1c,local_20,0xffffffff);
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
      uVar10 = _DAT_01c6b5c0;
      if (0 < local_34) {
        uVar5 = _DAT_01c5bb50;
        if (_DAT_01c5baec != 0) {
          iVar7 = (_DAT_01c5bb50 & 0xff) * 3;
          FUN_004f3520((uint)(byte)(&DAT_01c6af9a)[iVar7] |
                       (uint)(byte)(&DAT_01c6af99)[iVar7] << 8 |
                       (uint)(byte)(&DAT_01c6af98)[iVar7] << 0x10);
          uVar5 = _DAT_01c6b5c0;
        }
        _DAT_01c6b5c0 = uVar5;
        iVar6 = FUN_00485ff0();
        iVar7 = DAT_005fba1c / 0x60;
        if (param_1[0x7c] == 2) {
          iVar8 = 3;
        }
        else {
          iVar8 = 1;
        }
        iVar9 = FUN_00486580(0);
        if (param_1[0x7c] != 2) {
          iVar6 = 0;
        }
        FUN_004011a0(local_28,_DAT_01c6b5ac,local_28,_DAT_01c6b5b4 - (iVar6 + iVar9 + iVar7 * iVar8)
                    );
      }
      local_34 = local_34 + 1;
      local_28 = local_28 + param_1[0x69];
      _DAT_01c6b5c0 = uVar10;
    } while (local_34 < param_1[0x6a]);
  }
  if (param_1[0x7c] == 1) {
    param_1[0x6f] = param_1[0x66];
    param_1[0x70] = *param_1;
    param_1[0x71] = param_1[0x68];
  }
  else {
    if (param_1[0x7c] != 2) goto LAB_004845e8;
    param_1[0x6f] = param_1[0x66] / param_1[0x68];
    param_1[0x70] = (*param_1 + param_1[0x68] + -1) / param_1[0x68];
    param_1[0x71] = param_1[0x6a];
  }
  FUN_00485640(param_1 + 0x6f);
LAB_004845e8:
  if ((char)param_1[0x17] != '\0') {
    FUN_00486120(param_1 + 0x7d,param_1[0xef] == 0);
  }
  if ((char)param_1[0x30] != '\0') {
    FUN_00486120(param_1 + 0xb6,param_1[0xef] == 1);
  }
  if (param_1[0x16] == 0) {
    FUN_00480410(0x01C5B0E4,0);
    return;
  }
  return;
}
