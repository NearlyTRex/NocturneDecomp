// Name: shape_edittool.cpp_CEditorTools_updatePercentage_FUN_0047dc40
// Address: 0047dc40
// Address Range: [[0047dc40, 0047e1c2]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_updatePercentage_FUN_0047dc40(CEditorTools *this_ptr,float current_progress,float total_progress)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0047e147) */
/* WARNING: Removing unreachable block (ram,0x0047e1a2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_updatePercentage_FUN_0047dc40(CEditorTools *this_ptr,float current_progress,float total_progress)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int y1;
  int iVar8;
  int y2;
  int x1;
  double dVar9;
  double dVar10;
  uint uVar11;
  float local_58;
  float local_54;
  int local_30;
  int local_24;
  
  if (_DAT_01c2559c < 1) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0x795;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CEditorTools::updatePercentageWindow - no window open!");
  }
  local_54 = 0.0;
  if (0.0 < total_progress) {
    if (current_progress < 0.0) {
      current_progress = 0.0;
    }
    if (total_progress < current_progress) {
      current_progress = total_progress;
    }
    local_54 = current_progress / total_progress;
  }
  uVar11 = 0x47dcaa;
  dVar9 = round
                    ((double)(local_54 * (float)_DAT_005d2337 + (float)_DAT_005d233f));
  iVar7 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  iVar1 = (_DAT_01c2559c + -1) * 0x1f8;
  if (((int)ROUND(dVar9) != *(int *)(iVar1 + 0x1c25790)) ||
     (0x47ffff < iVar7 - *(int *)(iVar1 + 0x1c25794))) {
    shape_edittool_cpp_FUN_0047e870(this_ptr,uVar11);
    engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
    engine_mini3d_cpp_setAlpha_FUN_004f3570(1.0);
    engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004a93f0
              (_DAT_01c25590,_DAT_01c35e48,_DAT_01c35e50,_DAT_01c35e4c,_DAT_01c263b8,-1,
               "%d%% complete");
    iVar3 = _DAT_01c35e50;
    iVar7 = _DAT_01c35e48;
    uVar5 = _DAT_01c263c4;
    y1 = _DAT_01c25f7c * 2 + _DAT_01c35e4c;
    iVar1 = y1 + 1;
    x1 = _DAT_01c35e48 + 1;
    local_30 = _DAT_01c35e50 + -1;
    iVar8 = _DAT_01c25f7c * 4 + _DAT_01c35e4c;
    y2 = iVar8 + -1;
    if (_DAT_01c25f84 == 0) {
      engine_2d_c_fillRectWithBorder_FUN_00403250(x1,iVar1,local_30,y2,_DAT_01c263c4,_DAT_01c263cc);
    }
    else {
      iVar2 = (_DAT_01c263cc & 0xff) * 3;
      engine_mini3d_cpp_setColor_FUN_004f8e20
                ((uint)(byte)(&DAT_01c35839)[iVar2] << 8 |
                 (uint)(byte)(&DAT_01c35838)[iVar2] << 0x10 | (uint)(byte)(&DAT_01c3583a)[iVar2]);
      engine_mini3d_cpp_drawRect_FUN_004f9340(iVar7,y1,iVar3,iVar8);
      if (_DAT_01c25f84 == 0) {
        _DAT_01c35e60 = uVar5;
      }
      else {
        iVar8 = (uVar5 & 0xff) * 3;
        engine_mini3d_cpp_setColor_FUN_004f8e20
                  ((uint)(byte)(&DAT_01c35838)[iVar8] << 0x10 |
                   (uint)(byte)(&DAT_01c35839)[iVar8] << 8 | (uint)(byte)(&DAT_01c3583a)[iVar8]);
      }
      engine_mini3d_cpp_fillRect_FUN_004f90d0(x1,iVar1,local_30,y2);
    }
    uVar6 = _DAT_01c263d0;
    if (_DAT_01c25f84 != 0) {
      iVar8 = (_DAT_01c263d0 & 0xff) * 3;
      engine_mini3d_cpp_setColor_FUN_004f8e20
                ((uint)(byte)(&DAT_01c3583a)[iVar8] |
                 (uint)(byte)(&DAT_01c35838)[iVar8] << 0x10 |
                 (uint)(byte)(&DAT_01c35839)[iVar8] << 8);
      uVar6 = _DAT_01c35e60;
    }
    _DAT_01c35e60 = uVar6;
    if (_DAT_01c25f84 == 0) {
      engine_2d_c_drawHLine_FUN_00402f30(iVar7,y1,local_30);
    }
    else {
      engine_mini3d_cpp_drawHLine_FUN_004f9390(iVar7,y1,local_30);
    }
    if (_DAT_01c25f84 == 0) {
      engine_2d_c_drawVLine_FUN_00403040(iVar7,y1,y2);
    }
    else {
      engine_mini3d_cpp_drawVLine_FUN_004f93b0(iVar7,y1,y2);
    }
    dVar9 = round
                      ((double)((float)((local_30 - x1) + 1) * local_58 + (float)_DAT_005d233f));
    iVar7 = (int)ROUND(dVar9) + x1;
    if (x1 < iVar7) {
      if (local_30 <= iVar7) {
        iVar7 = iVar3 + -2;
      }
      if (_DAT_01c25f84 == 0) {
        engine_2d_c_fillRectColor_FUN_004031c0(x1,iVar1,iVar7,local_24,_DAT_01c263c8);
      }
      else {
        iVar3 = (_DAT_01c263c8 & 0xff) * 3;
        engine_mini3d_cpp_setColor_FUN_004f8e20
                  ((uint)(byte)(&DAT_01c3583a)[iVar3] |
                   (uint)(byte)(&DAT_01c35838)[iVar3] << 0x10 |
                   (uint)(byte)(&DAT_01c35839)[iVar3] << 8);
        engine_mini3d_cpp_fillRect_FUN_004f90d0(x1,iVar1,iVar7,local_24);
      }
    }
    if (0 < (int)uVar5) {
      fVar4 = (float)(x1 - *(int *)((_DAT_01c2559c + -1) * 0x1f8 + 0x1c2578c)) *
              (float)_DAT_005d2347;
      dVar9 = (double)fVar4;
      if ((float)_DAT_005d234f < fVar4) {
        uVar11 = 0x47e02c;
        dVar10 = round
                           ((double)(((total_progress - current_progress) * fVar4) /
                                     current_progress + (float)_DAT_005d233f));
        if (0 < (int)ROUND(dVar10)) {
          local_30 = (int)ROUND(dVar10) % 0x3c;
          round(__BITCAST_DOUBLE(CONCAT44(SUB84(__BITCAST_UINT64(dVar9),0),uVar11)) + _DAT_005d233f);
          engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
          engine_mini3d_cpp_setAlpha_FUN_004f3570(1.0);
          engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004a93f0
                    (_DAT_01c25590,_DAT_01c35e48,_DAT_01c35e50,_DAT_01c35e54 - _DAT_01c25f7c,
                     _DAT_01c263b8,-1,"%d:%02d elapsed, approximately %d:%02d remaining");
        }
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
    iVar7 = (_DAT_01c2559c + -1) * 0x1f8;
    *(int *)(iVar7 + 0x1c25790) = local_30;
    *(int *)(iVar7 + 0x1c25794) = iVar1;
  }
  return;
}
