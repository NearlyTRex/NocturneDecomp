// Name: shape_meshlod.cpp_CLodMesh_compactFaces_FUN_0051b570
// Address: 0051b570
// MANUAL RECONSTRUCTION
// Address Range: [[0051b570, 0051b6ee] [00604e5e, 00604e81] [0060a43c, 0060a49a]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_compactFaces_FUN_0051b570(CLodMesh *this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_compactFaces_FUN_0051b570(CLodMesh *this_ptr)

{
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  CLodFace *pCVar1;
  byte bVar8;
  
  bVar8 = 0;
  iVar3 = 0;
  local_1c = 0;
  if (0 < this_ptr->tri_count) {
    iVar5 = 0;
    do {
      pCVar1 = this_ptr->tri_data;
      if (*(int *)((int)pCVar1->edge_perpendiculars + iVar5 + -0x14) == 0) {
        *(int *)((int)pCVar1->edge_perpendiculars + iVar5 + -0x14) = local_1c;
        local_1c = local_1c + 1;
      }
      else {
        *(uint *)((int)pCVar1->edge_perpendiculars + iVar5 + -0x14) = 0xffffffff;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x8c;
    } while (iVar3 < this_ptr->tri_count);
  }
  local_14 = 0;
  local_20 = 0;
  if (0 < this_ptr->tri_count) {
    local_18 = 0;
    local_24 = 0;
    do {
      puVar2 = (uint *)((int)this_ptr->tri_data->attribute_indices + local_24);
      if (-1 < (int)puVar2[0x10]) {
        if (local_20 < local_14) {
          puVar4 = (uint *)((int)this_ptr->tri_data->attribute_indices + local_18);
          *puVar4 = *puVar2;
          puVar4[1] = puVar2[1];
          puVar4[2] = puVar2[2];
          puVar4[3] = puVar2[3];
          puVar4[4] = puVar2[4];
          puVar4[5] = puVar2[5];
          puVar4[6] = puVar2[6];
          memcpy(puVar4 + 7,puVar2 + 7,0x18);
          puVar4[0xd] = puVar2[0xd];
          puVar4[0xe] = puVar2[0xe];
          puVar4[0xf] = puVar2[0xf];
          puVar4[0x10] = puVar2[0x10];
          if (puVar4 + 0x11 != puVar2 + 0x11) {
            puVar4[0x11] = puVar2[0x11];
            puVar4[0x12] = puVar2[0x12];
            puVar4[0x13] = puVar2[0x13];
          }
          puVar4[0x14] = puVar2[0x14];
          __arr_op
                    (puVar4 + 0x15,puVar2 + 0x15,3,0xc,core_actor_cpp_copyVector_FUN_00410360);
          puVar4[0x1e] = puVar2[0x1e];
          puVar4[0x1f] = puVar2[0x1f];
          puVar4[0x20] = puVar2[0x20];
          puVar4[0x21] = puVar2[0x21];
          puVar4[0x22] = puVar2[0x22];
        }
        local_20 = local_20 + 1;
        *(uint *)((int)this_ptr->tri_data->edge_perpendiculars + local_18 + -0x14) = 0;
        local_18 = local_18 + 0x8c;
      }
      local_24 = local_24 + 0x8c;
      local_14 = local_14 + 1;
    } while (local_14 < this_ptr->tri_count);
  }
  this_ptr->tri_count = local_1c;
  return;
}
