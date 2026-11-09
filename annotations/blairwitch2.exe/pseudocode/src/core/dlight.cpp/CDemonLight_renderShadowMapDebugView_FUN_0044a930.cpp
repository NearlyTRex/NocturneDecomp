// Name: core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_0044a930
// Address: 0044a930
// Address Range: [[0044a930, 0044ab58]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_0044a930(CDemonLight *this_ptr,int screen_x,int screen_y,int display_size)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_0044a930(CDemonLight *this_ptr,int screen_x,int screen_y,int display_size)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_24;
  uint local_14;
  
  if ((-1 < screen_x) && (-1 < screen_y)) {
    if ((screen_x + display_size <= DAT_006141b8) && (screen_y + display_size <= DAT_006141bc)) {
      iVar1 = (*(int *)&this_ptr->field_0x1cc0 << 8) / display_size;
      local_14 = 0x20000;
      uVar4 = 0;
      for (local_24 = 0; local_24 < *(int *)&this_ptr->field_0x1cc4 * 0x100;
          local_24 = local_24 + iVar1) {
        iVar5 = 0;
        while (iVar5 < *(int *)&this_ptr->field_0x1cc0 * 0x100) {
          uVar2 = (uint)*(ushort *)
                         (*(int *)&this_ptr->field_0x2f94 +
                         (((int)((iVar5 + (iVar5 >> 0x1f) * -0x100) -
                                (uint)((iVar5 >> 0x1f) << 7 < 0)) >> 8) +
                         ((int)((local_24 + (local_24 >> 0x1f) * -0x100) -
                               (uint)((local_24 >> 0x1f) << 7 < 0)) >> 8) *
                         *(int *)&this_ptr->field_0x1cc0) * 2);
          if ((uVar2 == 0) || (0xfffe < uVar2)) {
LAB_0044aa57:
            iVar5 = iVar5 + iVar1;
          }
          else {
            if (uVar2 < local_14) {
              local_14 = uVar2;
            }
            if (uVar2 <= uVar4) goto LAB_0044aa57;
            iVar5 = iVar5 + iVar1;
            uVar4 = uVar2;
          }
        }
      }
      if (uVar4 == local_14) {
        uVar4 = local_14 + 1;
      }
      for (iVar5 = 0; iVar5 < *(int *)&this_ptr->field_0x1cc4 * 0x100; iVar5 = iVar5 + iVar1) {
        for (iVar3 = 0; iVar3 < *(int *)&this_ptr->field_0x1cc0 * 0x100; iVar3 = iVar3 + iVar1) {
          uVar2 = (uint)*(ushort *)
                         ((((int)((iVar3 + (iVar3 >> 0x1f) * -0x100) -
                                 (uint)((iVar3 >> 0x1f) << 7 < 0)) >> 8) +
                          ((int)((iVar5 + (iVar5 >> 0x1f) * -0x100) -
                                (uint)((iVar5 >> 0x1f) << 7 < 0)) >> 8) *
                          *(int *)&this_ptr->field_0x1cc0) * 2 + *(int *)&this_ptr->field_0x2f94);
          if ((uVar2 < 0xffff) && (uVar2 != 0)) {
            *(int *)((screen_x + iVar3 / iVar1) * 4 +
                    *(int *)(&DAT_01c2a38c + (screen_y + iVar5 / iVar1) * 4)) =
                 ((int)((uVar2 - local_14) * 0xff) / (int)(uVar4 - local_14)) * 0x10101;
          }
        }
      }
      if (*(int *)&g_CGamePtr->field_0x200 != 0) {
        engine_2d_c_FUN_00402710
                  (screen_x,screen_x + display_size,screen_y + display_size + -0xb,
                   &this_ptr->field_0x40);
        return;
      }
    }
  }
  return;
}
