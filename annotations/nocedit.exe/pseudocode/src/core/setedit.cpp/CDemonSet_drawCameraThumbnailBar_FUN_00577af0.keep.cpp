// Name: core_setedit.cpp_CDemonSet_drawCameraThumbnailBar_FUN_00577af0
// Address: 00577af0
// MANUAL RECONSTRUCTION
// Address Range: [[00577af0, 00578193]]
// Convention: __cdecl
// Signature: int __cdecl core_setedit_cpp_CDemonSet_drawCameraThumbnailBar_FUN_00577af0(CDemonSet *this_ptr,int *camera_flags)

#include "nocturne.h"

int __cdecl core_setedit_cpp_CDemonSet_drawCameraThumbnailBar_FUN_00577af0(CDemonSet *this_ptr,int *camera_flags)

{
  int iVar2;
  int iVar3;
  ushort *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar5;
  int iVar6;
  int iVar7;
  int y1;
  uchar *puVar8;
  int iVar9;
  int iVar10;
  int iVar8;
  int iVar11;
  int local_9c;
  int local_90;
  int *local_8c;
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
  int iVar1;
  
  local_9c = -1;
  iVar2 = -1;
  if (0x1df < g_WindowHeight) {
    iVar6 = 0;
    iVar7 = 0;
    iVar9 = 0;
    if (0 < this_ptr->camera_count) {
      do {
        if (this_ptr->cameras[iVar7].is_panning == 0) {
          iVar9 = iVar9 + 1;
        }
        else {
          iVar6 = iVar6 + 1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < this_ptr->camera_count);
    }
    if ((g_ThumbnailScrollBarInitFlag & 1) == 0) {
      g_ThumbnailScrollBarInitFlag = g_ThumbnailScrollBarInitFlag | 1;
      shape_edittool_cpp_CEdScrollBar_ctor_FUN_004a5ae0(&g_ThumbnailScrollBar);
      _atexit(&g_ThumbnailScrollBarDestructorNode);
    }
    shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60
              (&g_ThumbnailScrollBar,0,g_WindowHeight + -10,g_WindowWidth + -1,g_WindowHeight + -1);
    g_ThumbnailScrollBar.max_value = g_WindowWidth / 0x40;
    g_ThumbnailScrollBar.current_value = (iVar9 + 3) / 4 + ((iVar6 + 3) / 4) * 4;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0(&g_ThumbnailScrollBar);
    shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10(&g_ThumbnailScrollBar);
    local_7c = 0;
    local_6c = 0;
    local_90 = 0;
    do {
      local_70 = 0;
      local_80 = 0;
      if (0 < this_ptr->camera_count) {
        local_8c = camera_flags;
        local_84 = this_ptr->cameras;
        do {
          if (local_84->is_panning == 0) {
            local_68 = 1;
            if (local_90 != 1) goto LAB_00577d41;
          }
          else {
            local_68 = 4;
            if (local_90 != 0) {
LAB_00577d41:
              iVar2 = local_7c - g_ThumbnailScrollBar.scroll_position;
              if ((0 < iVar2 + local_68) &&
                 (iVar2 < g_WindowWidth / 0x40)) {
                iVar2 = iVar2 * 0x40;
                g_ActiveRenderColor = 0;
                y1 = g_WindowHeight + -10 + (4 - local_6c) * -0x30;
                if ((camera_flags != (int *)0x0) && (*local_8c != 0)) {
                  g_ActiveRenderColor = 2;
                }
                if (local_70 == this_ptr->selected_camera_index) {
                  g_ActiveRenderColor = 1;
                }
                iVar11 = local_80;
                for (iVar3 = iVar2; iVar3 < iVar2 + local_68 * 0x40; iVar3 = iVar3 + 0x40) {
                  if ((((-1 < iVar3) && (-1 < y1)) && (iVar3 + 0x40 <= g_WindowWidth)) &&
                     (y1 + 0x30 <= g_WindowHeight)) {
                    local_1c = iVar11 * 0x3000;
                    iVar1 = local_1c + 0x3000;
                    local_2c = y1 * 4;
                    local_34 = local_1c + 0x100;
                    local_20 = local_2c;
                    local_18 = local_1c;
                    if (g_BitsPerPixel == 8) {
                      do {
                        puVar8 = (uchar *)g_ScreenBufferArray[local_20 / 4] + iVar3;
                        iVar10 = local_18;
                        do {
                          puVar8 = puVar8 + 1;
                          uVar5 = ((uint *)g_ThumbnailImageBuffer)[iVar10 / 4];
                          iVar10 = iVar10 + 4;
                          *puVar8 = g_ColorCubeLookup
                                    [((uVar5 & 0xff) >> 3) * 0x400 +
                                     ((uVar5 >> 8 & 0xff) >> 3) * 0x20 +
                                     ((uVar5 >> 0x10 & 0xff) >> 3)];
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
                        puVar3 = (ushort *)((uchar *)g_ScreenBufferArray[local_2c / 4] + iVar3 * 2);
                        iVar8 = local_14;
                        do {
                          puVar3 = puVar3 + 1;
                          uVar5 = ((uint *)g_ThumbnailImageBuffer)[iVar8 / 4];
                          iVar8 = iVar8 + 4;
                          uVar4 = engine_font_cpp_packPixelScaled_FUN_004d1110
                                            (uVar5 & 0xff,uVar5 >> 8 & 0xff,uVar5 >> 0x10 & 0xff);
                          *puVar3 = (short)uVar4;
                        } while (iVar8 != local_28);
                        local_2c = local_2c + 4;
                        local_14 = local_14 + 0x100;
                        local_28 = local_28 + 0x100;
                      } while (local_14 != iVar1);
                    }
                    else if (g_BitsPerPixel == 0x20) {
                      local_30 = local_34;
                      local_24 = local_2c;
                      do {
                        puVar5 = (uint *)((uchar *)g_ScreenBufferArray[local_24 / 4] + iVar3 * 4);
                        iVar8 = local_1c;
                        do {
                          puVar5 = puVar5 + 1;
                          uVar5 = ((uint *)g_ThumbnailImageBuffer)[iVar8 / 4];
                          iVar8 = iVar8 + 4;
                          uVar5 = engine_font_cpp_packPixelNative_FUN_004d1170
                                            (uVar5 & 0xff,uVar5 >> 8 & 0xff,uVar5 >> 0x10 & 0xff);
                          *puVar5 = uVar5;
                        } while (iVar8 != local_30);
                        local_24 = local_24 + 4;
                        local_1c = local_1c + 0x100;
                        local_30 = local_30 + 0x100;
                      } while (local_1c != iVar1);
                    }
                  }
                  iVar11 = iVar11 + 1;
                }
                iVar3 = local_68 * 0x40 + iVar2;
                engine_2d_c_drawRect_FUN_00403120(iVar2,y1,iVar3 + -1,y1 + 0x2f);
                if (((iVar2 <= g_MouseX) && (g_MouseX < iVar3)) &&
                   ((y1 <= g_MouseY && (g_MouseY < y1 + 0x30)))) {
                  local_9c = local_70;
                  if (iVar2 < 0) {
                    iVar2 = 0;
                  }
                  engine_2d_c_drawTextXY_FUN_00402130(iVar2,y1,local_84->name);
                }
              }
              local_6c = local_6c + 1;
              if (3 < local_6c) {
                local_7c = local_7c + local_68;
                local_6c = 0;
              }
            }
          }
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
    if ((local_9c < 0) || ((g_MouseButtonFlags.dword & 1) == 0)) {
      return -1;
    }
    g_MouseButtonFlags.dword = 0;
    iVar2 = local_9c;
  }
  return iVar2;
}
