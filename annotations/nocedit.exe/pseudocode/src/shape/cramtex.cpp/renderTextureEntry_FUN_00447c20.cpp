// Name: shape_cramtex.cpp_renderTextureEntry_FUN_00447c20
// Address: 00447c20
// Address Range: [[00447c20, 00447e7d]]
// Convention: __cdecl
// Signature: void shape_cramtex.cpp_renderTextureEntry_FUN_00447c20(SCramWorkingEntry * texture_entry, int visualization_mode, int draw_x, int draw_y, int draw_width, int draw_height)

#include "nocturne.h"

void __cdecl
shape_cramtex_cpp_renderTextureEntry_FUN_00447c20
          (SCramWorkingEntry *texture_entry,int visualization_mode,int draw_x,int draw_y,
          int draw_width,int draw_height)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int y1;
  int iVar4;
  int unaff_EBP;
  int iVar5;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int iStack_10;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x48);
  if (draw_x == 0) {
    if (g_CramMapNumber != *(int *)(visualization_mode + 0x10)) {
      return;
    }
    iStack_10 = *(int *)(visualization_mode + 0x24);
    iVar4 = *(int *)(visualization_mode + 0x20);
    iVar2 = *(int *)(visualization_mode + 0x28);
    iVar5 = *(int *)(visualization_mode + 0x1c);
  }
  else {
    if (g_CramMapNumber != *(int *)(visualization_mode + 0x2c)) {
      return;
    }
    iStack_10 = *(int *)(visualization_mode + 0x38);
    iVar4 = *(int *)(visualization_mode + 0x34);
    iVar2 = *(int *)(visualization_mode + 0x3c);
    iVar5 = *(int *)(visualization_mode + 0x30);
  }
  y1 = draw_width + ((in_stack_00000020 - draw_width) * iVar4) / g_CramCurrentAcceptableSize;
  iVar3 = (iStack_10 * (draw_height - draw_y)) / g_CramCurrentAcceptableSize + draw_y;
  engine_2d_c_fillRectColor_FUN_00403170
            (((draw_height - draw_y) * iVar5) / g_CramCurrentAcceptableSize + draw_y,y1,iVar3 + -1,
             (iVar2 * (in_stack_00000020 - draw_width)) / g_CramCurrentAcceptableSize + draw_width +
             -1,0xf8);
  iVar1 = g_CramPaddingCalculation / 2;
  iVar5 = (y1 * (iVar5 + iVar1)) / g_CramCurrentAcceptableSize + draw_y;
  iVar4 = draw_height + (iVar3 * (iVar4 + iVar1)) / g_CramCurrentAcceptableSize;
  engine_2d_c_fillRectColor_FUN_00403170
            (iVar5,iVar4,((iVar2 - iVar1) * y1) / g_CramCurrentAcceptableSize + draw_y + -1,
             ((unaff_EBP - iVar1) * iVar3) / g_CramCurrentAcceptableSize + draw_height + -1,2);
  if (draw_width != 0) {
    if (*(int *)(visualization_mode + 0x44) == 0) {
      iVar2 = *(int *)visualization_mode;
    }
    else {
      iVar2 = *(int *)(visualization_mode + 4);
    }
    if (*(int *)(visualization_mode + 0x44) == 0) {
      iVar3 = *(int *)(visualization_mode + 4);
    }
    else {
      iVar3 = *(int *)visualization_mode;
    }
    engine_2d_c_fillRectColor_FUN_00403170
              (iVar5,iVar4,
               draw_y + ((in_stack_00000024 - draw_y) *
                        ((g_CramPaddingCalculation + iVar2 + *(int *)(visualization_mode + 0x30)) -
                        g_CramPaddingCalculation / 2)) / g_CramCurrentAcceptableSize + -1,
               ((in_stack_00000028 - in_stack_00000020) *
               ((g_CramPaddingCalculation + iVar3 + *(int *)(visualization_mode + 0x34)) -
               g_CramPaddingCalculation / 2)) / g_CramCurrentAcceptableSize + in_stack_00000020 + -1
               ,0xfa);
  }
  return;
}
