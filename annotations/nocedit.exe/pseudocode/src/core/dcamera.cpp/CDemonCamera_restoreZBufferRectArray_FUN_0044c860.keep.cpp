// Name: core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860
// Address: 0044c860
// MANUAL RECONSTRUCTION
// Address Range: [[0044c860, 0044cb7b]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860(CDemonCamera *this_ptr)

{
  CRect *pCVar6;
  int iVar7;
  int iVar1;
  CRect *pCVar2;
  int iVar8;
  CRect local_34;
  int local_1c;
  int local_18;
  int local_14;
  bool bVar5;
  
  if (g_UseExternalRenderer != 0) {
    engine_special_cpp_restoreZBuffer_FUN_005b7d20(0,0,0,g_WindowWidth + -1,g_WindowHeight + -1);
    return;
  }
  if (0x100 < this_ptr->rect_array_count) {
    local_34.x_min = g_UseExternalRenderer;
    local_34.y_min = g_UseExternalRenderer;
    local_34.x_max = this_ptr->framebuffer_width + -1;
    local_34.y_max = this_ptr->framebuffer_height + -1;
    core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780(this_ptr,&local_34);
    return;
  }
  iVar8 = 0;
  if (0 < this_ptr->rect_array_count) {
    pCVar2 = this_ptr->rect_array;
    do {
      if (pCVar2->x_min < 0) {
        pCVar2->x_min = 0;
      }
      if (this_ptr->framebuffer_width <= pCVar2->x_max) {
        pCVar2->x_max = this_ptr->framebuffer_width + -1;
      }
      if (pCVar2->y_min < 0) {
        pCVar2->y_min = 0;
      }
      if (this_ptr->framebuffer_height <= pCVar2->y_max) {
        pCVar2->y_max = this_ptr->framebuffer_height + -1;
      }
      iVar8 = iVar8 + 1;
      pCVar2 = pCVar2 + 1;
    } while (iVar8 < this_ptr->rect_array_count);
  }
  iVar1 = 0;
  local_1c = 0;
  local_14 = this_ptr->framebuffer_height;
  if (0 < this_ptr->rect_array_count) {
    pCVar6 = this_ptr->rect_array;
    do {
      if (pCVar6->y_min < local_14) {
        local_14 = pCVar6->y_min;
      }
      if (local_1c < pCVar6->y_max) {
        local_1c = pCVar6->y_max;
      }
      iVar1 = iVar1 + 1;
      pCVar6 = pCVar6 + 1;
    } while (iVar1 < this_ptr->rect_array_count);
  }
  if (local_14 <= local_1c) {
    do {
      local_18 = 0;
      g_ScanlineSpanCount = 0;
      if (0 < this_ptr->rect_array_count) {
        pCVar2 = this_ptr->rect_array;
        do {
          if ((pCVar2->y_min <= local_14) && (local_14 <= pCVar2->y_max)) {
            bVar5 = false;
            if (0 < g_ScanlineSpanCount) {
              iVar7 = 0;
              do {
                if ((g_ScanlineSpanLeft[iVar7] <= pCVar2->x_max) &&
                   (pCVar2->x_min <= g_ScanlineSpanRight[iVar7])) {
                  if ((g_ScanlineSpanLeft[iVar7] <= pCVar2->x_min) &&
                     (pCVar2->x_max <= g_ScanlineSpanRight[iVar7])) goto LAB_0044c9e6;
                  if (pCVar2->x_min < g_ScanlineSpanLeft[iVar7]) {
                    bVar5 = true;
                    g_ScanlineSpanLeft[iVar7] = pCVar2->x_min;
                  }
                  if (g_ScanlineSpanRight[iVar7] < pCVar2->x_max) {
                    g_ScanlineSpanRight[iVar7] = pCVar2->x_max;
                    goto LAB_0044c9e6;
                  }
                  if (bVar5) break;
                }
                iVar7 = iVar7 + 1;
              } while (iVar7 < g_ScanlineSpanCount);
            }
            if (!bVar5) {
              g_ScanlineSpanLeft[g_ScanlineSpanCount] = pCVar2->x_min;
              g_ScanlineSpanRight[g_ScanlineSpanCount] = pCVar2->x_max;
              g_ScanlineSpanCount = g_ScanlineSpanCount + 1;
            }
          }
LAB_0044c9e6:
          pCVar2 = pCVar2 + 1;
          local_18 = local_18 + 1;
        } while (local_18 < this_ptr->rect_array_count);
      }
      iVar1 = 0;
      if (0 < g_ScanlineSpanCount) {
        do {
          core_dstrender_cpp_memcpyMMX_FUN_00492001
                    ((char *)g_ZBufferScanlineArray[local_14] + g_ScanlineSpanLeft[iVar1] * 4,
                     (uint *)this_ptr->zbuffer_aligned +
                             local_14 * this_ptr->framebuffer_width + g_ScanlineSpanLeft[iVar1],
                     (g_ScanlineSpanRight[iVar1] - g_ScanlineSpanLeft[iVar1]) * 4 + 4);
          iVar1 = iVar1 + 1;
        } while (iVar1 < g_ScanlineSpanCount);
      }
      local_14 = local_14 + 1;
    } while (local_14 <= local_1c);
  }
  return;
}
