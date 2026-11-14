// Name: engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046d090
// Address: 0046d090
// Address Range: [[0046d090, 0046d0ab]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0046d090(CDemonRenderer *this_ptr,float field_of_view)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0046d090(CDemonRenderer *this_ptr,float field_of_view)

{
  float10 fVar1;
  
  fVar1 = ((float10)_DAT_005bc533 / (float10)field_of_view) * (float10)_DAT_005bc53b;
  round();
  DAT_005fba44 = (int)ROUND(fVar1);
  return;
}
