// Name: core_morph.cpp_CMorph_render_FUN_0052bae0
// Address: 0052bae0
// Address Range: [[0052bae0, 0052bb47]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_render_FUN_0052bae0(CMorph *this_ptr,float morph_t)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_render_FUN_0052bae0(CMorph *this_ptr,float morph_t)

{
  if (morph_t < 0.0) {
    morph_t = 0.0;
  }
  if (1.0 < morph_t) {
    morph_t = 1.0;
  }
  core_morph_cpp_CMorphModel_render_FUN_0052af30
            (this_ptr->models,1.0 - morph_t,this_ptr->models[1].points);
  core_morph_cpp_CMorphModel_render_FUN_0052af30
            (this_ptr->models + 1,morph_t,this_ptr->models[0].points);
  return;
}
