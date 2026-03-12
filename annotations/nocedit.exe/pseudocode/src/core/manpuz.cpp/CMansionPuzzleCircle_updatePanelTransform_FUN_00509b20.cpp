// Name: core_manpuz.cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_00509b20
// Address: 00509b20
// Address Range: [[00509b20, 00509beb]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_00509b20(CMansionPuzzleCircle *this_ptr,int panel_index)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_00509b20(CMansionPuzzleCircle *this_ptr,int panel_index)

{
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  CVector3f *pCVar1;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  int local_10;
  CMatrix3x3f *this_ptr_00;
  float fVar1;
  
  fVar1 = ((float)panel_index + this_ptr->panels[panel_index].anim_progress) * 0.5235988f;
  this_ptr->panels[panel_index].rotation.x = 0.0;
  this_ptr_00 = &this_ptr->panels[panel_index].rotation_matrix;
  this_ptr->panels[panel_index].rotation.z = 0.0;
  this_ptr->panels[panel_index].rotation.y = fVar1;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (this_ptr_00,&this_ptr->panels[panel_index].rotation);
  local_34.z = this_ptr->panel_radius;
  local_34.x = 0.0;
  local_34.y = 0.0;
  pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(this_ptr_00,&local_28,&local_34)
  ;
  pCVar1 = &this_ptr->panels[panel_index].local_position;
  if (pCVar1 != pCVar2) {
    pCVar1->x = pCVar2->x;
    this_ptr->panels[panel_index].local_position.y = pCVar2->y;
    this_ptr->panels[panel_index].local_position.z = pCVar2->z;
  }
  pCVar1 = &this_ptr->panels[panel_index].world_position;
  pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (&this_ptr->base,&local_1c,&this_ptr->panels[panel_index].local_position);
  if (pCVar1 == pCVar3) {
    return;
  }
  pCVar1->x = pCVar3->x;
  this_ptr->panels[panel_index].world_position.y = pCVar3->y;
  this_ptr->panels[panel_index].world_position.z = pCVar3->z;
  return;
}
