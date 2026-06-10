// Name: shape_meshlod.cpp_CLodMesh_markDuplicateFaces_FUN_00516a40
// Address: 00516a40
// MANUAL RECONSTRUCTION
// Address Range: [[00516a40, 00516b37]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_markDuplicateFaces_FUN_00516a40(CLodMesh *this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_markDuplicateFaces_FUN_00516a40(CLodMesh *this_ptr)

{
  int iVar2;
  int iVar4;
  int iVar5;
  int local_24;
  int local_1c;
  CLodFace *face_i;
  CLodFace *face_j;

  local_24 = 0;
  if (0 < this_ptr->tri_count) {
    do {
      face_i = this_ptr->tri_data + local_24;
      if ((face_i->processed_flag == 0) && (local_1c = local_24 + 1, local_1c < this_ptr->tri_count)
         ) {
        do {
          face_j = this_ptr->tri_data + local_1c;
          if (face_j->processed_flag == 0) {
            iVar5 = 0;
            do {
              iVar4 = 0;
              iVar2 = iVar5;
              do {
                if ((&face_i->vertex_idx_0)[iVar4] != (&face_j->vertex_idx_0)[iVar2 % 3])
                break;
                iVar2 = iVar2 + 1;
                iVar4 = iVar4 + 1;
              } while (iVar4 < 3);
              if (iVar4 == 3) {
                face_j->processed_flag = 1;
                break;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < 3);
          }
          local_1c = local_1c + 1;
        } while (local_1c < this_ptr->tri_count);
      }
      local_24 = local_24 + 1;
    } while (local_24 < this_ptr->tri_count);
  }
  return;
}
