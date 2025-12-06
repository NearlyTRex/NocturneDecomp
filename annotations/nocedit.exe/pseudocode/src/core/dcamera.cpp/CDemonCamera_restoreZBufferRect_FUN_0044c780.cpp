// Name: core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780
// Address: 0044c780
// Address Range: [[0044c780, 0044c855]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780(CDemonCamera * this_ptr, CRect * rect_ptr)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780
          (CDemonCamera *this_ptr,CRect *rect_ptr)

{
  int *piVar1;
  int iVar2;
  int iVar3;
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
      iVar3 = iVar4 * 4;
      do {
        piVar1 = (int *)((int)g_ZBufferScanlineArray + iVar3);
        iVar2 = this_ptr->framebuffer_width * iVar4;
        iVar3 = iVar3 + 4;
        iVar4 = iVar4 + 1;
        core_dstrender_cpp_memcpyMMX_FUN_00492001
                  ((void *)(rect_ptr->left * 4 + *piVar1),
                   (void *)((int)this_ptr->zbuffer_aligned + (iVar2 + rect_ptr->left) * 4),
                   (rect_ptr->top - rect_ptr->left) * 4 + 4);
      } while (iVar4 <= rect_ptr->bottom);
    }
  }
  return;
}
