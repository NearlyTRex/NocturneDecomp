// Name: core_dcamera.cpp_renderCoronaScanlineSegment_FUN_00451340
// Address: 00451340
// Address Range: [[00451340, 004514a4]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_renderCoronaScanlineSegment_FUN_00451340(int row_index, int column_start, int column_end)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_renderCoronaScanlineSegment_FUN_00451340
          (int row_index,int column_start,int column_end)

{
  int iVar1;
  uint uVar2;
  CVector3i *pCVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int *local_18;
  uint *local_14;
  
  pCVar3 = g_PrecomputedWorldPositions + row_index * 0x140 + column_start;
  pcVar4 = g_CoronaBlurOutputBuffer[row_index] + column_start;
  local_18 = g_CoronaDepthBuffer[row_index] + column_start;
  local_14 = g_ZBufferScanlineArray[row_index << ((byte)g_CameraDownscaleIterations & 0x1f)] +
             (column_start << ((byte)g_CameraDownscaleIterations & 0x1f));
  if (column_start < column_end) {
    do {
      if (((*local_14 < (uint)*local_18) &&
          (uVar5 = pCVar3->x - (g_CurrentGlobe->color).r,
          (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) <
          g_CurrentGlobe->linear_radius_scaled)) &&
         (uVar2 = pCVar3->y - (g_CurrentGlobe->color).g,
         (int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) <
         g_CurrentGlobe->linear_radius_scaled)) {
        uVar6 = pCVar3->z - (g_CurrentGlobe->color).b;
        if ((int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)) <
            g_CurrentGlobe->linear_radius_scaled) {
          iVar1 = uVar6 * uVar6 + uVar2 * uVar2 + uVar5 * uVar5;
          if (iVar1 < g_CurrentGlobe->quadratic_radius_scaled) {
            *pcVar4 = *pcVar4 + (char)((ulonglong)
                                       ((longlong)
                                        (g_CurrentGlobe->quadratic_radius_scaled - iVar1 >> 0x10) *
                                       (longlong)g_CurrentGlobe->falloff_value) >> 0x10);
          }
        }
      }
      pCVar3 = pCVar3 + 1;
      pcVar4 = pcVar4 + 1;
      local_18 = local_18 + 1;
      column_start = column_start + 1;
      local_14 = local_14 + (1 << ((byte)g_CameraDownscaleIterations & 0x1f));
    } while (column_start < column_end);
  }
  return;
}
