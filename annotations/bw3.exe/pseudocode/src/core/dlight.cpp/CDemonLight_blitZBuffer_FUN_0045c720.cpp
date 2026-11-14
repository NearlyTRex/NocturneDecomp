// Name: core_dlight.cpp_CDemonLight_blitZBuffer_FUN_0045c720
// Address: 0045c720
// Address Range: [[0045c720, 0045c7dc]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_blitZBuffer_FUN_0045c720(CDemonLight *this_ptr,CRect *source_rect)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_blitZBuffer_FUN_0045c720(CDemonLight *this_ptr,CRect *source_rect)

{
  int iVar1;
  int iVar2;
  
  if (this_ptr->master_zbuffer == (void *)0x0) {
    _DAT_01d71de0 = "..\\core\\dlight.cpp";
    _DAT_01d71de4 = 0x147;
    core_main_c_FUN_004e4330("CDemonLight::blitZBuffer - No master Z buffer");
  }
  if (((((this_ptr->base).viewport_rect.x_min < source_rect->x_max) &&
       ((this_ptr->base).viewport_rect.x_max < source_rect->y_max)) &&
      (source_rect->x_min < (this_ptr->base).viewport_rect.y_min)) &&
     ((iVar2 = source_rect->y_min, iVar2 < (this_ptr->base).viewport_rect.y_max &&
      (iVar2 <= source_rect->y_max)))) {
    do {
      iVar1 = this_ptr->shadow_map_width * iVar2 + source_rect->x_min;
      iVar2 = iVar2 + 1;
      core_dstrendr_cpp_memcpyMMX_FUN_00471271
                (this_ptr->shadow_depth_buffer + iVar1,
                 (void *)((int)this_ptr->master_zbuffer + iVar1 * 2),
                 (source_rect->x_max - source_rect->x_min) * 2 + 2);
    } while (iVar2 <= source_rect->y_max);
  }
  return;
}
