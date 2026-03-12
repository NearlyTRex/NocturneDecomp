// Name: core_morph.cpp_CMorph_previewMorph_FUN_0052ca90
// Address: 0052ca90
// Address Range: [[0052ca90, 0052cc08]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_previewMorph_FUN_0052ca90(CMorph *this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_previewMorph_FUN_0052ca90(CMorph *this_ptr)

{
  int iVar1;
  int iVar2;
  float fStack_18;
  float local_14;
  
  local_14 = 0.0;
  shape_spotview_cpp_CSpotView_reset_FUN_005b9620(g_CSpotViewPtr,0x1f);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  while( true ) {
    if (local_14 < 0.0) {
      local_14 = 0.0;
    }
    if (1.0 < local_14) {
      local_14 = 1.0;
    }
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,4);
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    shape_spotview_cpp_CSpotView_applyCamera_FUN_005b9a20(g_CSpotViewPtr);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&g_ZeroVector.f);
    core_morph_cpp_CMorph_render_FUN_0052bae0(this_ptr,local_14);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
    shape_spotview_cpp_CSpotView_handleInput_FUN_005b9670(g_CSpotViewPtr,0x1f);
    iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar1 != 0) break;
    fStack_18 = g_CGamePtr->delta_time_float * (float)2;
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
    if (iVar2 != 0) {
      fStack_18 = fStack_18 * (float)0.33333333333333298;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_COMMA);
    if (iVar2 != 0) {
      local_14 = local_14 - fStack_18;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_PERIOD);
    if (iVar2 != 0) {
      local_14 = local_14 + fStack_18;
    }
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
