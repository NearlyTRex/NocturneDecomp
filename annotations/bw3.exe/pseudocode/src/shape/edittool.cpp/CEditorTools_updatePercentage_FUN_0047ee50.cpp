// Name: shape_edittool.cpp_CEditorTools_updatePercentage_FUN_0047ee50
// Address: 0047ee50
// Address Range: [[0047ee50, 0047f3d2]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_updatePercentage_FUN_0047ee50(CEditorTools *this_ptr,float current_progress,float total_progress)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0047f357) */
/* WARNING: Removing unreachable block (ram,0x0047f3b2) */

void __cdecl shape_edittool_cpp_CEditorTools_updatePercentage_FUN_0047ee50(CEditorTools *this_ptr,float current_progress,float total_progress)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int y1;
  int iVar6;
  int y2;
  int iVar7;
  int x1;
  double dVar8;
  double dVar9;
  uint uVar10;
  float local_58;
  float local_54;
  int local_30;
  int local_24;
  
  if (g_INT_01c5b104 < 1) {
    g_CHAR_PTR_01d71de0 = "..\\shape\\edittool.cpp";
    g_INT_01d71de4 = 0x7f0;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CEditorTools::updatePercentageWindow - no window open!");
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
  dVar8 = round
                    ((double)(local_54 * (float)100 + (float)0.5));
  iVar5 = wincore_winrun_cpp_getTime_FUN_005806a0();
  iVar1 = (g_INT_01c5b104 + -1) * 0x1f8;
  if (((int)ROUND(dVar8) != *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar1 + 0x1f0)) ||
     (0x47ffff < iVar5 - *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar1 + 500))) {
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_0047fa80(this_ptr);
    engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
    engine_mini3d_cpp_setAlpha_FUN_004edaf0(1.0);
    engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004b0ff0
              (g_CBitFont_PTR_01c5b0e0,g_INT_01c6b5a8,g_INT_01c6b5b0,g_INT_01c6b5ac,g_INT_01c5bb20,
               -1,"%d%% complete");
    iVar3 = g_INT_01c6b5b0;
    iVar7 = g_INT_01c6b5a8;
    iVar5 = g_INT_01c5bb2c;
    y1 = g_INT_01c5bae4 * 2 + g_INT_01c6b5ac;
    iVar1 = y1 + 1;
    x1 = g_INT_01c6b5a8 + 1;
    local_30 = g_INT_01c6b5b0 + -1;
    iVar6 = g_INT_01c5bae4 * 4 + g_INT_01c6b5ac;
    y2 = iVar6 + -1;
    if (g_INT_01c5baec == 0) {
      engine_2d_c_fillRectWithBorder_FUN_00403250
                (x1,iVar1,local_30,y2,g_INT_01c5bb2c,g_INT_01c5bb34);
    }
    else {
      iVar2 = (g_INT_01c5bb34 & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_004f3520
                ((uint)g_UCHAR_ARRAY_01c6af98[iVar2 + 1] << 8 |
                 (uint)g_UCHAR_ARRAY_01c6af98[iVar2] << 0x10 |
                 (uint)g_UCHAR_ARRAY_01c6af98[iVar2 + 2]);
      engine_mini3d_cpp_drawRect_FUN_004f3a60(iVar7,y1,iVar3,iVar6);
      if (g_INT_01c5baec == 0) {
        g_INT_01c6b5c0 = iVar5;
      }
      else {
        iVar6 = (iVar5 & 0xffU) * 3;
        engine_mini3d_cpp_setColor_FUN_004f3520
                  ((uint)g_UCHAR_ARRAY_01c6af98[iVar6] << 0x10 |
                   (uint)g_UCHAR_ARRAY_01c6af98[iVar6 + 1] << 8 |
                   (uint)g_UCHAR_ARRAY_01c6af98[iVar6 + 2]);
      }
      engine_mini3d_cpp_fillRect_FUN_004f37e0(x1,iVar1,local_30,y2);
    }
    iVar6 = g_INT_01c5bb38;
    if (g_INT_01c5baec != 0) {
      iVar6 = (g_INT_01c5bb38 & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_004f3520
                ((uint)g_UCHAR_ARRAY_01c6af98[iVar6 + 2] |
                 (uint)g_UCHAR_ARRAY_01c6af98[iVar6] << 0x10 |
                 (uint)g_UCHAR_ARRAY_01c6af98[iVar6 + 1] << 8);
      iVar6 = g_INT_01c6b5c0;
    }
    g_INT_01c6b5c0 = iVar6;
    if (g_INT_01c5baec == 0) {
      engine_2d_c_drawHLine_FUN_00402f30(iVar7,y1,local_30);
    }
    else {
      engine_mini3d_cpp_drawHLine_FUN_004f3ab0(iVar7,y1,local_30);
    }
    if (g_INT_01c5baec == 0) {
      engine_2d_c_drawVLine_FUN_00403040(iVar7,y1,y2);
    }
    else {
      engine_mini3d_cpp_drawVLine_FUN_004f3ad0(iVar7,y1,y2);
    }
    dVar8 = round
                      ((double)((float)((local_30 - x1) + 1) * local_58 + (float)0.5))
    ;
    iVar7 = (int)ROUND(dVar8) + x1;
    if (x1 < iVar7) {
      if (local_30 <= iVar7) {
        iVar7 = iVar3 + -2;
      }
      if (g_INT_01c5baec == 0) {
        engine_2d_c_fillRectColor_FUN_004031c0(x1,iVar1,iVar7,local_24,g_INT_01c5bb30);
      }
      else {
        iVar3 = (g_INT_01c5bb30 & 0xffU) * 3;
        engine_mini3d_cpp_setColor_FUN_004f3520
                  ((uint)g_UCHAR_ARRAY_01c6af98[iVar3 + 2] |
                   (uint)g_UCHAR_ARRAY_01c6af98[iVar3] << 0x10 |
                   (uint)g_UCHAR_ARRAY_01c6af98[iVar3 + 1] << 8);
        engine_mini3d_cpp_fillRect_FUN_004f37e0(x1,iVar1,iVar7,local_24);
      }
    }
    if (0 < iVar5) {
      fVar4 = (float)(x1 - *(int *)((int)g_SWindow_ARRAY_01c5b108 +
                                   (g_INT_01c5b104 + -1) * 0x1f8 + 0x1ec)) *
              (float)8.4771050347222196e-07;
      dVar8 = (double)fVar4;
      if ((float)5 < fVar4) {
        uVar10 = 0x47f23c;
        dVar9 = round
                          ((double)(((total_progress - current_progress) * fVar4) / current_progress
                                   + (float)0.5));
        if (0 < (int)ROUND(dVar9)) {
          local_30 = (int)ROUND(dVar9) % 0x3c;
          round(__BITCAST_DOUBLE(CONCAT44(SUB84(__BITCAST_UINT64(dVar8),0),uVar10)) + 0.5)
          ;
          engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
          engine_mini3d_cpp_setAlpha_FUN_004edaf0(1.0);
          engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004b0ff0
                    (g_CBitFont_PTR_01c5b0e0,g_INT_01c6b5a8,g_INT_01c6b5b0,
                     g_INT_01c6b5b4 - g_INT_01c5bae4,g_INT_01c5bb20,-1,
                     "%d:%02d elapsed, approximately %d:%02d remaining");
        }
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
    iVar5 = (g_INT_01c5b104 + -1) * 0x1f8;
    *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 0x1f0) = local_30;
    *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar5 + 500) = iVar1;
  }
  return;
}
