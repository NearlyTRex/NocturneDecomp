// Name: core_boxactor.cpp_CBoxActor_FUN_00422590
// Address: 00422590
// Address Range: [[00422590, 00422632]]
// Convention: __cdecl
// Signature: void core_boxactor.cpp_CBoxActor_FUN_00422590(CBoxActor * this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_FUN_00422590(CBoxActor *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  CVector3f *pCVar1;
  CVector3f *out_point;
  CVector3f CStack_28;
  CVector3f local_1c;
  CVector3f local_10;
  
  if ((CDemonActor *)this_ptr->constrain_extents_actor == (CDemonActor *)0x0) {
    return;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            ((CDemonActor *)this_ptr->constrain_extents_actor,&local_1c,
             &(this_ptr->base).location.position);
  pCVar1 = &local_1c;
  out_point = &local_10;
  this_ptr_00 = (CBoundingBox3D *)
                (**(code **)(*(int *)(this_ptr->constrain_extents_actor + 0x154) + 0x14))();
  pCVar1 = core_box_cpp_CBoundingBox3D_clampPoint_FUN_00421550(this_ptr_00,out_point,pCVar1);
  if (&local_1c != pCVar1) {
    local_1c.x = pCVar1->x;
    local_1c.y = pCVar1->y;
    local_1c.z = pCVar1->z;
  }
  pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     ((CDemonActor *)this_ptr->constrain_extents_actor,&CStack_28,&local_1c);
  (this_ptr->base).location.position.x = pCVar1->x;
  (this_ptr->base).location.position.y = pCVar1->y;
  (this_ptr->base).location.position.z = pCVar1->z;
  return;
}
