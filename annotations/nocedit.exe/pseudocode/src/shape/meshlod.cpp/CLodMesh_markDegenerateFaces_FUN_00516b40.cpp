// Name: shape_meshlod.cpp_CLodMesh_markDegenerateFaces_FUN_00516b40
// Address: 00516b40
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
  int iVar6;
  
  iVar5 = 0;
  if (0 < this_ptr->tri_count) {
    iVar6 = 0;
    do {
      pCVar1 = this_ptr->tri_data;
      if (*(int *)((int)pCVar1->edge_perpendiculars + iVar6 + -0x14) == 0) {
        iVar2 = *(int *)((int)(pCVar1->uv_coords + -1) + iVar6);
        iVar3 = *(int *)((int)(pCVar1->uv_coords + -2) + iVar6 + 4);
        if (((iVar3 == iVar2) ||
            (iVar4 = *(int *)((int)(pCVar1->uv_coords + -1) + iVar6 + 4), iVar3 == iVar4)) ||
           (iVar2 == iVar4)) {
          *(uint *)((int)pCVar1->edge_perpendiculars + iVar6 + -0x14) = 1;
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x8c;
    } while (iVar5 < this_ptr->tri_count);
  }
  return;
}
