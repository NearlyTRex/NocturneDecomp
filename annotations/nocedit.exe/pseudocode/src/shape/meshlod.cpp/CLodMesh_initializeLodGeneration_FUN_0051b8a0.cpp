// Name: shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_0051b8a0
// Address: 0051b8a0
// Address Range: [[0051b8a0, 0051b91c]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_0051b8a0(CLodMesh * this_ptr, FILE * file_handle)

#include "nocturne.h"

int __cdecl
shape_meshlod_cpp_CLodMesh_initializeLodGeneration_FUN_0051b8a0
          (CLodMesh *this_ptr,FILE *file_handle)

{
  crt_file_c_create_directory_FUN_00600e10("meshlod");
  crt_io_c_deleteFile_FUN_005ff9d0("meshlod\\simplify.log");
  shape_meshlod_cpp_CLodMesh_normalizeAndCenterMesh_FUN_00516e10(this_ptr);
  shape_meshlod_cpp_CLodMesh_createNextLOD_FUN_00516f50(this_ptr);
  shape_meshlod_cpp_CLodMesh_gridLoad_FUN_0051d2d0(this_ptr->next_lod,file_handle);
  shape_meshlod_cpp_CLodMesh_buildEdges_FUN_00515ba0(this_ptr);
  shape_meshlod_cpp_CLodMesh_buildEdges_FUN_00515ba0(this_ptr->next_lod);
  shape_meshlod_cpp_CLodMesh_createOrigSamplePoints_FUN_00517000(this_ptr);
  shape_meshlod_cpp_CLodMesh_eqLoad_FUN_0051cdf0(this_ptr,file_handle);
  shape_meshlod_cpp_CLodMesh_loadReplayData_FUN_0051d180(this_ptr,file_handle);
  return 1;
}
