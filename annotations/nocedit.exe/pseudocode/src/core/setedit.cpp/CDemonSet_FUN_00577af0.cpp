// Name: core_setedit.cpp_CDemonSet_FUN_00577af0
// Address: 00577af0
// Address Range: [[00577af0, 00578193]]
// Convention: __cdecl
// Signature: int core_setedit.cpp_CDemonSet_FUN_00577af0(CDemonSet * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_setedit_cpp_CDemonSet_FUN_00577af0(CDemonSet *this_ptr)

{
  int iVar1;
  CDemonSet *pCVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int x_pos;
  uchar *puVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  int *in_stack_00000018;
  int *in_stack_0000001c;
  int local_88;
  int local_80;
  int local_7c;
  int *local_78;
  int *local_74;
  char *local_6c;
  int local_68;
  int local_5c;
  int local_58;
  int local_54;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar7 = -1;
  if (0x1df < g_WindowHeight) {
    iVar7 = 0;
    iVar8 = 0;
    iVar10 = 0;
    pCVar2 = this_ptr;
    if (0 < this_ptr->camera_count) {
      do {
        if (pCVar2->cameras[0].is_panning == 0) {
          iVar10 = iVar10 + 1;
        }
        else {
          iVar7 = iVar7 + 1;
        }
        iVar8 = iVar8 + 1;
        pCVar2 = (CDemonSet *)&pCVar2->cameras[0].field17_0x1a0;
      } while (iVar8 < this_ptr->camera_count);
    }
    if ((DAT_03364d14 & 1) == 0) {
      DAT_03364d14 = DAT_03364d14 | 1;
      shape_edittool_cpp_CEdScrollBar_ctor_FUN_004a5ae0((CEdScrollBar *)&DAT_03364ce0);
      crt_stdlib_c_atexit_FUN_005ff060(&DAT_006816b0);
    }
    shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60
              ((CEdScrollBar *)&DAT_03364ce0,0,g_WindowHeight + -10,g_WindowWidth + -1,
               g_WindowHeight + -1);
    _DAT_03364ce8 =
         (int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -0x40) -
              (uint)((g_WindowWidth >> 0x1f) << 5 < 0)) >> 6;
    _DAT_03364ce4 = (iVar10 + 3) / 4 + ((iVar7 + 3) / 4) * 4;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0((CEdScrollBar *)&DAT_03364ce0);
    shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10((CEdScrollBar *)&DAT_03364ce0);
    local_68 = 0;
    local_58 = 0;
    local_7c = 0;
    do {
      local_5c = 0;
      local_6c = (char *)0x0;
      if (0 < *in_stack_00000018) {
        local_74 = in_stack_00000018;
        local_78 = in_stack_0000001c;
        do {
          if (local_74[0x51] == 0) {
            local_54 = 1;
            if (local_7c != 1) goto LAB_00577d41;
          }
          else {
            local_54 = 4;
            if (local_7c != 0) {
LAB_00577d41:
              iVar7 = local_68 - _DAT_03364ce0;
              if ((0 < iVar7 + local_54) &&
                 (iVar7 < (int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -0x40) -
                               (uint)((g_WindowWidth >> 0x1f) << 5 < 0)) >> 6)) {
                iVar7 = iVar7 * 0x40;
                g_ActiveRenderColor = 0;
                iVar8 = g_WindowHeight + -10 + (local_80 - local_58) * -0x30;
                if ((in_stack_0000001c != (int *)0x0) && (*local_78 != 0)) {
                  g_ActiveRenderColor = 2;
                }
                if (local_5c == in_stack_00000018[0x56ba9]) {
                  g_ActiveRenderColor = 1;
                }
                x_pos = iVar7 + local_54 * 0x40;
                pcVar12 = local_6c;
                for (iVar10 = iVar7; iVar10 < x_pos; iVar10 = iVar10 + 0x40) {
                  if ((((-1 < iVar10) && (-1 < iVar8)) && (iVar10 + 0x40 <= g_WindowWidth)) &&
                     (iVar8 + 0x30 <= g_WindowHeight)) {
                    iVar3 = (int)pcVar12 * 0x3000;
                    iVar1 = iVar3 + 0x3000;
                    local_18 = iVar8 * 4;
                    local_20 = iVar3 + 0x100;
                    if (g_BitsPerPixel == 8) {
                      do {
                        puVar9 = (uchar *)(*(int *)((int)g_ScreenBufferArray + local_18) + iVar10);
                        iVar11 = iVar3;
                        do {
                          puVar9 = puVar9 + 1;
                          uVar5 = *(uint *)(&DAT_03365cc0 + iVar11);
                          iVar11 = iVar11 + 4;
                          *puVar9 = g_ColorCubeLookup
                                    [((uVar5 & 0xff) >> 3) * 0x400 +
                                     ((uVar5 >> 8 & 0xff) >> 3) * 0x20 +
                                     ((uVar5 >> 0x10 & 0xff) >> 3)];
                        } while (iVar11 != local_20);
                        local_18 = local_18 + 4;
                        iVar3 = iVar3 + 0x100;
                        local_20 = local_20 + 0x100;
                      } while (iVar3 != iVar1);
                    }
                    else if (g_BitsPerPixel == 0x10) {
                      local_14 = local_20;
                      do {
                        puVar4 = (ushort *)
                                 (*(int *)((int)g_ScreenBufferArray + local_18) + iVar10 * 2);
                        iVar11 = iVar3;
                        do {
                          puVar4 = puVar4 + 1;
                          uVar5 = *(uint *)(&DAT_03365cc0 + iVar11);
                          iVar11 = iVar11 + 4;
                          uVar5 = engine_font_cpp_packPixelScaled_FUN_004d1110
                                            (uVar5 & 0xff,uVar5 >> 8 & 0xff,uVar5 >> 0x10 & 0xff);
                          *puVar4 = (short)uVar5;
                        } while (iVar11 != local_14);
                        local_18 = local_18 + 4;
                        iVar3 = iVar3 + 0x100;
                        local_14 = local_14 + 0x100;
                      } while (iVar3 != iVar1);
                    }
                    else if (g_BitsPerPixel == 0x20) {
                      local_1c = local_20;
                      do {
                        puVar6 = (uint *)(*(int *)((int)g_ScreenBufferArray + local_18) + iVar10 * 4
                                         );
                        iVar11 = iVar3;
                        do {
                          puVar6 = puVar6 + 1;
                          uVar5 = *(uint *)(&DAT_03365cc0 + iVar11);
                          iVar11 = iVar11 + 4;
                          uVar5 = engine_font_cpp_packPixelNative_FUN_004d1170
                                            (uVar5 & 0xff,uVar5 >> 8 & 0xff,uVar5 >> 0x10 & 0xff);
                          *puVar6 = uVar5;
                        } while (iVar11 != local_1c);
                        local_18 = local_18 + 4;
                        iVar3 = iVar3 + 0x100;
                        local_1c = local_1c + 0x100;
                      } while (iVar3 != iVar1);
                    }
                  }
                  pcVar12 = pcVar12 + 1;
                }
                iVar10 = local_54 * 0x40 + iVar7;
                engine_2d_c_drawRect_FUN_00403120(iVar7,iVar8,iVar10 + -1,iVar8 + 0x2f);
                if (((iVar7 <= g_MouseX) && (g_MouseX < iVar10)) &&
                   ((iVar8 <= g_MouseY && (g_MouseY < iVar8)))) {
                  if (x_pos < 0) {
                    x_pos = 0;
                  }
                  engine_2d_c_drawTextXY_FUN_00402130(x_pos,iVar7,local_6c);
                }
              }
              local_58 = local_58 + 1;
              if (local_80 <= local_58) {
                local_68 = local_68 + local_54;
                local_58 = 0;
              }
            }
          }
          local_74 = local_74 + 0x69;
          local_78 = local_78 + 1;
          local_5c = local_5c + 1;
          local_6c = local_6c + local_54;
        } while (local_5c < *in_stack_00000018);
      }
      if (0 < local_58) {
        local_68 = local_68 + 1;
        local_58 = 0;
      }
      local_7c = local_7c + 1;
    } while (local_7c < 2);
    if ((local_88 < 0) || ((g_MouseButtonFlags & 1U) == 0)) {
      return -1;
    }
    g_MouseButtonFlags = 0;
    iVar7 = local_88;
  }
  return iVar7;
}
