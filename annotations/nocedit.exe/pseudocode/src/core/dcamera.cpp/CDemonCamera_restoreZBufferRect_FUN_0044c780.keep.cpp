// Name: core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780
// Address: 0044c780
// MANUAL RECONSTRUCTION
// Address Range: [[0044c780, 0044c855]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780(CDemonCamera *this_ptr,CRect *rect_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780(CDemonCamera *this_ptr,CRect *rect_ptr)

{
  int iVar4;

  if (((((this_ptr->viewport_rect).x_min < rect_ptr->x_max) &&
       ((this_ptr->viewport_rect).x_max < rect_ptr->y_max)) &&
      (rect_ptr->x_min < (this_ptr->viewport_rect).y_min)) &&
     (rect_ptr->y_min < (this_ptr->viewport_rect).y_max)) {
    if (g_UseExternalRenderer != 0) {
      engine_special_cpp_restoreZBuffer_FUN_005b7d20(0,0,0,g_WindowWidth + -1,g_WindowHeight + -1);
      return;
    }
    iVar4 = rect_ptr->y_min;
    if (iVar4 <= rect_ptr->y_max) {
      do {
        core_dstrender_cpp_memcpyMMX_FUN_00492001
                  (g_ZBufferScanlineArray[iVar4] + rect_ptr->x_min,
                   (uint *)this_ptr->zbuffer_aligned +
                           this_ptr->framebuffer_width * iVar4 + rect_ptr->x_min,
                   (rect_ptr->x_max - rect_ptr->x_min) * 4 + 4);
        iVar4 = iVar4 + 1;
      } while (iVar4 <= rect_ptr->y_max);
    }
  }
  return;
}
