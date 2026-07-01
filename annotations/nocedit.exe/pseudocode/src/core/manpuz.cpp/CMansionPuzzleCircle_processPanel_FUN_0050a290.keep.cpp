// Name: core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290
// Address: 0050a290
// MANUAL RECONSTRUCTION
// Address Range: [[0050a290, 0050a41c]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290(CMansionPuzzleCircle *this_ptr,int panel_index,float delta_time)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290(CMansionPuzzleCircle *this_ptr,int panel_index,float delta_time)

{
  float fVar1;
  int iVar2;
  SPanel *pSVar3;
  SPanel *pSVar4;
  
  pSVar3 = this_ptr->panels + panel_index;
  if (pSVar3->exists != 0) {
    fVar1 = (pSVar3->anim_speed * delta_time) / 2.0f + pSVar3->anim_progress;
    pSVar3->anim_progress = fVar1;
    if (fVar1 < 0.0) {
      pSVar3->anim_speed = 0.0;
      pSVar3->anim_progress = 0.0;
    }
    if (1.0 <= pSVar3->anim_progress) {
      iVar2 = core_manpuz_cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_0050aee0
                        (this_ptr,panel_index);
      pSVar4 = this_ptr->panels + iVar2;
      if (pSVar4->exists != 0) {
        g_CurrentFilename = "..\\core\\manpuz.cpp";
        g_CurrentLineNumber = 1117;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CMansionPuzzleCircle::processPanel - Panel collision!");
      }
      *pSVar4 = *pSVar3;
      pSVar4->anim_speed = 0.0;
      pSVar4->anim_progress = 0.0;
      pSVar3->exists = 0;
      goto LAB_0050a40b;
    }
  }
  if (pSVar3->exists != 0) {
    return;
  }
LAB_0050a40b:
  pSVar3->anim_speed = 0.0;
  pSVar3->anim_progress = 0.0;
  return;
}
