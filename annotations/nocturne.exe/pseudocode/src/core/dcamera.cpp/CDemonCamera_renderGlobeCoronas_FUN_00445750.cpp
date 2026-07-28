// Name: core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00445750
// Address: 00445750
// Address Range: [[00445750, 00445f6f]]
// Convention: unknown
// Signature: SCoronaLightEntry * core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00445750(SCoronaLightEntry *param_1,SCoronaLightEntry *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SCoronaLightEntry * core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00445750(SCoronaLightEntry *param_1,SCoronaLightEntry *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  SCoronaLightEntry *pSVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  int aiStackY_107c [1014];
  int local_94;
  int local_88;
  SCoronaLightEntry *local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  char (*local_6c) [320];
  int local_68;
  int local_64;
  SCoronaLightEntry *local_60;
  SCoronaLightEntry *local_5c;
  SCoronaLightEntry *local_58;
  int local_54;
  int local_50;
  int local_48;
  int local_44;
  uint local_40;
  int local_3c;
  SCoronaLightEntry *local_38;
  uint *local_34;
  char *local_30;
  uint *local_2c;
  SCoronaLightEntry *local_28;
  uint *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  char local_14;
  
  bVar1 = 0;
  if ((0x01C775EC->left_extents[2] != 0) ||
     ((pSVar4 = 0x01C775EC, param_3 == 0 && (pSVar4 = param_2, param_2->left_extents[7] != 0)))) {
    _DAT_014b8458 = param_2;
    core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610(param_1,param_2);
    _DAT_014b8460 = local_94;
    *(uint *)(&DAT_014b8464 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffff70 + (uint)bVar1 * -8);
    *(uint *)(&DAT_014b8468 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffff74 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    if (param_2->left_extents[7] == 0) {
      _DAT_014b845c = 0;
    }
    else {
      _DAT_014b845c = _DAT_014b8460;
      if (_DAT_014b8460 != 0) {
        bVar1 = (char)_DAT_012b0660 + 0x10;
        _DAT_014b845c = 1;
        _DAT_014b8460 = _DAT_014b8460 >> (bVar1 & 0x1f);
        _DAT_014b8464 = _DAT_014b8464 >> (bVar1 & 0x1f);
      }
    }
    iVar6 = 0;
    if (0 < param_1->left_extents[0x54]) {
      iVar2 = 0;
      do {
        *(int *)(iVar2 + 0x146b290) = param_1->left_extents[0x4e];
        *(uint *)(iVar2 + 0x146b650) = 0;
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar6 < param_1->left_extents[0x54]);
    }
    if (((param_3 == 0) && (param_2->left_extents[7] != 0)) &&
       (_DAT_005ad4b4 = 0xffffffff, param_2->left_extents[7] == 2)) {
      if (_DAT_01216608 != 0) {
        iVar6 = 0;
        do {
          if (param_2 == *(SCoronaLightEntry **)(iVar6 + 0x121660c)) {
            iVar2 = 0;
            pSVar4 = (SCoronaLightEntry *)(iVar6 + 0x121660c);
            if (param_1->left_extents[0x54] < 1) {
              _DAT_005ad4b4 = 0xffffffff;
              return param_1;
            }
            do {
              if (pSVar4->left_extents[0] != param_1->left_extents[0x4e]) {
                core_dcamera_cpp_blendCoronaTextureSpan_FUN_00445650
                          (iVar2,pSVar4->left_extents[0],pSVar4->right_extents[0],
                           (SCoronaLightEntry *)(iVar6 + 0x121660c));
              }
              iVar2 = iVar2 + 1;
              pSVar4 = (SCoronaLightEntry *)pSVar4->left_extents;
            } while (iVar2 < param_1->left_extents[0x54]);
            return param_1;
          }
          iVar6 = iVar6 + 0x13384;
        } while (iVar6 < (int)(_DAT_01216608 * 0x13384));
      }
      if (_DAT_01216608 < 8) {
        iVar6 = _DAT_01216608 * 0x13384;
        _DAT_01216608 = _DAT_01216608 + 1;
        local_80 = (SCoronaLightEntry *)(iVar6 + 0x121660c);
        core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_0044ce80((CDemonGlobe *)param_2);
        local_54 = 0;
        if (0 < param_1->left_extents[0x54]) {
          local_6c = local_80->lightmap;
          local_68 = 0x7f7378;
          local_70 = 0x146ba10;
          local_60 = local_80;
          do {
            iVar6 = local_54 * 4;
            if (param_1->left_extents[0x4e] != *(int *)(iVar6 + 0x146b290)) {
              local_48 = local_54;
              local_88 = *(int *)(iVar6 + 0x146b290);
              local_50 = *(int *)(iVar6 + 0x146b650);
              local_5c = local_80;
              local_20 = (int *)(local_68 + local_88 * 0xc);
              local_2c = (uint *)(local_70 + local_88 * 4);
              local_24 = (uint *)(*(int *)(&DAT_01bd4260 + (local_54 << (DAT_012b0660 & 0x1f)) * 4)
                                 + (local_88 << (DAT_012b0660 & 0x1f)) * 4);
              local_30 = *local_6c + local_88;
              for (; local_88 < local_50; local_88 = local_88 + 1) {
                local_14 = '\0';
                if (((*local_24 < *local_2c) &&
                    (uVar5 = *local_20 - ((CVector3i *)&_DAT_014b8458->globe)->x,
                    uVar12 = (int)uVar5 >> 0x1f, iVar6 = (uVar5 ^ uVar12) - uVar12,
                    iVar6 < _DAT_014b8458->left_extents[2])) &&
                   ((uVar5 = local_20[1] - _DAT_014b8458->left_extents[0],
                    uVar12 = (int)uVar5 >> 0x1f, iVar2 = (uVar5 ^ uVar12) - uVar12,
                    iVar2 < _DAT_014b8458->left_extents[2] &&
                    ((uVar5 = local_20[2] - _DAT_014b8458->left_extents[1],
                     uVar12 = (int)uVar5 >> 0x1f, iVar3 = (uVar5 ^ uVar12) - uVar12,
                     iVar3 < _DAT_014b8458->left_extents[2] &&
                     (local_3c = iVar2 * iVar2 + iVar6 * iVar6 + iVar3 * iVar3,
                     local_3c < _DAT_014b8458->left_extents[3])))))) {
                  if (_DAT_014b845c != 0) {
                    local_40 = 0;
                    if (*local_24 == 0) {
                      iVar6 = 0x7fffffff;
                    }
                    else {
                      iVar6 = (int)(0x7fffffff / (longlong)(int)*local_24);
                    }
                    iVar7 = _DAT_014b8468 - iVar6;
                    iVar8 = iVar7 >> 0x1f;
                    local_1c = (_DAT_014b8460 - local_88) * 0x10;
                    local_18 = (_DAT_014b8464 - local_54) * 0x10;
                    iVar9 = local_88 << 8;
                    iVar3 = local_54 << 8;
                    iVar2 = 0x10;
                    do {
                      if (*(int *)((iVar3 >> 8) * 0x500 + 0xac2af8 + (iVar9 >> 8) * 4) <
                          iVar6 + -0x80) break;
                      iVar2 = iVar2 + -1;
                      iVar6 = iVar6 + ((int)((iVar7 + iVar8 * -0x10) - (uint)(iVar8 << 3 < 0)) >> 4)
                      ;
                      iVar9 = iVar9 + local_1c;
                      iVar3 = iVar3 + local_18;
                    } while (0 < iVar2);
                    local_44 = _DAT_014b8468;
                    if (iVar2 != 0) goto LAB_00445beb;
                  }
                  local_14 = (char)(((_DAT_014b8458->left_extents[3] - local_3c >> 0x10) * 0x3f) /
                                   (_DAT_014b8458->left_extents[3] >> 0x10));
                }
LAB_00445beb:
                bVar1 = DAT_012b0660;
                local_2c = local_2c + 1;
                local_20 = local_20 + 3;
                *local_30 = local_14;
                local_24 = local_24 + (1 << (bVar1 & 0x1f));
                local_30 = local_30 + 1;
              }
              iVar6 = local_80->left_extents[local_54];
              iVar2 = local_80->right_extents[local_54];
              for (pcVar11 = local_80->lightmap[local_54] + iVar6;
                  (iVar6 < iVar2 && (*pcVar11 == '\0')); pcVar11 = pcVar11 + 1) {
                iVar6 = iVar6 + 1;
              }
              for (pcVar11 = local_80->lightmap[local_54 + -1] + iVar2 + 0x13f;
                  (iVar6 < iVar2 && (*pcVar11 == '\0')); pcVar11 = pcVar11 + -1) {
                iVar2 = iVar2 + -1;
              }
              local_80->left_extents[local_54] = iVar6;
              local_80->right_extents[local_54] = iVar2;
              core_dcamera_cpp_blendCoronaTextureSpan_FUN_00445650
                        (local_54,*(int *)(local_54 * 4 + 0x146b290),
                         *(int *)(local_54 * 4 + 0x146b650),local_80);
            }
            local_6c = local_6c + 1;
            local_70 = local_70 + 0x500;
            local_68 = local_68 + 0xf00;
            local_60->left_extents[0] = *(int *)(local_54 * 4 + 0x146b290);
            iVar6 = local_54 * 4;
            local_54 = local_54 + 1;
            local_60->right_extents[0] = *(int *)(iVar6 + 0x146b650);
            local_60 = (SCoronaLightEntry *)local_60->left_extents;
          } while (local_54 < param_1->left_extents[0x54]);
        }
        local_80->globe = (CDemonGlobe *)param_2;
        return local_80;
      }
      _DAT_014b845c = 0;
    }
    core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_0044ce80((CDemonGlobe *)param_2);
    local_64 = 0;
    pSVar4 = param_1;
    if (0 < param_1->left_extents[0x54]) {
      local_58 = (SCoronaLightEntry *)0x0;
      local_78 = 0x146ba10;
      local_7c = 0xa9d078;
      local_74 = 0x7f7378;
      do {
        pSVar4 = local_58;
        if (param_1->left_extents[0x4e] != *(int *)(local_58[0x10f].lightmap[0xe8] + 0x50)) {
          local_28 = *(SCoronaLightEntry **)(local_58[0x10f].lightmap[0xe8] + 0x50);
          iVar6 = *(int *)(local_58[0x10f].lightmap[0xeb] + 0x50);
          pcVar11 = (char *)((int)local_28->left_extents + local_7c + -4);
          local_34 = (uint *)(local_78 + (int)local_28 * 4);
          piVar10 = (int *)((int)local_28 * 0xc + local_74);
          pSVar4 = (SCoronaLightEntry *)
                   (*(int *)(&DAT_01bd4260 + (local_64 << (DAT_012b0660 & 0x1f)) * 4) +
                   ((int)local_28 << (DAT_012b0660 & 0x1f)) * 4);
          iVar2 = (int)local_28 - iVar6;
          local_38 = pSVar4;
          while (SBORROW4((int)local_28,iVar6) != iVar2 < 0) {
            if (((((uint)((CVector3i *)&local_38->globe)->x < *local_34) &&
                 (uVar5 = *piVar10 - ((CVector3i *)&_DAT_014b8458->globe)->x,
                 (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) <
                 _DAT_014b8458->left_extents[2])) &&
                (uVar12 = piVar10[1] - _DAT_014b8458->left_extents[0],
                (int)((uVar12 ^ (int)uVar12 >> 0x1f) - ((int)uVar12 >> 0x1f)) <
                _DAT_014b8458->left_extents[2])) &&
               (uVar13 = piVar10[2] - _DAT_014b8458->left_extents[1],
               (int)((uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f)) <
               _DAT_014b8458->left_extents[2])) {
              iVar2 = uVar13 * uVar13 + uVar5 * uVar5 + uVar12 * uVar12;
              if (iVar2 < _DAT_014b8458->left_extents[3]) {
                *pcVar11 = *pcVar11 +
                           (char)((ulonglong)
                                  ((longlong)(_DAT_014b8458->left_extents[3] - iVar2 >> 0x10) *
                                  (longlong)_DAT_014b8458->left_extents[4]) >> 0x10);
              }
            }
            piVar10 = piVar10 + 3;
            pcVar11 = pcVar11 + 1;
            local_34 = local_34 + 1;
            local_38 = (SCoronaLightEntry *)
                       (local_38->left_extents + (1 << (DAT_012b0660 & 0x1f)) + -1);
            pSVar4 = (SCoronaLightEntry *)((int)&((CVector3i *)&local_28->globe)->x + 1);
            local_28 = pSVar4;
            iVar2 = (int)pSVar4 - iVar6;
          }
        }
        local_58 = (SCoronaLightEntry *)local_58->left_extents;
        local_78 = local_78 + 0x500;
        local_7c = local_7c + 0x140;
        local_74 = local_74 + 0xf00;
        local_64 = local_64 + 1;
      } while (local_64 < param_1->left_extents[0x54]);
    }
  }
  return pSVar4;
}
