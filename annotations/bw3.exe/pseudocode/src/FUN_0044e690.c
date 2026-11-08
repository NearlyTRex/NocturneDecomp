// Name: FUN_0044e690
// Address: 0044e690
// Address Range: [[0044e690, 0044eeaf]]
// Convention: unknown
// Signature: uint * FUN_0044e690(uint *param_1,uint *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_0044e690(uint *param_1,uint *param_2,int param_3)

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
  int local_74;
  int local_70;
  uint *local_6c;
  int local_68;
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
  if ((0x01D2130C[3] != 0) ||
     ((puVar3 = 0x01D2130C, param_3 == 0 && (puVar3 = param_2, param_2[8] != 0)))) {
    _DAT_015484c8 = param_2;
    FUN_0044a3e0(param_1,param_2);
    _DAT_015484d0 = local_94;
    *(uint *)(&DAT_015484d4 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffff70 + (uint)bVar1 * -8);
    *(uint *)(&DAT_015484d8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffff74 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    if (param_2[8] == 0) {
      _DAT_015484cc = 0;
    }
    else {
      _DAT_015484cc = _DAT_015484d0;
      if (_DAT_015484d0 != 0) {
        bVar1 = (char)_DAT_013405b0 + 0x10;
        _DAT_015484cc = 1;
        _DAT_015484d0 = _DAT_015484d0 >> (bVar1 & 0x1f);
        _DAT_015484d4 = _DAT_015484d4 >> (bVar1 & 0x1f);
      }
    }
    iVar5 = 0;
    if (0 < (int)param_1[0x55]) {
      iVar2 = 0;
      do {
        *(uint *)(iVar2 + 0x14fb300) = param_1[0x51];
        *(uint *)(iVar2 + 0x14fb6c0) = 0;
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar5 < (int)param_1[0x55]);
    }
    if (((param_3 == 0) && (param_2[8] != 0)) && (_DAT_005f1848 = 0xffffffff, param_2[8] == 2)) {
      if (_DAT_012a6558 != 0) {
        iVar5 = 0;
        do {
          if (param_2 == *(uint **)(iVar5 + 0x12a655c)) {
            iVar12 = 0;
            iVar2 = iVar5 + 0x12a655c;
            if ((int)param_1[0x55] < 1) {
              _DAT_005f1848 = 0xffffffff;
              return param_1;
            }
            do {
              if (*(uint *)(iVar2 + 4) != param_1[0x51]) {
                FUN_0044e590(iVar12,*(uint *)(iVar2 + 4),*(uint *)(iVar2 + 0x3c4),
                             iVar5 + 0x12a655c);
              }
              iVar12 = iVar12 + 1;
              iVar2 = iVar2 + 4;
            } while (iVar12 < (int)param_1[0x55]);
            return param_1;
          }
          iVar5 = iVar5 + 0x13384;
        } while (iVar5 < (int)(_DAT_012a6558 * 0x13384));
      }
      if (_DAT_012a6558 < 8) {
        iVar5 = _DAT_012a6558 * 0x13384;
        _DAT_012a6558 = _DAT_012a6558 + 1;
        local_80 = (uint *)(iVar5 + 0x12a655c);
        FUN_0045abd0(param_2);
        local_54 = 0;
        if (0 < (int)param_1[0x55]) {
          local_6c = local_80 + 0x1e1;
          local_68 = 0x874588;
          local_70 = 0x14fba80;
          local_60 = local_80;
          do {
            iVar5 = local_54 * 4;
            if (param_1[0x51] != *(uint *)(iVar5 + 0x14fb300)) {
              local_48 = local_54;
              local_88 = *(int *)(iVar5 + 0x14fb300);
              local_50 = *(int *)(iVar5 + 0x14fb6c0);
              local_5c = local_80;
              local_20 = (int *)(local_68 + local_88 * 0xc);
              local_2c = (uint *)(local_70 + local_88 * 4);
              local_24 = (uint *)(*(int *)(&DAT_01c60dac + (local_54 << (DAT_013405b0 & 0x1f)) * 4)
                                 + (local_88 << (DAT_013405b0 & 0x1f)) * 4);
              local_30 = (byte *)((int)local_6c + local_88);
              for (; local_88 < local_50; local_88 = local_88 + 1) {
                local_14 = 0;
                if (((*local_24 < *local_2c) &&
                    (uVar6 = (int)(*local_20 - *_DAT_015484c8) >> 0x1f,
                    iVar5 = (*local_20 - *_DAT_015484c8 ^ uVar6) - uVar6,
                    iVar5 < (int)_DAT_015484c8[3])) &&
                   ((uVar6 = (int)(local_20[1] - _DAT_015484c8[1]) >> 0x1f,
                    iVar2 = (local_20[1] - _DAT_015484c8[1] ^ uVar6) - uVar6,
                    iVar2 < (int)_DAT_015484c8[3] &&
                    ((uVar6 = (int)(local_20[2] - _DAT_015484c8[2]) >> 0x1f,
                     iVar12 = (local_20[2] - _DAT_015484c8[2] ^ uVar6) - uVar6,
                     iVar12 < (int)_DAT_015484c8[3] &&
                     (local_3c = iVar2 * iVar2 + iVar5 * iVar5 + iVar12 * iVar12,
                     local_3c < (int)_DAT_015484c8[4])))))) {
                  if (_DAT_015484cc != 0) {
                    local_40 = 0;
                    if (*local_24 == 0) {
                      iVar5 = 0x7fffffff;
                    }
                    else {
                      iVar5 = (int)(0x7fffffff / (longlong)(int)*local_24);
                    }
                    iVar7 = _DAT_015484d8 - iVar5;
                    iVar8 = iVar7 >> 0x1f;
                    local_1c = (_DAT_015484d0 - local_88) * 0x10;
                    local_18 = (_DAT_015484d4 - local_54) * 0x10;
                    iVar9 = local_88 << 8;
                    iVar12 = local_54 << 8;
                    iVar2 = 0x10;
                    do {
                      if (*(int *)((iVar12 >> 8) * 0x500 + 0xb52a48 + (iVar9 >> 8) * 4) <
                          iVar5 + -0x80) break;
                      iVar2 = iVar2 + -1;
                      iVar5 = iVar5 + ((int)((iVar7 + iVar8 * -0x10) - (uint)(iVar8 << 3 < 0)) >> 4)
                      ;
                      iVar9 = iVar9 + local_1c;
                      iVar12 = iVar12 + local_18;
                    } while (0 < iVar2);
                    local_44 = _DAT_015484d8;
                    if (iVar2 != 0) goto LAB_0044eb2b;
                  }
                  local_14 = (byte)
                             ((((int)(_DAT_015484c8[4] - local_3c) >> 0x10) * 0x3f) /
                             ((int)_DAT_015484c8[4] >> 0x10));
                }
LAB_0044eb2b:
                bVar1 = DAT_013405b0;
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
              FUN_0044e590(local_54,*(uint *)(local_54 * 4 + 0x14fb300),
                           *(uint *)(local_54 * 4 + 0x14fb6c0),local_80);
            }
            local_6c = local_6c + 0x50;
            local_70 = local_70 + 0x500;
            local_68 = local_68 + 0xf00;
            local_60[1] = *(uint *)(local_54 * 4 + 0x14fb300);
            iVar5 = local_54 * 4;
            local_54 = local_54 + 1;
            local_60[0xf1] = *(uint *)(iVar5 + 0x14fb6c0);
            local_60 = local_60 + 1;
          } while (local_54 < (int)param_1[0x55]);
        }
        *local_80 = (uint)param_2;
        return local_80;
      }
      _DAT_015484cc = 0;
    }
    FUN_0045abd0(param_2);
    local_64 = 0;
    puVar3 = param_1;
    if (0 < (int)param_1[0x55]) {
      local_58 = (uint *)0x0;
      local_78 = 0x14fba80;
      local_7c = 0xb2cfc8;
      local_74 = 0x874588;
      do {
        puVar3 = local_58;
        if (param_1[0x51] != local_58[0x53ecc0]) {
          local_28 = (uint *)local_58[0x53ecc0];
          uVar6 = local_58[0x53edb0];
          pcVar11 = (char *)(local_7c + (int)local_28);
          local_34 = (uint *)(local_78 + (int)local_28 * 4);
          piVar10 = (int *)((int)local_28 * 0xc + local_74);
          puVar3 = (uint *)(*(int *)(&DAT_01c60dac + (local_64 << (DAT_013405b0 & 0x1f)) * 4) +
                           ((int)local_28 << (DAT_013405b0 & 0x1f)) * 4);
          iVar5 = (int)local_28 - uVar6;
          local_38 = puVar3;
          while (SBORROW4((int)local_28,uVar6) != iVar5 < 0) {
            if ((((*local_38 < *local_34) &&
                 (uVar4 = *piVar10 - *_DAT_015484c8,
                 (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) < (int)_DAT_015484c8[3])
                 ) && (uVar13 = piVar10[1] - _DAT_015484c8[1],
                      (int)((uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f)) <
                      (int)_DAT_015484c8[3])) &&
               (uVar14 = piVar10[2] - _DAT_015484c8[2],
               (int)((uVar14 ^ (int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f)) < (int)_DAT_015484c8[3]
               )) {
              iVar5 = uVar14 * uVar14 + uVar4 * uVar4 + uVar13 * uVar13;
              if (iVar5 < (int)_DAT_015484c8[4]) {
                *pcVar11 = *pcVar11 +
                           (char)((ulonglong)
                                  ((longlong)((int)(_DAT_015484c8[4] - iVar5) >> 0x10) *
                                  (longlong)(int)_DAT_015484c8[5]) >> 0x10);
              }
            }
            piVar10 = piVar10 + 3;
            pcVar11 = pcVar11 + 1;
            local_34 = local_34 + 1;
            local_38 = local_38 + (1 << (DAT_013405b0 & 0x1f));
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
