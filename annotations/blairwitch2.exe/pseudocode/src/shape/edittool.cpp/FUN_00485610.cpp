// Name: shape_edittool.cpp_FUN_00485610
// Address: 00485610
// Address Range: [[00485610, 0048573f]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00485610(CEdCheck *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00485610(CEdCheck *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint unaff_EBX;
  int iVar6;
  uint uVar7;
  char *text_string;
  
  iVar3 = param_1->y_position;
  iVar6 = param_1->right_boundary;
  iVar1 = param_1->x_position;
  iVar2 = shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_004855c0(param_1);
  iVar2 = ((iVar3 + iVar6) - iVar2) / 2;
  iVar3 = shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_00485580(param_1);
  iVar3 = iVar1 + iVar3;
  iVar4 = shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_004855c0(param_1);
  text_string = param_1->checkbox_text;
  engine_font_cpp_CBitFont_getTextHeight_FUN_004aafb0(_DAT_01c25590,text_string);
  uVar7 = 0xffffffff;
  iVar6 = param_1->text_color_mode;
  iVar5 = shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_004855f0(param_1);
  engine_font_cpp_FUN_004a8df0(_DAT_01c25590,iVar2 + iVar4,iVar5 + iVar3,iVar6,uVar7,text_string);
  shape_edittool_cpp_FUN_00483ea0(iVar1,iVar2,iVar3,unaff_EBX,param_1->border_style_flag);
  if (param_1->checked_state == 1) {
    if (_DAT_01c25f84 == 0) {
      _DAT_01c35e60 = _DAT_01c25f84;
    }
    else {
      engine_mini3d_cpp_setColor_FUN_004f8e20
                ((uint)DAT_01c3583a | (uint)DAT_01c35839 << 8 | (uint)DAT_01c35838 << 0x10);
    }
    engine_2d_c_clipLineGlobal_FUN_00402ca0();
    engine_2d_c_clipLineGlobal_FUN_00402ca0();
  }
  return;
}
