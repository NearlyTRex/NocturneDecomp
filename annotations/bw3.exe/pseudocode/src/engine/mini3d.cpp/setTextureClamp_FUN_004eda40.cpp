// Name: engine_mini3d.cpp_setTextureClamp_FUN_004eda40
// Address: 004eda40
// Address Range: [[004eda40, 004eda6a]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setTextureClamp_FUN_004eda40(int clamp_u,int clamp_v)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setTextureClamp_FUN_004eda40(int clamp_u,int clamp_v)

{
  if ((_DAT_02cf60f4 != (code *)0x0) && (_DAT_01c6cee8 != 0)) {
    (*_DAT_02cf60f4)(clamp_u,clamp_v);
    return;
  }
  return;
}
