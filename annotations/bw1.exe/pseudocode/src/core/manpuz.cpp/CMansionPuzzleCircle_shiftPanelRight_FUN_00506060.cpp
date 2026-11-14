// Name: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_00506060
// Address: 00506060
// Address Range: [[00506060, 0050610e]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_00506060(CMansionPuzzleCircle *this_ptr,int panel_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_00506060(CMansionPuzzleCircle *this_ptr,int panel_index)

{
  SPanel *pSVar1;
  int iVar2;
  
  pSVar1 = this_ptr->panels + panel_index;
  iVar2 = core_manpuz_cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_00506200(this_ptr,panel_index);
  if ((((pSVar1->exists == 0) || (this_ptr->panels[iVar2].exists != 0)) ||
      (ABS(pSVar1->anim_progress) != 0.0)) || (ABS(pSVar1->anim_speed) != 0.0)) {
    _DAT_01d1d400 = "..\\core\\manpuz.cpp";
    _DAT_01d1d404 = 0x57d;
    core_main_c_FUN_005030e0("CMansionPuzzleCircle::shiftPanelRight - fubared.");
  }
  pSVar1->anim_speed = 1.0;
  sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
  sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005727e0(&pSVar1->world_position);
  sound_sndmain_cpp_startSfx_FUN_00572d20("manpuz-doorslide.wav");
  sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
  return;
}
