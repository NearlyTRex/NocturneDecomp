// Name: core_msnedit.cpp_setEditorLayoutMode_FUN_005374b0
// Address: 005374b0
// Address Range: [[005374b0, 00537521]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_setEditorLayoutMode_FUN_005374b0(int layout_mode)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_setEditorLayoutMode_FUN_005374b0(int layout_mode)

{
  int y;
  
  if ((layout_mode < 3) && (-1 < layout_mode)) {
    if (layout_mode == 2) {
      y = 0;
      goto LAB_005374d8;
    }
  }
  else {
    layout_mode = 0;
  }
  y = 0x101;
LAB_005374d8:
  core_script_cpp_CScript_initEditorLayout_FUN_00566660
            (g_CScriptPtr,0,y,g_WindowWidth + -1,g_WindowHeight + -1);
  INT_02f7c634 = layout_mode;
  core_msnedit_cpp_CDemonMission_editActorProperties_FUN_00539060(g_CDemonMissionPtr,1);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
