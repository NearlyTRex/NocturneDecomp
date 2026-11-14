// Name: shape_edittool.cpp_FUN_0049dc70
// Address: 0049dc70
// Address Range: [[0049dc70, 0049dd9f]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0049dc70(CEdCheck *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0049dc70(CEdCheck *param_1)

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
  iVar1 = shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_0049dc20(param_1);
  iVar1 = ((iVar2 + iVar6) - iVar1) / 2;
  iVar2 = shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_0049dbe0(param_1);
  iVar2 = iVar5 + iVar2;
  iVar3 = shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_0049dc20(param_1);
  iVar3 = iVar1 + iVar3;
  text_string = param_1->checkbox_text;
  engine_font_cpp_CBitFont_getTextHeight_FUN_004c3f50(_DAT_01c3eb50,text_string);
  uVar7 = 0xffffffff;
  iVar6 = param_1->text_color_mode;
  iVar4 = shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_0049dc50(param_1);
  engine_font_cpp_FUN_004c1dd0(_DAT_01c3eb50,iVar3,iVar4 + iVar2,iVar6,uVar7,text_string);
  shape_edittool_cpp_FUN_0049c500(iVar5,iVar1,iVar2,unaff_EBX,param_1->border_style_flag);
  if (param_1->border_style_flag == 0) {
    unaff_EBX = unaff_EBX + -1;
    iVar2 = iVar2 + -1;
  }
  else {
    iVar1 = iVar1 + 1;
    iVar5 = iVar5 + 1;
  }
  if (param_1->checked_state == 1) {
    if (_DAT_01c3f544 == 0) {
      _DAT_01c4f020 = _DAT_01c3f544;
    }
    else {
      engine_mini3d_cpp_setColor_FUN_00517d50
                ((uint)DAT_01c4e9fa | (uint)DAT_01c4e9f9 << 8 | (uint)DAT_01c4e9f8 << 0x10);
    }
    engine_2d_c_clipLineGlobal_FUN_00402ca0(iVar5 + 1,iVar1 + 1,iVar2 + -2,unaff_EBX + -2);
    engine_2d_c_clipLineGlobal_FUN_00402ca0(iVar2 + -2,iVar1 + 1,iVar5 + 1,unaff_EBX + -2);
  }
  return;
}
