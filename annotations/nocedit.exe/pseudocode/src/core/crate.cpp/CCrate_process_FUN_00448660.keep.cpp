// Name: core_crate.cpp_CCrate_process_FUN_00448660
// Address: 00448660
// MANUAL RECONSTRUCTION
// Address Range: [[00448660, 0044887d]]
// Convention: __cdecl
// Signature: void __cdecl core_crate_cpp_CCrate_process_FUN_00448660(CCrate *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_crate_cpp_CCrate_process_FUN_00448660(CCrate *this_ptr,float delta_time)

{
  CLocation *pCVar2;
  UOrientationVector *pUVar3;
  CVector3f *pCVar5;
  CPlatform *pCVar6;
  UOrientationVector *pUVar5;
  CBoundingBox3D CStack_24;
  float local_c;
  CVector3f *pCVar3;
  CLocation *pCVar1;
  UOrientationVector *pUVar2;
  
  if (this_ptr->carrier != (CDemonActor *)0x0) {
    this_ptr->last_platform = (CDemonActor *)0x0;
    return;
  }
  pCVar1 = &(this_ptr->base).location;
  pCVar3 = &(this_ptr->base).platform_position_delta;
  (pCVar1->position).x = pCVar3->x + (pCVar1->position).x;
  (this_ptr->base).location.position.y =
       (this_ptr->base).platform_position_delta.y + (this_ptr->base).location.position.y;
  (this_ptr->base).location.position.z =
       (this_ptr->base).platform_position_delta.z + (this_ptr->base).location.position.z;
  (this_ptr->base).platform_position_delta.z = 0.0;
  pUVar2 = &(this_ptr->base).orient;
  (this_ptr->base).platform_position_delta.y = (this_ptr->base).platform_position_delta.z;
  pCVar3->x = (this_ptr->base).platform_position_delta.y;
  pCVar5 = &(this_ptr->base).platform_orientation_delta;
  (pUVar2->vec).x = pCVar5->x + (pUVar2->vec).x;
  (this_ptr->base).orient.vec.y =
       (this_ptr->base).platform_orientation_delta.y + (this_ptr->base).orient.vec.y;
  (this_ptr->base).orient.vec.z =
       (this_ptr->base).platform_orientation_delta.z + (this_ptr->base).orient.vec.z;
  (this_ptr->base).platform_orientation_delta.x = 0.0f;
  (this_ptr->base).platform_orientation_delta.y = 0.0f;
  (this_ptr->base).platform_orientation_delta.z = 0.0f;
  if ((((((this_ptr->cached_position).x == (this_ptr->base).location.position.x) &&
        ((this_ptr->cached_position).y == (this_ptr->base).location.position.y)) &&
       ((this_ptr->cached_position).z == (this_ptr->base).location.position.z)) &&
      (((this_ptr->cached_orientation).vec.x == (this_ptr->base).orient.vec.x &&
       ((this_ptr->cached_orientation).vec.y == (this_ptr->base).orient.vec.y)))) &&
     ((this_ptr->cached_orientation).vec.z == (this_ptr->base).orient.vec.z)) {
    local_c = this_ptr->cached_ground_height;
  }
  else {
    local_c = (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                        (&this_ptr->base,this_ptr->ground_check_radius,(CVector3f *)0x0);
    pCVar2 = &(this_ptr->base).location;
    if ((CLocation *)&this_ptr->cached_position != pCVar2) {
      (this_ptr->cached_position).x = (pCVar2->position).x;
      (this_ptr->cached_position).y = (this_ptr->base).location.position.y;
      (this_ptr->cached_position).z = (this_ptr->base).location.position.z;
    }
    pUVar3 = &(this_ptr->base).orient;
    if (&this_ptr->cached_orientation != pUVar3) {
      (this_ptr->cached_orientation).vec.x = (pUVar3->vec).x;
      (this_ptr->cached_orientation).vec.y = (this_ptr->base).orient.vec.y;
      (this_ptr->cached_orientation).vec.z = (this_ptr->base).orient.vec.z;
    }
    this_ptr->cached_ground_height = local_c;
  }
  if ((this_ptr->last_platform == (CDemonActor *)0x0) &&
     (pCVar6 = (this_ptr->base).standing_platform, pCVar6 != (CPlatform *)0x0)) {
    this_ptr->last_platform = &pCVar6->base;
  }
  pCVar6 = (CPlatform *)this_ptr->last_platform;
  if (pCVar6 != (CPlatform *)0x0) {
    (this_ptr->base).standing_platform = pCVar6;
    (this_ptr->base).location = (pCVar6->base).location;
    pCVar6 = (this_ptr->base).standing_platform;
    pUVar3 = &(this_ptr->base).orient;
    pUVar5 = &(pCVar6->base).orient;
    if (pUVar3 != pUVar5) {
      (pUVar3->vec).x = (pUVar5->vec).x;
      (this_ptr->base).orient.vec.y = (pCVar6->base).orient.vec.y;
      (this_ptr->base).orient.vec.z = (pCVar6->base).orient.vec.z;
    }
    pCVar6 = (this_ptr->base).standing_platform;
    (*((pCVar6->base).vtable._ub)->getBoundingBox)(&pCVar6->base,&CStack_24);
    (this_ptr->base).location.position.y =
         (CStack_24.max.y - CStack_24.min.y) + (this_ptr->base).location.position.y;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
    return;
  }
  (this_ptr->base).location.position.y = local_c;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  return;
}
