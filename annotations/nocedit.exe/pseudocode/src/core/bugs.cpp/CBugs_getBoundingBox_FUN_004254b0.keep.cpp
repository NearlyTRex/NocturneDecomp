// Name: core_bugs.cpp_CBugs_getBoundingBox_FUN_004254b0
// Address: 004254b0
// MANUAL RECONSTRUCTION
// Address Range: [[004254b0, 004254ee]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_bugs_cpp_CBugs_getBoundingBox_FUN_004254b0(CBugs *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_bugs_cpp_CBugs_getBoundingBox_FUN_004254b0(CBugs *this_ptr,CBoundingBox3D *out_box)

{
  *out_box = this_ptr->bounds;
  return out_box;
}
