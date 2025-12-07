// Name: core_skeledit.cpp_FUN_0058d790
// Address: 0058d790
// Address Range: [[0058d790, 0058ddd5]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058d790()

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058d790(void)

{
  float *pfVar1;
  CSkeleton *pCVar2;
  float *pfVar3;
  CVector3f *pCVar4;
  ushort *puVar5;
  ushort *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  char *pcVar11;
  CVector3f *pCVar12;
  uint *puVar13;
  int iVar14;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  char *pcVar15;
  float *pfVar16;
  ushort *puVar17;
  int iVar18;
  uint *puVar19;
  byte bVar20;
  double dVar21;
  int iStack00000008;
  CDeformableModel *in_stack_0000000c;
  int in_stack_00000010;
  CLodMesh *in_stack_00000014;
  int in_stack_00000018;
  double dVar22;
  float fVar23;
  float fVar24;
  float afStack_518 [250];
  int iStack_130;
  int iStack_12c;
  float afStack_128 [50];
  CVector3f aCStack_60 [2];
  int local_48;
  int local_3c;
  int local_38;
  int local_34;
  int local_2c;
  int local_28;
  int local_24;
  CDeformableModel *local_20;
  float *local_14;
  int iStack_10;
  int iStack_c;
  
  bVar20 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x558);
  pCVar2 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(in_stack_0000000c);
  iStack_c = pCVar2->bone_count;
  core_skeleton_cpp_CDeformableModel_allocLOD_FUN_0059a510
            (in_stack_0000000c,in_stack_00000010,in_stack_00000014->vertex_count,
             in_stack_00000014->tri_count,0);
  local_28 = 0;
  local_3c = 0;
  local_2c = 0;
  local_48 = in_stack_00000010 * 4;
  do {
    iVar14 = local_48;
    if (*(int *)((int)in_stack_0000000c->vertex_count + local_48) <= local_28) {
      shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(in_stack_00000014,0);
      shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(in_stack_00000014,1);
      shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(in_stack_00000014,2);
      iVar8 = 0;
      iVar14 = (int)in_stack_0000000c->lod_info + in_stack_00000010 * 4 + -4;
      if (0 < in_stack_0000000c->num_parts) {
        do {
          *(uint *)(iVar14 + 0x7178) = 0;
          *(uint *)(iVar14 + 0x7164) = 0;
          iVar8 = iVar8 + 1;
          iVar14 = iVar14 + 0x60;
        } while (iVar8 < in_stack_0000000c->num_parts);
      }
      in_stack_0000000c->tri_count[in_stack_00000010] = 0;
      in_stack_0000000c->cap_tri_count[in_stack_00000010] = 0;
      local_14 = (float *)0x0;
      if (0 < in_stack_00000014->tri_count) {
        iStack_10 = in_stack_00000010 * 4;
        local_2c = 0;
        local_24 = 0;
        local_38 = (int)in_stack_0000000c->lod_info + iStack_10 + -4;
        local_34 = 0;
        do {
          puVar19 = (uint *)((int)in_stack_00000014->tri_data->attribute_indices + local_34);
          puVar17 = (ushort *)(*(int *)(local_38 + 0x7c) + local_24);
          *(uint *)(local_2c + *(int *)(local_38 + 0x90)) = *puVar19;
          dVar22 = 256;
          puVar5 = puVar17;
          puVar10 = puVar19;
          puVar13 = puVar19;
          do {
            *puVar5 = *(ushort *)(puVar10 + 4);
            dVar21 = crt_math_c_round_FUN_005fe6b0((double)(float)puVar13[7] * dVar22);
            puVar5[3] = (short)(int)ROUND(dVar21);
            pfVar16 = (float *)(puVar13 + 8);
            puVar13 = puVar13 + 2;
            puVar6 = puVar5 + 1;
            dVar21 = crt_math_c_round_FUN_005fe6b0((double)*pfVar16 * dVar22);
            puVar10 = puVar10 + 1;
            puVar5[6] = (short)(int)ROUND(dVar21);
            puVar5 = puVar6;
          } while (puVar6 != puVar17 + 3);
          if (puVar19[2] == 0) {
            piVar7 = (int *)((int)in_stack_0000000c->parts[puVar19[1]].tri_counts + iStack_10);
            *piVar7 = *piVar7 + 1;
            piVar7 = (int *)((int)in_stack_0000000c->tri_count + iStack_10);
            *piVar7 = *piVar7 + 1;
          }
          else {
            piVar7 = (int *)((int)in_stack_0000000c->parts[puVar19[1]].cap_tri_counts + iStack_10);
            *piVar7 = *piVar7 + 1;
            piVar7 = (int *)((int)in_stack_0000000c->cap_tri_count + iStack_10);
            *piVar7 = *piVar7 + 1;
          }
          local_2c = local_2c + 4;
          local_24 = local_24 + 0x12;
          local_34 = local_34 + 0x8c;
          local_14 = (float *)((int)local_14 + 1);
        } while ((int)local_14 < in_stack_00000014->tri_count);
      }
      iVar18 = 0;
      iVar9 = 0;
      iVar8 = 0;
      iVar14 = (int)in_stack_0000000c->lod_info + in_stack_00000010 * 4 + -4;
      if (0 < in_stack_0000000c->num_parts) {
        do {
          iVar8 = iVar8 + *(int *)(iVar14 + 0x7164);
          iVar18 = iVar18 + *(int *)(iVar14 + 0x7178);
          iVar9 = iVar9 + 1;
          iVar14 = iVar14 + 0x60;
        } while (iVar9 < in_stack_0000000c->num_parts);
      }
      if ((iVar8 != in_stack_0000000c->tri_count[in_stack_00000010]) ||
         (iVar18 != in_stack_0000000c->cap_tri_count[in_stack_00000010])) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x89c;
        core_main_c_displayErrorAndQuit_FUN_00506f10("BUG! Count mismatch!!");
      }
      if (0 < in_stack_0000000c->cap_tri_count[in_stack_00000010]) {
        piVar7 = (int *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                                  (in_stack_0000000c->cap_tri_count[in_stack_00000010] * 4,
                                   "..\\core\\skeledit.cpp",0x8a1);
        in_stack_0000000c->cap_index_ptr[in_stack_00000010] = piVar7;
        if (piVar7 == (int *)0x0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x8a2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
        }
        iStack00000008 = 0;
        iStack_10 = 0;
        iVar14 = in_stack_0000000c->tri_count[in_stack_00000010];
        if (0 < in_stack_0000000c->num_parts) {
          local_20 = in_stack_0000000c;
          do {
            iVar18 = iStack00000008 << 2;
            iVar8 = iVar14 * 0x8c;
            for (iVar9 = 0; iVar9 < local_20->parts[0].cap_tri_counts[in_stack_00000010];
                iVar9 = iVar9 + 1) {
              iVar14 = iVar14 + 1;
              *(uint *)((int)in_stack_0000000c->cap_index_ptr[in_stack_00000010] + iVar18) =
                   *(uint *)
                    ((int)in_stack_00000014->tri_data->attribute_indices + iVar8 + 0xc);
              iVar8 = iVar8 + 0x8c;
              iStack00000008 = iStack00000008 + 1;
              iVar18 = iVar18 + 4;
            }
            local_20 = (CDeformableModel *)(local_20->tri_count + 3);
            iStack_10 = iStack_10 + 1;
          } while (iStack_10 < in_stack_0000000c->num_parts);
        }
      }
      return;
    }
    pcVar11 = in_stack_00000014->vertex_data->lod_workspace + local_2c + -0x10;
    fVar24 = *(float *)pcVar11;
    pcVar15 = pcVar11 + 0xc;
    pfVar16 = afStack_518;
    for (iVar8 = 0xfa; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pfVar16 = *(float *)pcVar15;
      pcVar15 = pcVar15 + ((uint)bVar20 * -2 + 1) * 4;
      pfVar16 = pfVar16 + (uint)bVar20 * -2 + 1;
    }
    iStack_130 = *(int *)(pcVar11 + 0x3f4);
    iStack_12c = *(int *)(pcVar11 + 0x3f8);
    piVar7 = (int *)(pcVar11 + 0x3fc);
    pfVar16 = afStack_128;
    for (iVar8 = 0x32; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pfVar16 = (float)*piVar7;
      piVar7 = piVar7 + (uint)bVar20 * -2 + 1;
      pfVar16 = pfVar16 + (uint)bVar20 * -2 + 1;
    }
    pfVar16 = (float *)(*(int *)((int)in_stack_0000000c->vertex_data_ptr + iVar14) + local_3c);
    dVar22 = 0.0;
    *(byte *)pfVar16 = 0;
    local_14 = pfVar16 + 4;
    while (*(byte *)pfVar16 < 3) {
      iVar14 = -1;
      iVar8 = 0;
      fVar23 = 0.0;
      if (0 < unaff_EBP) {
        iVar9 = 0;
        do {
          if (fVar23 < *(float *)((int)afStack_518 + iVar9)) {
            fVar23 = *(float *)((int)afStack_518 + iVar9);
            iVar14 = iVar8;
          }
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + 4;
        } while (iVar8 < unaff_EBP);
      }
      if (fVar23 <= 0.0) break;
      *(byte *)((int)pfVar16 + *(byte *)pfVar16 + 1) = (byte)iVar14;
      pfVar16[*(byte *)pfVar16 + 1] = fVar23;
      pCVar4 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (aCStack_60,(CVector3f *)&stack0xfffffadc,
                          (CMatrix3x4f *)(iVar14 * 0x30 + in_stack_00000018));
      pCVar12 = (CVector3f *)((uint)*(byte *)pfVar16 * 0xc + iStack_10);
      if (pCVar12 != pCVar4) {
        pCVar12->x = pCVar4->x;
        pCVar12->y = pCVar4->y;
        pCVar12->z = pCVar4->z;
      }
      afStack_518[iVar14 + 1] = 0.0;
      dVar22 = (double)(fVar24 + (float)dVar22);
      *(byte *)pfVar16 = *(byte *)pfVar16 + 1;
    }
    if (*(byte *)pfVar16 == 0) {
      g_CurrentFilename = "..\\core\\skeledit.cpp";
      g_CurrentLineNumber = 0x856;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find any bones influencing vertex!");
    }
    pfVar3 = pfVar16;
    for (iVar14 = 0; iVar14 < (int)(uint)*(byte *)pfVar16; iVar14 = iVar14 + 1) {
      pfVar1 = pfVar3 + 1;
      pfVar3 = pfVar3 + 1;
      *pfVar3 = *pfVar1 / (float)dVar22;
    }
    local_2c = local_2c + 0x4c4;
    local_28 = local_28 + 1;
    local_3c = local_3c + 0x34;
  } while( true );
}
