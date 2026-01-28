// Name: shape_design.c_smoothMesh_FUN_0046ed00
// Address: 0046ed00
// Address Range: [[0046ed00, 0046ed4a]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_smoothMesh_FUN_0046ed00(void)

#include "nocturne.h"

void __cdecl shape_design_c_smoothMesh_FUN_0046ed00(void)

{
  shape_dsemodel_cpp_CDSEModel_processModelPart_FUN_0048f770(&g_CDSEModelInstance,0);
  shape_dsemodel_cpp_CDSEModel_doNothing_FUN_00490020(&g_CDSEModelInstance);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("Mesh smoothed.",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  return;
}
