// Name: engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
// Address: 00460c00
// Address Range: [[00460c00, 00460c1b]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00(undefined4 param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00(uint param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)round
                             (((float10)_DAT_0057dc45 / (float10)param_2) * (float10)_DAT_0057dc4d);
  DAT_005b7648 = (int)ROUND(fVar1);
  return;
}
