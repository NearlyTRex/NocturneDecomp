// Name: core_morph.cpp_CMorphModel_render_FUN_004fa450
// Address: 004fa450
// Address Range: [[004fa450, 004fa489]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_render_FUN_004fa450(CMorphModel *this_ptr,float morph_t,SMorphPoint *ref_points)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_render_FUN_004fa450(CMorphModel *this_ptr,float morph_t,SMorphPoint *ref_points)

{
  if (morph_t < (float)0.01) {
    return;
  }
  core_morph_cpp_CMorphModel_rotatePoints_FUN_004fa490(this_ptr,morph_t,ref_points);
  core_morph_cpp_CMorphModel_renderFaces_FUN_004fa6d0(this_ptr,morph_t);
  return;
}
