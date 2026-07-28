// Name: core_morph.cpp_CMorphModel_render_FUN_004dfc70
// Address: 004dfc70
// Address Range: [[004dfc70, 004dfca9]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_render_FUN_004dfc70(CMorphModel *this_ptr,float morph_t,SMorphPoint *ref_points)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_render_FUN_004dfc70(CMorphModel *this_ptr,float morph_t,SMorphPoint *ref_points)

{
  if (morph_t < (float)0.01) {
    return;
  }
  core_morph_cpp_CMorphModel_rotatePoints_FUN_004dfcb0(this_ptr,morph_t,ref_points);
  core_morph_cpp_CMorphModel_renderFaces_FUN_004dfea0(this_ptr,morph_t);
  return;
}
