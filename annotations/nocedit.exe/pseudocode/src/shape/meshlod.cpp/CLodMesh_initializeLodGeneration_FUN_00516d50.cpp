// Name: shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_00516d50
// Address: 00516d50
// Address Range: [[00516d50, 00516e00]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_initializeLodGeneration_FUN_00516d50(CLodMesh *this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_initializeLodGeneration_FUN_00516d50(CLodMesh *this_ptr)

{
  _FILE *p_Var1;
  
  if (this_ptr->next_lod != (CLodMesh *)0x0) {
    return;
  }
  _mkdir("meshlod");
  remove("meshlod\\simplify.log");
  if (this_ptr->precompute_file == (_FILE *)0x0) {
    p_Var1 = shape_meshlod_cpp_CLodMesh_openPrecomputeFile_FUN_0051b770(this_ptr,"wt");
    this_ptr->precompute_file = p_Var1;
  }
  shape_meshlod_cpp_CLodMesh_normalizeAndCenterMesh_FUN_00516e10(this_ptr);
  shape_meshlod_cpp_CLodMesh_createNextLOD_FUN_00516f50(this_ptr);
  shape_meshlod_cpp_CLodMesh_buildSpatialGrid_FUN_00516620(this_ptr->next_lod);
  shape_meshlod_cpp_CLodMesh_gridSave_FUN_0051d420(this_ptr->next_lod,this_ptr->precompute_file);
  shape_meshlod_cpp_CLodMesh_buildEdges_FUN_00515ba0(this_ptr);
  shape_meshlod_cpp_CLodMesh_buildEdges_FUN_00515ba0(this_ptr->next_lod);
  shape_meshlod_cpp_CLodMesh_createOrigSamplePoints_FUN_00517000(this_ptr);
  shape_meshlod_cpp_CLodMesh_computeAllEdgeCollapseCosts_FUN_00519710(this_ptr);
  shape_meshlod_cpp_CLodMesh_eqSave_FUN_0051d0e0(this_ptr,this_ptr->precompute_file);
  this_ptr->lod_level_count = 0;
  return;
}
