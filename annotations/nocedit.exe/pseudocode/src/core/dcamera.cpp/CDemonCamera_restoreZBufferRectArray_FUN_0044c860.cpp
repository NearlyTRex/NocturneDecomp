// Name: core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860
// Address: 0044c860
// Address Range: [[0044c860, 0044cb7b]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860(CDemonCamera *this_ptr)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  CRect *pCVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  CRect local_34;
  CRect *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (g_UseExternalRenderer != 0) {
    wincore_windll_cpp_restoreZBuffer_FUN_005b7d20(0,0,0,g_WindowWidth + -1,g_WindowHeight + -1);
    return;
  }
  if (0x100 < this_ptr->rect_array_count) {
    local_34.left = g_UseExternalRenderer;
    local_34.right = g_UseExternalRenderer;
    local_34.top = this_ptr->framebuffer_width + -1;
    local_34.bottom = this_ptr->framebuffer_height + -1;
    core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780(this_ptr,&local_34);
    return;
  }
  iVar8 = 0;
  if (0 < this_ptr->rect_array_count) {
    pCVar6 = this_ptr->rect_array;
    do {
      if (pCVar6->left < 0) {
        pCVar6->left = 0;
      }
      if (this_ptr->framebuffer_width <= pCVar6->top) {
        pCVar6->top = this_ptr->framebuffer_width + -1;
      }
      if (pCVar6->right < 0) {
        pCVar6->right = 0;
      }
      if (this_ptr->framebuffer_height <= pCVar6->bottom) {
        pCVar6->bottom = this_ptr->framebuffer_height + -1;
      }
      iVar8 = iVar8 + 1;
      pCVar6 = pCVar6 + 1;
    } while (iVar8 < this_ptr->rect_array_count);
  }
  iVar8 = 0;
  local_1c = 0;
  local_14 = this_ptr->framebuffer_height;
  if (0 < this_ptr->rect_array_count) {
    pCVar6 = this_ptr->rect_array;
    do {
      if (pCVar6->right < local_14) {
        local_14 = pCVar6->right;
      }
      if (local_1c < pCVar6->bottom) {
        local_1c = pCVar6->bottom;
      }
      iVar8 = iVar8 + 1;
      pCVar6 = pCVar6 + 1;
    } while (iVar8 < this_ptr->rect_array_count);
  }
  if (local_14 <= local_1c) {
    local_20 = local_14 << 2;
    local_24 = this_ptr->rect_array;
    do {
      iVar8 = local_20;
      local_18 = 0;
      g_ScanlineSpanCount = 0;
      if (0 < this_ptr->rect_array_count) {
        iVar9 = 0;
        pCVar6 = local_24;
        do {
          if ((pCVar6->right <= local_14) && (local_14 <= pCVar6->bottom)) {
            bVar5 = false;
            if (0 < g_ScanlineSpanCount) {
              iVar10 = g_ScanlineSpanCount * 4;
              iVar7 = 0;
              do {
                if ((*(int *)((int)g_ScanlineSpanLeft + iVar7) <= pCVar6->top) &&
                   (pCVar6->left <= *(int *)((int)g_ScanlineSpanRight + iVar7))) {
                  if ((*(int *)((int)g_ScanlineSpanLeft + iVar7) <= pCVar6->left) &&
                     (pCVar6->top <= *(int *)((int)g_ScanlineSpanRight + iVar7))) goto LAB_0044c9e6;
                  if (pCVar6->left < *(int *)((int)g_ScanlineSpanLeft + iVar7)) {
                    bVar5 = true;
                    *(int *)((int)g_ScanlineSpanLeft + iVar7) = pCVar6->left;
                  }
                  if (*(int *)((int)g_ScanlineSpanRight + iVar7) < pCVar6->top) {
                    *(int *)((int)g_ScanlineSpanRight + iVar7) = pCVar6->top;
                    goto LAB_0044c9e6;
                  }
                  if (bVar5) break;
                }
                iVar7 = iVar7 + 4;
              } while (iVar7 < iVar10);
            }
            if (!bVar5) {
              *(int *)((int)g_ScanlineSpanLeft + iVar9) = pCVar6->left;
              g_ScanlineSpanCount = g_ScanlineSpanCount + 1;
              *(int *)((int)g_ScanlineSpanRight + iVar9) = pCVar6->top;
              iVar9 = iVar9 + 4;
            }
          }
LAB_0044c9e6:
          pCVar6 = pCVar6 + 1;
          local_18 = local_18 + 1;
        } while (local_18 < this_ptr->rect_array_count);
      }
      iVar9 = 0;
      if (0 < g_ScanlineSpanCount) {
        iVar10 = 0;
        do {
          piVar1 = (int *)((int)g_ScanlineSpanLeft + iVar10);
          piVar2 = (int *)((int)g_ScanlineSpanLeft + iVar10);
          piVar3 = (int *)((int)g_ScanlineSpanLeft + iVar10);
          piVar4 = (int *)((int)g_ScanlineSpanRight + iVar10);
          iVar10 = iVar10 + 4;
          iVar9 = iVar9 + 1;
          core_dstrender_cpp_memcpyMMX_FUN_00492001
                    ((void *)(*(int *)((int)g_ZBufferScanlineArray + iVar8) + *piVar1 * 4),
                     (void *)((local_14 * this_ptr->framebuffer_width + *piVar2) * 4 +
                             (int)this_ptr->zbuffer_aligned),(*piVar4 - *piVar3) * 4 + 4);
        } while (iVar9 < g_ScanlineSpanCount);
      }
      local_20 = local_20 + 4;
      local_14 = local_14 + 1;
    } while (local_14 <= local_1c);
  }
  return;
}
