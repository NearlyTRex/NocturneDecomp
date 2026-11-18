// Name: core_dcamera.cpp_processCoronaScanline_FUN_0044e250
// Address: 0044e250
// Address Range: [[0044e250, 0044e582]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_processCoronaScanline_FUN_0044e250(int row,int x_start,int x_end,SCoronaLightEntry *corona)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_processCoronaScanline_FUN_0044e250(int row,int x_start,int x_end,SCoronaLightEntry *corona)

{
  byte uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CVector3i *pCVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  int *piVar14;
  char cStack_14;
  
  pCVar6 = g_PrecomputedWorldPositions + row * 0x140 + x_start;
  piVar14 = g_CoronaDepthBuffer[row] + x_start;
  puVar13 = g_ZBufferScanlineArray[row << (g_CameraDownscaleIterations.bytes[0] & 0x1f)] +
            (x_start << (g_CameraDownscaleIterations.bytes[0] & 0x1f));
  pcVar7 = corona->lightmap[row] + x_start;
  uVar1 = g_CameraDownscaleIterations.bytes[0];
  do {
    g_CameraDownscaleIterations.bytes[0] = uVar1;
    if (x_end <= x_start) {
      iVar3 = corona->left_extents[row];
      iVar4 = corona->right_extents[row];
      for (pcVar7 = corona->lightmap[row] + iVar3; (iVar3 < iVar4 && (*pcVar7 == '\0'));
          pcVar7 = pcVar7 + 1) {
        iVar3 = iVar3 + 1;
      }
      pcVar7 = corona->lightmap[row] + iVar4;
      while ((iVar3 < iVar4 && (pcVar7 = pcVar7 + -1, *pcVar7 == '\0'))) {
        iVar4 = iVar4 + -1;
      }
      corona->left_extents[row] = iVar3;
      corona->right_extents[row] = iVar4;
      return;
    }
    cStack_14 = '\0';
    if ((((*puVar13 < (uint)*piVar14) &&
         (uVar2 = pCVar6->x - (g_CurrentGlobe->position_scaled).x, uVar8 = (int)uVar2 >> 0x1f,
         iVar3 = (uVar2 ^ uVar8) - uVar8, iVar3 < g_CurrentGlobe->linear_radius_scaled)) &&
        (uVar2 = pCVar6->y - (g_CurrentGlobe->position_scaled).y, uVar8 = (int)uVar2 >> 0x1f,
        iVar4 = (uVar2 ^ uVar8) - uVar8, iVar4 < g_CurrentGlobe->linear_radius_scaled)) &&
       ((uVar2 = pCVar6->z - (g_CurrentGlobe->position_scaled).z, uVar8 = (int)uVar2 >> 0x1f,
        iVar5 = (uVar2 ^ uVar8) - uVar8, iVar5 < g_CurrentGlobe->linear_radius_scaled &&
        (iVar3 = iVar3 * iVar3 + iVar4 * iVar4 + iVar5 * iVar5,
        iVar3 < g_CurrentGlobe->quadratic_radius_scaled)))) {
      if (g_CoronaVisibilityEnabled != 0) {
        if (*puVar13 == 0) {
          iVar4 = 0x7fffffff;
        }
        else {
          iVar4 = (int)(0x7fffffff / (longlong)(int)*puVar13);
        }
        iVar9 = g_CoronaTargetDepth - iVar4;
        iVar10 = iVar9 >> 0x1f;
        iVar12 = x_start << 8;
        iVar5 = 0x10;
        iVar11 = row << 8;
        do {
          if (g_PrecomputedDepthBuffer[(iVar11 >> 8) * 0x140 + (iVar12 >> 8)] < iVar4 + -0x80)
          break;
          iVar5 = iVar5 + -1;
          iVar4 = iVar4 + ((int)((iVar9 + iVar10 * -0x10) - (uint)(iVar10 << 3 < 0)) >> 4);
          iVar12 = iVar12 + (g_CoronaTargetX - x_start) * 0x10;
          iVar11 = iVar11 + (g_CoronaTargetY - row) * 0x10;
        } while (0 < iVar5);
        if (iVar5 != 0) goto LAB_0044e3ce;
      }
      cStack_14 = (char)(((g_CurrentGlobe->quadratic_radius_scaled - iVar3 >> 0x10) * 0x3f) /
                        (g_CurrentGlobe->quadratic_radius_scaled >> 0x10));
    }
LAB_0044e3ce:
    piVar14 = piVar14 + 1;
    pCVar6 = pCVar6 + 1;
    *pcVar7 = cStack_14;
    puVar13 = puVar13 + (1 << (uVar1 & 0x1f));
    x_start = x_start + 1;
    pcVar7 = pcVar7 + 1;
    uVar1 = g_CameraDownscaleIterations.bytes[0];
  } while( true );
}
