// Name: shape_meshlod.cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0
// Address: 005164d0
// Address Range: [[005164d0, 005164ff]]
// Convention: __cdecl
// Signature: int __cdecl shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(CLodMesh *this_ptr)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(CLodMesh *this_ptr)

{
  int iVar1;
  int iVar2;
  CLodFace *pCVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  if (0 < this_ptr->tri_count) {
    pCVar3 = this_ptr->tri_data;
    do {
      if (pCVar3->processed_flag == 0) {
        iVar2 = iVar2 + 1;
      }
      iVar1 = iVar1 + 1;
      pCVar3 = pCVar3 + 1;
    } while (iVar1 < this_ptr->tri_count);
  }
  return iVar2;
}
