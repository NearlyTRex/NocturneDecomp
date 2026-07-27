// Name: shape_edittool.cpp_CInputString_draw_FUN_0046f680
// Address: 0046f680
// Address Range: [[0046f680, 0046f7dc]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_draw_FUN_0046f680(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CInputString_draw_FUN_0046f680(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = _DAT_01bcd9bc + param_3;
  if (*(int *)(param_1 + 0x138) != *(int *)(param_1 + 0x134)) {
    iVar5 = shape_edittool_cpp_CInputString_calcX_FUN_0046f5c0
                      (param_1,*(int *)(param_1 + 0x138),iVar1);
    iVar5 = param_2 + iVar5;
    iVar3 = shape_edittool_cpp_CInputString_calcX_FUN_0046f5c0
                      (param_1,*(uint *)(param_1 + 0x134));
    iVar3 = iVar3 + param_2;
    iVar4 = iVar3;
    if (iVar3 < iVar5) {
      iVar4 = iVar5;
      iVar5 = iVar3;
    }
    engine_2d_c_fillRectColor_FUN_00403e60(iVar5,param_3,iVar4,iVar1,_DAT_01bcdddc);
  }
  engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
  uVar6 = _DAT_01bcd070;
  iVar5 = param_1;
  uVar7 = _DAT_01bcdde0;
  if (*(int *)(param_1 + 0x13c) != 0) {
    if (0x3ff < *(uint *)(param_1 + 0x130)) {
      PTR_01cc4800 = "..\\shape\\edittool.cpp";
      INT_01cc4804 = 0x1a5;
      core_main_c_FUN_004c8440("CInputString::draw - string too big for hidden text!");
    }
    memset(0x1bcd9c8,0x2a,*(uint *)(param_1 + 0x130));
    uVar7 = _DAT_01bcdde0;
    uVar6 = _DAT_01bcd070;
    *(byte *)(*(int *)(param_1 + 0x130) + 0x1bcd9c8) = 0;
    iVar5 = 0x1bcd9c8;
  }
  engine_font_cpp_CBitFont_drawText_FUN_00490980(uVar6,iVar5,param_2,param_3,uVar7,0xffffffff);
  uVar2 = wincore_winrun_cpp_getTime_FUN_00558a30();
  if ((uVar2 & 0x40000) != 0) {
    _DAT_01c00c70 = _DAT_01bcdde4;
    iVar5 = shape_edittool_cpp_CInputString_calcX_FUN_0046f5c0
                      (param_1,*(uint *)(param_1 + 0x134));
    engine_2d_c_drawLine_FUN_004015a0(iVar5 + param_2,param_3,iVar5 + param_2,iVar1);
    return;
  }
  return;
}
