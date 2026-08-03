// Name: core_dlight.cpp_CDemonLight_blitZBuffer_FUN_0044e660
// Address: 0044e660
// Address Range: [[0044e660, 0044e71c]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_blitZBuffer_FUN_0044e660(CDemonLight *this_ptr,CRect *source_rect)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_blitZBuffer_FUN_0044e660(CDemonLight *this_ptr,CRect *source_rect)

{
  int iVar1;
  int iVar2;
  
  if (this_ptr->master_zbuffer == (void *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\core\\dlight.cpp";
    g_INT_01cc4804 = 0x147;
    core_main_c_FUN_004c8440("CDemonLight::blitZBuffer - No master Z buffer");
  }
  if (((((this_ptr->base).viewport_rect.x_min < source_rect->x_max) &&
       ((this_ptr->base).viewport_rect.x_max < source_rect->y_max)) &&
      (source_rect->x_min < (this_ptr->base).viewport_rect.y_min)) &&
     ((iVar2 = source_rect->y_min, iVar2 < (this_ptr->base).viewport_rect.y_max &&
      (iVar2 <= source_rect->y_max)))) {
    do {
      iVar1 = this_ptr->shadow_map_width * iVar2 + source_rect->x_min;
      iVar2 = iVar2 + 1;
      core_dstrender_cpp_memcpyMMX_FUN_00465341
                (this_ptr->shadow_depth_buffer + iVar1,
                 (void *)((int)this_ptr->master_zbuffer + iVar1 * 2),
                 (source_rect->x_max - source_rect->x_min) * 2 + 2);
    } while (iVar2 <= source_rect->y_max);
  }
  return;
}
