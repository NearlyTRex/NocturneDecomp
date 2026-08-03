// Name: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004cb5a0
// Address: 004cb5a0
// Address Range: [[004cb5a0, 004cb737]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004cb5a0(CMansionPuzzleCircle *this_ptr,int panel_index)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004cb5a0(CMansionPuzzleCircle *this_ptr,int panel_index)

{
  SPanel *pSVar1;
  int panel_index_00;
  SPanel *pSVar2;
  
  panel_index_00 =
       core_manpuz_cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004cb8f0(this_ptr,panel_index);
  pSVar1 = this_ptr->panels + panel_index;
  pSVar2 = this_ptr->panels + panel_index_00;
  if ((((pSVar1->exists == 0) || (pSVar2->exists != 0)) || (ABS(pSVar1->anim_progress) != 0.0)) ||
     (ABS(pSVar1->anim_speed) != 0.0)) {
    g_CHAR_PTR_01cc4800 = "..\\core\\manpuz.cpp";
    g_INT_01cc4804 = 0x554;
    core_main_c_FUN_004c8440("CMansionPuzzleCircle::shiftPanelLeft - fubared.");
  }
  pSVar2->exists = pSVar1->exists;
  pSVar2->anim_progress = pSVar1->anim_progress;
  pSVar2->anim_speed = pSVar1->anim_speed;
  if (&pSVar2->local_position != &pSVar1->local_position) {
    (pSVar2->local_position).x = (pSVar1->local_position).x;
    (pSVar2->local_position).y = (pSVar1->local_position).y;
    (pSVar2->local_position).z = (pSVar1->local_position).z;
  }
  if (&pSVar2->rotation != &pSVar1->rotation) {
    (pSVar2->rotation).x = (pSVar1->rotation).x;
    (pSVar2->rotation).y = (pSVar1->rotation).y;
    (pSVar2->rotation).z = (pSVar1->rotation).z;
  }
  (pSVar2->rotation_matrix).m[0].x = (pSVar1->rotation_matrix).m[0].x;
  (pSVar2->rotation_matrix).m[0].y = (pSVar1->rotation_matrix).m[0].y;
  (pSVar2->rotation_matrix).m[0].z = (pSVar1->rotation_matrix).m[0].z;
  (pSVar2->rotation_matrix).m[1].x = (pSVar1->rotation_matrix).m[1].x;
  (pSVar2->rotation_matrix).m[1].y = (pSVar1->rotation_matrix).m[1].y;
  (pSVar2->rotation_matrix).m[1].z = (pSVar1->rotation_matrix).m[1].z;
  (pSVar2->rotation_matrix).m[2].x = (pSVar1->rotation_matrix).m[2].x;
  (pSVar2->rotation_matrix).m[2].y = (pSVar1->rotation_matrix).m[2].y;
  (pSVar2->rotation_matrix).m[2].z = (pSVar1->rotation_matrix).m[2].z;
  pSVar2->dead = pSVar1->dead;
  (pSVar2->color).r = (pSVar1->color).r;
  (pSVar2->color).g = (pSVar1->color).g;
  (pSVar2->color).b = (pSVar1->color).b;
  if (&pSVar2->world_position != &pSVar1->world_position) {
    (pSVar2->world_position).x = (pSVar1->world_position).x;
    (pSVar2->world_position).y = (pSVar1->world_position).y;
    (pSVar2->world_position).z = (pSVar1->world_position).z;
  }
  pSVar1->exists = 0;
  pSVar2->anim_progress = 1.0;
  pSVar2->anim_speed = -1.0;
  core_manpuz_cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_004ca640(this_ptr,panel_index_00);
  sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
  sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0(&pSVar2->world_position);
  sound_sndmain_cpp_startSfx_FUN_005265a0("manpuz-doorslide.wav");
  sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  return;
}
