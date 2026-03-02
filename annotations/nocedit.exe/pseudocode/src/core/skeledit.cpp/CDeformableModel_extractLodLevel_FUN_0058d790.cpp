// Name: core_skeledit.cpp_CDeformableModel_extractLodLevel_FUN_0058d790
// Address: 0058d790
// Address Range: [[0058d790, 0058ddd5]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_extractLodLevel_FUN_0058d790(CDeformableModel *this_ptr,int lod_index,CLodMesh *lod_mesh,CMatrix3x4f *inverse_matrices)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_skeledit_cpp_CDeformableModel_extractLodLevel_FUN_0058d790(CDeformableModel *this_ptr,int lod_index,CLodMesh *lod_mesh,CMatrix3x4f *inverse_matrices)

{
  float *pfVar1;
  float fVar2;
  double dVar3;
  CSkeleton *pCVar4;
  float *pfVar5;
  CVector3f *pCVar6;
  ushort *puVar7;
  ushort *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  char *pcVar13;
  CVector3f *pCVar14;
  uint *puVar15;
  int iVar16;
  char *pcVar17;
  float *pfVar18;
  ushort *puVar19;
  int iVar20;
  uint *puVar21;
  byte bVar22;
  float local_538;
  CVector3f local_534;
  float local_528 [250];
  int local_140;
  int local_13c;
  float local_138 [50];
  CVector3f local_70 [2];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  CDeformableModel *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  float *local_24;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar22 = 0;
  __STK();
  pCVar4 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr);
  local_18 = pCVar4->bone_count;
  core_skeleton_cpp_CDeformableModel_allocLOD_FUN_0059a510
            (this_ptr,lod_index,lod_mesh->vertex_count,lod_mesh->tri_count,0);
  local_38 = 0;
  local_4c = 0;
  local_3c = 0;
  local_58 = lod_index * 4;
  do {
    iVar16 = local_58;
    if (*(int *)((int)this_ptr->vertex_count + local_58) <= local_38) {
      shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(lod_mesh,0);
      shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(lod_mesh,1);
      shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(lod_mesh,2);
      iVar10 = 0;
      iVar16 = (int)this_ptr->lod_info + lod_index * 4 + -4;
      if (0 < this_ptr->num_parts) {
        do {
          *(uint *)(iVar16 + 0x7178) = 0;
          *(uint *)(iVar16 + 0x7164) = 0;
          iVar10 = iVar10 + 1;
          iVar16 = iVar16 + 0x60;
        } while (iVar10 < this_ptr->num_parts);
      }
      this_ptr->tri_count[lod_index] = 0;
      this_ptr->cap_tri_count[lod_index] = 0;
      local_30 = 0;
      if (0 < lod_mesh->tri_count) {
        local_2c = lod_index * 4;
        local_48 = 0;
        local_40 = 0;
        local_54 = (int)this_ptr->lod_info + local_2c + -4;
        local_50 = 0;
        do {
          puVar21 = (uint *)((int)lod_mesh->tri_data->attribute_indices + local_50);
          puVar19 = (ushort *)(*(int *)(local_54 + 0x7c) + local_40);
          *(uint *)(local_48 + *(int *)(local_54 + 0x90)) = *puVar21;
          dVar3 = 256;
          puVar7 = puVar19;
          puVar12 = puVar21;
          puVar15 = puVar21;
          do {
            *puVar7 = *(ushort *)(puVar12 + 4);
            puVar7[3] = (short)(int)ROUND(ROUND((double)(float)puVar15[7] * dVar3));
            pfVar18 = (float *)(puVar15 + 8);
            puVar15 = puVar15 + 2;
            puVar8 = puVar7 + 1;
            local_14 = (int)ROUND(ROUND((double)*pfVar18 * dVar3));
            puVar12 = puVar12 + 1;
            puVar7[6] = (short)local_14;
            puVar7 = puVar8;
          } while (puVar8 != puVar19 + 3);
          if (puVar21[2] == 0) {
            piVar9 = this_ptr->parts[puVar21[1]].tri_counts + lod_index;
            *piVar9 = *piVar9 + 1;
            this_ptr->tri_count[lod_index] = this_ptr->tri_count[lod_index] + 1;
          }
          else {
            piVar9 = this_ptr->parts[puVar21[1]].cap_tri_counts + lod_index;
            *piVar9 = *piVar9 + 1;
            this_ptr->cap_tri_count[lod_index] = this_ptr->cap_tri_count[lod_index] + 1;
          }
          local_48 = local_48 + 4;
          local_40 = local_40 + 0x12;
          local_50 = local_50 + 0x8c;
          local_30 = local_30 + 1;
        } while (local_30 < lod_mesh->tri_count);
      }
      iVar20 = 0;
      iVar11 = 0;
      iVar10 = 0;
      iVar16 = (int)this_ptr->lod_info + lod_index * 4 + -4;
      if (0 < this_ptr->num_parts) {
        do {
          iVar10 = iVar10 + *(int *)(iVar16 + 0x7164);
          iVar20 = iVar20 + *(int *)(iVar16 + 0x7178);
          iVar11 = iVar11 + 1;
          iVar16 = iVar16 + 0x60;
        } while (iVar11 < this_ptr->num_parts);
      }
      if ((iVar10 != this_ptr->tri_count[lod_index]) ||
         (iVar20 != this_ptr->cap_tri_count[lod_index])) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x89c;
        core_main_c_displayErrorAndQuit_FUN_00506f10("BUG! Count mismatch!!");
      }
      if (0 < this_ptr->cap_tri_count[lod_index]) {
        piVar9 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                           (this_ptr->cap_tri_count[lod_index] * 4,"..\\core\\skeledit.cpp",
                            0x8a1);
        this_ptr->cap_index_ptr[lod_index] = piVar9;
        if (piVar9 == (int *)0x0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x8a2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
        }
        local_1c = 0;
        local_34 = 0;
        iVar16 = this_ptr->tri_count[lod_index];
        if (0 < this_ptr->num_parts) {
          local_44 = this_ptr;
          do {
            iVar20 = local_1c << 2;
            iVar10 = iVar16 * 0x8c;
            for (iVar11 = 0; iVar11 < local_44->parts[0].cap_tri_counts[lod_index];
                iVar11 = iVar11 + 1) {
              iVar16 = iVar16 + 1;
              *(uint *)((int)this_ptr->cap_index_ptr[lod_index] + iVar20) =
                   *(uint *)((int)lod_mesh->tri_data->attribute_indices + iVar10 + 0xc);
              iVar10 = iVar10 + 0x8c;
              local_1c = local_1c + 1;
              iVar20 = iVar20 + 4;
            }
            local_44 = (CDeformableModel *)(local_44->tri_count + 3);
            local_34 = local_34 + 1;
          } while (local_34 < this_ptr->num_parts);
        }
      }
      return;
    }
    pcVar13 = lod_mesh->vertex_data->lod_workspace + local_3c + -0x10;
    local_534.x = *(float *)pcVar13;
    local_534.y = *(float *)(pcVar13 + 4);
    local_534.z = *(float *)(pcVar13 + 8);
    pcVar17 = pcVar13 + 0xc;
    pfVar18 = local_528;
    for (iVar10 = 0xfa; iVar10 != 0; iVar10 = iVar10 + -1) {
      *pfVar18 = *(float *)pcVar17;
      pcVar17 = pcVar17 + ((uint)bVar22 * -2 + 1) * 4;
      pfVar18 = pfVar18 + (uint)bVar22 * -2 + 1;
    }
    local_140 = *(int *)(pcVar13 + 0x3f4);
    local_13c = *(int *)(pcVar13 + 0x3f8);
    piVar9 = (int *)(pcVar13 + 0x3fc);
    pfVar18 = local_138;
    for (iVar10 = 0x32; iVar10 != 0; iVar10 = iVar10 + -1) {
      *pfVar18 = (float)*piVar9;
      piVar9 = piVar9 + (uint)bVar22 * -2 + 1;
      pfVar18 = pfVar18 + (uint)bVar22 * -2 + 1;
    }
    pfVar18 = (float *)(*(int *)((int)this_ptr->vertex_data_ptr + iVar16) + local_4c);
    fVar2 = 0.0;
    *(byte *)pfVar18 = 0;
    local_24 = pfVar18 + 4;
    while (*(byte *)pfVar18 < 3) {
      iVar16 = -1;
      iVar10 = 0;
      local_538 = 0.0;
      if (0 < local_18) {
        iVar11 = 0;
        do {
          if (local_538 < *(float *)((int)local_528 + iVar11)) {
            local_538 = *(float *)((int)local_528 + iVar11);
            iVar16 = iVar10;
          }
          iVar10 = iVar10 + 1;
          iVar11 = iVar11 + 4;
        } while (iVar10 < local_18);
      }
      if (local_538 <= 0.0) break;
      *(byte *)((int)pfVar18 + *(byte *)pfVar18 + 1) = (byte)iVar16;
      pfVar18[*(byte *)pfVar18 + 1] = local_538;
      pCVar6 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (local_70,&local_534,inverse_matrices + iVar16);
      pCVar14 = (CVector3f *)(local_24 + (uint)*(byte *)pfVar18 * 3);
      if (pCVar14 != pCVar6) {
        pCVar14->x = pCVar6->x;
        pCVar14->y = pCVar6->y;
        pCVar14->z = pCVar6->z;
      }
      local_528[iVar16] = 0.0;
      fVar2 = local_538 + fVar2;
      *(byte *)pfVar18 = *(byte *)pfVar18 + 1;
    }
    if (*(byte *)pfVar18 == 0) {
      g_CurrentFilename = "..\\core\\skeledit.cpp";
      g_CurrentLineNumber = 0x856;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find any bones influencing vertex!");
    }
    pfVar5 = pfVar18;
    for (iVar16 = 0; iVar16 < (int)(uint)*(byte *)pfVar18; iVar16 = iVar16 + 1) {
      pfVar1 = pfVar5 + 1;
      pfVar5 = pfVar5 + 1;
      *pfVar5 = *pfVar1 / fVar2;
    }
    local_3c = local_3c + 0x4c4;
    local_38 = local_38 + 1;
    local_4c = local_4c + 0x34;
  } while( true );
}
