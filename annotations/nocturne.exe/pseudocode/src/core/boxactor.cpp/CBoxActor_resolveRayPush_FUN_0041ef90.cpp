// Name: core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_0041ef90
// Address: 0041ef90
// Address Range: [[0041ef90, 0041f0a5]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_0041ef90(CBoxActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_0041ef90(CBoxActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)

{
  CLocation *pCVar1;
  float fVar2;
  float fVar3;
  CBoundingBox3D local_60;
  CVector3f local_48;
  byte auStack_3c [12];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float local_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(&this_ptr->base,&local_48,ray_origin);
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220(this_ptr,&local_24,ray_direction);
  if (local_1c * local_48.z + local_24 * local_48.x + local_20 * local_48.y < 0.0) {
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_60);
    fStack_14 = (float)core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550
                                 (&local_60,&local_48,&local_24,auStack_3c);
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
      core_boxactor_cpp_CBoxActor_setupPhysicsBox_FUN_0041e4d0(this_ptr);
      core_boxactor_cpp_FUN_0041f190(this_ptr);
      return;
    }
  }
  return;
}
