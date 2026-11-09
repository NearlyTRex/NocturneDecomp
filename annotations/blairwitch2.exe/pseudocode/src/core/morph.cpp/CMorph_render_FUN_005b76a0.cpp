// Name: core_morph.cpp_CMorph_render_FUN_005b76a0
// Address: 005b76a0
// Address Range: [[005b76a0, 005b7707]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_render_FUN_005b76a0(CMorph *this_ptr,float morph_t)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_render_FUN_005b76a0(CMorph *this_ptr,float morph_t)

{
  if (morph_t < 0.0) {
    morph_t = 0.0;
  }
  if (1.0 < morph_t) {
    morph_t = 1.0;
  }
  core_morph_cpp_CMorphModel_render_FUN_005b6a10
            ((CMorphModel *)this_ptr,1.0 - morph_t,*(SMorphPoint **)(this_ptr + 0x660));
  core_morph_cpp_CMorphModel_render_FUN_005b6a10
            ((CMorphModel *)(this_ptr + 0x608),morph_t,*(SMorphPoint **)(this_ptr + 0x58));
  return;
}
