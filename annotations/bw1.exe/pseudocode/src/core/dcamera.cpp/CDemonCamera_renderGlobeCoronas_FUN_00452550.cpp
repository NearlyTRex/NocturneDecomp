// Name: core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00452550
// Address: 00452550
// Address Range: [[00452550, 00452d6f]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00452550(CDemonCamera *this_ptr,CDemonGlobe *globe,int force_render)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00452550(CDemonCamera *this_ptr,CDemonGlobe *globe,int force_render)

{
  byte uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  SCoronaLightEntry *pSVar9;
  int iVar10;
  int *piVar11;
  char *pcVar12;
  uint uVar13;
  SCoronaLightEntry *source_entry;
  uint uVar14;
  int aiStackY_107c [1014];
  CVector3i local_94;
  int local_88;
  SCoronaLightEntry *local_80;
  char (*local_7c) [320];
  int (*local_78) [320];
  byte *local_74;
  int (*local_70) [320];
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
  int *local_34;
  char *local_30;
  int *local_2c;
  int local_28;
  uint *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  char local_14;
  
  bVar2 = 0;
  if ((g_CGamePtr->halo_mode != 0) || ((force_render == 0 && (globe->corona_mode != 0)))) {
    g_CDemonGlobe_PTR_0152bc18 = globe;
    core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044e2a0
              (this_ptr,&globe->position_scaled,&local_94);
    g_INT_0152bc20 = local_94.x;
    (&g_INT_0152bc24)[(uint)bVar2 * -2] = *(int *)((int)&local_94 + (uint)bVar2 * -8 + 4);
    (&g_INT_0152bc28)[(uint)bVar2 * -2 + (uint)bVar2 * -2] =
         *(int *)((int)&local_94 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    if (globe->corona_mode == 0) {
      g_INT_0152bc1c = 0;
    }
    else {
      g_INT_0152bc1c = g_INT_0152bc20;
      if (g_INT_0152bc20 != 0) {
        bVar2 = g_BIT_INTEGER32_01323d00.bytes[0] + 0x10;
        g_INT_0152bc1c = 1;
        g_INT_0152bc20 = g_INT_0152bc20 >> (bVar2 & 0x1f);
        g_INT_0152bc24 = g_INT_0152bc24 >> (bVar2 & 0x1f);
      }
    }
    iVar6 = 0;
    if (0 < this_ptr->display_height) {
      iVar3 = 0;
      do {
        *(int *)((int)g_INT_ARRAY_014dea50 + iVar3) = this_ptr->framebuffer_width;
        *(uint *)((int)g_INT_ARRAY_014dee10 + iVar3) = 0;
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar6 < this_ptr->display_height);
    }
    if (((force_render == 0) && (globe->corona_mode != 0)) &&
       (g_INT_00611294 = -1, globe->corona_mode == 2)) {
      if (g_SCoronaLightCache_01289ca8.count != 0) {
        iVar6 = 0;
        do {
          if (globe == *(CDemonGlobe **)
                        ((int)g_SCoronaLightCache_01289ca8.entries[0].left_extents + iVar6 + -4)) {
            source_entry = (SCoronaLightEntry *)
                           ((int)g_SCoronaLightCache_01289ca8.entries[0].left_extents + iVar6 + -4);
            iVar6 = 0;
            pSVar9 = source_entry;
            if (this_ptr->display_height < 1) {
              g_INT_00611294 = -1;
              return;
            }
            do {
              if (pSVar9->left_extents[0] != this_ptr->framebuffer_width) {
                core_dcamera_cpp_blendCoronaTextureSpan_FUN_00452450
                          (iVar6,pSVar9->left_extents[0],pSVar9->right_extents[0],source_entry);
              }
              iVar6 = iVar6 + 1;
              pSVar9 = (SCoronaLightEntry *)pSVar9->left_extents;
            } while (iVar6 < this_ptr->display_height);
            return;
          }
          iVar6 = iVar6 + 0x13384;
        } while (iVar6 < g_SCoronaLightCache_01289ca8.count * 0x13384);
      }
      if ((uint)g_SCoronaLightCache_01289ca8.count < 8) {
        local_80 = g_SCoronaLightCache_01289ca8.entries + g_SCoronaLightCache_01289ca8.count;
        g_SCoronaLightCache_01289ca8.count = g_SCoronaLightCache_01289ca8.count + 1;
        core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_0045ea60(globe);
        local_54 = 0;
        if (0 < this_ptr->display_height) {
          local_6c = local_80->lightmap;
          local_68 = &DAT_00857cd8;
          local_70 = g_INT_ARRAY_ARRAY_014df1d0;
          local_60 = local_80;
          do {
            if (this_ptr->framebuffer_width != g_INT_ARRAY_014dea50[local_54]) {
              local_48 = local_54;
              local_88 = g_INT_ARRAY_014dea50[local_54];
              local_50 = g_INT_ARRAY_014dee10[local_54];
              local_5c = local_80;
              local_20 = (int *)(local_68 + local_88 * 0xc);
              local_2c = *local_70 + local_88;
              local_24 = g_UINT_PTR_ARRAY_01c4480c
                         [local_54 << (g_BIT_INTEGER32_01323d00.bytes[0] & 0x1f)] +
                         (local_88 << (g_BIT_INTEGER32_01323d00.bytes[0] & 0x1f));
              local_30 = *local_6c + local_88;
              for (; local_88 < local_50; local_88 = local_88 + 1) {
                local_14 = '\0';
                if (((*local_24 < (uint)*local_2c) &&
                    (uVar5 = *local_20 - (g_CDemonGlobe_PTR_0152bc18->position_scaled).x,
                    uVar13 = (int)uVar5 >> 0x1f, iVar6 = (uVar5 ^ uVar13) - uVar13,
                    iVar6 < g_CDemonGlobe_PTR_0152bc18->linear_radius_scaled)) &&
                   ((uVar5 = local_20[1] - (g_CDemonGlobe_PTR_0152bc18->position_scaled).y,
                    uVar13 = (int)uVar5 >> 0x1f, iVar3 = (uVar5 ^ uVar13) - uVar13,
                    iVar3 < g_CDemonGlobe_PTR_0152bc18->linear_radius_scaled &&
                    ((uVar5 = local_20[2] - (g_CDemonGlobe_PTR_0152bc18->position_scaled).z,
                     uVar13 = (int)uVar5 >> 0x1f, iVar4 = (uVar5 ^ uVar13) - uVar13,
                     iVar4 < g_CDemonGlobe_PTR_0152bc18->linear_radius_scaled &&
                     (local_3c = iVar3 * iVar3 + iVar6 * iVar6 + iVar4 * iVar4,
                     local_3c < g_CDemonGlobe_PTR_0152bc18->quadratic_radius_scaled)))))) {
                  if (g_INT_0152bc1c != 0) {
                    local_40 = 0;
                    if (*local_24 == 0) {
                      iVar6 = 0x7fffffff;
                    }
                    else {
                      iVar6 = (int)(0x7fffffff / (longlong)(int)*local_24);
                    }
                    iVar7 = g_INT_0152bc28 - iVar6;
                    iVar8 = iVar7 >> 0x1f;
                    local_1c = (g_INT_0152bc20 - local_88) * 0x10;
                    local_18 = (g_INT_0152bc24 - local_54) * 0x10;
                    iVar10 = local_88 << 8;
                    iVar4 = local_54 << 8;
                    iVar3 = 0x10;
                    do {
                      if (g_INT_ARRAY_00b36198[(iVar4 >> 8) * 0x140 + (iVar10 >> 8)] < iVar6 + -0x80
                         ) break;
                      iVar3 = iVar3 + -1;
                      iVar6 = iVar6 + ((int)((iVar7 + iVar8 * -0x10) - (uint)(iVar8 << 3 < 0)) >> 4)
                      ;
                      iVar10 = iVar10 + local_1c;
                      iVar4 = iVar4 + local_18;
                    } while (0 < iVar3);
                    local_44 = g_INT_0152bc28;
                    if (iVar3 != 0) goto LAB_004529eb;
                  }
                  local_14 = (char)(((g_CDemonGlobe_PTR_0152bc18->quadratic_radius_scaled - local_3c
                                     >> 0x10) * 0x3f) /
                                   (g_CDemonGlobe_PTR_0152bc18->quadratic_radius_scaled >> 0x10));
                }
LAB_004529eb:
                uVar1 = g_BIT_INTEGER32_01323d00.bytes[0];
                local_2c = local_2c + 1;
                local_20 = local_20 + 3;
                *local_30 = local_14;
                local_24 = local_24 + (1 << (uVar1 & 0x1f));
                local_30 = local_30 + 1;
              }
              iVar6 = local_80->left_extents[local_54];
              iVar3 = local_80->right_extents[local_54];
              for (pcVar12 = local_80->lightmap[local_54] + iVar6;
                  (iVar6 < iVar3 && (*pcVar12 == '\0')); pcVar12 = pcVar12 + 1) {
                iVar6 = iVar6 + 1;
              }
              for (pcVar12 = local_80->lightmap[local_54 + -1] + iVar3 + 0x13f;
                  (iVar6 < iVar3 && (*pcVar12 == '\0')); pcVar12 = pcVar12 + -1) {
                iVar3 = iVar3 + -1;
              }
              local_80->left_extents[local_54] = iVar6;
              local_80->right_extents[local_54] = iVar3;
              core_dcamera_cpp_blendCoronaTextureSpan_FUN_00452450
                        (local_54,g_INT_ARRAY_014dea50[local_54],g_INT_ARRAY_014dee10[local_54],
                         local_80);
            }
            local_6c = local_6c + 1;
            local_70 = local_70 + 1;
            local_68 = local_68 + 0xf00;
            local_60->left_extents[0] = g_INT_ARRAY_014dea50[local_54];
            piVar11 = g_INT_ARRAY_014dee10 + local_54;
            local_54 = local_54 + 1;
            local_60->right_extents[0] = *piVar11;
            local_60 = (SCoronaLightEntry *)local_60->left_extents;
          } while (local_54 < this_ptr->display_height);
        }
        local_80->globe = globe;
        return;
      }
      g_INT_0152bc1c = 0;
    }
    core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_0045ea60(globe);
    local_64 = 0;
    if (0 < this_ptr->display_height) {
      local_58 = 0;
      local_78 = g_INT_ARRAY_ARRAY_014df1d0;
      local_7c = g_CHAR_ARRAY_ARRAY_00b10718;
      local_74 = &DAT_00857cd8;
      do {
        if (this_ptr->framebuffer_width != *(int *)((int)g_INT_ARRAY_014dea50 + local_58)) {
          local_28 = *(int *)((int)g_INT_ARRAY_014dea50 + local_58);
          iVar6 = *(int *)((int)g_INT_ARRAY_014dee10 + local_58);
          pcVar12 = *local_7c + local_28;
          local_34 = *local_78 + local_28;
          piVar11 = (int *)(local_74 + local_28 * 0xc);
          local_38 = g_UINT_PTR_ARRAY_01c4480c
                     [local_64 << (g_BIT_INTEGER32_01323d00.bytes[0] & 0x1f)] +
                     (local_28 << (g_BIT_INTEGER32_01323d00.bytes[0] & 0x1f));
          iVar3 = local_28 - iVar6;
          while (SBORROW4(local_28,iVar6) != iVar3 < 0) {
            if ((((*local_38 < (uint)*local_34) &&
                 (uVar5 = *piVar11 - (g_CDemonGlobe_PTR_0152bc18->position_scaled).x,
                 (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) <
                 g_CDemonGlobe_PTR_0152bc18->linear_radius_scaled)) &&
                (uVar13 = piVar11[1] - (g_CDemonGlobe_PTR_0152bc18->position_scaled).y,
                (int)((uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f)) <
                g_CDemonGlobe_PTR_0152bc18->linear_radius_scaled)) &&
               (uVar14 = piVar11[2] - (g_CDemonGlobe_PTR_0152bc18->position_scaled).z,
               (int)((uVar14 ^ (int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f)) <
               g_CDemonGlobe_PTR_0152bc18->linear_radius_scaled)) {
              iVar3 = uVar14 * uVar14 + uVar5 * uVar5 + uVar13 * uVar13;
              if (iVar3 < g_CDemonGlobe_PTR_0152bc18->quadratic_radius_scaled) {
                *pcVar12 = *pcVar12 +
                           (char)((ulonglong)
                                  ((longlong)
                                   (g_CDemonGlobe_PTR_0152bc18->quadratic_radius_scaled - iVar3 >>
                                   0x10) * (longlong)g_CDemonGlobe_PTR_0152bc18->falloff_value) >>
                                 0x10);
              }
            }
            piVar11 = piVar11 + 3;
            pcVar12 = pcVar12 + 1;
            local_34 = local_34 + 1;
            local_38 = local_38 + (1 << (g_BIT_INTEGER32_01323d00.bytes[0] & 0x1f));
            local_28 = local_28 + 1;
            iVar3 = local_28 - iVar6;
          }
        }
        local_58 = local_58 + 4;
        local_78 = local_78 + 1;
        local_7c = local_7c + 1;
        local_74 = local_74 + 0xf00;
        local_64 = local_64 + 1;
      } while (local_64 < this_ptr->display_height);
    }
  }
  return;
}
