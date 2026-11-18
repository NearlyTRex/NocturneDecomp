// Name: engine_mini3d.cpp_setTextureClamp_FUN_00512270
// Address: 00512270
// Address Range: [[00512270, 0051229a]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setTextureClamp_FUN_00512270(int clamp_u,int clamp_v)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setTextureClamp_FUN_00512270(int clamp_u,int clamp_v)

{
  if ((g_PTR_02c83498 != (byte *)0x0) && (g_INT_01c50948 != 0)) {
    (*(code *)g_PTR_02c83498)(clamp_u,clamp_v);
    return;
  }
  return;
}
