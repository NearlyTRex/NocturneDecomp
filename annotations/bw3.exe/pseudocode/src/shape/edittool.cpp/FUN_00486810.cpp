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
  uint uVar6;
  uint uVar7;
  CEdCheck *text_string;
  
  iVar3 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar5 = *(int *)(param_1 + 0x10);
  iVar1 = shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_004867c0(param_1);
  iVar2 = ((iVar3 + iVar2) - iVar1) / 2;
  iVar3 = shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_00486780(param_1);
  iVar3 = iVar5 + iVar3;
  iVar1 = shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_004867c0(param_1);
  iVar1 = iVar2 + iVar1;
  text_string = param_1 + 0x24;
  engine_font_cpp_CBitFont_getTextHeight_FUN_004b2b30(_DAT_01c5b0e0,(char *)text_string);
  uVar7 = 0xffffffff;
  uVar6 = *(uint *)(param_1 + 0xc);
  iVar4 = shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_004867f0(param_1);
  engine_font_cpp_FUN_004b0a20(_DAT_01c5b0e0,iVar1,iVar4 + iVar3,uVar6,uVar7,text_string);
  shape_edittool_cpp_FUN_004850a0(iVar5,iVar2,iVar3,unaff_EBX,*(uint *)(param_1 + 0x20));
  if (*(int *)(param_1 + 0x20) == 0) {
    unaff_EBX = unaff_EBX + -1;
    iVar3 = iVar3 + -1;
  }
  else {
    iVar2 = iVar2 + 1;
    iVar5 = iVar5 + 1;
  }
  if (*(int *)(param_1 + 4) == 1) {
    if (_DAT_01c5baec == 0) {
      _DAT_01c6b5c0 = _DAT_01c5baec;
    }
    else {
      engine_mini3d_cpp_FUN_004f3520
                ((uint)DAT_01c6af9a | (uint)DAT_01c6af99 << 8 | (uint)DAT_01c6af98 << 0x10);
    }
    engine_2d_c_clipLineGlobal_FUN_00402ca0(iVar5 + 1,iVar2 + 1,iVar3 + -2,unaff_EBX + -2);
    engine_2d_c_clipLineGlobal_FUN_00402ca0(iVar3 + -2,iVar2 + 1,iVar5 + 1,unaff_EBX + -2);
  }
  return;
}
