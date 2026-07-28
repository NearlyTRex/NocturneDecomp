// Name: engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00461020
// Address: 00461020
// Address Range: [[00461020, 00461044]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00461020(CDemonRenderer *this_ptr,float render_alpha)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00461020(CDemonRenderer *this_ptr,float render_alpha)

{
  double dVar1;
  
  dVar1 = round((double)(render_alpha * (float)65535));
  engine_3d_c_setRenderAlpha_FUN_00408370((int)ROUND(dVar1));
  return;
}
