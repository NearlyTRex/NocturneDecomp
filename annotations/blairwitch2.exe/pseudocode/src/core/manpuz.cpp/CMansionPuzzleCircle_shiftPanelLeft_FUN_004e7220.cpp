// Name: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004e7220
// Address: 004e7220
// Address Range: [[004e7220, 004e73b7]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004e7220(CMansionPuzzleCircle *this_ptr,int panel_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004e7220(CMansionPuzzleCircle *this_ptr,int panel_index)

{
  SPanel *pSVar1;
  int iVar2;
  SPanel *pSVar3;
  
  iVar2 = core_manpuz_cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004e7570(this_ptr,panel_index);
  pSVar1 = this_ptr->panels + panel_index;
  pSVar3 = this_ptr->panels + iVar2;
  if ((((pSVar1->exists == 0) || (pSVar3->exists != 0)) || (ABS(pSVar1->anim_progress) != 0.0)) ||
     (ABS(pSVar1->anim_speed) != 0.0)) {
    _DAT_01d046a0 = "..\\core\\manpuz.cpp";
    _DAT_01d046a4 = 0x554;
    core_main_c_FUN_004e4500("CMansionPuzzleCircle::shiftPanelLeft - fubared.");
  }
  pSVar3->exists = pSVar1->exists;
  pSVar3->anim_progress = pSVar1->anim_progress;
  pSVar3->anim_speed = pSVar1->anim_speed;
  if (&pSVar3->local_position != &pSVar1->local_position) {
    (pSVar3->local_position).x = (pSVar1->local_position).x;
    (pSVar3->local_position).y = (pSVar1->local_position).y;
    (pSVar3->local_position).z = (pSVar1->local_position).z;
  }
  if (&pSVar3->rotation != &pSVar1->rotation) {
    (pSVar3->rotation).x = (pSVar1->rotation).x;
    (pSVar3->rotation).y = (pSVar1->rotation).y;
    (pSVar3->rotation).z = (pSVar1->rotation).z;
  }
  (pSVar3->rotation_matrix).m[0].x = (pSVar1->rotation_matrix).m[0].x;
  (pSVar3->rotation_matrix).m[0].y = (pSVar1->rotation_matrix).m[0].y;
  (pSVar3->rotation_matrix).m[0].z = (pSVar1->rotation_matrix).m[0].z;
  (pSVar3->rotation_matrix).m[1].x = (pSVar1->rotation_matrix).m[1].x;
  (pSVar3->rotation_matrix).m[1].y = (pSVar1->rotation_matrix).m[1].y;
  (pSVar3->rotation_matrix).m[1].z = (pSVar1->rotation_matrix).m[1].z;
  (pSVar3->rotation_matrix).m[2].x = (pSVar1->rotation_matrix).m[2].x;
  (pSVar3->rotation_matrix).m[2].y = (pSVar1->rotation_matrix).m[2].y;
  (pSVar3->rotation_matrix).m[2].z = (pSVar1->rotation_matrix).m[2].z;
  pSVar3->dead = pSVar1->dead;
  (pSVar3->color).r = (pSVar1->color).r;
  (pSVar3->color).g = (pSVar1->color).g;
  (pSVar3->color).b = (pSVar1->color).b;
  if (&pSVar3->world_position != &pSVar1->world_position) {
    (pSVar3->world_position).x = (pSVar1->world_position).x;
    (pSVar3->world_position).y = (pSVar1->world_position).y;
    (pSVar3->world_position).z = (pSVar1->world_position).z;
  }
  pSVar1->exists = 0;
  pSVar3->anim_progress = 1.0;
  pSVar3->anim_speed = -1.0;
  core_manpuz_cpp_FUN_004e6240(this_ptr,iVar2);
  sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
  sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00550170(&pSVar3->world_position);
  sound_sndmain_cpp_FUN_005506b0("manpuz-doorslide.wav");
  sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
  return;
}
