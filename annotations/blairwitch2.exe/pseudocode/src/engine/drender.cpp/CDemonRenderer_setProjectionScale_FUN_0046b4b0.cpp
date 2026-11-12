// Name: engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046b4b0
// Address: 0046b4b0
// Address Range: [[0046b4b0, 0046b4cb]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0046b4b0(CDemonRenderer *this_ptr,float field_of_view)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0046b4b0(CDemonRenderer *this_ptr,float field_of_view)

{
  float10 fVar1;
  
  fVar1 = ((float10)_DAT_005d15a3 / (float10)field_of_view) * (float10)_DAT_005d15ab;
  round();
  DAT_006141e4 = (int)ROUND(fVar1);
  return;
}
