// Name: engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00483df0
// Address: 00483df0
// Address Range: [[00483df0, 00483e14]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00483df0(CDemonRenderer *this_ptr,float render_alpha)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00483df0(CDemonRenderer *this_ptr,float render_alpha)

{
  float10 fVar1;
  
  fVar1 = (float10)render_alpha * (float10)_DAT_005db3ec;
  round();
  engine_3d_c_setRenderAlpha_FUN_00406bd0((int)ROUND(fVar1));
  return;
}
