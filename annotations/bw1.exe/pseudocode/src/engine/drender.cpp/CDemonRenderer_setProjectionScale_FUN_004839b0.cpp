// Name: engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_004839b0
// Address: 004839b0
// Address Range: [[004839b0, 004839cb]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_004839b0(CDemonRenderer *this_ptr,float field_of_view)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_004839b0(CDemonRenderer *this_ptr,float field_of_view)

{
  float10 fVar1;
  
  fVar1 = ((float10)_DAT_005db39c / (float10)field_of_view) * (float10)_DAT_005db3a4;
  round();
  DAT_0061b4c4 = (int)ROUND(fVar1);
  return;
}
