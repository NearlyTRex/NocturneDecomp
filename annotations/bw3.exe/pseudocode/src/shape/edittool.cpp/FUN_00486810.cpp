// Name: shape_edittool.cpp_FUN_00486810
// Address: 00486810
// Address Range: [[00486810, 0048693f]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00486810(CEdCheck *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00486810(CEdCheck *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EBX;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *text_string;
  
  iVar2 = param_1->y_position;
  iVar6 = param_1->right_boundary;
  iVar5 = param_1->x_position;
  iVar1 = shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_004867c0(param_1);
  iVar1 = ((iVar2 + iVar6) - iVar1) / 2;
  iVar2 = shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_00486780(param_1);
  iVar2 = iVar5 + iVar2;
  iVar3 = shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_004867c0(param_1);
  iVar3 = iVar1 + iVar3;
  text_string = param_1->checkbox_text;
  engine_font_cpp_CBitFont_getTextHeight_FUN_004b2b30(_DAT_01c5b0e0,text_string);
  uVar7 = 0xffffffff;
  iVar6 = param_1->text_color_mode;
  iVar4 = shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_004867f0(param_1);
  engine_font_cpp_FUN_004b0a20(_DAT_01c5b0e0,iVar3,iVar4 + iVar2,iVar6,uVar7,text_string);
  shape_edittool_cpp_FUN_004850a0(iVar5,iVar1,iVar2,unaff_EBX,param_1->border_style_flag);
  if (param_1->border_style_flag == 0) {
    unaff_EBX = unaff_EBX + -1;
    iVar2 = iVar2 + -1;
  }
  else {
    iVar1 = iVar1 + 1;
    iVar5 = iVar5 + 1;
  }
  if (param_1->checked_state == 1) {
    if (_DAT_01c5baec == 0) {
      _DAT_01c6b5c0 = _DAT_01c5baec;
    }
    else {
      engine_mini3d_cpp_setColor_FUN_004f3520
                ((uint)DAT_01c6af9a | (uint)DAT_01c6af99 << 8 | (uint)DAT_01c6af98 << 0x10);
    }
    engine_2d_c_clipLineGlobal_FUN_00402ca0(iVar5 + 1,iVar1 + 1,iVar2 + -2,unaff_EBX + -2);
    engine_2d_c_clipLineGlobal_FUN_00402ca0(iVar2 + -2,iVar1 + 1,iVar5 + 1,unaff_EBX + -2);
  }
  return;
}
