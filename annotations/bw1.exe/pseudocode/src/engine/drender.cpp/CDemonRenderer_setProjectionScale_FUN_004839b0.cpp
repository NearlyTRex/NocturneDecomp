// Name: engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_004839b0
// Address: 004839b0
// Address Range: [[004839b0, 004839cb]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_004839b0(CDemonRenderer *this_ptr,float field_of_view)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_004839b0(CDemonRenderer *this_ptr,float field_of_view)

{
  double dVar1;
  
  dVar1 = round
                    ((double)(((float)_DAT_005db39c / field_of_view) * (float)_DAT_005db3a4));
  DAT_0061b4c4 = (int)ROUND(dVar1);
  return;
}
