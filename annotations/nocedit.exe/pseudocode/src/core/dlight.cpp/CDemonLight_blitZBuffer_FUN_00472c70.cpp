// Name: core_dlight.cpp_CDemonLight_blitZBuffer_FUN_00472c70
// Address: 00472c70
// Address Range: [[00472c70, 00472d2c]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_blitZBuffer_FUN_00472c70(CDemonLight *this_ptr,CRect *source_rect)

#include "nocturne.h"

void __cdecl
core_dlight_cpp_CDemonLight_blitZBuffer_FUN_00472c70(CDemonLight *this_ptr,CRect *source_rect)

{
  int iVar1;
  int iVar2;
  
  if (this_ptr->restore_memory_size == 0) {
    g_CurrentFilename = "..\\core\\dlight.cpp";
    g_CurrentLineNumber = 0x147;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonLight::blitZBuffer - No master Z buffer");
  }
  if (((((this_ptr->base).viewport_rect.left < source_rect->top) &&
       ((this_ptr->base).viewport_rect.top < source_rect->bottom)) &&
      (source_rect->left < (this_ptr->base).viewport_rect.right)) &&
     ((iVar2 = source_rect->right, iVar2 < (this_ptr->base).viewport_rect.bottom &&
      (iVar2 <= source_rect->bottom)))) {
    do {
      iVar1 = this_ptr->shadow_map_width * iVar2 + source_rect->left;
      iVar2 = iVar2 + 1;
      core_dstrender_cpp_memcpyMMX_FUN_00492001
                (this_ptr->shadow_depth_buffer + iVar1,
                 (void *)(this_ptr->restore_memory_size + iVar1 * 2),
                 (source_rect->top - source_rect->left) * 2 + 2);
    } while (iVar2 <= source_rect->bottom);
  }
  return;
}
