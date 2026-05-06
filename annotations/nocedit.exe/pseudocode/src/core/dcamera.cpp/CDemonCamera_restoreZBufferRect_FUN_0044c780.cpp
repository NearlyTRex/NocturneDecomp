// Name: core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780
// Address: 0044c780
// Address Range: [[0044c780, 0044c855]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780(CDemonCamera *this_ptr,CRect *rect_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780(CDemonCamera *this_ptr,CRect *rect_ptr)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (((((this_ptr->viewport_rect).x_min < rect_ptr->x_max) &&
       ((this_ptr->viewport_rect).x_max < rect_ptr->y_max)) &&
      (rect_ptr->x_min < (this_ptr->viewport_rect).y_min)) &&
     (rect_ptr->y_min < (this_ptr->viewport_rect).y_max)) {
    if (g_UseExternalRenderer != 0) {
      wincore_windll_cpp_restoreZBuffer_FUN_005b7d20(0,0,0,g_WindowWidth + -1,g_WindowHeight + -1);
      return;
    }
    iVar4 = rect_ptr->y_min;
    if (iVar4 <= rect_ptr->y_max) {
      iVar3 = iVar4 * 4;
      do {
        piVar1 = (int *)((int)g_ZBufferScanlineArray + iVar3);
        iVar2 = this_ptr->framebuffer_width * iVar4;
        iVar3 = iVar3 + 4;
        iVar4 = iVar4 + 1;
        core_dstrender_cpp_memcpyMMX_FUN_00492001
                  ((void *)(rect_ptr->x_min * 4 + *piVar1),
                   (void *)((int)this_ptr->zbuffer_aligned + (iVar2 + rect_ptr->x_min) * 4),
                   (rect_ptr->x_max - rect_ptr->x_min) * 4 + 4);
      } while (iVar4 <= rect_ptr->y_max);
    }
  }
  return;
}
