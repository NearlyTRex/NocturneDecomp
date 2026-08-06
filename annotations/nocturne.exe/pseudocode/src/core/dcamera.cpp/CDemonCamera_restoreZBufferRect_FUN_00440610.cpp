// Name: core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_00440610
// Address: 00440610
// Address Range: [[00440610, 0044070b]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_00440610(CDemonCamera *this_ptr,CRect *rect_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_00440610(CDemonCamera *this_ptr,CRect *rect_ptr)

{
  int iVar1;
  int local_14;
  
  if (((((this_ptr->viewport_rect).x_min < rect_ptr->x_max) &&
       ((this_ptr->viewport_rect).x_max < rect_ptr->y_max)) &&
      (rect_ptr->x_min < (this_ptr->viewport_rect).y_min)) &&
     (rect_ptr->y_min < (this_ptr->viewport_rect).y_max)) {
    if (_DAT_01c02594 != 0) {
      engine_special_cpp_restoreZBuffer_FUN_00532c90(0,0,0,g_WindowWidth + -1,g_WindowHeight + -1);
      return;
    }
    iVar1 = rect_ptr->y_min;
    if (iVar1 <= rect_ptr->y_max) {
      local_14 = iVar1 * 4;
      do {
        core_dstrender_cpp_memcpyMMX_FUN_00465341
                  ((void *)(rect_ptr->x_min * 4 + *(int *)(&DAT_01bd4260 + local_14)),
                   (void *)((int)this_ptr->zbuffer_aligned +
                           (((iVar1 - this_ptr->framebuffer_height) * this_ptr->screen_width +
                            rect_ptr->x_min) - this_ptr->framebuffer_width) * 4),
                   (rect_ptr->x_max - rect_ptr->x_min) * 4 + 4);
        iVar1 = iVar1 + 1;
        local_14 = local_14 + 4;
      } while (iVar1 <= rect_ptr->y_max);
    }
  }
  return;
}
