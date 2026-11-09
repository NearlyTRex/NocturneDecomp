// Name: shape_edittool.cpp_FUN_0047afb0
// Address: 0047afb0
// Address Range: [[0047afb0, 0047b1eb]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0047afb0(CInputString *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0047b117) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0047afb0(CInputString *param_1,int param_2,int param_3)

{
  int y2;
  uint uVar1;
  int iVar2;
  int iVar3;
  int x2;
  uint uVar4;
  CInputString *pCVar5;
  uint uVar6;
  
  y2 = _DAT_01c25f7c + param_3;
  if (*(int *)(param_1 + 0x138) != *(int *)(param_1 + 0x134)) {
    iVar2 = shape_edittool_cpp_CInputString_calcX_FUN_0047aef0(param_1,*(int *)(param_1 + 0x138));
    iVar2 = iVar2 + param_2;
    iVar3 = shape_edittool_cpp_CInputString_calcX_FUN_0047aef0(param_1,*(int *)(param_1 + 0x134));
    iVar3 = iVar3 + param_2;
    x2 = iVar3;
    if (iVar3 < iVar2) {
      x2 = iVar2;
      iVar2 = iVar3;
    }
    if (_DAT_01c25f84 == 0) {
      engine_2d_c_fillRectColor_FUN_004031c0(iVar2,param_3,x2,y2,_DAT_01c263a8);
    }
    else {
      iVar3 = (_DAT_01c263a8 & 0xff) * 3;
      engine_mini3d_cpp_FUN_004f8e20
                ((uint)(byte)(&DAT_01c3583a)[iVar3] |
                 (uint)(byte)(&DAT_01c35838)[iVar3] << 0x10 |
                 (uint)(byte)(&DAT_01c35839)[iVar3] << 8);
      engine_mini3d_cpp_FUN_004f90d0(iVar2,param_3,x2,y2);
    }
  }
  engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
  engine_mini3d_cpp_FUN_004f3570(0x3f800000);
  uVar4 = _DAT_01c25590;
  pCVar5 = param_1;
  uVar6 = _DAT_01c263ac;
  if (*(int *)(param_1 + 0x13c) != 0) {
    if (0x3ff < *(uint *)(param_1 + 0x130)) {
      _DAT_01d046a0 = "..\\shape\\edittool.cpp";
      _DAT_01d046a4 = 0x223;
      core_main_c_FUN_004e4500("CInputString::draw - string too big for hidden text!");
    }
    memset((void *)0x1c25f88,0x2a,*(ulong *)(param_1 + 0x130));
    uVar6 = _DAT_01c263ac;
    uVar4 = _DAT_01c25590;
    *(byte *)(*(int *)(param_1 + 0x130) + 0x1c25f88) = 0;
    pCVar5 = (CInputString *)0x1c25f88;
  }
  engine_font_cpp_FUN_004a8df0(uVar4,pCVar5,param_2,param_3,uVar6,0xffffffff);
  uVar1 = wincore_winrun_cpp_FUN_0058e9e0();
  if ((uVar1 & 0x40000) != 0) {
    if (_DAT_01c25f84 == 0) {
      _DAT_01c35e60 = _DAT_01c263b0;
    }
    else {
      iVar2 = (_DAT_01c263b0 & 0xff) * 3;
      engine_mini3d_cpp_FUN_004f8e20
                ((uint)(byte)(&DAT_01c3583a)[iVar2] |
                 (uint)(byte)(&DAT_01c35838)[iVar2] << 0x10 |
                 (uint)(byte)(&DAT_01c35839)[iVar2] << 8);
    }
    iVar2 = shape_edittool_cpp_CInputString_calcX_FUN_0047aef0(param_1,*(int *)(param_1 + 0x134));
    engine_2d_c_drawLine_FUN_004011a0(param_2 + iVar2,param_3,param_2 + iVar2,y2);
  }
  return;
}
