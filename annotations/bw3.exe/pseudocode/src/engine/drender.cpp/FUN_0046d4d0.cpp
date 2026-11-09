// Name: engine_drender.cpp_FUN_0046d4d0
// Address: 0046d4d0
// Address Range: [[0046d4d0, 0046d4f4]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_FUN_0046d4d0(CDemonRenderer *this_ptr,float render_alpha)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_FUN_0046d4d0(CDemonRenderer *this_ptr,float render_alpha)

{
  float10 fVar1;
  
  fVar1 = (float10)render_alpha * (float10)_DAT_005bc583;
  round();
  engine_3d_c_setRenderAlpha_FUN_00406bf0((int)ROUND(fVar1));
  return;
}
