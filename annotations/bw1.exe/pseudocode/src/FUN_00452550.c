// Name: FUN_00452550
// Address: 00452550
// Address Range: [[00452550, 00452d6f]]
// Convention: unknown
// Signature: uint * FUN_00452550(uint *param_1,uint *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_00452550(uint *param_1,uint *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int aiStackY_107c [1014];
  int local_94;
  int local_88;
  uint *local_80;
  int local_7c;
  int local_78;
  byte *local_74;
  int local_70;
  uint *local_6c;
  byte *local_68;
  int local_64;
  uint *local_60;
  uint *local_5c;
  uint *local_58;
  int local_54;
  int local_50;
  int local_48;
  int local_44;
  uint local_40;
  int local_3c;
  uint *local_38;
  uint *local_34;
  byte *local_30;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  byte local_14;
  
  bVar1 = 0;
  if ((0x01CCF390[3] != 0) ||
     ((puVar3 = 0x01CCF390, param_3 == 0 && (puVar3 = param_2, param_2[8] != 0)))) {
    _DAT_0152bc18 = param_2;
    FUN_0044e2a0(param_1,param_2);
    _DAT_0152bc20 = local_94;
    *(uint *)(&DAT_0152bc24 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffff70 + (uint)bVar1 * -8);
    *(uint *)(&DAT_0152bc28 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffff74 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    if (param_2[8] == 0) {
      _DAT_0152bc1c = 0;
    }
    else {
      _DAT_0152bc1c = _DAT_0152bc20;
      if (_DAT_0152bc20 != 0) {
        bVar1 = (char)_DAT_01323d00 + 0x10;
        _DAT_0152bc1c = 1;
        _DAT_0152bc20 = _DAT_0152bc20 >> (bVar1 & 0x1f);
        _DAT_0152bc24 = _DAT_0152bc24 >> (bVar1 & 0x1f);
      }
    }
    iVar5 = 0;
    if (0 < (int)param_1[0x55]) {
      iVar2 = 0;
      do {
        *(uint *)(iVar2 + 0x14dea50) = param_1[0x51];
        *(uint *)(iVar2 + 0x14dee10) = 0;
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar5 < (int)param_1[0x55]);
    }
    if (((param_3 == 0) && (param_2[8] != 0)) && (_DAT_00611294 = 0xffffffff, param_2[8] == 2)) {
      if (_DAT_01289ca8 != 0) {
        iVar5 = 0;
        do {
          if (param_2 == *(uint **)(iVar5 + 0x1289cac)) {
            iVar12 = 0;
            iVar2 = iVar5 + 0x1289cac;
            if ((int)param_1[0x55] < 1) {
              _DAT_00611294 = 0xffffffff;
              return param_1;
            }
            do {
              if (*(uint *)(iVar2 + 4) != param_1[0x51]) {
                FUN_00452450(iVar12,*(uint *)(iVar2 + 4),*(uint *)(iVar2 + 0x3c4),
                             iVar5 + 0x1289cac);
              }
              iVar12 = iVar12 + 1;
              iVar2 = iVar2 + 4;
            } while (iVar12 < (int)param_1[0x55]);
            return param_1;
          }
          iVar5 = iVar5 + 0x13384;
        } while (iVar5 < (int)(_DAT_01289ca8 * 0x13384));
      }
      if (_DAT_01289ca8 < 8) {
        iVar5 = _DAT_01289ca8 * 0x13384;
        _DAT_01289ca8 = _DAT_01289ca8 + 1;
        local_80 = (uint *)(iVar5 + 0x1289cac);
        FUN_0045ea60(param_2);
        local_54 = 0;
        if (0 < (int)param_1[0x55]) {
          local_6c = local_80 + 0x1e1;
          local_68 = &DAT_00857cd8;
          local_70 = 0x14df1d0;
          local_60 = local_80;
          do {
            iVar5 = local_54 * 4;
            if (param_1[0x51] != *(uint *)(iVar5 + 0x14dea50)) {
              local_48 = local_54;
              local_88 = *(int *)(iVar5 + 0x14dea50);
              local_50 = *(int *)(iVar5 + 0x14dee10);
              local_5c = local_80;
              local_20 = (int *)(local_68 + local_88 * 0xc);
              local_2c = (uint *)(local_70 + local_88 * 4);
              local_24 = (uint *)(*(int *)(&DAT_01c4480c + (local_54 << (DAT_01323d00 & 0x1f)) * 4)
                                 + (local_88 << (DAT_01323d00 & 0x1f)) * 4);
              local_30 = (byte *)((int)local_6c + local_88);
              for (; local_88 < local_50; local_88 = local_88 + 1) {
                local_14 = 0;
                if (((*local_24 < *local_2c) &&
                    (uVar6 = (int)(*local_20 - *_DAT_0152bc18) >> 0x1f,
                    iVar5 = (*local_20 - *_DAT_0152bc18 ^ uVar6) - uVar6,
                    iVar5 < (int)_DAT_0152bc18[3])) &&
                   ((uVar6 = (int)(local_20[1] - _DAT_0152bc18[1]) >> 0x1f,
                    iVar2 = (local_20[1] - _DAT_0152bc18[1] ^ uVar6) - uVar6,
                    iVar2 < (int)_DAT_0152bc18[3] &&
                    ((uVar6 = (int)(local_20[2] - _DAT_0152bc18[2]) >> 0x1f,
                     iVar12 = (local_20[2] - _DAT_0152bc18[2] ^ uVar6) - uVar6,
                     iVar12 < (int)_DAT_0152bc18[3] &&
                     (local_3c = iVar2 * iVar2 + iVar5 * iVar5 + iVar12 * iVar12,
                     local_3c < (int)_DAT_0152bc18[4])))))) {
                  if (_DAT_0152bc1c != 0) {
                    local_40 = 0;
                    if (*local_24 == 0) {
                      iVar5 = 0x7fffffff;
                    }
                    else {
                      iVar5 = (int)(0x7fffffff / (longlong)(int)*local_24);
                    }
                    iVar7 = _DAT_0152bc28 - iVar5;
                    iVar8 = iVar7 >> 0x1f;
                    local_1c = (_DAT_0152bc20 - local_88) * 0x10;
                    local_18 = (_DAT_0152bc24 - local_54) * 0x10;
                    iVar9 = local_88 << 8;
                    iVar12 = local_54 << 8;
                    iVar2 = 0x10;
                    do {
                      if (*(int *)((iVar12 >> 8) * 0x500 + 0xb36198 + (iVar9 >> 8) * 4) <
                          iVar5 + -0x80) break;
                      iVar2 = iVar2 + -1;
                      iVar5 = iVar5 + ((int)((iVar7 + iVar8 * -0x10) - (uint)(iVar8 << 3 < 0)) >> 4)
                      ;
                      iVar9 = iVar9 + local_1c;
                      iVar12 = iVar12 + local_18;
                    } while (0 < iVar2);
                    local_44 = _DAT_0152bc28;
                    if (iVar2 != 0) goto LAB_004529eb;
                  }
                  local_14 = (byte)
                             ((((int)(_DAT_0152bc18[4] - local_3c) >> 0x10) * 0x3f) /
                             ((int)_DAT_0152bc18[4] >> 0x10));
                }
LAB_004529eb:
                bVar1 = DAT_01323d00;
                local_2c = local_2c + 1;
                local_20 = local_20 + 3;
                *local_30 = local_14;
                local_24 = local_24 + (1 << (bVar1 & 0x1f));
                local_30 = local_30 + 1;
              }
              uVar6 = local_80[local_54 + 1];
              uVar4 = local_80[local_54 + 0xf1];
              for (pcVar11 = (char *)((int)local_80 + uVar6 + local_54 * 0x140 + 0x784);
                  ((int)uVar6 < (int)uVar4 && (*pcVar11 == '\0')); pcVar11 = pcVar11 + 1) {
                uVar6 = uVar6 + 1;
              }
              for (pcVar11 = (char *)((int)local_80 + uVar4 + local_54 * 0x140 + 0x783);
                  ((int)uVar6 < (int)uVar4 && (*pcVar11 == '\0')); pcVar11 = pcVar11 + -1) {
                uVar4 = uVar4 - 1;
              }
              local_80[local_54 + 1] = uVar6;
              local_80[local_54 + 0xf1] = uVar4;
              FUN_00452450(local_54,*(uint *)(local_54 * 4 + 0x14dea50),
                           *(uint *)(local_54 * 4 + 0x14dee10),local_80);
            }
            local_6c = local_6c + 0x50;
            local_70 = local_70 + 0x500;
            local_68 = local_68 + 0xf00;
            local_60[1] = *(uint *)(local_54 * 4 + 0x14dea50);
            iVar5 = local_54 * 4;
            local_54 = local_54 + 1;
            local_60[0xf1] = *(uint *)(iVar5 + 0x14dee10);
            local_60 = local_60 + 1;
          } while (local_54 < (int)param_1[0x55]);
        }
        *local_80 = (uint)param_2;
        return local_80;
      }
      _DAT_0152bc1c = 0;
    }
    FUN_0045ea60(param_2);
    local_64 = 0;
    puVar3 = param_1;
    if (0 < (int)param_1[0x55]) {
      local_58 = (uint *)0x0;
      local_78 = 0x14df1d0;
      local_7c = 0xb10718;
      local_74 = &DAT_00857cd8;
      do {
        puVar3 = local_58;
        if (param_1[0x51] != local_58[0x537a94]) {
          local_28 = (uint *)local_58[0x537a94];
          uVar6 = local_58[0x537b84];
          pcVar11 = (char *)(local_7c + (int)local_28);
          local_34 = (uint *)(local_78 + (int)local_28 * 4);
          piVar10 = (int *)(local_74 + (int)local_28 * 0xc);
          puVar3 = (uint *)(*(int *)(&DAT_01c4480c + (local_64 << (DAT_01323d00 & 0x1f)) * 4) +
                           ((int)local_28 << (DAT_01323d00 & 0x1f)) * 4);
          iVar5 = (int)local_28 - uVar6;
          local_38 = puVar3;
          while (SBORROW4((int)local_28,uVar6) != iVar5 < 0) {
            if ((((*local_38 < *local_34) &&
                 (uVar4 = *piVar10 - *_DAT_0152bc18,
                 (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) < (int)_DAT_0152bc18[3])
                 ) && (uVar13 = piVar10[1] - _DAT_0152bc18[1],
                      (int)((uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f)) <
                      (int)_DAT_0152bc18[3])) &&
               (uVar14 = piVar10[2] - _DAT_0152bc18[2],
               (int)((uVar14 ^ (int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f)) < (int)_DAT_0152bc18[3]
               )) {
              iVar5 = uVar14 * uVar14 + uVar4 * uVar4 + uVar13 * uVar13;
              if (iVar5 < (int)_DAT_0152bc18[4]) {
                *pcVar11 = *pcVar11 +
                           (char)((ulonglong)
                                  ((longlong)((int)(_DAT_0152bc18[4] - iVar5) >> 0x10) *
                                  (longlong)(int)_DAT_0152bc18[5]) >> 0x10);
              }
            }
            piVar10 = piVar10 + 3;
            pcVar11 = pcVar11 + 1;
            local_34 = local_34 + 1;
            local_38 = local_38 + (1 << (DAT_01323d00 & 0x1f));
            puVar3 = (uint *)((int)local_28 + 1);
            local_28 = puVar3;
            iVar5 = (int)puVar3 - uVar6;
          }
        }
        local_58 = local_58 + 1;
        local_78 = local_78 + 0x500;
        local_7c = local_7c + 0x140;
        local_74 = local_74 + 0xf00;
        local_64 = local_64 + 1;
      } while (local_64 < (int)param_1[0x55]);
    }
  }
  return puVar3;
}
