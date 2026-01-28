// Name: shape_dsemodel.cpp_CDSEModel_convertVertex_FUN_0048f6f0
// Address: 0048f6f0
// Address Range: [[0048f6f0, 0048f762]]
// Convention: __cdecl
// Signature: int __cdecl shape_dsemodel_cpp_CDSEModel_convertVertex_FUN_0048f6f0(CDSEModel *this_ptr,int vertex_id)

#include "nocturne.h"

int __cdecl
shape_dsemodel_cpp_CDSEModel_convertVertex_FUN_0048f6f0(CDSEModel *this_ptr,int vertex_id)

{
  int local_14;
  
  local_14 = 0;
  while( true ) {
    if (this_ptr->vertex_count <= local_14) {
      g_CurrentFilename = "..\\shape\\dsemodel.cpp";
      g_CurrentLineNumber = 0x5a;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDSEModel::convertVertex - Vertex not found");
      return -1;
    }
    if (g_VertexIdRegistry[local_14] == vertex_id) break;
    local_14 = local_14 + 1;
  }
  return local_14;
}
