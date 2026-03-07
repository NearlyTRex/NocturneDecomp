// Name: core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_00422390
// Address: 00422390
// Address Range: [[00422390, 004224a5]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_00422390(CBoxActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_00422390(CBoxActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)

{
  CLocation *pCVar1;
  float fVar2;
  float fVar3;
  CBoundingBox3D local_60;
  CVector3f local_48;
  CVector3f CStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CVector3f local_24;
  float fStack_18;
  float fStack_14;
  
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(&this_ptr->base,&local_48,ray_origin);
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
            (&this_ptr->base,&local_24,ray_direction);
  if (local_24.z * local_48.z + local_24.x * local_48.x + local_24.y * local_48.y < 0.0) {
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_60);
    fStack_14 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                          (&local_60,&local_48,&local_24,&CStack_3c);
    if ((0.0 <= fStack_14) && (fStack_14 < 1.0)) {
      fStack_18 = (float)1.01 - fStack_14;
      fStack_30 = ray_direction->x * fStack_18;
      fStack_2c = ray_direction->y * fStack_18;
      fStack_28 = ray_direction->z * fStack_18;
      pCVar1 = &(this_ptr->base).location;
      fVar2 = (this_ptr->base).location.position.y;
      (pCVar1->position).x = (pCVar1->position).x + fStack_30;
      fVar3 = (this_ptr->base).location.position.z;
      (this_ptr->base).location.position.y = fVar2 + fStack_2c;
      (this_ptr->base).location.position.z = fVar3 + fStack_28;
      core_boxactor_cpp_CBoxActor_setupPhysicsBox_FUN_004218d0(this_ptr);
      core_boxactor_cpp_CBoxActor_constrainToExtents_FUN_00422590(this_ptr);
      return;
    }
  }
  return;
}
