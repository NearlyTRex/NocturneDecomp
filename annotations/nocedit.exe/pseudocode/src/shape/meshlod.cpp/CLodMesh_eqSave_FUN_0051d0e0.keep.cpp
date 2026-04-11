// Name: shape_meshlod.cpp_CLodMesh_eqSave_FUN_0051d0e0
// Address: 0051d0e0
// MANUAL RECONSTRUCTION
// Address Range: [[0051d0e0, 0051d17c]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_eqSave_FUN_0051d0e0(CLodMesh *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_eqSave_FUN_0051d0e0(CLodMesh *this_ptr,_FILE *file_handle)

{
  CLodEdge *edge;
  int iVar3;
  double dVar1;

  if (file_handle != (_FILE *)0x0) {
    iVar3 = 0;
    _fprintf(file_handle,"%d\n",this_ptr->edge_count);
    if (0 < this_ptr->edge_count) {
      dVar1 = 9.9999999999999997e+34 * 0.98999999999999999;
      do {
        edge = this_ptr->edges_ptr + iVar3;
        if (dVar1 <= edge->collapse_cost) {
          edge->collapse_error = 0;
        }
        iVar3 = iVar3 + 1;
        _fprintf(file_handle,"%d,%d,%lg,%g\n",edge->vertex_idx_1,edge->vertex_idx_2,
                   edge->collapse_cost,(double)edge->collapse_error);
      } while (iVar3 < this_ptr->edge_count);
    }
  }
  return;
}
