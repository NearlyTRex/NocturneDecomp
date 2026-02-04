// Name: core_bugs.cpp_CBugs_getBoundingBox_FUN_004254b0
// Address: 004254b0
// Address Range: [[004254b0, 004254ee]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_bugs_cpp_CBugs_getBoundingBox_FUN_004254b0(CBugs *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl
core_bugs_cpp_CBugs_getBoundingBox_FUN_004254b0(CBugs *this_ptr,CBoundingBox3D *out_box)

{
  (out_box->min).x = *(float *)this_ptr->unk5;
  (out_box->min).y = *(float *)(this_ptr->unk5 + 4);
  (out_box->min).z = *(float *)(this_ptr->unk5 + 8);
  (out_box->max).x = *(float *)(this_ptr->unk5 + 0xc);
  (out_box->max).y = *(float *)(this_ptr->unk5 + 0x10);
  (out_box->max).z = *(float *)(this_ptr->unk5 + 0x14);
  return out_box;
}
