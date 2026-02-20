// Name: core_manpuz.cpp_CMansionPuzzleCircle_FUN_00509b20
// Address: 00509b20
// Address Range: [[00509b20, 00509beb]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_00509b20(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_00509b20(CMansionPuzzleCircle *this_ptr)

{
  CMatrix3x3f *this_ptr_00;
  float fVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  int in_stack_00000008;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  fVar1 = ((float)in_stack_00000008 + this_ptr->panels[in_stack_00000008].anim_progress) *
          0.5235988f;
  this_ptr->panels[in_stack_00000008].rotation.x = 0.0;
  this_ptr_00 = &this_ptr->panels[in_stack_00000008].rotation_matrix;
  this_ptr->panels[in_stack_00000008].rotation.z = 0.0;
  this_ptr->panels[in_stack_00000008].rotation.y = fVar1;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (this_ptr_00,&this_ptr->panels[in_stack_00000008].rotation);
  local_34.z = this_ptr->panel_radius;
  local_34.x = 0.0;
  local_34.y = 0.0;
  pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(this_ptr_00,&local_28,&local_34)
  ;
  pCVar3 = &this_ptr->panels[in_stack_00000008].local_position;
  if (pCVar3 != pCVar2) {
    pCVar3->x = pCVar2->x;
    this_ptr->panels[in_stack_00000008].local_position.y = pCVar2->y;
    this_ptr->panels[in_stack_00000008].local_position.z = pCVar2->z;
  }
  pCVar2 = &this_ptr->panels[in_stack_00000008].world_position;
  pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (&this_ptr->base,&local_1c,&this_ptr->panels[in_stack_00000008].local_position)
  ;
  if (pCVar2 == pCVar3) {
    return;
  }
  pCVar2->x = pCVar3->x;
  this_ptr->panels[in_stack_00000008].world_position.y = pCVar3->y;
  this_ptr->panels[in_stack_00000008].world_position.z = pCVar3->z;
  return;
}
