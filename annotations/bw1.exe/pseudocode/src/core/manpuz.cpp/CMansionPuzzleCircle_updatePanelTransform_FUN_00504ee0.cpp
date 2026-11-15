// Name: core_manpuz.cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_00504ee0
// Address: 00504ee0
// Address Range: [[00504ee0, 00504fd4]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_00504ee0(CMansionPuzzleCircle *this_ptr,int panel_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_00504ee0(CMansionPuzzleCircle *this_ptr,int panel_index)

{
  CMatrix3x3f *this_ptr_00;
  float fVar1;
  CVector3f *pCVar2;
  byte bVar3;
  float afStackY_1038 [1016];
  CVector3f CStack_50;
  float fStack_44;
  float afStack_40 [4];
  float fStack_30;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  int iStack_14;
  
  bVar3 = 0;
  iStack_14 = panel_index;
  fVar1 = ((float)panel_index + this_ptr->panels[panel_index].anim_progress) * _DAT_0060343c;
  this_ptr->panels[panel_index].rotation.x = 0.0;
  this_ptr_00 = &this_ptr->panels[panel_index].rotation_matrix;
  this_ptr->panels[panel_index].rotation.z = 0.0;
  this_ptr->panels[panel_index].rotation.y = fVar1;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
            (this_ptr_00,&this_ptr->panels[panel_index].rotation);
  CStack_2c.z = this_ptr->panel_radius;
  CStack_2c.x = 0.0;
  CStack_2c.y = 0.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045f690(this_ptr_00,&CStack_2c,&CStack_20);
  pCVar2 = &this_ptr->panels[panel_index].local_position;
  fStack_44 = CStack_20.x;
  afStack_40[(uint)bVar3 * -2] = *(float *)((int)&CStack_20 + (uint)bVar3 * -8 + 4);
  afStack_40[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       *(float *)((int)&CStack_20 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  if (pCVar2 != (CVector3f *)&fStack_44) {
    pCVar2->x = fStack_44;
    this_ptr->panels[panel_index].local_position.y = afStack_40[0];
    this_ptr->panels[panel_index].local_position.z = afStack_40[1];
  }
  pCVar2 = &this_ptr->panels[panel_index].world_position;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            (&this_ptr->base,&this_ptr->panels[panel_index].local_position,&CStack_50);
  afStack_40[2] = CStack_50.x;
  afStack_40[(uint)bVar3 * -2 + 3] = *(float *)((int)&CStack_50 + (uint)bVar3 * -8 + 4);
  afStack_40[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
       *(float *)((int)&CStack_50 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  if (pCVar2 == (CVector3f *)(afStack_40 + 2)) {
    return;
  }
  pCVar2->x = afStack_40[2];
  this_ptr->panels[panel_index].world_position.y = afStack_40[3];
  this_ptr->panels[panel_index].world_position.z = fStack_30;
  return;
}
