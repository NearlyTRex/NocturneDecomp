// Name: engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_0046b8f0
// Address: 0046b8f0
// Address Range: [[0046b8f0, 0046b914]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_0046b8f0(CDemonRenderer *this_ptr,float render_alpha)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_0046b8f0(CDemonRenderer *this_ptr,float render_alpha)

{
  double dVar1;
  
  dVar1 = round((double)(render_alpha * (float)65535));
  engine_3d_c_setRenderAlpha_FUN_00406da0((int)ROUND(dVar1));
  return;
}
