// Name: core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00452550
// Address: 00452550
// Address Range: [[00452550, 00452d6f]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00452550(CDemonCamera *this_ptr,CDemonGlobe *globe,int force_render)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00452550(CDemonCamera *this_ptr,CDemonGlobe *globe,int force_render)

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
  CVector3i local_94;
  int local_88;
  SCoronaLightEntry *local_80;
  int local_7c;
  int local_78;
  byte *local_74;
  int local_70;
  char (*local_6c) [320];
  byte *local_68;
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
  if ((g_CGamePtr->halo_mode != 0) || ((force_render == 0 && (globe->corona_mode != 0)))) {
    _DAT_0152bc18 = globe;
    core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044e2a0
              (this_ptr,&globe->position_scaled,&local_94);
    _DAT_0152bc20 = local_94.x;
    *(uint *)(&DAT_0152bc24 + (uint)bVar1 * -8) =
         *(uint *)((int)&local_94 + (uint)bVar1 * -8 + 4);
    *(uint *)(&DAT_0152bc28 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)((int)&local_94 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
    if (globe->corona_mode == 0) {
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
    if (0 < this_ptr->display_height) {
      iVar2 = 0;
      do {
        *(int *)(iVar2 + 0x14dea50) = this_ptr->framebuffer_width;
        *(uint *)(iVar2 + 0x14dee10) = 0;
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar5 < this_ptr->display_height);
    }
    if (((force_render == 0) && (globe->corona_mode != 0)) &&
       (_DAT_00611294 = 0xffffffff, globe->corona_mode == 2)) {
      if (_DAT_01289ca8 != 0) {
        iVar5 = 0;
        do {
          if (globe == *(CDemonGlobe **)(iVar5 + 0x1289cac)) {
            iVar2 = 0;
            pSVar8 = (SCoronaLightEntry *)(iVar5 + 0x1289cac);
            if (this_ptr->display_height < 1) {
              _DAT_00611294 = 0xffffffff;
              return;
            }
            do {
              if (pSVar8->left_extents[0] != this_ptr->framebuffer_width) {
                core_dcamera_cpp_blendCoronaTextureSpan_FUN_00452450
                          (iVar2,pSVar8->left_extents[0],pSVar8->right_extents[0],
                           (SCoronaLightEntry *)(iVar5 + 0x1289cac));
              }
              iVar2 = iVar2 + 1;
              pSVar8 = (SCoronaLightEntry *)pSVar8->left_extents;
            } while (iVar2 < this_ptr->display_height);
            return;
          }
          iVar5 = iVar5 + 0x13384;
        } while (iVar5 < (int)(_DAT_01289ca8 * 0x13384));
      }
      if (_DAT_01289ca8 < 8) {
        iVar5 = _DAT_01289ca8 * 0x13384;
        _DAT_01289ca8 = _DAT_01289ca8 + 1;
        local_80 = (SCoronaLightEntry *)(iVar5 + 0x1289cac);
        core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_0045ea60(globe);
        local_54 = 0;
        if (0 < this_ptr->display_height) {
          local_6c = local_80->lightmap;
          local_68 = &DAT_00857cd8;
          local_70 = 0x14df1d0;
          local_60 = local_80;
          do {
            iVar5 = local_54 * 4;
            if (this_ptr->framebuffer_width != *(int *)(iVar5 + 0x14dea50)) {
              local_48 = local_54;
              local_88 = *(int *)(iVar5 + 0x14dea50);
              local_50 = *(int *)(iVar5 + 0x14dee10);
              local_5c = local_80;
              local_20 = (int *)(local_68 + local_88 * 0xc);
              local_2c = (uint *)(local_70 + local_88 * 4);
              local_24 = (uint *)(*(int *)(&DAT_01c4480c + (local_54 << (DAT_01323d00 & 0x1f)) * 4)
                                 + (local_88 << (DAT_01323d00 & 0x1f)) * 4);
              local_30 = *local_6c + local_88;
              for (; local_88 < local_50; local_88 = local_88 + 1) {
                local_14 = '\0';
                if (((*local_24 < *local_2c) &&
                    (uVar4 = *local_20 - (_DAT_0152bc18->position_scaled).x,
                    uVar12 = (int)uVar4 >> 0x1f, iVar5 = (uVar4 ^ uVar12) - uVar12,
                    iVar5 < _DAT_0152bc18->linear_radius_scaled)) &&
                   ((uVar4 = local_20[1] - (_DAT_0152bc18->position_scaled).y,
                    uVar12 = (int)uVar4 >> 0x1f, iVar2 = (uVar4 ^ uVar12) - uVar12,
                    iVar2 < _DAT_0152bc18->linear_radius_scaled &&
                    ((uVar4 = local_20[2] - (_DAT_0152bc18->position_scaled).z,
                     uVar12 = (int)uVar4 >> 0x1f, iVar3 = (uVar4 ^ uVar12) - uVar12,
                     iVar3 < _DAT_0152bc18->linear_radius_scaled &&
                     (local_3c = iVar2 * iVar2 + iVar5 * iVar5 + iVar3 * iVar3,
                     local_3c < _DAT_0152bc18->quadratic_radius_scaled)))))) {
                  if (_DAT_0152bc1c != 0) {
                    local_40 = 0;
                    if (*local_24 == 0) {
                      iVar5 = 0x7fffffff;
                    }
                    else {
                      iVar5 = (int)(0x7fffffff / (longlong)(int)*local_24);
                    }
                    iVar6 = _DAT_0152bc28 - iVar5;
                    iVar7 = iVar6 >> 0x1f;
                    local_1c = (_DAT_0152bc20 - local_88) * 0x10;
                    local_18 = (_DAT_0152bc24 - local_54) * 0x10;
                    iVar9 = local_88 << 8;
                    iVar3 = local_54 << 8;
                    iVar2 = 0x10;
                    do {
                      if (*(int *)((iVar3 >> 8) * 0x500 + 0xb36198 + (iVar9 >> 8) * 4) <
                          iVar5 + -0x80) break;
                      iVar2 = iVar2 + -1;
                      iVar5 = iVar5 + ((int)((iVar6 + iVar7 * -0x10) - (uint)(iVar7 << 3 < 0)) >> 4)
                      ;
                      iVar9 = iVar9 + local_1c;
                      iVar3 = iVar3 + local_18;
                    } while (0 < iVar2);
                    local_44 = _DAT_0152bc28;
                    if (iVar2 != 0) goto LAB_004529eb;
                  }
                  local_14 = (char)(((_DAT_0152bc18->quadratic_radius_scaled - local_3c >> 0x10) *
                                    0x3f) / (_DAT_0152bc18->quadratic_radius_scaled >> 0x10));
                }
LAB_004529eb:
                bVar1 = DAT_01323d00;
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
              core_dcamera_cpp_blendCoronaTextureSpan_FUN_00452450
                        (local_54,*(int *)(local_54 * 4 + 0x14dea50),
                         *(int *)(local_54 * 4 + 0x14dee10),local_80);
            }
            local_6c = local_6c + 1;
            local_70 = local_70 + 0x500;
            local_68 = local_68 + 0xf00;
            local_60->left_extents[0] = *(int *)(local_54 * 4 + 0x14dea50);
            iVar5 = local_54 * 4;
            local_54 = local_54 + 1;
            local_60->right_extents[0] = *(int *)(iVar5 + 0x14dee10);
            local_60 = (SCoronaLightEntry *)local_60->left_extents;
          } while (local_54 < this_ptr->display_height);
        }
        local_80->globe = globe;
        return;
      }
      _DAT_0152bc1c = 0;
    }
    core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_0045ea60(globe);
    local_64 = 0;
    if (0 < this_ptr->display_height) {
      local_58 = 0;
      local_78 = 0x14df1d0;
      local_7c = 0xb10718;
      local_74 = &DAT_00857cd8;
      do {
        if (this_ptr->framebuffer_width != *(int *)(local_58 + 0x14dea50)) {
          local_28 = *(int *)(local_58 + 0x14dea50);
          iVar5 = *(int *)(local_58 + 0x14dee10);
          pcVar11 = (char *)(local_7c + local_28);
          local_34 = (uint *)(local_78 + local_28 * 4);
          piVar10 = (int *)(local_74 + local_28 * 0xc);
          local_38 = (uint *)(*(int *)(&DAT_01c4480c + (local_64 << (DAT_01323d00 & 0x1f)) * 4) +
                             (local_28 << (DAT_01323d00 & 0x1f)) * 4);
          iVar2 = local_28 - iVar5;
          while (SBORROW4(local_28,iVar5) != iVar2 < 0) {
            if ((((*local_38 < *local_34) &&
                 (uVar4 = *piVar10 - (_DAT_0152bc18->position_scaled).x,
                 (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) <
                 _DAT_0152bc18->linear_radius_scaled)) &&
                (uVar12 = piVar10[1] - (_DAT_0152bc18->position_scaled).y,
                (int)((uVar12 ^ (int)uVar12 >> 0x1f) - ((int)uVar12 >> 0x1f)) <
                _DAT_0152bc18->linear_radius_scaled)) &&
               (uVar13 = piVar10[2] - (_DAT_0152bc18->position_scaled).z,
               (int)((uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f)) <
               _DAT_0152bc18->linear_radius_scaled)) {
              iVar2 = uVar13 * uVar13 + uVar4 * uVar4 + uVar12 * uVar12;
              if (iVar2 < _DAT_0152bc18->quadratic_radius_scaled) {
                *pcVar11 = *pcVar11 +
                           (char)((ulonglong)
                                  ((longlong)
                                   (_DAT_0152bc18->quadratic_radius_scaled - iVar2 >> 0x10) *
                                  (longlong)_DAT_0152bc18->falloff_value) >> 0x10);
              }
            }
            piVar10 = piVar10 + 3;
            pcVar11 = pcVar11 + 1;
            local_34 = local_34 + 1;
            local_38 = local_38 + (1 << (DAT_01323d00 & 0x1f));
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
