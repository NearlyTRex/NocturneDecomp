// Name: core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004518f0
// Address: 004518f0
// Address Range: [[004518f0, 0045210f]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004518f0(CDemonCamera * this_ptr, void * p1, int p2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_004518f0
          (CDemonCamera *this_ptr,void *p1,int p2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  CVector3i *pCVar9;
  BADSPACEBASE *in_ESP;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint in_stack_00000010;
  int aiStackY_1078 [1014];
  CVector3i *in_stack_ffffff6c;
  int in_stack_ffffff70;
  int local_80;
  int local_7c;
  uint *local_78;
  char (*local_74) [320];
  int (*local_70) [320];
  CVector3i *local_6c;
  int (*local_68) [320];
  uint *local_64;
  CVector3i *local_60;
  int local_5c;
  uint *local_58;
  uint *local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint *local_30;
  int *local_2c;
  byte *local_28;
  int *local_24;
  int local_20;
  uint *local_1c;
  CVector3i *local_18;
  int local_14;
  byte uVar14;
  
  bVar2 = 0;
  if ((g_CGamePtr->halo_mode != 0) || ((p2 == 0 && (*(int *)((int)p1 + 0x20) != 0)))) {
    g_CurrentGlobe = p1;
    iVar5 = in_stack_ffffff70;
    core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
              (this_ptr,p1,in_stack_ffffff6c);
    g_CoronaTargetX = iVar5;
    (&g_CoronaTargetY)[(uint)bVar2 * -2] = *(int *)(&stack0xffffff74 + (uint)bVar2 * -8);
    (&g_CoronaTargetDepth)[(uint)bVar2 * -2 + (uint)bVar2 * -2] =
         *(int *)(&stack0xffffff78 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    if (*(int *)(p2 + 0x20) == 0) {
      g_CoronaVisibilityEnabled = 0;
    }
    else {
      g_CoronaVisibilityEnabled = g_CoronaTargetX;
      if (g_CoronaTargetX != 0) {
        bVar2 = (char)g_CameraDownscaleIterations + 0x10;
        g_CoronaVisibilityEnabled = 1;
        g_CoronaTargetX = g_CoronaTargetX >> (bVar2 & 0x1f);
        g_CoronaTargetY = g_CoronaTargetY >> (bVar2 & 0x1f);
      }
    }
    iVar5 = 0;
    if (0 < *(int *)((int)p1 + 0x154)) {
      iVar3 = 0;
      do {
        *(uint *)((int)g_CoronaLeftExtent + iVar3) = *(uint *)((int)p1 + 0x144);
        *(uint *)((int)g_CoronaRightExtent + iVar3) = 0;
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar5 < *(int *)((int)p1 + 0x154));
    }
    if (((p2 == 0) && (iRam00000020 != 0)) && (_DAT_0066ed68 = 0xffffffff, iRam00000020 == 2)) {
      if (g_LightBufferPool[0x18]._0_4_ != 0) {
        iVar5 = 0;
        do {
          if (*(int *)(g_LightBufferPool[0x18] + iVar5 + 4) == 0) {
            iVar11 = 0;
            iVar3 = iVar5 + 0x132220c;
            if (*(int *)((int)p1 + 0x154) < 1) {
              _DAT_0066ed68 = 0xffffffff;
              return;
            }
            do {
              if (*(int *)(iVar3 + 4) != *(int *)((int)p1 + 0x144)) {
                core_dcamera_cpp_blendCoronaTextureSpan_FUN_004517f0
                          (iVar11,*(int *)(iVar3 + 4),*(int *)(iVar3 + 0x3c4),iVar5 + 0x132220c);
              }
              iVar11 = iVar11 + 1;
              iVar3 = iVar3 + 4;
            } while (iVar11 < *(int *)((int)p1 + 0x154));
            return;
          }
          iVar5 = iVar5 + 0x13384;
        } while (iVar5 < g_LightBufferPool[0x18]._0_4_ * 0x13384);
      }
      if ((uint)g_LightBufferPool[0x18]._0_4_ < 8) {
        local_7c = g_LightBufferPool[0x18]._0_4_ * 0x13384;
        g_LightBufferPool[0x18]._0_4_ = g_LightBufferPool[0x18]._0_4_ + 1;
        local_7c = local_7c + 0x132220c;
        core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_00471400((CDemonGlobe *)0x0);
        local_4c = 0;
        if (0 < iRam00000154) {
          local_64 = local_78 + 0x1e1;
          local_60 = g_PrecomputedWorldPositions;
          local_68 = g_CoronaDepthBuffer;
          local_58 = local_78;
          do {
            if (iRam00000144 != g_CoronaLeftExtent[local_4c]) {
              local_40 = local_4c;
              local_80 = g_CoronaLeftExtent[local_4c];
              local_48 = g_CoronaRightExtent[local_4c];
              local_54 = local_78;
              local_18 = local_60 + local_80;
              local_24 = *local_68 + local_80;
              local_1c = g_ZBufferScanlineArray
                         [local_4c << ((byte)g_CameraDownscaleIterations & 0x1f)] +
                         (local_80 << ((byte)g_CameraDownscaleIterations & 0x1f));
              local_28 = (byte *)((int)local_64 + local_80);
              for (; local_80 < local_48; local_80 = local_80 + 1) {
                uVar14 = 0;
                if (((*local_1c < (uint)*local_24) &&
                    (uVar4 = local_18->x - (g_CurrentGlobe->color).r, uVar12 = (int)uVar4 >> 0x1f,
                    iVar5 = (uVar4 ^ uVar12) - uVar12, iVar5 < g_CurrentGlobe->linear_radius_scaled)
                    ) && ((uVar4 = local_18->y - (g_CurrentGlobe->color).g,
                          uVar12 = (int)uVar4 >> 0x1f, iVar3 = (uVar4 ^ uVar12) - uVar12,
                          iVar3 < g_CurrentGlobe->linear_radius_scaled &&
                          ((uVar4 = local_18->z - (g_CurrentGlobe->color).b,
                           uVar12 = (int)uVar4 >> 0x1f, iVar11 = (uVar4 ^ uVar12) - uVar12,
                           iVar11 < g_CurrentGlobe->linear_radius_scaled &&
                           (local_34 = iVar3 * iVar3 + iVar5 * iVar5 + iVar11 * iVar11,
                           local_34 < g_CurrentGlobe->quadratic_radius_scaled)))))) {
                  if (g_CoronaVisibilityEnabled != 0) {
                    local_38 = 0;
                    if (*local_1c == 0) {
                      iVar5 = 0x7fffffff;
                    }
                    else {
                      iVar5 = (int)(0x7fffffff / (longlong)(int)*local_1c);
                    }
                    iVar6 = g_CoronaTargetDepth - iVar5;
                    iVar7 = iVar6 >> 0x1f;
                    local_14 = (g_CoronaTargetX - local_80) * 0x10;
                    iVar8 = local_80 << 8;
                    iVar11 = local_4c << 8;
                    iVar3 = 0x10;
                    do {
                      if (g_PrecomputedDepthBuffer[(iVar11 >> 8) * 0x140 + (iVar8 >> 8)] <
                          iVar5 + -0x80) break;
                      iVar3 = iVar3 + -1;
                      iVar5 = iVar5 + ((int)((iVar6 + iVar7 * -0x10) - (uint)(iVar7 << 3 < 0)) >> 4)
                      ;
                      iVar8 = iVar8 + local_14;
                      iVar11 = iVar11 + (g_CoronaTargetY - local_4c) * 0x10;
                    } while (0 < iVar3);
                    local_3c = g_CoronaTargetDepth;
                    if (iVar3 != 0) goto LAB_00451d8b;
                  }
                  uVar14 = (byte)
                           (((g_CurrentGlobe->quadratic_radius_scaled - local_34 >> 0x10) * 0x3f) /
                           (g_CurrentGlobe->quadratic_radius_scaled >> 0x10));
                }
LAB_00451d8b:
                bVar2 = (byte)g_CameraDownscaleIterations;
                local_24 = local_24 + 1;
                local_18 = local_18 + 1;
                *local_28 = uVar14;
                local_1c = local_1c + (1 << (bVar2 & 0x1f));
                local_28 = local_28 + 1;
              }
              iVar5 = local_78[local_4c + 1];
              iVar3 = local_78[local_4c + 0xf1];
              for (pcVar10 = (char *)((int)local_78 + iVar5 + local_4c * 0x140 + 0x784);
                  (iVar5 < iVar3 && (*pcVar10 == '\0')); pcVar10 = pcVar10 + 1) {
                iVar5 = iVar5 + 1;
              }
              for (pcVar10 = (char *)((int)local_78 + iVar3 + local_4c * 0x140 + 0x783);
                  (iVar5 < iVar3 && (*pcVar10 == '\0')); pcVar10 = pcVar10 + -1) {
                iVar3 = iVar3 + -1;
              }
              local_78[local_4c + 1] = iVar5;
              local_78[local_4c + 0xf1] = iVar3;
              core_dcamera_cpp_blendCoronaTextureSpan_FUN_004517f0
                        (local_4c,g_CoronaLeftExtent[local_4c],g_CoronaRightExtent[local_4c],
                         (int)local_78);
            }
            local_64 = local_64 + 0x50;
            local_68 = local_68 + 1;
            local_60 = local_60 + 0x140;
            local_58[1] = g_CoronaLeftExtent[local_4c];
            piVar1 = g_CoronaRightExtent + local_4c;
            local_4c = local_4c + 1;
            local_58[0xf1] = *piVar1;
            local_58 = local_58 + 1;
          } while (local_4c < iRam00000154);
        }
        *local_78 = in_stack_00000010;
        return;
      }
      g_CoronaVisibilityEnabled = 0;
    }
    core_dglobe_cpp_CDemonGlobe_renderCorona_FUN_00471400((CDemonGlobe *)p2);
    local_5c = 0;
    if (0 < *(int *)(p2 + 0x154)) {
      local_50 = 0;
      local_70 = g_CoronaDepthBuffer;
      local_74 = g_CoronaBlurOutputBuffer;
      local_6c = g_PrecomputedWorldPositions;
      do {
        if (*(int *)(p2 + 0x144) != *(int *)((int)g_CoronaLeftExtent + local_50)) {
          local_20 = *(int *)((int)g_CoronaLeftExtent + local_50);
          iVar5 = *(int *)((int)g_CoronaRightExtent + local_50);
          pcVar10 = *local_74 + local_20;
          local_2c = *local_70 + local_20;
          pCVar9 = local_6c + local_20;
          local_30 = g_ZBufferScanlineArray[local_5c << ((byte)g_CameraDownscaleIterations & 0x1f)]
                     + (local_20 << ((byte)g_CameraDownscaleIterations & 0x1f));
          iVar3 = local_20 - iVar5;
          while (SBORROW /* signed borrow */4(local_20,iVar5) != iVar3 < 0) {
            if ((((*local_30 < (uint)*local_2c) &&
                 (uVar4 = pCVar9->x - (g_CurrentGlobe->color).r,
                 (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) <
                 g_CurrentGlobe->linear_radius_scaled)) &&
                (uVar12 = pCVar9->y - (g_CurrentGlobe->color).g,
                (int)((uVar12 ^ (int)uVar12 >> 0x1f) - ((int)uVar12 >> 0x1f)) <
                g_CurrentGlobe->linear_radius_scaled)) &&
               (uVar13 = pCVar9->z - (g_CurrentGlobe->color).b,
               (int)((uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f)) <
               g_CurrentGlobe->linear_radius_scaled)) {
              iVar3 = uVar13 * uVar13 + uVar4 * uVar4 + uVar12 * uVar12;
              if (iVar3 < g_CurrentGlobe->quadratic_radius_scaled) {
                *pcVar10 = *pcVar10 +
                           (char)((ulonglong)
                                  ((longlong)
                                   (g_CurrentGlobe->quadratic_radius_scaled - iVar3 >> 0x10) *
                                  (longlong)g_CurrentGlobe->falloff_value) >> 0x10);
              }
            }
            pCVar9 = pCVar9 + 1;
            pcVar10 = pcVar10 + 1;
            local_2c = local_2c + 1;
            local_30 = local_30 + (1 << ((byte)g_CameraDownscaleIterations & 0x1f));
            local_20 = local_20 + 1;
            iVar3 = local_20 - iVar5;
          }
        }
        local_50 = local_50 + 4;
        local_70 = local_70 + 1;
        local_74 = local_74 + 1;
        local_6c = local_6c + 0x140;
        local_5c = local_5c + 1;
      } while (local_5c < *(int *)(p2 + 0x154));
    }
  }
  return;
}
