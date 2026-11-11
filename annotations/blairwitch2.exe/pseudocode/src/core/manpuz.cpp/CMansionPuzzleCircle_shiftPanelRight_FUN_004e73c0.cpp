// Name: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_004e73c0
// Address: 004e73c0
// Address Range: [[004e73c0, 004e746e]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_004e73c0(CMansionPuzzleCircle *this_ptr,int panel_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_004e73c0(CMansionPuzzleCircle *this_ptr,int panel_index)

{
  SPanel *pSVar1;
  int iVar2;
  
  pSVar1 = this_ptr->panels + panel_index;
  iVar2 = core_manpuz_cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004e7560(this_ptr,panel_index);
  if ((((pSVar1->exists == 0) || (this_ptr->panels[iVar2].exists != 0)) ||
      (ABS(pSVar1->anim_progress) != 0.0)) || (ABS(pSVar1->anim_speed) != 0.0)) {
    _DAT_01d046a0 = "..\\core\\manpuz.cpp";
    _DAT_01d046a4 = 0x57d;
    core_main_c_FUN_004e4500("CMansionPuzzleCircle::shiftPanelRight - fubared.");
  }
  pSVar1->anim_speed = 1.0;
  sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
  sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00550170(&pSVar1->world_position);
  sound_sndmain_cpp_FUN_005506b0("manpuz-doorslide.wav");
  sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
  return;
}
