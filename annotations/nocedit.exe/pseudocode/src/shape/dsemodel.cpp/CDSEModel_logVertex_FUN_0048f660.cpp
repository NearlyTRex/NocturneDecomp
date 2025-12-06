// Name: shape_dsemodel.cpp_CDSEModel_logVertex_FUN_0048f660
// Address: 0048f660
// Address Range: [[0048f660, 0048f6ed]]
// Convention: __cdecl
// Signature: void shape_dsemodel.cpp_CDSEModel_logVertex_FUN_0048f660(CDSEModel * this_ptr, int vertex_id)

#include "nocturne.h"

void __cdecl shape_dsemodel_cpp_CDSEModel_logVertex_FUN_0048f660(CDSEModel *this_ptr,int vertex_id)

{
  int local_14;
  
  for (local_14 = 0;
      (local_14 < this_ptr->vertex_count && (g_VertexIdRegistry[local_14] != vertex_id));
      local_14 = local_14 + 1) {
  }
  if (local_14 == this_ptr->vertex_count) {
    g_VertexIdRegistry[this_ptr->vertex_count] = vertex_id;
    this_ptr->vertex_count = this_ptr->vertex_count + 1;
    if (4999 < this_ptr->vertex_count) {
      g_CurrentFilename = "..\\shape\\dsemodel.cpp";
      g_CurrentLineNumber = 0x4a;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDSEModel::logVertex - Rich, you need to increase MAX_DSE_POINTS");
    }
  }
  return;
}
