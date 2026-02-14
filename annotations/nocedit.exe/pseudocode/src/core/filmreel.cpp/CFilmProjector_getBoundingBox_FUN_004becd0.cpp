// Name: core_filmreel.cpp_CFilmProjector_getBoundingBox_FUN_004becd0
// Address: 004becd0
// Address Range: [[004becd0, 004becfd]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_filmreel_cpp_CFilmProjector_getBoundingBox_FUN_004becd0(CFilmProjector *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_filmreel_cpp_CFilmProjector_getBoundingBox_FUN_004becd0(CFilmProjector *this_ptr,CBoundingBox3D *out_box)

{
  (out_box->min).y = 0.0;
  (out_box->min).z = -0.1;
  (out_box->max).x = 1.0;
  (out_box->max).y = 3.0;
  (out_box->max).z = 0.1;
  (out_box->min).x = -1.0;
  return out_box;
}
