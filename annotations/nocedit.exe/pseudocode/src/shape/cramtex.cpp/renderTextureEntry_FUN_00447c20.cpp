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
  int iVar4;
  int iVar5;
  int iVar6;
  int *in_stack_00000004;
  int local_18;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x48);
  if (texture_entry == (SCramWorkingEntry *)0x0) {
    if (g_CramMapNumber != in_stack_00000004[4]) {
      return;
    }
    local_18 = in_stack_00000004[9];
    iVar5 = in_stack_00000004[8];
    iVar4 = in_stack_00000004[10];
    iVar6 = in_stack_00000004[7];
  }
  else {
    if (g_CramMapNumber != in_stack_00000004[0xb]) {
      return;
    }
    local_18 = in_stack_00000004[0xe];
    iVar5 = in_stack_00000004[0xd];
    iVar4 = in_stack_00000004[0xf];
    iVar6 = in_stack_00000004[0xc];
  }
  iVar1 = draw_y - visualization_mode;
  iVar2 = draw_width - draw_x;
  engine_2d_c_fillRectColor_FUN_00403170
            ((iVar1 * iVar6) / g_CramCurrentAcceptableSize + visualization_mode,
             draw_x + (iVar2 * iVar5) / g_CramCurrentAcceptableSize,
             (local_18 * iVar1) / g_CramCurrentAcceptableSize + visualization_mode + -1,
             (iVar4 * iVar2) / g_CramCurrentAcceptableSize + draw_x + -1,0xf8);
  iVar3 = g_CramPaddingCalculation / 2;
  iVar6 = (iVar1 * (iVar6 + iVar3)) / g_CramCurrentAcceptableSize + visualization_mode;
  iVar5 = draw_x + (iVar2 * (iVar5 + iVar3)) / g_CramCurrentAcceptableSize;
  engine_2d_c_fillRectColor_FUN_00403170
            (iVar6,iVar5,
             ((local_18 - iVar3) * iVar1) / g_CramCurrentAcceptableSize + visualization_mode + -1,
             ((iVar4 - iVar3) * iVar2) / g_CramCurrentAcceptableSize + draw_x + -1,2);
  if (texture_entry != (SCramWorkingEntry *)0x0) {
    if (in_stack_00000004[0x11] == 0) {
      iVar4 = *in_stack_00000004;
    }
    else {
      iVar4 = in_stack_00000004[1];
    }
    if (in_stack_00000004[0x11] == 0) {
      iVar1 = in_stack_00000004[1];
    }
    else {
      iVar1 = *in_stack_00000004;
    }
    engine_2d_c_fillRectColor_FUN_00403170
              (iVar6,iVar5,
               visualization_mode +
               ((draw_y - visualization_mode) *
               ((g_CramPaddingCalculation + iVar4 + in_stack_00000004[0xc]) -
               g_CramPaddingCalculation / 2)) / g_CramCurrentAcceptableSize + -1,
               ((draw_width - draw_x) *
               ((g_CramPaddingCalculation + iVar1 + in_stack_00000004[0xd]) -
               g_CramPaddingCalculation / 2)) / g_CramCurrentAcceptableSize + draw_x + -1,0xfa);
  }
  return;
}
