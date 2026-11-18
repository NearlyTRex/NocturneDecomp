// Name: engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_0046d4d0
// Address: 0046d4d0
// Address Range: [[0046d4d0, 0046d4f4]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_0046d4d0(CDemonRenderer *this_ptr,float render_alpha)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_0046d4d0(CDemonRenderer *this_ptr,float render_alpha)

{
  double dVar1;
  
  dVar1 = round((double)(render_alpha * (float)65535));
  engine_3d_c_setRenderAlpha_FUN_00406bf0((int)ROUND(dVar1));
  return;
}
