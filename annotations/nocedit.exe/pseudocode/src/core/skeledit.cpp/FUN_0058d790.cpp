// Name: core_skeledit.cpp_FUN_0058d790
// Address: 0058d790
// Address Range: [[0058d790, 0058ddd5]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058d790()

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058d790(void)

{
  float *pfVar1;
  float fVar2;
  CSkeleton *pCVar3;
  float *pfVar4;
  CVector3f *pCVar5;
  int extraout_EAX;
  ushort *extraout_EAX_00;
  int *piVar6;
  int iVar7;
  int iVar8;
  int extraout_ECX;
  uint *puVar9;
  char *pcVar10;
  CVector3f *pCVar11;
  uint *puVar12;
  int extraout_EDX;
  uint *extraout_EDX_00;
  int iVar13;
  char *pcVar14;
  float *pfVar15;
  ushort *puVar16;
  ushort *puVar17;
  int iVar18;
  uint *puVar19;
  byte bVar20;
  float10 fVar21;
  double dVar22;
  CDeformableModel *in_stack_00000004;
  int in_stack_00000008;
  CLodMesh *in_stack_0000000c;
  int in_stack_00000010;
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
  
  bVar20 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x558);
  pCVar3 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(in_stack_00000004);
  local_18 = pCVar3->bone_count;
  core_skeleton_cpp_CDeformableModel_allocLOD_FUN_0059a510
            (in_stack_00000004,in_stack_00000008,in_stack_0000000c->vertex_count,
             in_stack_0000000c->tri_count,0);
  local_38 = 0;
  local_4c = 0;
  local_3c = 0;
  local_58 = in_stack_00000008 * 4;
  do {
    iVar13 = local_58;
    if (*(int *)((int)in_stack_00000004->vertex_count + local_58) <= local_38) {
      shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(in_stack_0000000c,0);
      shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(in_stack_0000000c,1);
      shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(in_stack_0000000c,2);
      iVar7 = 0;
      iVar13 = (int)in_stack_00000004->lod_info + in_stack_00000008 * 4 + -4;
      if (0 < in_stack_00000004->num_parts) {
        do {
          *(uint *)(iVar13 + 0x7178) = 0;
          *(uint *)(iVar13 + 0x7164) = 0;
          iVar7 = iVar7 + 1;
          iVar13 = iVar13 + 0x60;
        } while (iVar7 < in_stack_00000004->num_parts);
      }
      in_stack_00000004->tri_count[in_stack_00000008] = 0;
      in_stack_00000004->cap_tri_count[in_stack_00000008] = 0;
      local_30 = 0;
      if (0 < in_stack_0000000c->tri_count) {
        local_2c = in_stack_00000008 * 4;
        local_48 = 0;
        local_40 = 0;
        local_54 = (int)in_stack_00000004->lod_info + local_2c + -4;
        local_50 = 0;
        do {
          puVar19 = (uint *)((int)in_stack_0000000c->tri_data->attribute_indices + local_50);
          puVar16 = (ushort *)(*(int *)(local_54 + 0x7c) + local_40);
          *(uint *)(local_48 + *(int *)(local_54 + 0x90)) = *puVar19;
          puVar17 = puVar16 + 3;
          fVar21 = (float10)256;
          puVar9 = puVar19;
          puVar12 = puVar19;
          do {
            *puVar16 = *(ushort *)(puVar9 + 4);
            dVar22 = crt_math_c_round_FUN_005fe6b0((double)((float10)(float)puVar12[7] * fVar21));
            *(short *)(extraout_EAX + 6) = (short)(int)ROUND(dVar22);
            dVar22 = crt_math_c_round_FUN_005fe6b0
                               ((double)((float10)*(float *)(extraout_EDX + 0x20) * fVar21));
            local_14 = (int)ROUND(dVar22);
            puVar9 = (uint *)(extraout_ECX + 4);
            extraout_EAX_00[5] = (short)local_14;
            puVar16 = extraout_EAX_00;
            puVar12 = extraout_EDX_00;
          } while (extraout_EAX_00 != puVar17);
          if (puVar19[2] == 0) {
            piVar6 = (int *)((int)in_stack_00000004->parts[puVar19[1]].tri_counts + local_2c);
            *piVar6 = *piVar6 + 1;
            piVar6 = (int *)((int)in_stack_00000004->tri_count + local_2c);
            *piVar6 = *piVar6 + 1;
          }
          else {
            piVar6 = (int *)((int)in_stack_00000004->parts[puVar19[1]].cap_tri_counts + local_2c);
            *piVar6 = *piVar6 + 1;
            piVar6 = (int *)((int)in_stack_00000004->cap_tri_count + local_2c);
            *piVar6 = *piVar6 + 1;
          }
          local_48 = local_48 + 4;
          local_40 = local_40 + 0x12;
          local_50 = local_50 + 0x8c;
          local_30 = local_30 + 1;
        } while (local_30 < in_stack_0000000c->tri_count);
      }
      iVar18 = 0;
      iVar8 = 0;
      iVar7 = 0;
      iVar13 = (int)in_stack_00000004->lod_info + in_stack_00000008 * 4 + -4;
      if (0 < in_stack_00000004->num_parts) {
        do {
          iVar7 = iVar7 + *(int *)(iVar13 + 0x7164);
          iVar18 = iVar18 + *(int *)(iVar13 + 0x7178);
          iVar8 = iVar8 + 1;
          iVar13 = iVar13 + 0x60;
        } while (iVar8 < in_stack_00000004->num_parts);
      }
      if ((iVar7 != in_stack_00000004->tri_count[in_stack_00000008]) ||
         (iVar18 != in_stack_00000004->cap_tri_count[in_stack_00000008])) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x89c;
        core_main_c_displayErrorAndQuit_FUN_00506f10("BUG! Count mismatch!!");
      }
      if (0 < in_stack_00000004->cap_tri_count[in_stack_00000008]) {
        piVar6 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                           (in_stack_00000004->cap_tri_count[in_stack_00000008] * 4,
                            "..\\core\\skeledit.cpp",0x8a1);
        in_stack_00000004->cap_index_ptr[in_stack_00000008] = piVar6;
        if (piVar6 == (int *)0x0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x8a2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
        }
        local_1c = 0;
        local_34 = 0;
        iVar13 = in_stack_00000004->tri_count[in_stack_00000008];
        if (0 < in_stack_00000004->num_parts) {
          local_44 = in_stack_00000004;
          do {
            iVar18 = local_1c << 2;
            iVar7 = iVar13 * 0x8c;
            for (iVar8 = 0; iVar8 < local_44->parts[0].cap_tri_counts[in_stack_00000008];
                iVar8 = iVar8 + 1) {
              iVar13 = iVar13 + 1;
              *(uint *)((int)in_stack_00000004->cap_index_ptr[in_stack_00000008] + iVar18) =
                   *(uint *)
                    ((int)in_stack_0000000c->tri_data->attribute_indices + iVar7 + 0xc);
              iVar7 = iVar7 + 0x8c;
              local_1c = local_1c + 1;
              iVar18 = iVar18 + 4;
            }
            local_44 = (CDeformableModel *)(local_44->tri_count + 3);
            local_34 = local_34 + 1;
          } while (local_34 < in_stack_00000004->num_parts);
        }
      }
      return;
    }
    pcVar10 = in_stack_0000000c->vertex_data->lod_workspace + local_3c + -0x10;
    local_534.x = *(float *)pcVar10;
    local_534.y = *(float *)(pcVar10 + 4);
    local_534.z = *(float *)(pcVar10 + 8);
    pcVar14 = pcVar10 + 0xc;
    pfVar15 = local_528;
    for (iVar7 = 0xfa; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar15 = *(float *)pcVar14;
      pcVar14 = pcVar14 + ((uint)bVar20 * -2 + 1) * 4;
      pfVar15 = pfVar15 + (uint)bVar20 * -2 + 1;
    }
    local_140 = *(int *)(pcVar10 + 0x3f4);
    local_13c = *(int *)(pcVar10 + 0x3f8);
    piVar6 = (int *)(pcVar10 + 0x3fc);
    pfVar15 = local_138;
    for (iVar7 = 0x32; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar15 = (float)*piVar6;
      piVar6 = piVar6 + (uint)bVar20 * -2 + 1;
      pfVar15 = pfVar15 + (uint)bVar20 * -2 + 1;
    }
    pfVar15 = (float *)(*(int *)((int)in_stack_00000004->vertex_data_ptr + iVar13) + local_4c);
    fVar2 = 0.0;
    *(byte *)pfVar15 = 0;
    local_24 = pfVar15 + 4;
    while (*(byte *)pfVar15 < 3) {
      iVar13 = -1;
      iVar7 = 0;
      local_538 = 0.0;
      if (0 < local_18) {
        iVar8 = 0;
        do {
          if (local_538 < *(float *)((int)local_528 + iVar8)) {
            local_538 = *(float *)((int)local_528 + iVar8);
            iVar13 = iVar7;
          }
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 4;
        } while (iVar7 < local_18);
      }
      if (local_538 <= 0.0) break;
      *(byte *)((int)pfVar15 + *(byte *)pfVar15 + 1) = (byte)iVar13;
      pfVar15[*(byte *)pfVar15 + 1] = local_538;
      pCVar5 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (local_70,&local_534,(CMatrix3x4f *)(iVar13 * 0x30 + in_stack_00000010));
      pCVar11 = (CVector3f *)(local_24 + (uint)*(byte *)pfVar15 * 3);
      if (pCVar11 != pCVar5) {
        pCVar11->x = pCVar5->x;
        pCVar11->y = pCVar5->y;
        pCVar11->z = pCVar5->z;
      }
      local_528[iVar13] = 0.0;
      fVar2 = local_538 + fVar2;
      *(byte *)pfVar15 = *(byte *)pfVar15 + 1;
    }
    if (*(byte *)pfVar15 == 0) {
      g_CurrentFilename = "..\\core\\skeledit.cpp";
      g_CurrentLineNumber = 0x856;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find any bones influencing vertex!");
    }
    pfVar4 = pfVar15;
    for (iVar13 = 0; iVar13 < (int)(uint)*(byte *)pfVar15; iVar13 = iVar13 + 1) {
      pfVar1 = pfVar4 + 1;
      pfVar4 = pfVar4 + 1;
      *pfVar4 = *pfVar1 / fVar2;
    }
    local_3c = local_3c + 0x4c4;
    local_38 = local_38 + 1;
    local_4c = local_4c + 0x34;
  } while( true );
}
