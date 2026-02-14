// Name: core_dest.cpp_CActorDestination_getBoundingBox_FUN_0046fcc0
// Address: 0046fcc0
// Address Range: [[0046fcc0, 0046fd4b]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_dest_cpp_CActorDestination_getBoundingBox_FUN_0046fcc0(CActorDestination *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_dest_cpp_CActorDestination_getBoundingBox_FUN_0046fcc0(CActorDestination *this_ptr,CBoundingBox3D *out_box)

{
  CDemonActor *this_ptr_00;
  
  this_ptr_00 = this_ptr->dest_actor;
  if (this_ptr_00 == (CDemonActor *)0x0) {
    (out_box->min).x = -1.0;
    (out_box->min).y = -0.1;
    (out_box->min).z = -1.0;
    (out_box->max).x = 1.0;
    (out_box->max).y = 2.1;
    (out_box->max).z = 1.0;
    return out_box;
  }
  (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,out_box);
  return out_box;
}
