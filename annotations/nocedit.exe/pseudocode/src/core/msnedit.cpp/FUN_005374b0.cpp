// Name: core_msnedit.cpp_FUN_005374b0
// Address: 005374b0
// Address Range: [[005374b0, 00537521]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_FUN_005374b0(int unk)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_FUN_005374b0(int unk)

{
  int y;
  
  if ((unk < 3) && (-1 < unk)) {
    if (unk == 2) {
      y = 0;
      goto LAB_005374d8;
    }
  }
  else {
    unk = 0;
  }
  y = 0x101;
LAB_005374d8:
  core_script_cpp_CScript_initEditorLayout_FUN_00566660
            (g_CScriptPtr,0,y,g_WindowWidth + -1,g_WindowHeight + -1);
  DAT_02f7c634 = unk;
  core_msnedit_cpp_CDemonMission_editActorProperties_FUN_00539060(g_CDemonMissionPtr,1);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
