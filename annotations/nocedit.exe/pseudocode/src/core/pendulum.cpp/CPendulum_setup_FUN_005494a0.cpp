// Name: core_pendulum.cpp_CPendulum_setup_FUN_005494a0
// Address: 005494a0
// Address Range: [[005494a0, 005494bc]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_CPendulum_setup_FUN_005494a0(CPendulum *this_ptr)

#include "nocturne.h"

void __cdecl core_pendulum_cpp_CPendulum_setup_FUN_005494a0(CPendulum *this_ptr)

{
  CBoundingBox3D *pCVar3;
  CBoundingBox3D CStack_4c;
  CBoundingBox3D local_34;
  float afStack_10 [3];
  float fVar1;
  float fVar2;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  pCVar3 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_34);
  if (&CStack_4c != pCVar3) {
    CStack_4c.min.x = (pCVar3->min).x;
    CStack_4c.min.y = (pCVar3->min).y;
    CStack_4c.min.z = (pCVar3->min).z;
  }
  if (&CStack_4c.max != &pCVar3->max) {
    CStack_4c.max.x = (pCVar3->max).x;
    CStack_4c.max.y = (pCVar3->max).y;
    CStack_4c.max.z = (pCVar3->max).z;
  }
  this_ptr->period =
       SQRT((CStack_4c.max.y - CStack_4c.min.y) * (float)0.03125) * (float)6.2831853070000001;
  fVar1 = (CStack_4c.min.y + CStack_4c.max.y) * 0.5f;
  fVar2 = (CStack_4c.min.z + CStack_4c.max.z) * 0.5f;
  if (&this_ptr->swing_tip_local == (CVector3f *)afStack_10) {
    (this_ptr->swing_tip_local).y = CStack_4c.min.y;
    return;
  }
  (this_ptr->swing_tip_local).x = (CStack_4c.min.x + CStack_4c.max.x) * 0.5f;
  (this_ptr->swing_tip_local).y = fVar1;
  (this_ptr->swing_tip_local).z = fVar2;
  (this_ptr->swing_tip_local).y = CStack_4c.min.y;
  return;
}
