// Name: core_script.cpp_FUN_005645d0
// Address: 005645d0
// Address Range: [[005645d0, 005647cd]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_005645d0()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_005645d0(uint param_1) */

void core_script_cpp_FUN_005645d0(void)

{
  int iVar1;
  int x1;
  int y;
  CDemonRenderer *in_stack_fffffdfc;
  
  core_script_cpp_FUN_00564500();
  engine_matrix_c_pushViewport_FUN_0050e320
            (DAT_031141d0,DAT_031141d4,(DAT_031141d8 - DAT_031141d0) + -1,
             (DAT_031141dc - DAT_031141d4) + -1);
  engine_2d_c_fillRectColor_FUN_00403170
            (DAT_031141d0,DAT_031141d4,DAT_031141d8 + -1,DAT_031141dc + -1,0);
  g_ActiveRenderColor = 7;
  engine_2d_c_drawHLine_FUN_00402ee0(DAT_031141d0,DAT_031141d4,DAT_031141d8 + -1);
  shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10((CEdScrollBar *)&DAT_0310fd0c);
  shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10((CEdScrollBar *)&DAT_0310fcd8);
  engine_matrix_c_pushViewport_FUN_0050e320
            (DAT_031141e0,DAT_031141e4,(DAT_031141e8 - DAT_031141e0) + -1,
             (DAT_031141ec - DAT_031141e4) + -1);
  for (iVar1 = DAT_0310fcd8; iVar1 <= DAT_0310fcd8 + DAT_0310fce0; iVar1 = iVar1 + 1) {
    core_script_cpp_FUN_005664d0();
  }
  if ((DAT_0310fd40._1_1_ & 0x40) == 0) {
    g_ActiveRenderColor = 0xff;
    iVar1 = (DAT_0310fd48 - DAT_0310fcd8) * DAT_03114208 + DAT_031141e4;
    x1 = DAT_03114204 * (DAT_0310fd44 - DAT_0310fd0c) + DAT_031141e0;
    y = iVar1 + DAT_03114208 + -1;
    if (DAT_0068105c == 0) {
      engine_2d_c_drawHLine_FUN_00402ee0(x1,y,DAT_03114204 + x1 + -1);
    }
    else {
      engine_2d_c_drawVLine_FUN_00402ff0(x1,iVar1,y);
    }
  }
  engine_matrix_c_popViewport_FUN_0050e480(in_stack_fffffdfc);
  crt_stdio_c_sprintf_FUN_005fdbd0
            (&stack0xfffffdfc,"Ln %d, Col %d",DAT_0310fd48 + 1,DAT_0310fd44 + 1);
  engine_font_cpp_CBitFont_drawTextRight_FUN_004cdce0
            (DAT_03114200,DAT_031141f8,DAT_031141f4,0xff,-1,&stack0xfffffdfc);
  engine_font_cpp_CBitFont_drawTextRight_FUN_004cdbf0
            (DAT_03114200,DAT_031141f0,DAT_031141f4,0xff,-1,0x310fdc0);
  engine_matrix_c_popViewport_FUN_0050e480(in_stack_fffffdfc);
  return;
}
