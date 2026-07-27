// Name: shape_edittool.cpp_CEditorTools_updatePercentage_FUN_00471760
// Address: 00471760
// Address Range: [[00471760, 00471a7f]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_updatePercentage_FUN_00471760(undefined4 param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_updatePercentage_FUN_00471760(uint param_1,float param_2,float param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  uint uVar10;
  uint uVar12;
  double dVar11;
  float local_30;
  float local_2c;
  
  if (_DAT_01bcd07c < 1) {
    PTR_01cc4800 = "..\\shape\\edittool.cpp";
    INT_01cc4804 = 0x605;
    core_main_c_FUN_004c8440("CEditorTools::updatePercentageWindow - no window open!");
  }
  local_2c = 0.0;
  if (0.0 < param_3) {
    if (param_2 < 0.0) {
      param_2 = 0.0;
    }
    if (param_3 < param_2) {
      param_2 = param_3;
    }
    local_2c = param_2 / param_3;
  }
  uVar12 = 0x4717ca;
  fVar9 = (float10)round
                             ((float10)local_2c * (float10)100 +
                              (float10)0.5);
  iVar4 = wincore_winrun_cpp_getTime_FUN_00558a30(uVar12);
  iVar1 = (_DAT_01bcd07c + -1) * 0x1d8;
  if (((int)ROUND(fVar9) != *(int *)(iVar1 + 0x1bcd250)) ||
     (0x47ffff < iVar4 - *(int *)(iVar1 + 0x1bcd254))) {
    shape_edittool_cpp_FUN_004722b0(param_1);
    engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
    engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_00490e30
              (_DAT_01bcd070,_DAT_01c00c58,_DAT_01c00c60,_DAT_01c00c5c,_DAT_01bcddec,0xffffffff,
               "%d%% complete",(int)ROUND(fVar9));
    iVar3 = _DAT_01c00c60;
    iVar1 = _DAT_01bcd9bc * 2 + _DAT_01c00c5c + 1;
    iVar5 = _DAT_01bcd9bc * 4 + _DAT_01c00c5c + -1;
    iVar8 = _DAT_01c00c60 + -1;
    iVar7 = _DAT_01c00c58 + 1;
    engine_2d_c_fillRectWithBorder_FUN_00403ef0(iVar7,iVar1,iVar8,iVar5,_DAT_01bcddf8,_DAT_01bcde00)
    ;
    uVar12 = 0x4718cf;
    fVar9 = (float10)round
                               ((float10)((iVar8 - iVar7) + 1) * (float10)local_30 +
                                (float10)0.5);
    iVar6 = (int)ROUND(fVar9) + iVar7;
    if (iVar7 < iVar6) {
      if (iVar8 <= iVar6) {
        iVar6 = iVar3 + -2;
      }
      engine_2d_c_fillRectColor_FUN_00403e60(iVar7,iVar1,iVar6,local_2c,_DAT_01bcddfc,uVar12);
    }
    if (0 < iVar4) {
      fVar2 = (float)(iVar5 - *(int *)((_DAT_01bcd07c + -1) * 0x1d8 + 0x1bcd24c)) *
              (float)8.4771050347222196e-07;
      dVar11 = (double)fVar2;
      if ((float)5 < fVar2) {
        uVar12 = 0x471966;
        fVar9 = (float10)round
                                   ((((float10)param_3 - (float10)param_2) * (float10)fVar2) /
                                    (float10)param_2 + (float10)0.5);
        iVar1 = (int)ROUND(fVar9);
        if (0 < iVar1) {
          uVar10 = 0x4719a2;
          fVar9 = (float10)round
                                     ((float10)__BITCAST_DOUBLE(CONCAT44(SUB84(__BITCAST_UINT64(dVar11),0),uVar12)) +
                                      (float10)0.5);
          engine_3d_c_setRenderAlpha_FUN_00408370(0xffff,uVar10);
          engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_00490e30
                    (_DAT_01bcd070,_DAT_01c00c58,_DAT_01c00c60,_DAT_01c00c64 - _DAT_01bcd9bc,
                     _DAT_01bcddec,0xffffffff,"%d:%02d elapsed, approximately %d:%02d remaining",
                     (int)ROUND(fVar9) / 0x3c,(int)ROUND(fVar9) % 0x3c,iVar1 / 0x3c,iVar1 % 0x3c);
        }
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    iVar1 = (_DAT_01bcd07c + -1) * 0x1d8;
    *(float *)(iVar1 + 0x1bcd250) = local_2c;
    *(float *)(iVar1 + 0x1bcd254) = local_30;
  }
  return;
}
