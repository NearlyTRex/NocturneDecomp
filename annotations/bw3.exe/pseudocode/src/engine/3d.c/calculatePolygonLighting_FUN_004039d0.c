// Name: engine_3d.c_calculatePolygonLighting_FUN_004039d0
// Address: 004039d0
// Address Range: [[004039d0, 004039ef]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_calculatePolygonLighting_FUN_004039d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_3d_c_calculatePolygonLighting_FUN_004039d0(int param_1)

{
  _DAT_01c6b5c4 =
       engine_light_cpp_calculateLighting_FUN_004e0e00
                 (*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),*(int *)(param_1 + 0x10));
  return;
}
