// Name: shape_meshlod.cpp_CLodMesh_markDegenerateFaces_FUN_00516b40
// Address: 00516b40
// MANUAL RECONSTRUCTION
// Address Range: [[00516b40, 00516b90]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_markDegenerateFaces_FUN_00516b40(CLodMesh *this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_markDegenerateFaces_FUN_00516b40(CLodMesh *this_ptr)

{
  CLodFace *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar5 = 0;
  if (0 < this_ptr->tri_count) {
    do {
      pCVar1 = this_ptr->tri_data + iVar5;
      if (pCVar1->processed_flag == 0) {
        iVar2 = pCVar1->vertex_idx_1;
        iVar3 = pCVar1->vertex_idx_0;
        if (((iVar3 == iVar2) ||
            (iVar4 = pCVar1->vertex_idx_2, iVar3 == iVar4)) ||
           (iVar2 == iVar4)) {
          pCVar1->processed_flag = 1;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < this_ptr->tri_count);
  }
  return;
}
