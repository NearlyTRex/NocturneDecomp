// Name: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0
// Address: 0050aba0
// MANUAL RECONSTRUCTION
// Address Range: [[0050aba0, 0050ad37]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0(CMansionPuzzleCircle *this_ptr,int panel_index)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0(CMansionPuzzleCircle *this_ptr,int panel_index)

{
  int panel_index_00;
  SPanel *pSVar2;
  SPanel *pSVar1;
  
  panel_index_00 =
       core_manpuz_cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_0050aef0(this_ptr,panel_index);
  pSVar1 = this_ptr->panels + panel_index;
  pSVar2 = this_ptr->panels + panel_index_00;
  if ((((pSVar1->exists == 0) || (pSVar2->exists != 0)) || (ABS(pSVar1->anim_progress) != 0.0)) ||
     (ABS(pSVar1->anim_speed) != 0.0)) {
    g_CurrentFilename = "..\\core\\manpuz.cpp";
    g_CurrentLineNumber = 0x554;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMansionPuzzleCircle::shiftPanelLeft - fubared.");
  }
  *pSVar2 = *pSVar1;
  pSVar1->exists = 0;
  pSVar2->anim_progress = 1.0;
  pSVar2->anim_speed = -1.0;
  core_manpuz_cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_00509b20(this_ptr,panel_index_00);
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940(&pSVar2->world_position);
  sound_sndmain_cpp_startSfx_FUN_005a8e90("manpuz-doorslide.wav");
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return;
}
