// Name: core_actor.cpp_CDemonActor_getBoundingBox_FUN_00408c70
// Address: 00408c70
// Address Range: [[00408c70, 00408c9d]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_actor_cpp_CDemonActor_getBoundingBox_FUN_00408c70 (CDemonActor *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl
core_actor_cpp_CDemonActor_getBoundingBox_FUN_00408c70
          (CDemonActor *this_ptr,CBoundingBox3D *out_box)

{
  (out_box->min).y = 0.0;
  (out_box->min).z = -4.0;
  (out_box->max).x = 4.0;
  (out_box->max).y = 8.0;
  (out_box->max).z = 4.0;
  (out_box->min).x = -4.0;
  return out_box;
}
