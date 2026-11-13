// Name: engine_mini3d.cpp_setTextureClamp_FUN_004f3440
// Address: 004f3440
// Address Range: [[004f3440, 004f346a]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setTextureClamp_FUN_004f3440(int clamp_u,int clamp_v)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setTextureClamp_FUN_004f3440(int clamp_u,int clamp_v)

{
  if ((_DAT_0264bcc8 != (code *)0x0) && (_DAT_01c37788 != 0)) {
    (*_DAT_0264bcc8)(clamp_u,clamp_v);
    return;
  }
  return;
}
