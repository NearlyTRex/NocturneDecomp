// Name: core_morph.cpp_CMorph_render_FUN_004e0820
// Address: 004e0820
// Address Range: [[004e0820, 004e0887]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_render_FUN_004e0820(CMorph *this_ptr,float morph_t)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_render_FUN_004e0820(CMorph *this_ptr,float morph_t)

{
  if (morph_t < 0.0) {
    morph_t = 0.0;
  }
  if (1.0 < morph_t) {
    morph_t = 1.0;
  }
  core_morph_cpp_CMorphModel_render_FUN_004dfc70
            (this_ptr->models,1.0 - morph_t,this_ptr->models[1].points);
  core_morph_cpp_CMorphModel_render_FUN_004dfc70
            (this_ptr->models + 1,morph_t,this_ptr->models[0].points);
  return;
}
