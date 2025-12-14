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
  int extraout_EAX;
  ushort *extraout_EAX_00;
  int *piVar5;
  int iVar6;
  int iVar7;
  int extraout_ECX;
  uint *puVar8;
  char *pcVar9;
  CVector3f *pCVar10;
  uint *puVar11;
  int extraout_EDX;
  uint *extraout_EDX_00;
  int iVar12;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  char *pcVar13;
  float *pfVar14;
  ushort *puVar15;
  ushort *puVar16;
  int iVar17;
  uint *puVar18;
  byte bVar19;
  float10 fVar20;
  double dVar21;
  int iStack00000008;
  CDeformableModel *in_stack_0000000c;
  int in_stack_00000010;
  CLodMesh *in_stack_00000014;
  int in_stack_00000018;
  float fVar22;
  float fVar23;
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
  
  bVar19 = 0;
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
    iVar12 = local_48;
    if (*(int *)((int)in_stack_0000000c->vertex_count + local_48) <= local_28) {
      shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(in_stack_00000014,0);
      shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(in_stack_00000014,1);
      shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(in_stack_00000014,2);
      iVar6 = 0;
      iVar12 = (int)in_stack_0000000c->lod_info + in_stack_00000010 * 4 + -4;
      if (0 < in_stack_0000000c->num_parts) {
        do {
          *(uint *)(iVar12 + 0x7178) = 0;
          *(uint *)(iVar12 + 0x7164) = 0;
          iVar6 = iVar6 + 1;
          iVar12 = iVar12 + 0x60;
        } while (iVar6 < in_stack_0000000c->num_parts);
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
          puVar18 = (uint *)((int)in_stack_00000014->tri_data->attribute_indices + local_34);
          puVar15 = (ushort *)(*(int *)(local_38 + 0x7c) + local_24);
          *(uint *)(local_2c + *(int *)(local_38 + 0x90)) = *puVar18;
          puVar16 = puVar15 + 3;
          fVar20 = (float10)256;
          puVar8 = puVar18;
          puVar11 = puVar18;
          do {
            *puVar15 = *(ushort *)(puVar8 + 4);
            dVar21 = crt_math_c_round_FUN_005fe6b0((double)((float10)(float)puVar11[7] * fVar20));
            *(short *)(extraout_EAX + 6) = (short)(int)ROUND(dVar21);
            dVar21 = crt_math_c_round_FUN_005fe6b0
                               ((double)((float10)*(float *)(extraout_EDX + 0x20) * fVar20));
            puVar8 = (uint *)(extraout_ECX + 4);
            extraout_EAX_00[5] = (short)(int)ROUND(dVar21);
            puVar15 = extraout_EAX_00;
            puVar11 = extraout_EDX_00;
          } while (extraout_EAX_00 != puVar16);
          if (puVar18[2] == 0) {
            piVar5 = (int *)((int)in_stack_0000000c->parts[puVar18[1]].tri_counts + iStack_10);
            *piVar5 = *piVar5 + 1;
            piVar5 = (int *)((int)in_stack_0000000c->tri_count + iStack_10);
            *piVar5 = *piVar5 + 1;
          }
          else {
            piVar5 = (int *)((int)in_stack_0000000c->parts[puVar18[1]].cap_tri_counts + iStack_10);
            *piVar5 = *piVar5 + 1;
            piVar5 = (int *)((int)in_stack_0000000c->cap_tri_count + iStack_10);
            *piVar5 = *piVar5 + 1;
          }
          local_2c = local_2c + 4;
          local_24 = local_24 + 0x12;
          local_34 = local_34 + 0x8c;
          local_14 = (float *)((int)local_14 + 1);
        } while ((int)local_14 < in_stack_00000014->tri_count);
      }
      iVar17 = 0;
      iVar7 = 0;
      iVar6 = 0;
      iVar12 = (int)in_stack_0000000c->lod_info + in_stack_00000010 * 4 + -4;
      if (0 < in_stack_0000000c->num_parts) {
        do {
          iVar6 = iVar6 + *(int *)(iVar12 + 0x7164);
          iVar17 = iVar17 + *(int *)(iVar12 + 0x7178);
          iVar7 = iVar7 + 1;
          iVar12 = iVar12 + 0x60;
        } while (iVar7 < in_stack_0000000c->num_parts);
      }
      if ((iVar6 != in_stack_0000000c->tri_count[in_stack_00000010]) ||
         (iVar17 != in_stack_0000000c->cap_tri_count[in_stack_00000010])) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x89c;
        core_main_c_displayErrorAndQuit_FUN_00506f10("BUG! Count mismatch!!");
      }
      if (0 < in_stack_0000000c->cap_tri_count[in_stack_00000010]) {
        piVar5 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                           (in_stack_0000000c->cap_tri_count[in_stack_00000010] * 4,
                            "..\\core\\skeledit.cpp",0x8a1);
        in_stack_0000000c->cap_index_ptr[in_stack_00000010] = piVar5;
        if (piVar5 == (int *)0x0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x8a2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
        }
        iStack00000008 = 0;
        iStack_10 = 0;
        iVar12 = in_stack_0000000c->tri_count[in_stack_00000010];
        if (0 < in_stack_0000000c->num_parts) {
          local_20 = in_stack_0000000c;
          do {
            iVar17 = iStack00000008 << 2;
            iVar6 = iVar12 * 0x8c;
            for (iVar7 = 0; iVar7 < local_20->parts[0].cap_tri_counts[in_stack_00000010];
                iVar7 = iVar7 + 1) {
              iVar12 = iVar12 + 1;
              *(uint *)((int)in_stack_0000000c->cap_index_ptr[in_stack_00000010] + iVar17) =
                   *(uint *)
                    ((int)in_stack_00000014->tri_data->attribute_indices + iVar6 + 0xc);
              iVar6 = iVar6 + 0x8c;
              iStack00000008 = iStack00000008 + 1;
              iVar17 = iVar17 + 4;
            }
            local_20 = (CDeformableModel *)(local_20->tri_count + 3);
            iStack_10 = iStack_10 + 1;
          } while (iStack_10 < in_stack_0000000c->num_parts);
        }
      }
      return;
    }
    pcVar9 = in_stack_00000014->vertex_data->lod_workspace + local_2c + -0x10;
    fVar23 = *(float *)pcVar9;
    pcVar13 = pcVar9 + 0xc;
    pfVar14 = afStack_518;
    for (iVar6 = 0xfa; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar14 = *(float *)pcVar13;
      pcVar13 = pcVar13 + ((uint)bVar19 * -2 + 1) * 4;
      pfVar14 = pfVar14 + (uint)bVar19 * -2 + 1;
    }
    iStack_130 = *(int *)(pcVar9 + 0x3f4);
    iStack_12c = *(int *)(pcVar9 + 0x3f8);
    piVar5 = (int *)(pcVar9 + 0x3fc);
    pfVar14 = afStack_128;
    for (iVar6 = 0x32; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar14 = (float)*piVar5;
      piVar5 = piVar5 + (uint)bVar19 * -2 + 1;
      pfVar14 = pfVar14 + (uint)bVar19 * -2 + 1;
    }
    pfVar14 = (float *)(*(int *)((int)in_stack_0000000c->vertex_data_ptr + iVar12) + local_3c);
    dVar21 = 0.0;
    *(byte *)pfVar14 = 0;
    local_14 = pfVar14 + 4;
    while (*(byte *)pfVar14 < 3) {
      iVar12 = -1;
      iVar6 = 0;
      fVar22 = 0.0;
      if (0 < unaff_EBP) {
        iVar7 = 0;
        do {
          if (fVar22 < *(float *)((int)afStack_518 + iVar7)) {
            fVar22 = *(float *)((int)afStack_518 + iVar7);
            iVar12 = iVar6;
          }
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + 4;
        } while (iVar6 < unaff_EBP);
      }
      if (fVar22 <= 0.0) break;
      *(byte *)((int)pfVar14 + *(byte *)pfVar14 + 1) = (byte)iVar12;
      pfVar14[*(byte *)pfVar14 + 1] = fVar22;
      pCVar4 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (aCStack_60,(CVector3f *)&stack0xfffffadc,
                          (CMatrix3x4f *)(iVar12 * 0x30 + in_stack_00000018));
      pCVar10 = (CVector3f *)((uint)*(byte *)pfVar14 * 0xc + iStack_10);
      if (pCVar10 != pCVar4) {
        pCVar10->x = pCVar4->x;
        pCVar10->y = pCVar4->y;
        pCVar10->z = pCVar4->z;
      }
      afStack_518[iVar12 + 1] = 0.0;
      dVar21 = (double)(fVar23 + (float)dVar21);
      *(byte *)pfVar14 = *(byte *)pfVar14 + 1;
    }
    if (*(byte *)pfVar14 == 0) {
      g_CurrentFilename = "..\\core\\skeledit.cpp";
      g_CurrentLineNumber = 0x856;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find any bones influencing vertex!");
    }
    pfVar3 = pfVar14;
    for (iVar12 = 0; iVar12 < (int)(uint)*(byte *)pfVar14; iVar12 = iVar12 + 1) {
      pfVar1 = pfVar3 + 1;
      pfVar3 = pfVar3 + 1;
      *pfVar3 = *pfVar1 / (float)dVar21;
    }
    local_2c = local_2c + 0x4c4;
    local_28 = local_28 + 1;
    local_3c = local_3c + 0x34;
  } while( true );
}
