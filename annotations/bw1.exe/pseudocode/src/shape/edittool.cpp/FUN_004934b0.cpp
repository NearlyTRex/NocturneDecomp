// Name: shape_edittool.cpp_FUN_004934b0
// Address: 004934b0
// Address Range: [[004934b0, 0049371d]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_004934b0(CInputString *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00493638) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_004934b0(CInputString *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int y2;
  CInputString *pCVar4;
  CInputString local_420 [1024];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  y2 = _DAT_01c3f53c + param_3;
  if (*(int *)(param_1 + 0x138) != *(int *)(param_1 + 0x134)) {
    iVar2 = shape_edittool_cpp_CInputString_calcX_FUN_004933e0(param_1,*(int *)(param_1 + 0x138));
    iVar2 = param_2 + iVar2;
    iVar3 = shape_edittool_cpp_CInputString_calcX_FUN_004933e0(param_1,*(int *)(param_1 + 0x134));
    iVar3 = iVar3 + param_2;
    local_18 = iVar3;
    local_1c = iVar2;
    if (iVar3 < iVar2) {
      local_18 = iVar2;
      local_1c = iVar3;
    }
    local_14 = param_3;
    local_20 = y2;
    if (_DAT_01c3f544 == 0) {
      engine_2d_c_fillRectColor_FUN_004031c0(local_1c,param_3,local_18,y2,_DAT_01c3f568);
    }
    else {
      iVar2 = (_DAT_01c3f568 & 0xff) * 3;
      engine_mini3d_cpp_FUN_00517d50
                ((uint)(byte)(&DAT_01c4e9f8)[iVar2] << 0x10 |
                 (uint)(byte)(&DAT_01c4e9f9)[iVar2] << 8 | (uint)(byte)(&DAT_01c4e9fa)[iVar2]);
      engine_mini3d_cpp_FUN_00518010(local_1c,local_14,local_18,local_20);
    }
  }
  engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
  engine_mini3d_cpp_FUN_00512320(0x3f800000);
  pCVar4 = param_1;
  if (*(int *)(param_1 + 0x13c) != 0) {
    if (0x3ff < *(uint *)(param_1 + 0x130)) {
      _DAT_01d1d400 = "..\\shape\\edittool.cpp";
      _DAT_01d1d404 = 0x22e;
      core_main_c_FUN_005030e0("CInputString::draw - string too big for hidden text!");
    }
    memset(local_420,0x2a,*(ulong *)(param_1 + 0x130));
    local_420[*(int *)(param_1 + 0x130)] = (CInputString)0x0;
    pCVar4 = local_420;
  }
  engine_font_cpp_FUN_004c1dd0(_DAT_01c3eb50,pCVar4,param_2,param_3,_DAT_01c3f56c,0xffffffff);
  uVar1 = wincore_winrun_cpp_FUN_005b2420();
  if ((uVar1 & 0x40000) != 0) {
    if (_DAT_01c3f544 == 0) {
      _DAT_01c4f020 = _DAT_01c3f570;
    }
    else {
      iVar2 = (_DAT_01c3f570 & 0xff) * 3;
      engine_mini3d_cpp_FUN_00517d50
                ((uint)(byte)(&DAT_01c4e9fa)[iVar2] |
                 (uint)(byte)(&DAT_01c4e9f8)[iVar2] << 0x10 |
                 (uint)(byte)(&DAT_01c4e9f9)[iVar2] << 8);
    }
    iVar2 = shape_edittool_cpp_CInputString_calcX_FUN_004933e0(param_1,*(int *)(param_1 + 0x134));
    engine_2d_c_drawLine_FUN_004011a0(iVar2 + param_2,param_3,iVar2 + param_2,y2);
  }
  return;
}
