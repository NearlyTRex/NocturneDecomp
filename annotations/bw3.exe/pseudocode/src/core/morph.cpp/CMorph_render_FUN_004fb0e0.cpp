// Name: core_morph.cpp_CMorph_render_FUN_004fb0e0
// Address: 004fb0e0
// Address Range: [[004fb0e0, 004fb147]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_render_FUN_004fb0e0(CMorph *this_ptr,float morph_t)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_render_FUN_004fb0e0(CMorph *this_ptr,float morph_t)

{
  if (morph_t < 0.0) {
    morph_t = 0.0;
  }
  if (1.0 < morph_t) {
    morph_t = 1.0;
  }
  core_morph_cpp_CMorphModel_render_FUN_004fa450
            ((CMorphModel *)this_ptr,1.0 - morph_t,*(SMorphPoint **)(this_ptr + 0x660));
  core_morph_cpp_CMorphModel_render_FUN_004fa450
            ((CMorphModel *)(this_ptr + 0x608),morph_t,*(SMorphPoint **)(this_ptr + 0x58));
  return;
}
