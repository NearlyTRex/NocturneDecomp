// Name: core_dcamera.cpp_processCoronaScanline_FUN_004514b0
// Address: 004514b0
// Address Range: [[004514b0, 004517e2]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_processCoronaScanline_FUN_004514b0(int row, int x_start, int x_end, SCorona * corona_buffer)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_processCoronaScanline_FUN_004514b0
          (int row,int x_start,int x_end,SCorona *corona_buffer)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *local_30;
  int *local_2c;
  uint *local_28;
  CVector3i *local_24;
  char local_14;
  
  local_24 = g_PrecomputedWorldPositions + row * 0x140 + x_start;
  local_2c = g_CoronaDepthBuffer[row] + x_start;
  local_28 = g_ZBufferScanlineArray[row << ((byte)g_CameraDownscaleIterations & 0x1f)] +
             (x_start << ((byte)g_CameraDownscaleIterations & 0x1f));
  local_30 = corona_buffer->intensity[row] + x_start;
  if (x_start < x_end) {
    do {
      bVar1 = (byte)g_CameraDownscaleIterations;
      local_14 = '\0';
      if ((((*local_28 < (uint)*local_2c) &&
           (uVar2 = local_24->x - (g_CurrentGlobe->color).r, uVar7 = (int)uVar2 >> 0x1f,
           iVar3 = (uVar2 ^ uVar7) - uVar7, iVar3 < g_CurrentGlobe->linear_radius_scaled)) &&
          (uVar2 = local_24->y - (g_CurrentGlobe->color).g, uVar7 = (int)uVar2 >> 0x1f,
          iVar4 = (uVar2 ^ uVar7) - uVar7, iVar4 < g_CurrentGlobe->linear_radius_scaled)) &&
         ((uVar2 = local_24->z - (g_CurrentGlobe->color).b, uVar7 = (int)uVar2 >> 0x1f,
          iVar5 = (uVar2 ^ uVar7) - uVar7, iVar5 < g_CurrentGlobe->linear_radius_scaled &&
          (iVar3 = iVar3 * iVar3 + iVar4 * iVar4 + iVar5 * iVar5,
          iVar3 < g_CurrentGlobe->quadratic_radius_scaled)))) {
        if (g_CoronaVisibilityEnabled != 0) {
          if (*local_28 == 0) {
            iVar4 = 0x7fffffff;
          }
          else {
            iVar4 = (int)(0x7fffffff / (longlong)(int)*local_28);
          }
          iVar8 = g_CoronaTargetDepth - iVar4;
          iVar9 = iVar8 >> 0x1f;
          iVar11 = x_start << 8;
          iVar5 = 0x10;
          iVar10 = row << 8;
          do {
            if (g_PrecomputedDepthBuffer[(iVar10 >> 8) * 0x140 + (iVar11 >> 8)] < iVar4 + -0x80)
            break;
            iVar5 = iVar5 + -1;
            iVar4 = iVar4 + ((int)((iVar8 + iVar9 * -0x10) - (uint)(iVar9 << 3 < 0)) >> 4);
            iVar11 = iVar11 + (g_CoronaTargetX - x_start) * 0x10;
            iVar10 = iVar10 + (g_CoronaTargetY - row) * 0x10;
          } while (0 < iVar5);
          if (iVar5 != 0) goto LAB_0045162e;
        }
        local_14 = (char)(((g_CurrentGlobe->quadratic_radius_scaled - iVar3 >> 0x10) * 0x3f) /
                         (g_CurrentGlobe->quadratic_radius_scaled >> 0x10));
      }
LAB_0045162e:
      local_2c = local_2c + 1;
      local_24 = local_24 + 1;
      *local_30 = local_14;
      local_28 = local_28 + (1 << (bVar1 & 0x1f));
      x_start = x_start + 1;
      local_30 = local_30 + 1;
    } while (x_start < x_end);
  }
  iVar3 = corona_buffer->row_min_x[row];
  iVar4 = corona_buffer->row_max_x[row];
  for (pcVar6 = corona_buffer->intensity[row] + iVar3; (iVar3 < iVar4 && (*pcVar6 == '\0'));
      pcVar6 = pcVar6 + 1) {
    iVar3 = iVar3 + 1;
  }
  pcVar6 = corona_buffer->intensity[row] + iVar4;
  while ((iVar3 < iVar4 && (pcVar6 = pcVar6 + -1, *pcVar6 == '\0'))) {
    iVar4 = iVar4 + -1;
  }
  corona_buffer->row_min_x[row] = iVar3;
  corona_buffer->row_max_x[row] = iVar4;
  return;
}
