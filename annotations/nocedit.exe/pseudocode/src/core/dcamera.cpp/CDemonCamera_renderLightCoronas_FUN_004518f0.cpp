// Name: core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004518f0
// Address: 004518f0
// Address Range: [[004518f0, 0045210f]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_004518f0(CDemonCamera *this_ptr,void *p1,int p2)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_004518f0(CDemonCamera *this_ptr,void *p1,int p2)

{
  int *piVar1;
  byte uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  CVector3i *pCVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int aiStackY_107c [1014];
  CVector3i *in_stack_ffffff6c;
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
  if ((g_CGamePtr->halo_mode != 0) || ((p2 == 0 && (*(int *)((int)p1 + 0x20) != 0)))) {
    g_CurrentGlobe = p1;
    pCVar10 = in_stack_ffffff6c;
    core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
              (this_ptr,p1,in_stack_ffffff6c);
    g_CoronaTargetX = (int)pCVar10;
    (&g_CoronaTargetY)[(uint)bVar3 * -2] = *(int *)(&stack0xffffff70 + (uint)bVar3 * -8);
    (&g_CoronaTargetDepth)[(uint)bVar3 * -2 + (uint)bVar3 * -2] =
         *(int *)(&stack0xffffff74 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
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
        iVar6 = 0;
        do {
          if (p1 == *(void **)(g_LightBufferPool[0x18] + iVar6 + 4)) {
            iVar12 = 0;
            iVar4 = iVar6 + 0x132220c;
            if (this_ptr->display_height < 1) {
              INT_0066ed68 = -1;
              return;
            }
            do {
              if (*(int *)(iVar4 + 4) != this_ptr->framebuffer_width) {
                core_dcamera_cpp_blendCoronaTextureSpan_FUN_004517f0
                          (iVar12,*(int *)(iVar4 + 4),*(int *)(iVar4 + 0x3c4),iVar6 + 0x132220c);
              }
              iVar12 = iVar12 + 1;
              iVar4 = iVar4 + 4;
            } while (iVar12 < this_ptr->display_height);
            return;
          }
          iVar6 = iVar6 + 0x13384;
        } while (iVar6 < g_LightBufferPool[0x18]._0_4_ * 0x13384);
      }
      if ((uint)g_LightBufferPool[0x18]._0_4_ < 8) {
        iVar6 = g_LightBufferPool[0x18]._0_4_ * 0x13384;
        g_LightBufferPool[0x18]._0_4_ = g_LightBufferPool[0x18]._0_4_ + 1;
        local_80 = g_LightBufferPool[0x18] + iVar6 + 4;
        core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_00471400(p1);
        local_54 = 0;
        if (0 < this_ptr->display_height) {
          local_6c = local_80 + 0x784;
          local_68 = g_PrecomputedWorldPositions;
          local_70 = g_CoronaDepthBuffer;
          local_60 = local_80;
          do {
            if (this_ptr->framebuffer_width != g_CoronaLeftExtent[local_54]) {
              local_48 = local_54;
              local_88 = g_CoronaLeftExtent[local_54];
              local_50 = g_CoronaRightExtent[local_54];
              local_5c = local_80;
              local_20 = local_68 + local_88;
              local_2c = *local_70 + local_88;
              local_24 = g_ZBufferScanlineArray
                         [local_54 << (g_CameraDownscaleIterations.bytes[0] & 0x1f)] +
                         (local_88 << (g_CameraDownscaleIterations.bytes[0] & 0x1f));
              local_30 = local_6c + local_88;
              for (; local_88 < local_50; local_88 = local_88 + 1) {
                local_14 = '\0';
                if (((*local_24 < (uint)*local_2c) &&
                    (uVar5 = local_20->x - (g_CurrentGlobe->color).r, uVar13 = (int)uVar5 >> 0x1f,
                    iVar6 = (uVar5 ^ uVar13) - uVar13, iVar6 < g_CurrentGlobe->linear_radius_scaled)
                    ) && ((uVar5 = local_20->y - (g_CurrentGlobe->color).g,
                          uVar13 = (int)uVar5 >> 0x1f, iVar4 = (uVar5 ^ uVar13) - uVar13,
                          iVar4 < g_CurrentGlobe->linear_radius_scaled &&
                          ((uVar5 = local_20->z - (g_CurrentGlobe->color).b,
                           uVar13 = (int)uVar5 >> 0x1f, iVar12 = (uVar5 ^ uVar13) - uVar13,
                           iVar12 < g_CurrentGlobe->linear_radius_scaled &&
                           (local_3c = iVar4 * iVar4 + iVar6 * iVar6 + iVar12 * iVar12,
                           local_3c < g_CurrentGlobe->quadratic_radius_scaled)))))) {
                  if (g_CoronaVisibilityEnabled != 0) {
                    local_40 = 0;
                    if (*local_24 == 0) {
                      iVar6 = 0x7fffffff;
                    }
                    else {
                      iVar6 = (int)(0x7fffffff / (longlong)(int)*local_24);
                    }
                    iVar7 = g_CoronaTargetDepth - iVar6;
                    iVar8 = iVar7 >> 0x1f;
                    local_1c = (g_CoronaTargetX - local_88) * 0x10;
                    local_18 = (g_CoronaTargetY - local_54) * 0x10;
                    iVar9 = local_88 << 8;
                    iVar12 = local_54 << 8;
                    iVar4 = 0x10;
                    do {
                      if (g_PrecomputedDepthBuffer[(iVar12 >> 8) * 0x140 + (iVar9 >> 8)] <
                          iVar6 + -0x80) break;
                      iVar4 = iVar4 + -1;
                      iVar6 = iVar6 + ((int)((iVar7 + iVar8 * -0x10) - (uint)(iVar8 << 3 < 0)) >> 4)
                      ;
                      iVar9 = iVar9 + local_1c;
                      iVar12 = iVar12 + local_18;
                    } while (0 < iVar4);
                    local_44 = g_CoronaTargetDepth;
                    if (iVar4 != 0) goto LAB_00451d8b;
                  }
                  local_14 = (char)(((g_CurrentGlobe->quadratic_radius_scaled - local_3c >> 0x10) *
                                    0x3f) / (g_CurrentGlobe->quadratic_radius_scaled >> 0x10));
                }
LAB_00451d8b:
                uVar2 = g_CameraDownscaleIterations.bytes[0];
                local_2c = local_2c + 1;
                local_20 = local_20 + 1;
                *local_30 = local_14;
                local_24 = local_24 + (1 << (uVar2 & 0x1f));
                local_30 = local_30 + 1;
              }
              iVar6 = *(int *)(local_80 + (local_54 + 1) * 4);
              iVar4 = *(int *)(local_80 + (local_54 + 0xf1) * 4);
              for (pcVar11 = local_80 + iVar6 + local_54 * 0x140 + 0x784;
                  (iVar6 < iVar4 && (*pcVar11 == '\0')); pcVar11 = pcVar11 + 1) {
                iVar6 = iVar6 + 1;
              }
              for (pcVar11 = local_80 + iVar4 + local_54 * 0x140 + 0x783;
                  (iVar6 < iVar4 && (*pcVar11 == '\0')); pcVar11 = pcVar11 + -1) {
                iVar4 = iVar4 + -1;
              }
              *(int *)(local_80 + (local_54 + 1) * 4) = iVar6;
              *(int *)(local_80 + (local_54 + 0xf1) * 4) = iVar4;
              core_dcamera_cpp_blendCoronaTextureSpan_FUN_004517f0
                        (local_54,g_CoronaLeftExtent[local_54],g_CoronaRightExtent[local_54],
                         (int)local_80);
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
        *(void **)local_80 = p1;
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
          iVar6 = *(int *)((int)g_CoronaRightExtent + local_58);
          pcVar11 = *local_7c + local_28;
          local_34 = *local_78 + local_28;
          pCVar10 = local_74 + local_28;
          local_38 = g_ZBufferScanlineArray
                     [local_64 << (g_CameraDownscaleIterations.bytes[0] & 0x1f)] +
                     (local_28 << (g_CameraDownscaleIterations.bytes[0] & 0x1f));
          iVar4 = local_28 - iVar6;
          while (SBORROW4(local_28,iVar6) != iVar4 < 0) {
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
              iVar4 = uVar14 * uVar14 + uVar5 * uVar5 + uVar13 * uVar13;
              if (iVar4 < g_CurrentGlobe->quadratic_radius_scaled) {
                *pcVar11 = *pcVar11 +
                           (char)((ulonglong)
                                  ((longlong)
                                   (g_CurrentGlobe->quadratic_radius_scaled - iVar4 >> 0x10) *
                                  (longlong)g_CurrentGlobe->falloff_value) >> 0x10);
              }
            }
            pCVar10 = pCVar10 + 1;
            pcVar11 = pcVar11 + 1;
            local_34 = local_34 + 1;
            local_38 = local_38 + (1 << (g_CameraDownscaleIterations.bytes[0] & 0x1f));
            local_28 = local_28 + 1;
            iVar4 = local_28 - iVar6;
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
