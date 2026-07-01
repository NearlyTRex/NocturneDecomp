// Name: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40
// Address: 0050ad40
// Address Range: [[0050ad40, 0050adee]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40(CMansionPuzzleCircle *this_ptr,int panel_index)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40(CMansionPuzzleCircle *this_ptr,int panel_index)

{
  SPanel *pSVar1;
  int iVar2;
  
  pSVar1 = this_ptr->panels + panel_index;
  iVar2 = core_manpuz_cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_0050aee0(this_ptr,panel_index);
  if ((((pSVar1->exists == 0) || (this_ptr->panels[iVar2].exists != 0)) ||
      (ABS(pSVar1->anim_progress) != 0.0)) || (ABS(pSVar1->anim_speed) != 0.0)) {
    g_CurrentFilename = "..\\core\\manpuz.cpp";
    g_CurrentLineNumber = 1405;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMansionPuzzleCircle::shiftPanelRight - fubared.");
  }
  pSVar1->anim_speed = 1.0;
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940(&pSVar1->world_position);
  sound_sndmain_cpp_startSfx_FUN_005a8e90("manpuz-doorslide.wav");
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return;
}
