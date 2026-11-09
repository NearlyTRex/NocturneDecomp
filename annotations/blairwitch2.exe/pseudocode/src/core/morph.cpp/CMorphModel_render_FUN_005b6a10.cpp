// Name: core_morph.cpp_CMorphModel_render_FUN_005b6a10
// Address: 005b6a10
// Address Range: [[005b6a10, 005b6a49]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_render_FUN_005b6a10(CMorphModel *this_ptr,float morph_t,SMorphPoint *ref_points)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_morph_cpp_CMorphModel_render_FUN_005b6a10(CMorphModel *this_ptr,float morph_t,SMorphPoint *ref_points)

{
  if (morph_t < (float)_DAT_005f1777) {
    return;
  }
  core_morph_cpp_CMorphModel_rotatePoints_FUN_005b6a50(this_ptr,morph_t,ref_points);
  core_morph_cpp_CMorphModel_renderFaces_FUN_005b6c90(this_ptr,morph_t);
  return;
}
