// Name: core_bugs.cpp_CBugs_getBoundingBox_FUN_004254b0
// Address: 004254b0
// Address Range: [[004254b0, 004254ee]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_bugs_cpp_CBugs_getBoundingBox_FUN_004254b0(CBugs *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_bugs_cpp_CBugs_getBoundingBox_FUN_004254b0(CBugs *this_ptr,CBoundingBox3D *out_box)

{
  (out_box->min).x = (this_ptr->bounds).min.x;
  (out_box->min).y = (this_ptr->bounds).min.y;
  (out_box->min).z = (this_ptr->bounds).min.z;
  (out_box->max).x = (this_ptr->bounds).max.x;
  (out_box->max).y = (this_ptr->bounds).max.y;
  (out_box->max).z = (this_ptr->bounds).max.z;
  return out_box;
}
