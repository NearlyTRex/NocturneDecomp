// Name: core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860
// Address: 0044c860
// Address Range: [[0044c860, 0044cb7b]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860(CDemonCamera * this_ptr)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860(CDemonCamera *this_ptr)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  CRect *pCVar7;
  int iVar8;
  int iVar9;
  BADSPACEBASE *in_ESP;
  int iVar10;
  int iVar11;
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
  iVar9 = 0;
  if (0 < this_ptr->rect_array_count) {
    pCVar7 = this_ptr->rect_array;
    do {
      if (pCVar7->left < 0) {
        pCVar7->left = 0;
      }
      if (this_ptr->framebuffer_width <= pCVar7->top) {
        pCVar7->top = this_ptr->framebuffer_width + -1;
      }
      if (pCVar7->right < 0) {
        pCVar7->right = 0;
      }
      if (this_ptr->framebuffer_height <= pCVar7->bottom) {
        pCVar7->bottom = this_ptr->framebuffer_height + -1;
      }
      iVar9 = iVar9 + 1;
      pCVar7 = pCVar7 + 1;
    } while (iVar9 < this_ptr->rect_array_count);
  }
  iVar9 = 0;
  local_1c = 0;
  local_14 = this_ptr->framebuffer_height;
  if (0 < this_ptr->rect_array_count) {
    pCVar7 = this_ptr->rect_array;
    do {
      if (pCVar7->right < local_14) {
        local_14 = pCVar7->right;
      }
      if (local_1c < pCVar7->bottom) {
        local_1c = pCVar7->bottom;
      }
      iVar9 = iVar9 + 1;
      pCVar7 = pCVar7 + 1;
    } while (iVar9 < this_ptr->rect_array_count);
  }
  if (local_14 <= local_1c) {
    local_20 = local_14 << 2;
    local_24 = this_ptr->rect_array;
    do {
      iVar9 = local_20;
      local_18 = 0;
      g_ScanlineSpanCount = 0;
      if (0 < this_ptr->rect_array_count) {
        iVar10 = 0;
        pCVar7 = local_24;
        do {
          iVar11 = g_ScanlineSpanCount;
          if ((pCVar7->right <= local_14) && (local_14 <= pCVar7->bottom)) {
            bVar6 = false;
            if (0 < g_ScanlineSpanCount) {
              iVar5 = g_ScanlineSpanCount * 4;
              iVar8 = 0;
              do {
                if ((*(int *)((int)g_ScanlineSpanLeft + iVar8) <= pCVar7->top) &&
                   (pCVar7->left <= *(int *)((int)g_ScanlineSpanRight + iVar8))) {
                  if ((*(int *)((int)g_ScanlineSpanLeft + iVar8) <= pCVar7->left) &&
                     (pCVar7->top <= *(int *)((int)g_ScanlineSpanRight + iVar8))) goto LAB_0044c9e6;
                  if (pCVar7->left < *(int *)((int)g_ScanlineSpanLeft + iVar8)) {
                    bVar6 = true;
                    *(int *)((int)g_ScanlineSpanLeft + iVar8) = pCVar7->left;
                  }
                  if (*(int *)((int)g_ScanlineSpanRight + iVar8) < pCVar7->top) {
                    *(int *)((int)g_ScanlineSpanRight + iVar8) = pCVar7->top;
                    goto LAB_0044c9e6;
                  }
                  if (bVar6) break;
                }
                iVar8 = iVar8 + 4;
              } while (SBORROW /* signed borrow */4(iVar8,iVar5) != iVar8 + iVar11 * -4 < 0);
            }
            if (!bVar6) {
              *(int *)((int)g_ScanlineSpanLeft + iVar10) = pCVar7->left;
              g_ScanlineSpanCount = g_ScanlineSpanCount + 1;
              *(int *)((int)g_ScanlineSpanRight + iVar10) = pCVar7->top;
              iVar10 = iVar10 + 4;
            }
          }
LAB_0044c9e6:
          pCVar7 = pCVar7 + 1;
          local_18 = local_18 + 1;
        } while (local_18 < this_ptr->rect_array_count);
      }
      iVar10 = 0;
      if (0 < g_ScanlineSpanCount) {
        iVar11 = 0;
        do {
          piVar1 = (int *)((int)g_ScanlineSpanLeft + iVar11);
          piVar2 = (int *)((int)g_ScanlineSpanLeft + iVar11);
          piVar3 = (int *)((int)g_ScanlineSpanLeft + iVar11);
          piVar4 = (int *)((int)g_ScanlineSpanRight + iVar11);
          iVar11 = iVar11 + 4;
          iVar10 = iVar10 + 1;
          core_dstrender_cpp_memcpyMMX_FUN_00492001
                    ((void *)(*(int *)((int)g_ZBufferScanlineArray + iVar9) + *piVar1 * 4),
                     (void *)((local_14 * this_ptr->framebuffer_width + *piVar2) * 4 +
                             (int)this_ptr->zbuffer_aligned),(*piVar4 - *piVar3) * 4 + 4);
        } while (iVar10 < g_ScanlineSpanCount);
      }
      local_20 = local_20 + 4;
      local_14 = local_14 + 1;
    } while (local_14 <= local_1c);
  }
  return;
}
