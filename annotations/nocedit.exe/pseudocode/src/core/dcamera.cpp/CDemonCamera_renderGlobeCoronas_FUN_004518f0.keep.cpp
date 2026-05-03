// Name: core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_004518f0
// Address: 004518f0
// MANUAL RECONSTRUCTION
// Address Range: [[004518f0, 0045210f] [0060c78d, 0060c7aa]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_004518f0(CDemonCamera *this_ptr,CDemonGlobe *globe,int force_render)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_004518f0(CDemonCamera *this_ptr,CDemonGlobe *globe,int force_render)

{
  byte bVar3;
  int iVar1;
  uint uVar3;
  int iVar5;
  int iVar10;
  int iVar11;
  int iVar13;
  char *pcVar14;
  int iVar15;
  uint uVar5;
  int iVar6;
  SCoronaLightEntry *source_buffer_offset;
  CVector3i *pCVar16;
  uint uVar17;
  int iVar7;
  int iVar8;
  int iVar18;
  int iVar9;
  CVector3i *pCVar10;
  char *pcVar11;
  int iVar12;
  uint *puVar19;
  uint uVar13;
  int *piVar20;
  uint uVar14;
  CVector3i local_94;
  char (*local_7c) [320];
  int (*local_78) [320];
  CVector3i *local_74;
  int (*local_70) [320];
  char *local_6c;
  CVector3i *local_68;
  int local_64;
  int local_54;
  uint *local_38;
  int *local_34;
  int local_28;
  char local_14;
  byte uVar2;

  if ((g_CGamePtr->halo_mode != 0) || ((force_render == 0 && (globe->corona_mode != 0)))) {
    g_CurrentGlobe = globe;
    core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
              (this_ptr,&globe->position_scaled,&local_94);
    g_CoronaTargetX = local_94.x;
    g_CoronaTargetY = local_94.y;
    g_CoronaTargetDepth = local_94.z;
    if (globe->corona_mode == 0) {
      g_CoronaVisibilityEnabled = 0;
    }
    else {
      g_CoronaVisibilityEnabled = local_94.x;
      if (local_94.x != 0) {
        bVar3 = g_CameraDownscaleIterations.bytes[0] + 0x10;
        g_CoronaVisibilityEnabled = 1;
        g_CoronaTargetX = local_94.x >> (bVar3 & 0x1f);
        g_CoronaTargetY = local_94.y >> (bVar3 & 0x1f);
      }
    }
    iVar6 = 0;
    if (0 < this_ptr->display_height) {
      do {
        g_CoronaLeftExtent[iVar6] = this_ptr->framebuffer_width;
        g_CoronaRightExtent[iVar6] = 0;
        iVar6 = iVar6 + 1;
      } while (iVar6 < this_ptr->display_height);
    }
    iVar13 = g_CoronaLightCache.count;
    if (((force_render == 0) && (globe->corona_mode != 0)) &&
       (INT_0066ed68 = -1, globe->corona_mode == 2)) {
      for (iVar1 = 0; iVar1 < g_CoronaLightCache.count; iVar1 = iVar1 + 1) {
        if (globe == g_CoronaLightCache.entries[iVar1].globe) {
          if (this_ptr->display_height < 1) {
            INT_0066ed68 = -1;
            return;
          }
          for (iVar12 = 0; iVar12 < this_ptr->display_height; iVar12 = iVar12 + 1) {
            if (g_CoronaLightCache.entries[iVar1].left_extents[iVar12] != this_ptr->framebuffer_width) {
              core_dcamera_cpp_blendCoronaTextureSpan_FUN_004517f0
                        (iVar12,
                         g_CoronaLightCache.entries[iVar1].left_extents[iVar12],
                         g_CoronaLightCache.entries[iVar1].right_extents[iVar12],
                         (int)&g_CoronaLightCache.entries[iVar1]);
            }
          }
          return;
        }
      }
      if ((uint)g_CoronaLightCache.count < 8) {
        source_buffer_offset = g_CoronaLightCache.entries + g_CoronaLightCache.count;
        g_CoronaLightCache.count = g_CoronaLightCache.count + 1;
        core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_00471400(globe);
        local_54 = 0;
        if (0 < this_ptr->display_height) {
          local_6c = g_CoronaLightCache.entries[iVar13].lightmap[0];
          local_68 = g_PrecomputedWorldPositions;
          local_70 = g_CoronaDepthBuffer;
          do {
            if (this_ptr->framebuffer_width != g_CoronaLeftExtent[local_54]) {
              iVar13 = g_CoronaLeftExtent[local_54];
              iVar18 = g_CoronaRightExtent[local_54];
              pCVar16 = local_68 + iVar13;
              piVar20 = *local_70 + iVar13;
              puVar19 = g_ZBufferScanlineArray
                        [local_54 << (g_CameraDownscaleIterations.bytes[0] & 0x1f)] +
                        (iVar13 << (g_CameraDownscaleIterations.bytes[0] & 0x1f));
              pcVar14 = local_6c + iVar13;
              for (; iVar13 < iVar18; iVar13 = iVar13 + 1) {
                local_14 = '\0';
                if (((*puVar19 < (uint)*piVar20) &&
                    (uVar3 = pCVar16->x - (g_CurrentGlobe->position_scaled).x,
                    uVar17 = (int)uVar3 >> 0x1f, iVar5 = (uVar3 ^ uVar17) - uVar17,
                    iVar5 < g_CurrentGlobe->linear_radius_scaled)) &&
                   ((uVar3 = pCVar16->y - (g_CurrentGlobe->position_scaled).y,
                    uVar17 = (int)uVar3 >> 0x1f, iVar10 = (uVar3 ^ uVar17) - uVar17,
                    iVar10 < g_CurrentGlobe->linear_radius_scaled &&
                    ((uVar3 = pCVar16->z - (g_CurrentGlobe->position_scaled).z,
                     uVar17 = (int)uVar3 >> 0x1f, iVar11 = (uVar3 ^ uVar17) - uVar17,
                     iVar11 < g_CurrentGlobe->linear_radius_scaled &&
                     (iVar5 = iVar10 * iVar10 + iVar5 * iVar5 + iVar11 * iVar11,
                     iVar5 < g_CurrentGlobe->quadratic_radius_scaled)))))) {
                  if (g_CoronaVisibilityEnabled != 0) {
                    if (*puVar19 == 0) {
                      iVar10 = 0x7fffffff;
                    }
                    else {
                      iVar10 = (int)(0x7fffffff / (longlong)(int)*puVar19);
                    }
                    iVar7 = g_CoronaTargetDepth - iVar10;
                    iVar8 = iVar7 >> 0x1f;
                    iVar9 = iVar13 << 8;
                    iVar15 = local_54 << 8;
                    iVar11 = 0x10;
                    do {
                      if (g_PrecomputedDepthBuffer[(iVar15 >> 8) * 0x140 + (iVar9 >> 8)] <
                          iVar10 + -0x80) break;
                      iVar11 = iVar11 + -1;
                      iVar10 = iVar10 + ((int)((iVar7 + iVar8 * -0x10) - (uint)(iVar8 << 3 < 0)) >>
                                        4);
                      iVar9 = iVar9 + (g_CoronaTargetX - iVar13) * 0x10;
                      iVar15 = iVar15 + (g_CoronaTargetY - local_54) * 0x10;
                    } while (0 < iVar11);
                    if (iVar11 != 0) goto LAB_00451d8b;
                  }
                  local_14 = (char)(((g_CurrentGlobe->quadratic_radius_scaled - iVar5 >> 0x10) *
                                    0x3f) / (g_CurrentGlobe->quadratic_radius_scaled >> 0x10));
                }
LAB_00451d8b:
                uVar2 = g_CameraDownscaleIterations.bytes[0];
                piVar20 = piVar20 + 1;
                pCVar16 = pCVar16 + 1;
                *pcVar14 = local_14;
                puVar19 = puVar19 + (1 << (uVar2 & 0x1f));
                pcVar14 = pcVar14 + 1;
              }
              iVar13 = source_buffer_offset->left_extents[local_54];
              iVar18 = source_buffer_offset->right_extents[local_54];
              for (pcVar14 = (char *)source_buffer_offset->lightmap
                             + local_54 * 320 + iVar13;
                  (iVar13 < iVar18 && (*pcVar14 == '\0')); pcVar14 = pcVar14 + 1) {
                iVar13 = iVar13 + 1;
              }
              for (pcVar14 = (char *)source_buffer_offset->lightmap
                             + local_54 * 320 + iVar18 - 1;
                  (iVar13 < iVar18 && (*pcVar14 == '\0')); pcVar14 = pcVar14 + -1) {
                iVar18 = iVar18 + -1;
              }
              source_buffer_offset->left_extents[local_54] = iVar13;
              source_buffer_offset->right_extents[local_54] = iVar18;
              core_dcamera_cpp_blendCoronaTextureSpan_FUN_004517f0
                        (local_54,g_CoronaLeftExtent[local_54],g_CoronaRightExtent[local_54],
                         (int)source_buffer_offset);
            }
            local_6c = local_6c + 0x140;
            local_70 = local_70 + 1;
            local_68 = local_68 + 0x140;
            source_buffer_offset->left_extents[local_54] = g_CoronaLeftExtent[local_54];
            source_buffer_offset->right_extents[local_54] = g_CoronaRightExtent[local_54];
            local_54 = local_54 + 1;
          } while (local_54 < this_ptr->display_height);
        }
        source_buffer_offset->globe = globe;
        return;
      }
      g_CoronaVisibilityEnabled = 0;
    }
    core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_00471400(globe);
    local_64 = 0;
    if (0 < this_ptr->display_height) {
      local_78 = g_CoronaDepthBuffer;
      local_7c = g_CoronaBlurOutputBuffer;
      local_74 = g_PrecomputedWorldPositions;
      do {
        if (this_ptr->framebuffer_width != g_CoronaLeftExtent[local_64]) {
          local_28 = g_CoronaLeftExtent[local_64];
          iVar13 = g_CoronaRightExtent[local_64];
          pcVar11 = *local_7c + local_28;
          local_34 = *local_78 + local_28;
          pCVar10 = local_74 + local_28;
          local_38 = g_ZBufferScanlineArray
                     [local_64 << (g_CameraDownscaleIterations.bytes[0] & 0x1f)] +
                     (local_28 << (g_CameraDownscaleIterations.bytes[0] & 0x1f));
          iVar1 = local_28 - iVar13;
          while (SBORROW4(local_28,iVar13) != iVar1 < 0) {
            if ((((*local_38 < (uint)*local_34) &&
                 (uVar5 = pCVar10->x - (g_CurrentGlobe->position_scaled).x,
                 (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) <
                 g_CurrentGlobe->linear_radius_scaled)) &&
                (uVar13 = pCVar10->y - (g_CurrentGlobe->position_scaled).y,
                (int)((uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f)) <
                g_CurrentGlobe->linear_radius_scaled)) &&
               (uVar14 = pCVar10->z - (g_CurrentGlobe->position_scaled).z,
               (int)((uVar14 ^ (int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f)) <
               g_CurrentGlobe->linear_radius_scaled)) {
              iVar1 = uVar14 * uVar14 + uVar5 * uVar5 + uVar13 * uVar13;
              if (iVar1 < g_CurrentGlobe->quadratic_radius_scaled) {
                *pcVar11 = *pcVar11 +
                           (char)((ulonglong)
                                  ((longlong)
                                   (g_CurrentGlobe->quadratic_radius_scaled - iVar1 >> 0x10) *
                                  (longlong)g_CurrentGlobe->falloff_value) >> 0x10);
              }
            }
            pCVar10 = pCVar10 + 1;
            pcVar11 = pcVar11 + 1;
            local_34 = local_34 + 1;
            local_38 = local_38 + (1 << (g_CameraDownscaleIterations.bytes[0] & 0x1f));
            local_28 = local_28 + 1;
            iVar1 = local_28 - iVar13;
          }
        }
        local_78 = local_78 + 1;
        local_7c = local_7c + 1;
        local_74 = local_74 + 0x140;
        local_64 = local_64 + 1;
      } while (local_64 < this_ptr->display_height);
    }
  }
  return;
}
