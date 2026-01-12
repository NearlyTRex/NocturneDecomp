// Name: core_morph.cpp_FUN_0052ca90
// Address: 0052ca90
// Address Range: [[0052ca90, 0052cc08]]
// Convention: unknown
// Signature: undefined core_morph.cpp_FUN_0052ca90()

#include "nocturne.h"

/* Signature: byte core_morph.cpp_FUN_0052ca90(uint param_1) */

void core_morph_cpp_FUN_0052ca90(void)

{
  int iVar1;
  CMorphModel *in_stack_00000004;
  CGame *in_stack_ffffffe8;
  float fVar2;
  float local_14;
  
  local_14 = 0.0;
  shape_spotview_cpp_CSpotView_FUN_005b9620(g_CSpotViewPtr);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_ffffffe8);
  while( true ) {
    if (local_14 < 0.0) {
      local_14 = 0.0;
    }
    if (1.0 < local_14) {
      local_14 = 1.0;
    }
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,4);
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    shape_spotview_cpp_CSpotView_FUN_005b9a20(g_CSpotViewPtr);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,&g_ZeroVector);
    core_morph_cpp_CMorphModel_FUN_0052bae0(in_stack_00000004);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    shape_spotview_cpp_CSpotView_FUN_005b9670(g_CSpotViewPtr);
    iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar1 != 0) break;
    fVar2 = g_CGamePtr->delta_time_float * (float)2;
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
    if (iVar1 != 0) {
      fVar2 = fVar2 * (float)0.33333333333333298;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x33);
    if (iVar1 != 0) {
      local_14 = local_14 - fVar2;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x34);
    if (iVar1 != 0) {
      local_14 = local_14 + fVar2;
    }
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
