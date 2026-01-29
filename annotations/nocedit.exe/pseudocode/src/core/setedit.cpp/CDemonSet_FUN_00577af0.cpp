// Name: core_setedit.cpp_CDemonSet_FUN_00577af0
// Address: 00577af0
// Address Range: [[00577af0, 00578193]]
// Convention: __cdecl
// Signature: int __cdecl core_setedit_cpp_CDemonSet_FUN_00577af0(CDemonSet *this_ptr)

#include "nocturne.h"

int __cdecl core_setedit_cpp_CDemonSet_FUN_00577af0(CDemonSet *this_ptr)

{
  int iVar1;
  CDemonSet *pCVar2;
  ushort *puVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uchar *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *in_stack_00000008;
  int local_9c;
  int local_90;
  int *local_8c;
  CDemonSet *local_88;
  C3DSCamera *local_84;
  int local_80;
  int local_7c;
  int local_70;
  int local_6c;
  int local_68;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_9c = -1;
  iVar6 = -1;
  if (0x1df < g_WindowHeight) {
    iVar6 = 0;
    iVar7 = 0;
    iVar9 = 0;
    pCVar2 = this_ptr;
    if (0 < this_ptr->camera_count) {
      do {
        if (pCVar2->cameras[0].is_panning == 0) {
          iVar9 = iVar9 + 1;
        }
        else {
          iVar6 = iVar6 + 1;
        }
        iVar7 = iVar7 + 1;
        pCVar2 = (CDemonSet *)&pCVar2->cameras[0].unk4;
      } while (iVar7 < this_ptr->camera_count);
    }
    if ((DAT_03364d14 & 1) == 0) {
      DAT_03364d14 = DAT_03364d14 | 1;
      shape_edittool_cpp_CEdScrollBar_ctor_FUN_004a5ae0((CEdScrollBar *)&INT_03364ce0);
      _atexit(&DAT_006816b0);
    }
    shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60
              ((CEdScrollBar *)&INT_03364ce0,0,g_WindowHeight + -10,g_WindowWidth + -1,
               g_WindowHeight + -1);
    INT_03364ce8 = (int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -0x40) -
                        (uint)((g_WindowWidth >> 0x1f) << 5 < 0)) >> 6;
    INT_03364ce4 = (iVar9 + 3) / 4 + ((iVar6 + 3) / 4) * 4;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0((CEdScrollBar *)&INT_03364ce0);
    shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10((CEdScrollBar *)&INT_03364ce0);
    local_7c = 0;
    local_6c = 0;
    local_90 = 0;
    do {
      local_70 = 0;
      local_80 = 0;
      if (0 < this_ptr->camera_count) {
        local_88 = this_ptr;
        local_8c = in_stack_00000008;
        local_84 = this_ptr->cameras;
        do {
          if (local_88->cameras[0].is_panning == 0) {
            local_68 = 1;
            if (local_90 != 1) goto LAB_00577d41;
          }
          else {
            local_68 = 4;
            if (local_90 != 0) {
LAB_00577d41:
              iVar6 = local_7c - INT_03364ce0;
              if ((0 < iVar6 + local_68) &&
                 (iVar6 < (int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -0x40) -
                               (uint)((g_WindowWidth >> 0x1f) << 5 < 0)) >> 6)) {
                iVar6 = iVar6 * 0x40;
                g_ActiveRenderColor = 0;
                iVar7 = g_WindowHeight + -10 + (4 - local_6c) * -0x30;
                if ((in_stack_00000008 != (int *)0x0) && (*local_8c != 0)) {
                  g_ActiveRenderColor = 2;
                }
                if (local_70 == this_ptr->selected_camera_index) {
                  g_ActiveRenderColor = 1;
                }
                iVar11 = local_80;
                for (iVar9 = iVar6; iVar9 < iVar6 + local_68 * 0x40; iVar9 = iVar9 + 0x40) {
                  if ((((-1 < iVar9) && (-1 < iVar7)) && (iVar9 + 0x40 <= g_WindowWidth)) &&
                     (iVar7 + 0x30 <= g_WindowHeight)) {
                    local_1c = iVar11 * 0x3000;
                    iVar1 = local_1c + 0x3000;
                    local_2c = iVar7 * 4;
                    local_34 = local_1c + 0x100;
                    local_20 = local_2c;
                    local_18 = local_1c;
                    if (g_BitsPerPixel == 8) {
                      do {
                        puVar8 = (uchar *)(*(int *)((int)g_ScreenBufferArray + local_20) + iVar9);
                        iVar10 = local_18;
                        do {
                          puVar8 = puVar8 + 1;
                          uVar4 = *(uint *)(&DAT_03365cc0 + iVar10);
                          iVar10 = iVar10 + 4;
                          *puVar8 = g_ColorCubeLookup
                                    [((uVar4 & 0xff) >> 3) * 0x400 +
                                     ((uVar4 >> 8 & 0xff) >> 3) * 0x20 +
                                     ((uVar4 >> 0x10 & 0xff) >> 3)];
                        } while (iVar10 != local_34);
                        local_20 = local_20 + 4;
                        local_18 = local_18 + 0x100;
                        local_34 = local_34 + 0x100;
                      } while (local_18 != iVar1);
                    }
                    else if (g_BitsPerPixel == 0x10) {
                      local_28 = local_34;
                      local_14 = local_1c;
                      do {
                        puVar3 = (ushort *)
                                 (*(int *)((int)g_ScreenBufferArray + local_2c) + iVar9 * 2);
                        iVar10 = local_14;
                        do {
                          puVar3 = puVar3 + 1;
                          uVar4 = *(uint *)(&DAT_03365cc0 + iVar10);
                          iVar10 = iVar10 + 4;
                          uVar4 = engine_font_cpp_packPixelScaled_FUN_004d1110
                                            (uVar4 & 0xff,uVar4 >> 8 & 0xff,uVar4 >> 0x10 & 0xff);
                          *puVar3 = (short)uVar4;
                        } while (iVar10 != local_28);
                        local_2c = local_2c + 4;
                        local_14 = local_14 + 0x100;
                        local_28 = local_28 + 0x100;
                      } while (local_14 != iVar1);
                    }
                    else if (g_BitsPerPixel == 0x20) {
                      local_30 = local_34;
                      local_24 = local_2c;
                      do {
                        puVar5 = (uint *)(*(int *)((int)g_ScreenBufferArray + local_24) + iVar9 * 4)
                        ;
                        iVar10 = local_1c;
                        do {
                          puVar5 = puVar5 + 1;
                          uVar4 = *(uint *)(&DAT_03365cc0 + iVar10);
                          iVar10 = iVar10 + 4;
                          uVar4 = engine_font_cpp_packPixelNative_FUN_004d1170
                                            (uVar4 & 0xff,uVar4 >> 8 & 0xff,uVar4 >> 0x10 & 0xff);
                          *puVar5 = uVar4;
                        } while (iVar10 != local_30);
                        local_24 = local_24 + 4;
                        local_1c = local_1c + 0x100;
                        local_30 = local_30 + 0x100;
                      } while (local_1c != iVar1);
                    }
                  }
                  iVar11 = iVar11 + 1;
                }
                iVar9 = local_68 * 0x40 + iVar6;
                engine_2d_c_drawRect_FUN_00403120(iVar6,iVar7,iVar9 + -1,iVar7 + 0x2f);
                if (((iVar6 <= g_MouseX) && (g_MouseX < iVar9)) &&
                   ((iVar7 <= g_MouseY && (g_MouseY < iVar7 + 0x30)))) {
                  local_9c = local_70;
                  if (iVar6 < 0) {
                    iVar6 = 0;
                  }
                  engine_2d_c_drawTextXY_FUN_00402130(iVar6,iVar7,local_84->name);
                }
              }
              local_6c = local_6c + 1;
              if (3 < local_6c) {
                local_7c = local_7c + local_68;
                local_6c = 0;
              }
            }
          }
          local_88 = (CDemonSet *)&local_88->cameras[0].unk4;
          local_8c = local_8c + 1;
          local_84 = local_84 + 1;
          local_70 = local_70 + 1;
          local_80 = local_80 + local_68;
        } while (local_70 < this_ptr->camera_count);
      }
      if (0 < local_6c) {
        local_7c = local_7c + 1;
        local_6c = 0;
      }
      local_90 = local_90 + 1;
    } while (local_90 < 2);
    if ((local_9c < 0) || ((g_MouseButtonFlags & 1) == 0)) {
      return -1;
    }
    g_MouseButtonFlags = 0;
    iVar6 = local_9c;
  }
  return iVar6;
}
