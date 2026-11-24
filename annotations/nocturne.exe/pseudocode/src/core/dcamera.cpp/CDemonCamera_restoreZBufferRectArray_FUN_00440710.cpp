// Name: core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_00440710
// Address: 00440710
// Address Range: [[00440710, 00440a1c]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_00440710(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_00440710(CDemonCamera *this_ptr)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  CRect *pCVar6;
  int iVar7;
  int iVar8;
  CRect local_3c;
  CRect *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (g_UseExternalRenderer != 0) {
    engine_special_cpp_restoreZBuffer_FUN_00532c90(0,0,0,g_WindowWidth + -1,g_WindowHeight + -1);
    return;
  }
  if (0x100 < this_ptr->rect_array_count) {
    local_3c.x_min = g_UseExternalRenderer;
    local_3c.y_min = g_UseExternalRenderer;
    local_3c.x_max = this_ptr->framebuffer_width + -1;
    local_3c.y_max = this_ptr->framebuffer_height + -1;
    core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_00440610(this_ptr,&local_3c);
    return;
  }
  iVar8 = 0;
  if (0 < this_ptr->rect_array_count) {
    pCVar6 = this_ptr->rect_array;
    do {
      if (pCVar6->x_min < this_ptr->viewport_x) {
        pCVar6->x_min = this_ptr->viewport_x;
      }
      iVar7 = this_ptr->viewport_x + this_ptr->framebuffer_width;
      if (iVar7 <= pCVar6->x_max) {
        pCVar6->x_max = iVar7 + -1;
      }
      if (pCVar6->y_min < this_ptr->viewport_y) {
        pCVar6->y_min = this_ptr->viewport_y;
      }
      iVar7 = this_ptr->viewport_y + this_ptr->framebuffer_height;
      if (iVar7 <= pCVar6->y_max) {
        pCVar6->y_max = iVar7 + -1;
      }
      iVar8 = iVar8 + 1;
      pCVar6 = pCVar6 + 1;
    } while (iVar8 < this_ptr->rect_array_count);
  }
  local_18 = this_ptr->framebuffer_height;
  iVar8 = 0;
  local_24 = 0;
  if (0 < this_ptr->rect_array_count) {
    pCVar6 = this_ptr->rect_array;
    do {
      if (pCVar6->y_min < local_18) {
        local_18 = pCVar6->y_min;
      }
      if (local_24 < pCVar6->y_max) {
        local_24 = pCVar6->y_max;
      }
      iVar8 = iVar8 + 1;
      pCVar6 = pCVar6 + 1;
    } while (iVar8 < this_ptr->rect_array_count);
  }
  if (local_18 <= local_24) {
    local_28 = local_18 << 2;
    local_2c = this_ptr->rect_array;
    do {
      local_1c = 0;
      g_ScanlineSpanCount = 0;
      if (0 < this_ptr->rect_array_count) {
        local_14 = 0;
        pCVar6 = local_2c;
        do {
          if ((pCVar6->y_min <= local_18) && (local_18 <= pCVar6->y_max)) {
            bVar5 = false;
            if (0 < g_ScanlineSpanCount) {
              iVar8 = g_ScanlineSpanCount * 4;
              iVar7 = 0;
              do {
                if ((*(int *)((int)g_INT_ARRAY_0140e7a8 + iVar7) <= pCVar6->x_max) &&
                   (pCVar6->x_min <= *(int *)((int)g_ScanlineSpanRight + iVar7))) {
                  if ((*(int *)((int)g_INT_ARRAY_0140e7a8 + iVar7) <= pCVar6->x_min) &&
                     (pCVar6->x_max <= *(int *)((int)g_ScanlineSpanRight + iVar7)))
                  goto LAB_0044089a;
                  if (pCVar6->x_min < *(int *)((int)g_INT_ARRAY_0140e7a8 + iVar7)) {
                    bVar5 = true;
                    *(int *)((int)g_INT_ARRAY_0140e7a8 + iVar7) = pCVar6->x_min;
                  }
                  if (*(int *)((int)g_ScanlineSpanRight + iVar7) < pCVar6->x_max) {
                    *(int *)((int)g_ScanlineSpanRight + iVar7) = pCVar6->x_max;
                    goto LAB_0044089a;
                  }
                  if (bVar5) break;
                }
                iVar7 = iVar7 + 4;
              } while (iVar7 < iVar8);
            }
            if (!bVar5) {
              *(int *)((int)g_INT_ARRAY_0140e7a8 + local_14) = pCVar6->x_min;
              *(int *)((int)g_ScanlineSpanRight + local_14) = pCVar6->x_max;
              g_ScanlineSpanCount = g_ScanlineSpanCount + 1;
              local_14 = local_14 + 4;
            }
          }
LAB_0044089a:
          pCVar6 = pCVar6 + 1;
          local_1c = local_1c + 1;
        } while (local_1c < this_ptr->rect_array_count);
      }
      iVar8 = 0;
      if (0 < g_ScanlineSpanCount) {
        iVar7 = 0;
        local_20 = local_28;
        do {
          piVar1 = (int *)((int)g_INT_ARRAY_0140e7a8 + iVar7);
          piVar2 = (int *)((int)g_INT_ARRAY_0140e7a8 + iVar7);
          piVar3 = (int *)((int)g_INT_ARRAY_0140e7a8 + iVar7);
          piVar4 = (int *)((int)g_ScanlineSpanRight + iVar7);
          iVar7 = iVar7 + 4;
          iVar8 = iVar8 + 1;
          core_dstrendr_cpp_memcpyMMX_FUN_00465341
                    ((void *)(*(int *)((int)g_ZBufferScanlineArray + local_20) + *piVar1 * 4),
                     (void *)((int)this_ptr->zbuffer_aligned +
                             (((local_18 - this_ptr->viewport_y) * this_ptr->framebuffer_width +
                              *piVar2) - this_ptr->viewport_x) * 4),(*piVar4 - *piVar3) * 4 + 4);
        } while (iVar8 < g_ScanlineSpanCount);
      }
      local_28 = local_28 + 4;
      local_18 = local_18 + 1;
    } while (local_18 <= local_24);
  }
  return;
}
