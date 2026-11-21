// Name: shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004962b0
// Address: 004962b0
// Address Range: [[004962b0, 00496832]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004962b0(CEditorTools *this_ptr,float current_progress,float total_progress)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004967b7) */
/* WARNING: Removing unreachable block (ram,0x00496812) */

void __cdecl shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004962b0(CEditorTools *this_ptr,float current_progress,float total_progress)

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
  
  if (g_WindowStackCount < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 2029;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CEditorTools::updatePercentageWindow - no window open!");
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
  iVar5 = wincore_winrun_cpp_getTime_FUN_005b2420();
  iVar1 = (g_WindowStackCount + -1) * 0x1f8;
  if (((int)ROUND(dVar8) != *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar1 + 0x1f0)) ||
     (0x47ffff < iVar5 - *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar1 + 500))) {
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_00496ee0(this_ptr);
    engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
    engine_mini3d_cpp_setAlpha_FUN_00512320(1.0);
    engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004c23a0
              (g_CBitFont_PTR_01c3eb50,g_INT_01c4f008,g_ClipRight,g_INT_01c4f00c,
               g_WindowStatusTextColor,-1,"%d%% complete");
    iVar3 = g_ClipRight;
    iVar7 = g_INT_01c4f008;
    iVar5 = g_ProgressBarBackgroundColor;
    y1 = g_INT_01c3f53c * 2 + g_INT_01c4f00c;
    iVar1 = y1 + 1;
    x1 = g_INT_01c4f008 + 1;
    local_30 = g_ClipRight + -1;
    iVar6 = g_INT_01c3f53c * 4 + g_INT_01c4f00c;
    y2 = iVar6 + -1;
    if (g_INT_01c3f544 == 0) {
      engine_2d_c_fillRectWithBorder_FUN_00403250
                (x1,iVar1,local_30,y2,g_ProgressBarBackgroundColor,g_ProgressBarBorderColor);
    }
    else {
      iVar2 = (g_ProgressBarBorderColor & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_00517d50
                ((uint)g_UCHAR_ARRAY_01c4e9f8[iVar2 + 1] << 8 |
                 (uint)g_UCHAR_ARRAY_01c4e9f8[iVar2] << 0x10 |
                 (uint)g_UCHAR_ARRAY_01c4e9f8[iVar2 + 2]);
      engine_mini3d_cpp_drawRect_FUN_00518290(iVar7,y1,iVar3,iVar6);
      if (g_INT_01c3f544 == 0) {
        g_INT_01c4f020 = iVar5;
      }
      else {
        iVar6 = (iVar5 & 0xffU) * 3;
        engine_mini3d_cpp_setColor_FUN_00517d50
                  ((uint)g_UCHAR_ARRAY_01c4e9f8[iVar6] << 0x10 |
                   (uint)g_UCHAR_ARRAY_01c4e9f8[iVar6 + 1] << 8 |
                   (uint)g_UCHAR_ARRAY_01c4e9f8[iVar6 + 2]);
      }
      engine_mini3d_cpp_fillRect_FUN_00518010(x1,iVar1,local_30,y2);
    }
    iVar6 = g_INT_01c3f590;
    if (g_INT_01c3f544 != 0) {
      iVar6 = (g_INT_01c3f590 & 0xffU) * 3;
      engine_mini3d_cpp_setColor_FUN_00517d50
                ((uint)g_UCHAR_ARRAY_01c4e9f8[iVar6 + 2] |
                 (uint)g_UCHAR_ARRAY_01c4e9f8[iVar6] << 0x10 |
                 (uint)g_UCHAR_ARRAY_01c4e9f8[iVar6 + 1] << 8);
      iVar6 = g_INT_01c4f020;
    }
    g_INT_01c4f020 = iVar6;
    if (g_INT_01c3f544 == 0) {
      engine_2d_c_drawHLine_FUN_00402f30(iVar7,y1,local_30);
    }
    else {
      engine_mini3d_cpp_drawHLine_FUN_005182e0(iVar7,y1,local_30);
    }
    if (g_INT_01c3f544 == 0) {
      engine_2d_c_drawVLine_FUN_00403040(iVar7,y1,y2);
    }
    else {
      engine_mini3d_cpp_drawVLine_FUN_00518300(iVar7,y1,y2);
    }
    dVar8 = round
                      ((double)((float)((local_30 - x1) + 1) * local_58 + (float)0.5))
    ;
    iVar7 = (int)ROUND(dVar8) + x1;
    if (x1 < iVar7) {
      if (local_30 <= iVar7) {
        iVar7 = iVar3 + -2;
      }
      if (g_INT_01c3f544 == 0) {
        engine_2d_c_fillRectColor_FUN_004031c0(x1,iVar1,iVar7,local_24,g_ProgressBarFillColor);
      }
      else {
        iVar3 = (g_ProgressBarFillColor & 0xffU) * 3;
        engine_mini3d_cpp_setColor_FUN_00517d50
                  ((uint)g_UCHAR_ARRAY_01c4e9f8[iVar3 + 2] |
                   (uint)g_UCHAR_ARRAY_01c4e9f8[iVar3] << 0x10 |
                   (uint)g_UCHAR_ARRAY_01c4e9f8[iVar3 + 1] << 8);
        engine_mini3d_cpp_fillRect_FUN_00518010(x1,iVar1,iVar7,local_24);
      }
    }
    if (0 < iVar5) {
      fVar4 = (float)(x1 - *(int *)((int)g_SWindow_ARRAY_01c3eb60 +
                                   (g_WindowStackCount + -1) * 0x1f8 + 0x1ec)) *
              (float)8.4771050347222196e-07;
      dVar8 = (double)fVar4;
      if ((float)5 < fVar4) {
        uVar10 = 0x49669c;
        dVar9 = round
                          ((double)(((total_progress - current_progress) * fVar4) / current_progress
                                   + (float)0.5));
        if (0 < (int)ROUND(dVar9)) {
          local_30 = (int)ROUND(dVar9) % 0x3c;
          round(__BITCAST_DOUBLE(CONCAT44(SUB84(__BITCAST_UINT64(dVar8),0),uVar10)) + 0.5)
          ;
          engine_3d_c_setRenderAlpha_FUN_00406bd0(0xffff);
          engine_mini3d_cpp_setAlpha_FUN_00512320(1.0);
          engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004c23a0
                    (g_CBitFont_PTR_01c3eb50,g_INT_01c4f008,g_ClipRight,
                     g_INT_01c4f014 - g_INT_01c3f53c,g_WindowStatusTextColor,-1,
                     "%d:%02d elapsed, approximately %d:%02d remaining");
        }
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
    iVar5 = (g_WindowStackCount + -1) * 0x1f8;
    *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 0x1f0) = local_30;
    *(int *)((int)g_SWindow_ARRAY_01c3eb60 + iVar5 + 500) = iVar1;
  }
  return;
}
