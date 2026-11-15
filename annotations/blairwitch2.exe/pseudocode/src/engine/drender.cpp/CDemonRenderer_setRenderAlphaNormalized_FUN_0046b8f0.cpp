// Name: engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_0046b8f0
// Address: 0046b8f0
// Address Range: [[0046b8f0, 0046b914]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_0046b8f0(CDemonRenderer *this_ptr,float render_alpha)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_0046b8f0(CDemonRenderer *this_ptr,float render_alpha)

{
  double dVar1;
  
  dVar1 = round((double)(render_alpha * (float)_DAT_005d15f3));
  engine_3d_c_setRenderAlpha_FUN_00406da0((int)ROUND(dVar1));
  return;
}
