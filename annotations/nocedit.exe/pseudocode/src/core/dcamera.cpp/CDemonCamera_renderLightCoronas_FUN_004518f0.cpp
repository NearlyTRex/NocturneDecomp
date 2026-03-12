// Name: core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004518f0
// Address: 004518f0
// Address Range: [[004518f0, 0045210f]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_004518f0(CDemonCamera *this_ptr,void *p1,int p2)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_004518f0(CDemonCamera *this_ptr,void *p1,int p2)

{
  byte bVar3;
  int iVar4;
  int iVar1;
  uint uVar3;
  int iVar5;
  int iVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  uint uVar5;
  int iVar6;
  char *source_buffer_offset;
  CVector3i *pCVar14;
  uint uVar15;
  int iVar7;
  int iVar8;
  int iVar16;
  int iVar17;
  int iVar9;
  CVector3i *pCVar10;
  char *pcVar11;
  int iVar12;
  uint *puVar18;
  uint uVar13;
  int *piVar19;
  uint uVar14;
  byte bVar20;
  int aiStackY_107c [1014];
  CVector3i local_94;
  int local_88;
  char *local_80;
  char (*local_7c) [320];
  int (*local_78) [320];
  CVector3i *local_74;
  int (*local_70) [320];
  char *local_6c;
  CVector3i *local_68;
  int local_64;
  char *local_60;
  char *local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_48;
  int local_44;
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
  int *piVar1;
  byte uVar2;
  
  bVar20 = 0;
  if ((g_CGamePtr->halo_mode != 0) || ((p2 == 0 && (*(int *)((int)p1 + 0x20) != 0)))) {
    g_CurrentGlobe = p1;
    core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0(this_ptr,p1,&local_94);
    g_CoronaTargetX = local_94.x;
    (&g_CoronaTargetY)[(uint)bVar20 * -2] = *(int *)((int)&local_94 + (uint)bVar20 * -8 + 4);
    (&g_CoronaTargetDepth)[(uint)bVar20 * -2 + (uint)bVar20 * -2] =
         *(int *)((int)&local_94 + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
    if (*(int *)((int)p1 + 0x20) == 0) {
      g_CoronaVisibilityEnabled = 0;
    }
    else {
      g_CoronaVisibilityEnabled = g_CoronaTargetX;
      if (g_CoronaTargetX != 0) {
        bVar3 = g_CameraDownscaleIterations.bytes[0] + 0x10;
        g_CoronaVisibilityEnabled = 1;
        g_CoronaTargetX = g_CoronaTargetX >> (bVar3 & 0x1f);
        g_CoronaTargetY = g_CoronaTargetY >> (bVar3 & 0x1f);
      }
    }
    iVar6 = 0;
    if (0 < this_ptr->display_height) {
      iVar4 = 0;
      do {
        *(int *)((int)g_CoronaLeftExtent + iVar4) = this_ptr->framebuffer_width;
        *(uint *)((int)g_CoronaRightExtent + iVar4) = 0;
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar6 < this_ptr->display_height);
    }
    if (((p2 == 0) && (*(int *)((int)p1 + 0x20) != 0)) &&
       (INT_0066ed68 = -1, *(int *)((int)p1 + 0x20) == 2)) {
      if (g_LightBufferPool[0x18]._0_4_ != 0) {
        iVar1 = 0;
        do {
          if (p1 == *(void **)(g_LightBufferPool[0x18] + iVar1 + 4)) {
            iVar12 = 0;
            iVar17 = iVar1 + 0x132220c;
            if (this_ptr->display_height < 1) {
              INT_0066ed68 = -1;
              return;
            }
            do {
              if (*(int *)(iVar17 + 4) != this_ptr->framebuffer_width) {
                core_dcamera_cpp_blendCoronaTextureSpan_FUN_004517f0
                          (iVar12,*(int *)(iVar17 + 4),*(int *)(iVar17 + 0x3c4),iVar1 + 0x132220c);
              }
              iVar12 = iVar12 + 1;
              iVar17 = iVar17 + 4;
            } while (iVar12 < this_ptr->display_height);
            return;
          }
          iVar1 = iVar1 + 0x13384;
        } while (iVar1 < g_LightBufferPool[0x18]._0_4_ * 0x13384);
      }
      if ((uint)g_LightBufferPool[0x18]._0_4_ < 8) {
        iVar1 = g_LightBufferPool[0x18]._0_4_ * 0x13384;
        g_LightBufferPool[0x18]._0_4_ = g_LightBufferPool[0x18]._0_4_ + 1;
        source_buffer_offset = g_LightBufferPool[0x18] + iVar1 + 4;
        core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_00471400(p1);
        local_54 = 0;
        if (0 < this_ptr->display_height) {
          local_6c = g_LightBufferPool[0x18] + iVar1 + 0x788;
          local_68 = g_PrecomputedWorldPositions;
          local_70 = g_CoronaDepthBuffer;
          local_60 = source_buffer_offset;
          do {
            if (this_ptr->framebuffer_width != g_CoronaLeftExtent[local_54]) {
              iVar17 = g_CoronaLeftExtent[local_54];
              iVar16 = g_CoronaRightExtent[local_54];
              pCVar14 = local_68 + iVar17;
              piVar19 = *local_70 + iVar17;
              puVar18 = g_ZBufferScanlineArray
                        [local_54 << (g_CameraDownscaleIterations.bytes[0] & 0x1f)] +
                        (iVar17 << (g_CameraDownscaleIterations.bytes[0] & 0x1f));
              pcVar12 = local_6c + iVar17;
              for (; iVar17 < iVar16; iVar17 = iVar17 + 1) {
                local_14 = '\0';
                if (((*puVar18 < (uint)*piVar19) &&
                    (uVar3 = pCVar14->x - (g_CurrentGlobe->color).r, uVar15 = (int)uVar3 >> 0x1f,
                    iVar5 = (uVar3 ^ uVar15) - uVar15, iVar5 < g_CurrentGlobe->linear_radius_scaled)
                    ) && ((uVar3 = pCVar14->y - (g_CurrentGlobe->color).g,
                          uVar15 = (int)uVar3 >> 0x1f, iVar10 = (uVar3 ^ uVar15) - uVar15,
                          iVar10 < g_CurrentGlobe->linear_radius_scaled &&
                          ((uVar3 = pCVar14->z - (g_CurrentGlobe->color).b,
                           uVar15 = (int)uVar3 >> 0x1f, iVar11 = (uVar3 ^ uVar15) - uVar15,
                           iVar11 < g_CurrentGlobe->linear_radius_scaled &&
                           (iVar5 = iVar10 * iVar10 + iVar5 * iVar5 + iVar11 * iVar11,
                           iVar5 < g_CurrentGlobe->quadratic_radius_scaled)))))) {
                  if (g_CoronaVisibilityEnabled != 0) {
                    if (*puVar18 == 0) {
                      iVar10 = 0x7fffffff;
                    }
                    else {
                      iVar10 = (int)(0x7fffffff / (longlong)(int)*puVar18);
                    }
                    iVar7 = g_CoronaTargetDepth - iVar10;
                    iVar8 = iVar7 >> 0x1f;
                    iVar9 = iVar17 << 8;
                    iVar13 = local_54 << 8;
                    iVar11 = 0x10;
                    do {
                      if (g_PrecomputedDepthBuffer[(iVar13 >> 8) * 0x140 + (iVar9 >> 8)] <
                          iVar10 + -0x80) break;
                      iVar11 = iVar11 + -1;
                      iVar10 = iVar10 + ((int)((iVar7 + iVar8 * -0x10) - (uint)(iVar8 << 3 < 0)) >>
                                        4);
                      iVar9 = iVar9 + (g_CoronaTargetX - iVar17) * 0x10;
                      iVar13 = iVar13 + (g_CoronaTargetY - local_54) * 0x10;
                    } while (0 < iVar11);
                    if (iVar11 != 0) goto LAB_00451d8b;
                  }
                  local_14 = (char)(((g_CurrentGlobe->quadratic_radius_scaled - iVar5 >> 0x10) *
                                    0x3f) / (g_CurrentGlobe->quadratic_radius_scaled >> 0x10));
                }
LAB_00451d8b:
                uVar2 = g_CameraDownscaleIterations.bytes[0];
                piVar19 = piVar19 + 1;
                pCVar14 = pCVar14 + 1;
                *pcVar12 = local_14;
                puVar18 = puVar18 + (1 << (uVar2 & 0x1f));
                pcVar12 = pcVar12 + 1;
              }
              iVar17 = *(int *)(source_buffer_offset + local_54 * 4 + 4);
              iVar16 = *(int *)(source_buffer_offset + local_54 * 4 + 0x3c4);
              for (pcVar12 = (char *)(iVar1 + 0x1322990 + local_54 * 0x140 + iVar17);
                  (iVar17 < iVar16 && (*pcVar12 == '\0')); pcVar12 = pcVar12 + 1) {
                iVar17 = iVar17 + 1;
              }
              for (pcVar12 = source_buffer_offset + iVar16 + local_54 * 0x140 + 0x783;
                  (iVar17 < iVar16 && (*pcVar12 == '\0')); pcVar12 = pcVar12 + -1) {
                iVar16 = iVar16 + -1;
              }
              *(int *)(source_buffer_offset + local_54 * 4 + 4) = iVar17;
              *(int *)(source_buffer_offset + local_54 * 4 + 0x3c4) = iVar16;
              core_dcamera_cpp_blendCoronaTextureSpan_FUN_004517f0
                        (local_54,g_CoronaLeftExtent[local_54],g_CoronaRightExtent[local_54],
                         (int)source_buffer_offset);
            }
            local_6c = local_6c + 0x140;
            local_70 = local_70 + 1;
            local_68 = local_68 + 0x140;
            *(int *)(local_60 + 4) = g_CoronaLeftExtent[local_54];
            piVar1 = g_CoronaRightExtent + local_54;
            local_54 = local_54 + 1;
            *(int *)(local_60 + 0x3c4) = *piVar1;
            local_60 = local_60 + 4;
          } while (local_54 < this_ptr->display_height);
        }
        *(void **)source_buffer_offset = p1;
        return;
      }
      g_CoronaVisibilityEnabled = 0;
    }
    core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_00471400(p1);
    local_64 = 0;
    if (0 < this_ptr->display_height) {
      local_58 = 0;
      local_78 = g_CoronaDepthBuffer;
      local_7c = g_CoronaBlurOutputBuffer;
      local_74 = g_PrecomputedWorldPositions;
      do {
        if (this_ptr->framebuffer_width != *(int *)((int)g_CoronaLeftExtent + local_58)) {
          local_28 = *(int *)((int)g_CoronaLeftExtent + local_58);
          iVar1 = *(int *)((int)g_CoronaRightExtent + local_58);
          pcVar11 = *local_7c + local_28;
          local_34 = *local_78 + local_28;
          pCVar10 = local_74 + local_28;
          local_38 = g_ZBufferScanlineArray
                     [local_64 << (g_CameraDownscaleIterations.bytes[0] & 0x1f)] +
                     (local_28 << (g_CameraDownscaleIterations.bytes[0] & 0x1f));
          iVar17 = local_28 - iVar1;
          while (SBORROW4(local_28,iVar1) != iVar17 < 0) {
            if ((((*local_38 < (uint)*local_34) &&
                 (uVar5 = pCVar10->x - (g_CurrentGlobe->color).r,
                 (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) <
                 g_CurrentGlobe->linear_radius_scaled)) &&
                (uVar13 = pCVar10->y - (g_CurrentGlobe->color).g,
                (int)((uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f)) <
                g_CurrentGlobe->linear_radius_scaled)) &&
               (uVar14 = pCVar10->z - (g_CurrentGlobe->color).b,
               (int)((uVar14 ^ (int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f)) <
               g_CurrentGlobe->linear_radius_scaled)) {
              iVar17 = uVar14 * uVar14 + uVar5 * uVar5 + uVar13 * uVar13;
              if (iVar17 < g_CurrentGlobe->quadratic_radius_scaled) {
                *pcVar11 = *pcVar11 +
                           (char)((ulonglong)
                                  ((longlong)
                                   (g_CurrentGlobe->quadratic_radius_scaled - iVar17 >> 0x10) *
                                  (longlong)g_CurrentGlobe->falloff_value) >> 0x10);
              }
            }
            pCVar10 = pCVar10 + 1;
            pcVar11 = pcVar11 + 1;
            local_34 = local_34 + 1;
            local_38 = local_38 + (1 << (g_CameraDownscaleIterations.bytes[0] & 0x1f));
            local_28 = local_28 + 1;
            iVar17 = local_28 - iVar1;
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
