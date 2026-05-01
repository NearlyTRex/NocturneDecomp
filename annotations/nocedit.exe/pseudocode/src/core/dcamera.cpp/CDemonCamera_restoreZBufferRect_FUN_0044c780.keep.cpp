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

  if (((((this_ptr->viewport_rect).left < rect_ptr->top) &&
       ((this_ptr->viewport_rect).top < rect_ptr->bottom)) &&
      (rect_ptr->left < (this_ptr->viewport_rect).right)) &&
     (rect_ptr->right < (this_ptr->viewport_rect).bottom)) {
    if (g_UseExternalRenderer != 0) {
      wincore_windll_cpp_restoreZBuffer_FUN_005b7d20(0,0,0,g_WindowWidth + -1,g_WindowHeight + -1);
      return;
    }
    iVar4 = rect_ptr->right;
    if (iVar4 <= rect_ptr->bottom) {
      do {
        core_dstrender_cpp_memcpyMMX_FUN_00492001
                  (g_ZBufferScanlineArray[iVar4] + rect_ptr->left,
                   (uint *)this_ptr->zbuffer_aligned +
                           this_ptr->framebuffer_width * iVar4 + rect_ptr->left,
                   (rect_ptr->top - rect_ptr->left) * 4 + 4);
        iVar4 = iVar4 + 1;
      } while (iVar4 <= rect_ptr->bottom);
    }
  }
  return;
}
