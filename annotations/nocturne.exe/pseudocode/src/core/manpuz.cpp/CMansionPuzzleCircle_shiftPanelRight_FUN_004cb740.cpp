// Name: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_004cb740
// Address: 004cb740
// Address Range: [[004cb740, 004cb7ee]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_004cb740(CMansionPuzzleCircle *this_ptr,int panel_index)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_004cb740(CMansionPuzzleCircle *this_ptr,int panel_index)

{
  SPanel *pSVar1;
  int iVar2;
  
  pSVar1 = this_ptr->panels + panel_index;
  iVar2 = core_manpuz_cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004cb8e0(this_ptr,panel_index);
  if ((((pSVar1->exists == 0) || (this_ptr->panels[iVar2].exists != 0)) ||
      (ABS(pSVar1->anim_progress) != 0.0)) || (ABS(pSVar1->anim_speed) != 0.0)) {
    g_CurrentFilename = "..\\core\\manpuz.cpp";
    g_CurrentLineNumber = 1405;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CMansionPuzzleCircle::shiftPanelRight - fubared.");
  }
  pSVar1->anim_speed = 1.0;
  sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
  sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0(&pSVar1->world_position);
  sound_sndmain_cpp_startSfx_FUN_005265a0("manpuz-doorslide.wav");
  sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  return;
}
