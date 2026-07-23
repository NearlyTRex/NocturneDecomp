// Name: core_morph.cpp_CMorphModel_render_FUN_004dfc70
// Address: 004dfc70
// Address Range: [[004dfc70, 004dfca9]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_render_FUN_004dfc70(undefined4 param_1,float param_2,undefined4 param_3)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_render_FUN_004dfc70(uint param_1,float param_2,uint param_3)

{
  if (param_2 < (float)0.01) {
    return;
  }
  core_morph_cpp_CMorphModel_rotatePoints_FUN_004dfcb0(param_1,param_2,param_3);
  core_morph_cpp_CMorphModel_renderFaces_FUN_004dfea0(param_1,param_2);
  return;
}
