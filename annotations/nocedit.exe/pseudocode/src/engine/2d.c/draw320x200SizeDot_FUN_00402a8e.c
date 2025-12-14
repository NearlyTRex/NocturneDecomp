// Name: engine_2d.c_draw320x200SizeDot_FUN_00402a8e
// Address: 00402a8e
// Address Range: [[00402a8e, 00402c0d]]
// Convention: unknown
// Signature: undefined engine_2d.c_draw320x200SizeDot_FUN_00402a8e()

#include "nocturne.h"

void engine_2d_c_draw320x200SizeDot_FUN_00402a8e(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  if ((((0 < in_stack_0000000c) && (in_stack_00000004 <= in_stack_0000000c)) &&
      (-in_stack_0000000c <= in_stack_00000004)) &&
     ((in_stack_00000008 <= in_stack_0000000c && (-in_stack_0000000c <= in_stack_00000008)))) {
    if ((uint)g_WindowHeight < 400) {
      if (g_WindowHeight != 200) {
LAB_00402be6:
        g_CurrentFilename = "..\\engine\\2d.c";
        g_CurrentLineNumber = 0x7df;
        core_main_c_displayErrorAndQuit_FUN_00506f10("draw320x200SizeDot: unknown graphics option");
        return;
      }
      engine_2d_c_project3DPointToScreen_FUN_00401770
                (in_stack_00000004,in_stack_00000008,in_stack_0000000c);
    }
    else if ((uint)g_WindowHeight < 0x191) {
      iVar2 = (int)(((longlong)in_stack_00000004 * (longlong)g_ViewportCenterXFixed) /
                   (longlong)in_stack_0000000c) + g_ViewportRightFixed >> 0x10;
      iVar1 = g_ViewportBottomFixed +
              (int)(((longlong)in_stack_00000008 * (longlong)g_ViewportCenterYFixed) /
                   (longlong)in_stack_0000000c) >> 0x10;
      if (((-1 < iVar2) && (iVar2 < 0x140)) && ((-1 < iVar1 && (iVar1 < 399)))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar2,iVar1);
        engine_2d_c_plotPixel_FUN_00401140(iVar2,iVar1 + 1);
        return;
      }
    }
    else {
      if (g_WindowHeight != 0x1e0) goto LAB_00402be6;
      iVar2 = (int)(((longlong)in_stack_00000004 * (longlong)g_ViewportCenterXFixed) /
                   (longlong)in_stack_0000000c) + g_ViewportRightFixed >> 0x10;
      iVar1 = (int)(((longlong)in_stack_00000008 * (longlong)g_ViewportCenterYFixed) /
                   (longlong)in_stack_0000000c) + g_ViewportBottomFixed >> 0x10;
      if ((((-1 < iVar2) && (iVar2 < 0x27f)) && (-1 < iVar1)) && (iVar1 < 0x1df)) {
        engine_2d_c_plotPixel_FUN_00401140(iVar2,iVar1);
        engine_2d_c_plotPixel_FUN_00401140(iVar2 + 1,iVar1);
        engine_2d_c_plotPixel_FUN_00401140(iVar2 + 1,iVar1 + 1);
        engine_2d_c_plotPixel_FUN_00401140(iVar2,iVar1 + 1);
        return;
      }
    }
  }
  return;
}
