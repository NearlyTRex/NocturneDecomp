// Name: core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290
// Address: 0050a290
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
      pSVar4->exists = pSVar3->exists;
      pSVar4->anim_progress = pSVar3->anim_progress;
      pSVar4->anim_speed = pSVar3->anim_speed;
      if (&pSVar4->local_position != &pSVar3->local_position) {
        (pSVar4->local_position).x = (pSVar3->local_position).x;
        (pSVar4->local_position).y = (pSVar3->local_position).y;
        (pSVar4->local_position).z = (pSVar3->local_position).z;
      }
      if (&pSVar4->rotation != &pSVar3->rotation) {
        (pSVar4->rotation).x = (pSVar3->rotation).x;
        (pSVar4->rotation).y = (pSVar3->rotation).y;
        (pSVar4->rotation).z = (pSVar3->rotation).z;
      }
      (pSVar4->rotation_matrix).m[0].x = (pSVar3->rotation_matrix).m[0].x;
      (pSVar4->rotation_matrix).m[0].y = (pSVar3->rotation_matrix).m[0].y;
      (pSVar4->rotation_matrix).m[0].z = (pSVar3->rotation_matrix).m[0].z;
      (pSVar4->rotation_matrix).m[1].x = (pSVar3->rotation_matrix).m[1].x;
      (pSVar4->rotation_matrix).m[1].y = (pSVar3->rotation_matrix).m[1].y;
      (pSVar4->rotation_matrix).m[1].z = (pSVar3->rotation_matrix).m[1].z;
      (pSVar4->rotation_matrix).m[2].x = (pSVar3->rotation_matrix).m[2].x;
      (pSVar4->rotation_matrix).m[2].y = (pSVar3->rotation_matrix).m[2].y;
      (pSVar4->rotation_matrix).m[2].z = (pSVar3->rotation_matrix).m[2].z;
      pSVar4->dead = pSVar3->dead;
      (pSVar4->color).r = (pSVar3->color).r;
      (pSVar4->color).g = (pSVar3->color).g;
      (pSVar4->color).b = (pSVar3->color).b;
      if (&pSVar4->world_position != &pSVar3->world_position) {
        (pSVar4->world_position).x = (pSVar3->world_position).x;
        (pSVar4->world_position).y = (pSVar3->world_position).y;
        (pSVar4->world_position).z = (pSVar3->world_position).z;
      }
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
