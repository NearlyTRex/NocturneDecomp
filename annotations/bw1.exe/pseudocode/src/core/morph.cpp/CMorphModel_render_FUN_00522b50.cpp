// Name: core_morph.cpp_CMorphModel_render_FUN_00522b50
// Address: 00522b50
// Address Range: [[00522b50, 00522b89]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_render_FUN_00522b50(CMorphModel *this_ptr,float morph_t,SMorphPoint *ref_points)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_morph_cpp_CMorphModel_render_FUN_00522b50(CMorphModel *this_ptr,float morph_t,SMorphPoint *ref_points)

{
  if (morph_t < (float)_DAT_005ea892) {
    return;
  }
  core_morph_cpp_CMorphModel_rotatePoints_FUN_00522b90(this_ptr,morph_t,ref_points);
  core_morph_cpp_CMorphModel_renderFaces_FUN_00522dd0(this_ptr,morph_t);
  return;
}
