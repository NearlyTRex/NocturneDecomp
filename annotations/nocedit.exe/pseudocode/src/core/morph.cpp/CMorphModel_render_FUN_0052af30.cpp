// Name: core_morph.cpp_CMorphModel_render_FUN_0052af30
// Address: 0052af30
// Address Range: [[0052af30, 0052af69]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_render_FUN_0052af30(CMorphModel *this_ptr,float morph_t,SMorphPoint *ref_points)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_render_FUN_0052af30(CMorphModel *this_ptr,float morph_t,SMorphPoint *ref_points)

{
  if (morph_t < (float)0.01) {
    return;
  }
  core_morph_cpp_CMorphModel_rotatePoints_FUN_0052af70(this_ptr,morph_t,ref_points);
  core_morph_cpp_CMorphModel_renderFaces_FUN_0052b160(this_ptr,morph_t);
  return;
}
