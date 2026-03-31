// Name: core_dcamera.cpp_processCoronaScanline_FUN_004514b0
// Address: 004514b0
// Address Range: [[004514b0, 004517e2]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_processCoronaScanline_FUN_004514b0(int row,int x_start,int x_end,SCorona *corona)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_processCoronaScanline_FUN_004514b0(int row,int x_start,int x_end,SCorona *corona)

{
  uint uVar2;
  int iVar3;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CVector3i *pCVar6;
  int iVar7;
  char *pcVar7;
  char *pcVar8;
  uint uVar8;
  uint uVar9;
  int iVar13;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  int *piVar14;
  char local_14;
  byte uVar1;
  
  pCVar6 = g_PrecomputedWorldPositions + row * 0x140 + x_start;
  piVar14 = g_CoronaDepthBuffer[row] + x_start;
  puVar13 = g_ZBufferScanlineArray[row << (g_CameraDownscaleIterations.bytes[0] & 0x1f)] +
            (x_start << (g_CameraDownscaleIterations.bytes[0] & 0x1f));
  pcVar8 = corona->intensity[row] + x_start;
  uVar1 = g_CameraDownscaleIterations.bytes[0];
  do {
    g_CameraDownscaleIterations.bytes[0] = uVar1;
    if (x_end <= x_start) {
      iVar7 = corona->row_min_x[row];
      iVar13 = corona->row_max_x[row];
      for (pcVar8 = corona->intensity[row] + iVar7; (iVar7 < iVar13 && (*pcVar8 == '\0'));
          pcVar8 = pcVar8 + 1) {
        iVar7 = iVar7 + 1;
      }
      pcVar7 = corona->intensity[row] + iVar13;
      while ((iVar7 < iVar13 && (pcVar7 = pcVar7 + -1, *pcVar7 == '\0'))) {
        iVar13 = iVar13 + -1;
      }
      corona->row_min_x[row] = iVar7;
      corona->row_max_x[row] = iVar13;
      return;
    }
    local_14 = '\0';
    if ((((*puVar13 < (uint)*piVar14) &&
         (uVar2 = pCVar6->x - (g_CurrentGlobe->position_scaled).x, uVar8 = (int)uVar2 >> 0x1f,
         iVar3 = (uVar2 ^ uVar8) - uVar8, iVar3 < g_CurrentGlobe->linear_radius_scaled)) &&
        (uVar3 = pCVar6->y - (g_CurrentGlobe->position_scaled).y, uVar9 = (int)uVar3 >> 0x1f,
        iVar4 = (uVar3 ^ uVar9) - uVar9, iVar4 < g_CurrentGlobe->linear_radius_scaled)) &&
       ((uVar3 = pCVar6->z - (g_CurrentGlobe->position_scaled).z, uVar9 = (int)uVar3 >> 0x1f,
        iVar5 = (uVar3 ^ uVar9) - uVar9, iVar5 < g_CurrentGlobe->linear_radius_scaled &&
        (iVar7 = iVar3 * iVar3 + iVar4 * iVar4 + iVar5 * iVar5,
        iVar7 < g_CurrentGlobe->quadratic_radius_scaled)))) {
      if (g_CoronaVisibilityEnabled != 0) {
        if (*puVar13 == 0) {
          iVar13 = 0x7fffffff;
        }
        else {
          iVar13 = (int)(0x7fffffff / (longlong)(int)*puVar13);
        }
        iVar9 = g_CoronaTargetDepth - iVar13;
        iVar10 = iVar9 >> 0x1f;
        iVar12 = x_start << 8;
        iVar6 = 0x10;
        iVar11 = row << 8;
        do {
          if (g_PrecomputedDepthBuffer[(iVar11 >> 8) * 0x140 + (iVar12 >> 8)] < iVar13 + -0x80)
          break;
          iVar6 = iVar6 + -1;
          iVar13 = iVar13 + ((int)((iVar9 + iVar10 * -0x10) - (uint)(iVar10 << 3 < 0)) >> 4);
          iVar12 = iVar12 + (g_CoronaTargetX - x_start) * 0x10;
          iVar11 = iVar11 + (g_CoronaTargetY - row) * 0x10;
        } while (0 < iVar6);
        if (iVar6 != 0) goto LAB_0045162e;
      }
      local_14 = (char)(((g_CurrentGlobe->quadratic_radius_scaled - iVar7 >> 0x10) * 0x3f) /
                       (g_CurrentGlobe->quadratic_radius_scaled >> 0x10));
    }
LAB_0045162e:
    piVar14 = piVar14 + 1;
    pCVar6 = pCVar6 + 1;
    *pcVar8 = local_14;
    puVar13 = puVar13 + (1 << (uVar1 & 0x1f));
    x_start = x_start + 1;
    pcVar8 = pcVar8 + 1;
    uVar1 = g_CameraDownscaleIterations.bytes[0];
  } while( true );
}
