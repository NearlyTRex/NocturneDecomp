// Name: engine_3d.c_calculatePolygonLighting_FUN_00404710
// Address: 00404710
// Address Range: [[00404710, 0040472f]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_calculatePolygonLighting_FUN_00404710(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_3d_c_calculatePolygonLighting_FUN_00404710(int param_1)

{
  _DAT_01c00c74 =
       engine_light_cpp_calculateLighting_FUN_004c6cc0
                 (*(uint *)(param_1 + 8),*(uint *)(param_1 + 0xc),
                  *(uint *)(param_1 + 0x10));
  return;
}
