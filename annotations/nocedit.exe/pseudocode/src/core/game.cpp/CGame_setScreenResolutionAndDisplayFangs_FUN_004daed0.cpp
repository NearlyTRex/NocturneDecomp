// Name: core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0
// Address: 004daed0
// Address Range: [[004daed0, 004daf74]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(CGame * this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(CGame *this_ptr)

{
  BADSPACEBASE *in_ESP;
  char *in_stack_00000008;
  
  engine_2d_c_reinitializeGraphicsSystem_FUN_005ed4b0();
  if ((g_WindowHeight != 0x1e0) || (*(int *)(in_stack_00000008 + 8) != 0x20)) {
    wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0(0x280,0x1e0,0x20);
  }
  if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) == 0) {
    g_EditorFont = g_ThemeFont;
  }
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520((CAlphaBitmap *)&stack0xfffffff4);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            ((CAlphaBitmap *)&stack0xfffffff8,"fangs",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950((CAlphaBitmap *)&stack0xfffffffc,0,0,0x8000)
  ;
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540((CAlphaBitmap *)&this_ptr);
  return;
}
