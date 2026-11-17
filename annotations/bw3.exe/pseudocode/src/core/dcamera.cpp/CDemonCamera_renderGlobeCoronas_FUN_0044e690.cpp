// Name: core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_0044e690
// Address: 0044e690
// Address Range: [[0044e690, 0044eeaf]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_0044e690(CDemonCamera *this_ptr,CDemonGlobe *globe,int force_render)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_0044e690(CDemonCamera *this_ptr,CDemonGlobe *globe,int force_render)

{
  int *piVar1;
  byte uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  SCoronaLightEntry *pSVar10;
  int iVar11;
  CVector3i *pCVar12;
  char *pcVar13;
  uint uVar14;
  SCoronaLightEntry *source_entry;
  uint uVar15;
  int aiStackY_107c [1014];
  CVector3i local_94;
  int local_88;
  SCoronaLightEntry *local_80;
  char (*local_7c) [320];
  int (*local_78) [320];
  CVector3i *local_74;
  int (*local_70) [320];
  char (*local_6c) [320];
  CVector3i *local_68;
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
  CVector3i *local_20;
  int local_1c;
  int local_18;
  char local_14;
  
  bVar3 = 0;
  if ((g_CGamePtr->halo_mode != 0) || ((force_render == 0 && (globe->corona_mode != 0)))) {
    g_CDemonGlobe_PTR_015484c8 = globe;
    core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044a3e0
              (this_ptr,&globe->position_scaled,&local_94);
    g_INT_015484d0 = local_94.x;
    (&g_INT_015484d4)[(uint)bVar3 * -2] = *(int *)((int)&local_94 + (uint)bVar3 * -8 + 4);
    (&g_INT_015484d8)[(uint)bVar3 * -2 + (uint)bVar3 * -2] =
         *(int *)((int)&local_94 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    if (globe->corona_mode == 0) {
      g_INT_015484cc = 0;
    }
    else {
      g_INT_015484cc = g_INT_015484d0;
      if (g_INT_015484d0 != 0) {
        bVar3 = g_BIT_INTEGER32_013405b0.bytes[0] + 0x10;
        g_INT_015484cc = 1;
        g_INT_015484d0 = g_INT_015484d0 >> (bVar3 & 0x1f);
        g_INT_015484d4 = g_INT_015484d4 >> (bVar3 & 0x1f);
      }
    }
    iVar7 = 0;
    if (0 < this_ptr->display_height) {
      iVar4 = 0;
      do {
        *(int *)((int)g_INT_ARRAY_014fb300 + iVar4) = this_ptr->framebuffer_width;
        *(uint *)((int)g_INT_ARRAY_014fb6c0 + iVar4) = 0;
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar7 < this_ptr->display_height);
    }
    if (((force_render == 0) && (globe->corona_mode != 0)) &&
       (g_INT_005f1848 = -1, globe->corona_mode == 2)) {
      if (g_SCoronaLightCache_012a6558.count != 0) {
        iVar7 = 0;
        do {
          if (globe == *(CDemonGlobe **)
                        ((int)g_SCoronaLightCache_012a6558.entries[0].left_extents + iVar7 + -4)) {
            source_entry = (SCoronaLightEntry *)
                           ((int)g_SCoronaLightCache_012a6558.entries[0].left_extents + iVar7 + -4);
            iVar7 = 0;
            pSVar10 = source_entry;
            if (this_ptr->display_height < 1) {
              g_INT_005f1848 = -1;
              return;
            }
            do {
              if (pSVar10->left_extents[0] != this_ptr->framebuffer_width) {
                core_dcamera_cpp_blendCoronaTextureSpan_FUN_0044e590
                          (iVar7,pSVar10->left_extents[0],pSVar10->right_extents[0],source_entry);
              }
              iVar7 = iVar7 + 1;
              pSVar10 = (SCoronaLightEntry *)pSVar10->left_extents;
            } while (iVar7 < this_ptr->display_height);
            return;
          }
          iVar7 = iVar7 + 0x13384;
        } while (iVar7 < g_SCoronaLightCache_012a6558.count * 0x13384);
      }
      if ((uint)g_SCoronaLightCache_012a6558.count < 8) {
        local_80 = g_SCoronaLightCache_012a6558.entries + g_SCoronaLightCache_012a6558.count;
        g_SCoronaLightCache_012a6558.count = g_SCoronaLightCache_012a6558.count + 1;
        core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_0045abd0(globe);
        local_54 = 0;
        if (0 < this_ptr->display_height) {
          local_6c = local_80->lightmap;
          local_68 = g_CVector3i_ARRAY_00874588;
          local_70 = g_INT_ARRAY_ARRAY_014fba80;
          local_60 = local_80;
          do {
            if (this_ptr->framebuffer_width != g_INT_ARRAY_014fb300[local_54]) {
              local_48 = local_54;
              local_88 = g_INT_ARRAY_014fb300[local_54];
              local_50 = g_INT_ARRAY_014fb6c0[local_54];
              local_5c = local_80;
              local_20 = local_68 + local_88;
              local_2c = *local_70 + local_88;
              local_24 = g_UINT_PTR_ARRAY_01c60dac
                         [local_54 << (g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f)] +
                         (local_88 << (g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f));
              local_30 = *local_6c + local_88;
              for (; local_88 < local_50; local_88 = local_88 + 1) {
                local_14 = '\0';
                if (((*local_24 < (uint)*local_2c) &&
                    (uVar6 = local_20->x - (g_CDemonGlobe_PTR_015484c8->position_scaled).x,
                    uVar14 = (int)uVar6 >> 0x1f, iVar7 = (uVar6 ^ uVar14) - uVar14,
                    iVar7 < g_CDemonGlobe_PTR_015484c8->linear_radius_scaled)) &&
                   ((uVar6 = local_20->y - (g_CDemonGlobe_PTR_015484c8->position_scaled).y,
                    uVar14 = (int)uVar6 >> 0x1f, iVar4 = (uVar6 ^ uVar14) - uVar14,
                    iVar4 < g_CDemonGlobe_PTR_015484c8->linear_radius_scaled &&
                    ((uVar6 = local_20->z - (g_CDemonGlobe_PTR_015484c8->position_scaled).z,
                     uVar14 = (int)uVar6 >> 0x1f, iVar5 = (uVar6 ^ uVar14) - uVar14,
                     iVar5 < g_CDemonGlobe_PTR_015484c8->linear_radius_scaled &&
                     (local_3c = iVar4 * iVar4 + iVar7 * iVar7 + iVar5 * iVar5,
                     local_3c < g_CDemonGlobe_PTR_015484c8->quadratic_radius_scaled)))))) {
                  if (g_INT_015484cc != 0) {
                    local_40 = 0;
                    if (*local_24 == 0) {
                      iVar7 = 0x7fffffff;
                    }
                    else {
                      iVar7 = (int)(0x7fffffff / (longlong)(int)*local_24);
                    }
                    iVar8 = g_INT_015484d8 - iVar7;
                    iVar9 = iVar8 >> 0x1f;
                    local_1c = (g_INT_015484d0 - local_88) * 0x10;
                    local_18 = (g_INT_015484d4 - local_54) * 0x10;
                    iVar11 = local_88 << 8;
                    iVar5 = local_54 << 8;
                    iVar4 = 0x10;
                    do {
                      if (g_INT_ARRAY_00b52a48[(iVar5 >> 8) * 0x140 + (iVar11 >> 8)] < iVar7 + -0x80
                         ) break;
                      iVar4 = iVar4 + -1;
                      iVar7 = iVar7 + ((int)((iVar8 + iVar9 * -0x10) - (uint)(iVar9 << 3 < 0)) >> 4)
                      ;
                      iVar11 = iVar11 + local_1c;
                      iVar5 = iVar5 + local_18;
                    } while (0 < iVar4);
                    local_44 = g_INT_015484d8;
                    if (iVar4 != 0) goto LAB_0044eb2b;
                  }
                  local_14 = (char)(((g_CDemonGlobe_PTR_015484c8->quadratic_radius_scaled - local_3c
                                     >> 0x10) * 0x3f) /
                                   (g_CDemonGlobe_PTR_015484c8->quadratic_radius_scaled >> 0x10));
                }
LAB_0044eb2b:
                uVar2 = g_BIT_INTEGER32_013405b0.bytes[0];
                local_2c = local_2c + 1;
                local_20 = local_20 + 1;
                *local_30 = local_14;
                local_24 = local_24 + (1 << (uVar2 & 0x1f));
                local_30 = local_30 + 1;
              }
              iVar7 = local_80->left_extents[local_54];
              iVar4 = local_80->right_extents[local_54];
              for (pcVar13 = local_80->lightmap[local_54] + iVar7;
                  (iVar7 < iVar4 && (*pcVar13 == '\0')); pcVar13 = pcVar13 + 1) {
                iVar7 = iVar7 + 1;
              }
              for (pcVar13 = local_80->lightmap[local_54 + -1] + iVar4 + 0x13f;
                  (iVar7 < iVar4 && (*pcVar13 == '\0')); pcVar13 = pcVar13 + -1) {
                iVar4 = iVar4 + -1;
              }
              local_80->left_extents[local_54] = iVar7;
              local_80->right_extents[local_54] = iVar4;
              core_dcamera_cpp_blendCoronaTextureSpan_FUN_0044e590
                        (local_54,g_INT_ARRAY_014fb300[local_54],g_INT_ARRAY_014fb6c0[local_54],
                         local_80);
            }
            local_6c = local_6c + 1;
            local_70 = local_70 + 1;
            local_68 = local_68 + 0x140;
            local_60->left_extents[0] = g_INT_ARRAY_014fb300[local_54];
            piVar1 = g_INT_ARRAY_014fb6c0 + local_54;
            local_54 = local_54 + 1;
            local_60->right_extents[0] = *piVar1;
            local_60 = (SCoronaLightEntry *)local_60->left_extents;
          } while (local_54 < this_ptr->display_height);
        }
        local_80->globe = globe;
        return;
      }
      g_INT_015484cc = 0;
    }
    core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_0045abd0(globe);
    local_64 = 0;
    if (0 < this_ptr->display_height) {
      local_58 = 0;
      local_78 = g_INT_ARRAY_ARRAY_014fba80;
      local_7c = g_CHAR_ARRAY_ARRAY_00b2cfc8;
      local_74 = g_CVector3i_ARRAY_00874588;
      do {
        if (this_ptr->framebuffer_width != *(int *)((int)g_INT_ARRAY_014fb300 + local_58)) {
          local_28 = *(int *)((int)g_INT_ARRAY_014fb300 + local_58);
          iVar7 = *(int *)((int)g_INT_ARRAY_014fb6c0 + local_58);
          pcVar13 = *local_7c + local_28;
          local_34 = *local_78 + local_28;
          pCVar12 = local_74 + local_28;
          local_38 = g_UINT_PTR_ARRAY_01c60dac
                     [local_64 << (g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f)] +
                     (local_28 << (g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f));
          iVar4 = local_28 - iVar7;
          while (SBORROW4(local_28,iVar7) != iVar4 < 0) {
            if ((((*local_38 < (uint)*local_34) &&
                 (uVar6 = pCVar12->x - (g_CDemonGlobe_PTR_015484c8->position_scaled).x,
                 (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)) <
                 g_CDemonGlobe_PTR_015484c8->linear_radius_scaled)) &&
                (uVar14 = pCVar12->y - (g_CDemonGlobe_PTR_015484c8->position_scaled).y,
                (int)((uVar14 ^ (int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f)) <
                g_CDemonGlobe_PTR_015484c8->linear_radius_scaled)) &&
               (uVar15 = pCVar12->z - (g_CDemonGlobe_PTR_015484c8->position_scaled).z,
               (int)((uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f)) <
               g_CDemonGlobe_PTR_015484c8->linear_radius_scaled)) {
              iVar4 = uVar15 * uVar15 + uVar6 * uVar6 + uVar14 * uVar14;
              if (iVar4 < g_CDemonGlobe_PTR_015484c8->quadratic_radius_scaled) {
                *pcVar13 = *pcVar13 +
                           (char)((ulonglong)
                                  ((longlong)
                                   (g_CDemonGlobe_PTR_015484c8->quadratic_radius_scaled - iVar4 >>
                                   0x10) * (longlong)g_CDemonGlobe_PTR_015484c8->falloff_value) >>
                                 0x10);
              }
            }
            pCVar12 = pCVar12 + 1;
            pcVar13 = pcVar13 + 1;
            local_34 = local_34 + 1;
            local_38 = local_38 + (1 << (g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f));
            local_28 = local_28 + 1;
            iVar4 = local_28 - iVar7;
          }
        }
        local_58 = local_58 + 4;
        local_78 = local_78 + 1;
        local_7c = local_7c + 1;
        local_74 = local_74 + 0x140;
        local_64 = local_64 + 1;
      } while (local_64 < this_ptr->display_height);
    }
  }
  return;
}
