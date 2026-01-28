// Name: core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
// Address: 00473390
// Address Range: [[00473390, 004735b8]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390 (CDemonLight *this_ptr,int screen_x,int screen_y,int display_size)

#include "nocturne.h"

void __cdecl
core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
          (CDemonLight *this_ptr,int screen_x,int screen_y,int display_size)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_24;
  uint local_14;
  
  if ((-1 < screen_x) && (-1 < screen_y)) {
    if ((screen_x + display_size <= g_WindowWidth) && (screen_y + display_size <= g_WindowHeight)) {
      iVar1 = (this_ptr->shadow_map_width << 8) / display_size;
      local_14 = 0x20000;
      uVar4 = 0;
      for (local_24 = 0; local_24 < this_ptr->shadow_map_height * 0x100; local_24 = local_24 + iVar1
          ) {
        iVar5 = 0;
        while (iVar5 < this_ptr->shadow_map_width * 0x100) {
          uVar2 = (uint)this_ptr->shadow_depth_buffer
                        [((int)((iVar5 + (iVar5 >> 0x1f) * -0x100) -
                               (uint)((iVar5 >> 0x1f) << 7 < 0)) >> 8) +
                         ((int)((local_24 + (local_24 >> 0x1f) * -0x100) -
                               (uint)((local_24 >> 0x1f) << 7 < 0)) >> 8) *
                         this_ptr->shadow_map_width];
          if ((uVar2 == 0) || (0xfffe < uVar2)) {
LAB_004734b7:
            iVar5 = iVar5 + iVar1;
          }
          else {
            if (uVar2 < local_14) {
              local_14 = uVar2;
            }
            if (uVar2 <= uVar4) goto LAB_004734b7;
            iVar5 = iVar5 + iVar1;
            uVar4 = uVar2;
          }
        }
      }
      if (uVar4 == local_14) {
        uVar4 = local_14 + 1;
      }
      for (iVar5 = 0; iVar5 < this_ptr->shadow_map_height * 0x100; iVar5 = iVar5 + iVar1) {
        for (iVar3 = 0; iVar3 < this_ptr->shadow_map_width * 0x100; iVar3 = iVar3 + iVar1) {
          uVar2 = (uint)this_ptr->shadow_depth_buffer
                        [((int)((iVar3 + (iVar3 >> 0x1f) * -0x100) -
                               (uint)((iVar3 >> 0x1f) << 7 < 0)) >> 8) +
                         ((int)((iVar5 + (iVar5 >> 0x1f) * -0x100) -
                               (uint)((iVar5 >> 0x1f) << 7 < 0)) >> 8) * this_ptr->shadow_map_width]
          ;
          if ((uVar2 < 0xffff) && (uVar2 != 0)) {
            *(int *)((screen_x + iVar3 / iVar1) * 4 +
                    (int)g_ScreenBufferArray[screen_y + iVar5 / iVar1]) =
                 ((int)((uVar2 - local_14) * 0xff) / (int)(uVar4 - local_14)) * 0x10101;
          }
        }
      }
      if (g_CGamePtr->camera_debug_enabled != 0) {
        engine_2d_c_drawTextCenteredXYColor_FUN_00402700
                  (screen_x,screen_x + display_size,screen_y + display_size + -0xb,
                   (this_ptr->base).camera_name);
        return;
      }
    }
  }
  return;
}
