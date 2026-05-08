// Name: core_simbox.cpp_CSimBox_setup_FUN_00588e00
// Address: 00588e00
// MANUAL RECONSTRUCTION
// Address Range: [[00588e00, 00588f1e]]
// Convention: __cdecl
// Signature: void __cdecl core_simbox_cpp_CSimBox_setup_FUN_00588e00(CSimBox *this_ptr)

#include "nocturne.h"

void __cdecl core_simbox_cpp_CSimBox_setup_FUN_00588e00(CSimBox *this_ptr)

{
  CLocation *position;
  UOrientationVector *pUVar1;
  CBoundingBox3D *pCVar2;
  CBoundingBox3D CStack_44;
  CBoundingBox3D CStack_2c;
  CVector3f CStack_14;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  pCVar2 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_44);
  if (&CStack_2c != pCVar2) {
    CStack_2c.min = pCVar2->min;
  }
  if (&CStack_2c.max != &pCVar2->max) {
    CStack_2c.max = pCVar2->max;
  }
  CStack_14.x = CStack_2c.max.x - CStack_2c.min.x;
  CStack_14.y = CStack_2c.max.y - CStack_2c.min.y;
  CStack_14.z = CStack_2c.max.z - CStack_2c.min.z;
  position = &(this_ptr->base).location;
  core_box_cpp_CBox_setupCorners_FUN_0041dd20
            (&this_ptr->physics_box,&position->position,&(this_ptr->base).orient.vec,&CStack_14,
             this_ptr->weight);
  if ((CLocation *)&this_ptr->spawn_position != position) {
    this_ptr->spawn_position = position->position;
  }
  pUVar1 = &(this_ptr->base).orient;
  if (&this_ptr->spawn_orientation != (CVector3f *)pUVar1) {
    this_ptr->spawn_orientation = pUVar1->vec;
  }
  if (this_ptr->type != 1) {
    return;
  }
  (this_ptr->physics_box).is_valid = 0;
  return;
}
