// Name: core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_0043bb50
// Address: 0043bb50
// Address Range: [[0043bb50, 0043bc25]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_0043bb50(CDemonCamera *this_ptr,CRect *rect_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_0043bb50(CDemonCamera *this_ptr,CRect *rect_ptr)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (((((this_ptr->viewport_rect).x_min < rect_ptr->x_max) &&
       ((this_ptr->viewport_rect).x_max < rect_ptr->y_max)) &&
      (rect_ptr->x_min < (this_ptr->viewport_rect).y_min)) &&
     (rect_ptr->y_min < (this_ptr->viewport_rect).y_max)) {
    if (_DAT_01c37788 != 0) {
      engine_special_cpp_restoreZBuffer_FUN_00560050(0,0,0,DAT_006141b8 + -1,DAT_006141bc + -1);
      return;
    }
    iVar4 = rect_ptr->y_min;
    if (iVar4 <= rect_ptr->y_max) {
      iVar3 = iVar4 * 4;
      do {
        piVar1 = (int *)(&DAT_01c2b64c + iVar3);
        iVar2 = this_ptr->framebuffer_width * iVar4;
        iVar3 = iVar3 + 4;
        iVar4 = iVar4 + 1;
        core_dstrendr_cpp_memcpyMMX_FUN_00470201
                  ((void *)(rect_ptr->x_min * 4 + *piVar1),
                   (void *)((int)this_ptr->zbuffer_aligned + (iVar2 + rect_ptr->x_min) * 4),
                   (rect_ptr->x_max - rect_ptr->x_min) * 4 + 4);
      } while (iVar4 <= rect_ptr->y_max);
    }
  }
  return;
}
