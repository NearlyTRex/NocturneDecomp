// Name: core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00445750
// Address: 00445750
// Address Range: [[00445750, 00445f6f]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00445750(CDemonCamera *this_ptr,CDemonGlobe *globe,int force_render)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00445750(CDemonCamera *this_ptr,CDemonGlobe *globe,int force_render)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  SCoronaLightEntry *pSVar8;
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
  int local_58;
  int local_54;
  int local_50;
  int local_48;
  int local_44;
  uint local_40;
  int local_3c;
  uint *local_38;
  uint *local_34;
  char *local_30;
  uint *local_2c;
  int local_28;
  uint *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  char local_14;
  
  bVar1 = 0;
  if ((g_CGame_PTR_005b9354->halo_mode != 0) || ((force_render == 0 && (globe->corona_mode != 0))))
  {
    _DAT_014b8458 = globe;
    core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610(this_ptr,globe);
    _DAT_014b8460 = local_94;
    *(uint *)(&DAT_014b8464 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffff70 + (uint)bVar1 * -8);
    *(uint *)(&DAT_014b8468 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffff74 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    if (globe->corona_mode == 0) {
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
    iVar5 = 0;
    if (0 < this_ptr->display_height) {
      iVar2 = 0;
      do {
        *(int *)(iVar2 + 0x146b290) = this_ptr->screen_width;
        *(uint *)(iVar2 + 0x146b650) = 0;
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar5 < this_ptr->display_height);
    }
    if (((force_render == 0) && (globe->corona_mode != 0)) &&
       (_DAT_005ad4b4 = 0xffffffff, globe->corona_mode == 2)) {
      if (_DAT_01216608 != 0) {
        iVar5 = 0;
        do {
          if (globe == *(CDemonGlobe **)(iVar5 + 0x121660c)) {
            iVar2 = 0;
            pSVar8 = (SCoronaLightEntry *)(iVar5 + 0x121660c);
            if (this_ptr->display_height < 1) {
              _DAT_005ad4b4 = 0xffffffff;
              return;
            }
            do {
              if (pSVar8->left_extents[0] != this_ptr->screen_width) {
                core_dcamera_cpp_blendCoronaTextureSpan_FUN_00445650
                          (iVar2,pSVar8->left_extents[0],pSVar8->right_extents[0],
                           (SCoronaLightEntry *)(iVar5 + 0x121660c));
              }
              iVar2 = iVar2 + 1;
              pSVar8 = (SCoronaLightEntry *)pSVar8->left_extents;
            } while (iVar2 < this_ptr->display_height);
            return;
          }
          iVar5 = iVar5 + 0x13384;
        } while (iVar5 < (int)(_DAT_01216608 * 0x13384));
      }
      if (_DAT_01216608 < 8) {
        iVar5 = _DAT_01216608 * 0x13384;
        _DAT_01216608 = _DAT_01216608 + 1;
        local_80 = (SCoronaLightEntry *)(iVar5 + 0x121660c);
        core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_0044ce80(globe);
        local_54 = 0;
        if (0 < this_ptr->display_height) {
          local_6c = local_80->lightmap;
          local_68 = 0x7f7378;
          local_70 = 0x146ba10;
          local_60 = local_80;
          do {
            iVar5 = local_54 * 4;
            if (this_ptr->screen_width != *(int *)(iVar5 + 0x146b290)) {
              local_48 = local_54;
              local_88 = *(int *)(iVar5 + 0x146b290);
              local_50 = *(int *)(iVar5 + 0x146b650);
              local_5c = local_80;
              local_20 = (int *)(local_68 + local_88 * 0xc);
              local_2c = (uint *)(local_70 + local_88 * 4);
              local_24 = (uint *)(*(int *)(&DAT_01bd4260 + (local_54 << (DAT_012b0660 & 0x1f)) * 4)
                                 + (local_88 << (DAT_012b0660 & 0x1f)) * 4);
              local_30 = *local_6c + local_88;
              for (; local_88 < local_50; local_88 = local_88 + 1) {
                local_14 = '\0';
                if (((*local_24 < *local_2c) &&
                    (uVar4 = *local_20 - (_DAT_014b8458->position_scaled).x,
                    uVar12 = (int)uVar4 >> 0x1f, iVar5 = (uVar4 ^ uVar12) - uVar12,
                    iVar5 < _DAT_014b8458->linear_radius_scaled)) &&
                   ((uVar4 = local_20[1] - (_DAT_014b8458->position_scaled).y,
                    uVar12 = (int)uVar4 >> 0x1f, iVar2 = (uVar4 ^ uVar12) - uVar12,
                    iVar2 < _DAT_014b8458->linear_radius_scaled &&
                    ((uVar4 = local_20[2] - (_DAT_014b8458->position_scaled).z,
                     uVar12 = (int)uVar4 >> 0x1f, iVar3 = (uVar4 ^ uVar12) - uVar12,
                     iVar3 < _DAT_014b8458->linear_radius_scaled &&
                     (local_3c = iVar2 * iVar2 + iVar5 * iVar5 + iVar3 * iVar3,
                     local_3c < _DAT_014b8458->quadratic_radius_scaled)))))) {
                  if (_DAT_014b845c != 0) {
                    local_40 = 0;
                    if (*local_24 == 0) {
                      iVar5 = 0x7fffffff;
                    }
                    else {
                      iVar5 = (int)(0x7fffffff / (longlong)(int)*local_24);
                    }
                    iVar6 = _DAT_014b8468 - iVar5;
                    iVar7 = iVar6 >> 0x1f;
                    local_1c = (_DAT_014b8460 - local_88) * 0x10;
                    local_18 = (_DAT_014b8464 - local_54) * 0x10;
                    iVar9 = local_88 << 8;
                    iVar3 = local_54 << 8;
                    iVar2 = 0x10;
                    do {
                      if (*(int *)((iVar3 >> 8) * 0x500 + 0xac2af8 + (iVar9 >> 8) * 4) <
                          iVar5 + -0x80) break;
                      iVar2 = iVar2 + -1;
                      iVar5 = iVar5 + ((int)((iVar6 + iVar7 * -0x10) - (uint)(iVar7 << 3 < 0)) >> 4)
                      ;
                      iVar9 = iVar9 + local_1c;
                      iVar3 = iVar3 + local_18;
                    } while (0 < iVar2);
                    local_44 = _DAT_014b8468;
                    if (iVar2 != 0) goto LAB_00445beb;
                  }
                  local_14 = (char)(((_DAT_014b8458->quadratic_radius_scaled - local_3c >> 0x10) *
                                    0x3f) / (_DAT_014b8458->quadratic_radius_scaled >> 0x10));
                }
LAB_00445beb:
                bVar1 = DAT_012b0660;
                local_2c = local_2c + 1;
                local_20 = local_20 + 3;
                *local_30 = local_14;
                local_24 = local_24 + (1 << (bVar1 & 0x1f));
                local_30 = local_30 + 1;
              }
              iVar5 = local_80->left_extents[local_54];
              iVar2 = local_80->right_extents[local_54];
              for (pcVar11 = local_80->lightmap[local_54] + iVar5;
                  (iVar5 < iVar2 && (*pcVar11 == '\0')); pcVar11 = pcVar11 + 1) {
                iVar5 = iVar5 + 1;
              }
              for (pcVar11 = local_80->lightmap[local_54 + -1] + iVar2 + 0x13f;
                  (iVar5 < iVar2 && (*pcVar11 == '\0')); pcVar11 = pcVar11 + -1) {
                iVar2 = iVar2 + -1;
              }
              local_80->left_extents[local_54] = iVar5;
              local_80->right_extents[local_54] = iVar2;
              core_dcamera_cpp_blendCoronaTextureSpan_FUN_00445650
                        (local_54,*(int *)(local_54 * 4 + 0x146b290),
                         *(int *)(local_54 * 4 + 0x146b650),local_80);
            }
            local_6c = local_6c + 1;
            local_70 = local_70 + 0x500;
            local_68 = local_68 + 0xf00;
            local_60->left_extents[0] = *(int *)(local_54 * 4 + 0x146b290);
            iVar5 = local_54 * 4;
            local_54 = local_54 + 1;
            local_60->right_extents[0] = *(int *)(iVar5 + 0x146b650);
            local_60 = (SCoronaLightEntry *)local_60->left_extents;
          } while (local_54 < this_ptr->display_height);
        }
        local_80->globe = globe;
        return;
      }
      _DAT_014b845c = 0;
    }
    core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_0044ce80(globe);
    local_64 = 0;
    if (0 < this_ptr->display_height) {
      local_58 = 0;
      local_78 = 0x146ba10;
      local_7c = 0xa9d078;
      local_74 = 0x7f7378;
      do {
        if (this_ptr->screen_width != *(int *)(local_58 + 0x146b290)) {
          local_28 = *(int *)(local_58 + 0x146b290);
          iVar5 = *(int *)(local_58 + 0x146b650);
          pcVar11 = (char *)(local_7c + local_28);
          local_34 = (uint *)(local_78 + local_28 * 4);
          piVar10 = (int *)(local_28 * 0xc + local_74);
          local_38 = (uint *)(*(int *)(&DAT_01bd4260 + (local_64 << (DAT_012b0660 & 0x1f)) * 4) +
                             (local_28 << (DAT_012b0660 & 0x1f)) * 4);
          iVar2 = local_28 - iVar5;
          while (SBORROW4(local_28,iVar5) != iVar2 < 0) {
            if ((((*local_38 < *local_34) &&
                 (uVar4 = *piVar10 - (_DAT_014b8458->position_scaled).x,
                 (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) <
                 _DAT_014b8458->linear_radius_scaled)) &&
                (uVar12 = piVar10[1] - (_DAT_014b8458->position_scaled).y,
                (int)((uVar12 ^ (int)uVar12 >> 0x1f) - ((int)uVar12 >> 0x1f)) <
                _DAT_014b8458->linear_radius_scaled)) &&
               (uVar13 = piVar10[2] - (_DAT_014b8458->position_scaled).z,
               (int)((uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f)) <
               _DAT_014b8458->linear_radius_scaled)) {
              iVar2 = uVar13 * uVar13 + uVar4 * uVar4 + uVar12 * uVar12;
              if (iVar2 < _DAT_014b8458->quadratic_radius_scaled) {
                *pcVar11 = *pcVar11 +
                           (char)((ulonglong)
                                  ((longlong)
                                   (_DAT_014b8458->quadratic_radius_scaled - iVar2 >> 0x10) *
                                  (longlong)_DAT_014b8458->falloff_value) >> 0x10);
              }
            }
            piVar10 = piVar10 + 3;
            pcVar11 = pcVar11 + 1;
            local_34 = local_34 + 1;
            local_38 = local_38 + (1 << (DAT_012b0660 & 0x1f));
            local_28 = local_28 + 1;
            iVar2 = local_28 - iVar5;
          }
        }
        local_58 = local_58 + 4;
        local_78 = local_78 + 0x500;
        local_7c = local_7c + 0x140;
        local_74 = local_74 + 0xf00;
        local_64 = local_64 + 1;
      } while (local_64 < this_ptr->display_height);
    }
  }
  return;
}
