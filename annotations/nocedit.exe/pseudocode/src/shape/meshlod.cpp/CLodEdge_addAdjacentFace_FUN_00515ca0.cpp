// Name: shape_meshlod.cpp_CLodEdge_addAdjacentFace_FUN_00515ca0
// Address: 00515ca0
// Address Range: [[00515ca0, 00515d05]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodEdge_addAdjacentFace_FUN_00515ca0(CLodEdge *this_ptr,int tri_index)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodEdge_addAdjacentFace_FUN_00515ca0(CLodEdge *this_ptr,int tri_index)

{
  if (this_ptr->adjacent_tri_count < 0x32) {
    this_ptr->adjacent_tri_indices[this_ptr->adjacent_tri_count] = tri_index;
    this_ptr->adjacent_tri_count = this_ptr->adjacent_tri_count + 1;
    return;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Too many adj faces!");
  g_CurrentFilename = "..\\shape\\meshlod.cpp";
  g_CurrentLineNumber = 641;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Too many adj faces!");
  this_ptr->adjacent_tri_indices[this_ptr->adjacent_tri_count] = tri_index;
  this_ptr->adjacent_tri_count = this_ptr->adjacent_tri_count + 1;
  return;
}
