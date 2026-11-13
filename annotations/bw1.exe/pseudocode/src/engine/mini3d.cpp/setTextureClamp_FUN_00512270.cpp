// Name: engine_mini3d.cpp_setTextureClamp_FUN_00512270
// Address: 00512270
// Address Range: [[00512270, 0051229a]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setTextureClamp_FUN_00512270(int clamp_u,int clamp_v)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setTextureClamp_FUN_00512270(int clamp_u,int clamp_v)

{
  if ((_DAT_02c83498 != (code *)0x0) && (_DAT_01c50948 != 0)) {
    (*_DAT_02c83498)(clamp_u,clamp_v);
    return;
  }
  return;
}
