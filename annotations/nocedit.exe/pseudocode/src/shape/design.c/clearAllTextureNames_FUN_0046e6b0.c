// Name: shape_design.c_clearAllTextureNames_FUN_0046e6b0
// Address: 0046e6b0
// Address Range: [[0046e6b0, 0046e6ec]]
// Convention: __cdecl
// Signature: void shape_design.c_clearAllTextureNames_FUN_0046e6b0(void)

#include "nocturne.h"

void __cdecl shape_design_c_clearAllTextureNames_FUN_0046e6b0(void)

{
  int local_14;
  
  for (local_14 = 0; local_14 < g_PolygonCount; local_14 = local_14 + 1) {
    g_ModelPolygonData[local_14].texture_name[0] = '\0';
  }
  return;
}
