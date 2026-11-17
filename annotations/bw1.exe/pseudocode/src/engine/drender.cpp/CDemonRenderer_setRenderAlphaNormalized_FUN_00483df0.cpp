// Name: engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00483df0
// Address: 00483df0
// Address Range: [[00483df0, 00483e14]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00483df0(CDemonRenderer *this_ptr,float render_alpha)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00483df0(CDemonRenderer *this_ptr,float render_alpha)

{
  double dVar1;
  
  dVar1 = round((double)(render_alpha * (float)65535));
  engine_3d_c_setRenderAlpha_FUN_00406bd0((int)ROUND(dVar1));
  return;
}
