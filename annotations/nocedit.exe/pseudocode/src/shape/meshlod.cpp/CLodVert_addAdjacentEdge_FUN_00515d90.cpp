// Name: shape_meshlod.cpp_CLodVert_addAdjacentEdge_FUN_00515d90
// Address: 00515d90
// Address Range: [[00515d90, 00515df3]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodVert_addAdjacentEdge_FUN_00515d90(CLodVert *this_ptr,int edge_index)

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodVert_addAdjacentEdge_FUN_00515d90(CLodVert *this_ptr,int edge_index)

{
  if (0x31 < this_ptr->adjacent_edge_count) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Too many adj edges!");
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x2c1;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many adj edges!");
  }
  this_ptr->adjacent_edge_indices[this_ptr->adjacent_edge_count] = edge_index;
  this_ptr->adjacent_edge_count = this_ptr->adjacent_edge_count + 1;
  return;
}
