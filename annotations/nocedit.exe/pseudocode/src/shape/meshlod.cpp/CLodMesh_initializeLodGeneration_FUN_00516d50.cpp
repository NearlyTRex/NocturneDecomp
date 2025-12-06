// Name: shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_00516d50
// Address: 00516d50
// Address Range: [[00516d50, 00516e00]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_00516d50(CLodMesh * this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_initializeLodGeneration_FUN_00516d50(CLodMesh *this_ptr)

{
  FILE *pFVar1;
  CLodMesh *unaff_EDI;
  
  if (this_ptr->next_lod != (CLodMesh *)0x0) {
    return;
  }
  crt_file_c_create_directory_FUN_00600e10("meshlod");
  crt_io_c_deleteFile_FUN_005ff9d0("meshlod\\simplify.log");
  if (this_ptr->precompute_file == (FILE *)0x0) {
    pFVar1 = shape_meshlod_cpp_CLodMesh_openPrecomputeFile_FUN_0051b770(this_ptr,"wt");
    this_ptr->precompute_file = pFVar1;
  }
  shape_meshlod_cpp_CLodMesh_normalizeAndCenterMesh_FUN_00516e10(this_ptr);
  shape_meshlod_cpp_CLodMesh_createNextLOD_FUN_00516f50(unaff_EDI);
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
