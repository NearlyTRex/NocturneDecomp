// Name: core_dcamera.cpp_renderCoronaScanlineSegment_FUN_00451340
// Address: 00451340
// Address Range: [[00451340, 004514a4]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_renderCoronaScanlineSegment_FUN_00451340(int row_index,int column_start,int column_end)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_renderCoronaScanlineSegment_FUN_00451340(int row_index,int column_start,int column_end)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  CVector3i *pCVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  
  pCVar4 = g_PrecomputedWorldPositions + row_index * 0x140 + column_start;
  pcVar5 = g_CoronaBlurOutputBuffer[row_index] + column_start;
  piVar6 = g_CoronaDepthBuffer[row_index] + column_start;
  puVar2 = g_ZBufferScanlineArray[row_index << (g_CameraDownscaleIterations.bytes[0] & 0x1f)] +
           (column_start << (g_CameraDownscaleIterations.bytes[0] & 0x1f));
  for (; column_start < column_end; column_start = column_start + 1) {
    if ((((*puVar2 < (uint)*piVar6) &&
         (uVar7 = pCVar4->x - (g_CurrentGlobe->position_scaled).x,
         (int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f)) <
         g_CurrentGlobe->linear_radius_scaled)) &&
        (uVar3 = pCVar4->y - (g_CurrentGlobe->position_scaled).y,
        (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) <
        g_CurrentGlobe->linear_radius_scaled)) &&
       (uVar8 = pCVar4->z - (g_CurrentGlobe->position_scaled).z,
       (int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f)) <
       g_CurrentGlobe->linear_radius_scaled)) {
      iVar1 = uVar8 * uVar8 + uVar3 * uVar3 + uVar7 * uVar7;
      if (iVar1 < g_CurrentGlobe->quadratic_radius_scaled) {
        *pcVar5 = *pcVar5 + (char)((ulonglong)
                                   ((longlong)
                                    (g_CurrentGlobe->quadratic_radius_scaled - iVar1 >> 0x10) *
                                   (longlong)g_CurrentGlobe->falloff_value) >> 0x10);
      }
    }
    pCVar4 = pCVar4 + 1;
    pcVar5 = pcVar5 + 1;
    piVar6 = piVar6 + 1;
    puVar2 = puVar2 + (1 << (g_CameraDownscaleIterations.bytes[0] & 0x1f));
  }
  return;
}
