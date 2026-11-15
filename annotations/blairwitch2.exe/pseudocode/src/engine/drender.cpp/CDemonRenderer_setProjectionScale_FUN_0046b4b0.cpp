// Name: engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046b4b0
// Address: 0046b4b0
// Address Range: [[0046b4b0, 0046b4cb]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0046b4b0(CDemonRenderer *this_ptr,float field_of_view)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0046b4b0(CDemonRenderer *this_ptr,float field_of_view)

{
  double dVar1;
  
  dVar1 = round
                    ((double)(((float)_DAT_005d15a3 / field_of_view) * (float)_DAT_005d15ab));
  DAT_006141e4 = (int)ROUND(dVar1);
  return;
}
