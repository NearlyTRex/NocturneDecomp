// Name: core_charactr.cpp_applyFacePartToHead_FUN_004246e0
// Address: 004246e0
// Address Range: [[004246e0, 004247e0]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_applyFacePartToHead_FUN_004246e0(CDeformableModel *model,int head_part_index,int face_part_index)

#include "nocturne.h"

void __cdecl core_charactr_cpp_applyFacePartToHead_FUN_004246e0(CDeformableModel *model,int head_part_index,int face_part_index)

{
  int iVar1;
  SInputFace *pSVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  SInputFace *pSVar6;
  CDeformableModel *pCVar7;
  int iVar8;
  int iVar9;
  SInputFace *pSVar10;
  int local_14;
  
  iVar8 = 0;
  iVar1 = model->parts[head_part_index].tri_counts[0];
  iVar4 = 0;
  pCVar7 = model;
  if (0 < head_part_index) {
    do {
      iVar4 = iVar4 + 1;
      iVar8 = iVar8 + pCVar7->parts[0].tri_counts[0];
      pCVar7 = (CDeformableModel *)(pCVar7->tri_count + 3);
    } while (iVar4 < head_part_index);
  }
  pSVar2 = model->tri_data_ptr[0];
  iVar4 = model->parts[face_part_index].tri_counts[0];
  iVar9 = 0;
  iVar5 = 0;
  pCVar7 = model;
  if (0 < face_part_index) {
    do {
      iVar5 = iVar5 + 1;
      iVar9 = iVar9 + pCVar7->parts[0].tri_counts[0];
      pCVar7 = (CDeformableModel *)(pCVar7->tri_count + 3);
    } while (iVar5 < face_part_index);
  }
  local_14 = 0;
  pSVar10 = model->tri_data_ptr[0] + iVar9;
  if (0 < iVar4) {
    do {
      iVar5 = 0;
      pSVar6 = pSVar2 + iVar8;
      if (0 < iVar1) {
        do {
          if ((((pSVar10->vertex_indices).vertex_index_0 == (pSVar6->vertex_indices).vertex_index_0)
              && ((pSVar10->vertex_indices).vertex_index_1 ==
                  (pSVar6->vertex_indices).vertex_index_1)) &&
             ((pSVar10->vertex_indices).vertex_index_2 == (pSVar6->vertex_indices).vertex_index_2))
          {
            uVar3 = (pSVar10->vertex_indices).vertex_index_1;
            (pSVar6->vertex_indices).vertex_index_0 = (pSVar10->vertex_indices).vertex_index_0;
            (pSVar6->vertex_indices).vertex_index_1 = uVar3;
            *(uint *)&(pSVar6->vertex_indices).vertex_index_2 =
                 *(uint *)&(pSVar10->vertex_indices).vertex_index_2;
            uVar3 = pSVar10->u_coord_2;
            pSVar6->u_coord_1 = pSVar10->u_coord_1;
            pSVar6->u_coord_2 = uVar3;
            uVar3 = pSVar10->v_coord_1;
            pSVar6->v_coord_0 = pSVar10->v_coord_0;
            pSVar6->v_coord_1 = uVar3;
            pSVar6->v_coord_2 = pSVar10->v_coord_2;
          }
          iVar5 = iVar5 + 1;
          pSVar6 = pSVar6 + 1;
        } while (iVar5 < iVar1);
      }
      local_14 = local_14 + 1;
      pSVar10 = pSVar10 + 1;
    } while (local_14 < iVar4);
  }
  return;
}
