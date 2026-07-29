// Name: shape_design.c_scaleModel_FUN_00467e70
// Address: 00467e70
// MANUAL RECONSTRUCTION
// Address Range: [[00467e70, 00467f24]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_scaleModel_FUN_00467e70(void)

#include "nocturne.h"

void __cdecl shape_design_c_scaleModel_FUN_00467e70(void)

{
  double dVar6;
  char local_68 [80];
  int local_18;
  float fVar2;

  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_special_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_68,0x14,0,0,"Enter in scale multiplier : ")
  ;
  if (local_68[0] != '\0') {
    dVar6 = _strtod(local_68);
    fVar2 = (float)dVar6;
    for (local_18 = 0; local_18 < g_VertexCount; local_18 = local_18 + 1) {
      g_LoadedVertices[local_18].vertex.x = g_LoadedVertices[local_18].vertex.x * fVar2;
      g_LoadedVertices[local_18].vertex.y = g_LoadedVertices[local_18].vertex.y * fVar2;
      g_LoadedVertices[local_18].vertex.z = g_LoadedVertices[local_18].vertex.z * fVar2;
    }
  }
  return;
}
