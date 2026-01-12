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
  BADSPACEBASE *in_ESP;
  char *pcVar14;
  float *pfVar15;
  ushort *puVar16;
  ushort *puVar17;
  int iVar18;
  uint *puVar19;
  byte bVar20;
  float10 fVar21;
  double dVar22;
  CDeformableModel *in_stack_0000000c;
  int in_stack_00000010;
  CLodMesh *in_stack_00000014;
  int in_stack_00000018;
  float local_530;
  CVector3f local_52c;
  float afStack_520 [250];
  int local_138;
  int iStack_134;
  float afStack_130 [50];
  CVector3f aCStack_68 [2];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  CDeformableModel *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  float *local_1c;
  int local_14;
  int iStack_10;
  int iStack_c;
  
  bVar20 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x558);
  pCVar3 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(in_stack_0000000c);
  iStack_10 = pCVar3->bone_count;
  core_skeleton_cpp_CDeformableModel_allocLOD_FUN_0059a510
            (in_stack_0000000c,in_stack_00000010,in_stack_00000014->vertex_count,
             in_stack_00000014->tri_count,0);
  local_30 = 0;
  local_44 = 0;
  local_34 = 0;
  local_50 = in_stack_00000010 * 4;
  do {
    iVar13 = local_50;
    if (*(int *)((int)in_stack_0000000c->vertex_count + local_50) <= local_30) {
      shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(in_stack_00000014,0);
      shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(in_stack_00000014,1);
      shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(in_stack_00000014,2);
      iVar7 = 0;
      iVar13 = (int)in_stack_0000000c->lod_info + in_stack_00000010 * 4 + -4;
      if (0 < in_stack_0000000c->num_parts) {
        do {
          *(uint *)(iVar13 + 0x7178) = 0;
          *(uint *)(iVar13 + 0x7164) = 0;
          iVar7 = iVar7 + 1;
          iVar13 = iVar13 + 0x60;
        } while (iVar7 < in_stack_0000000c->num_parts);
      }
      in_stack_0000000c->tri_count[in_stack_00000010] = 0;
      in_stack_0000000c->cap_tri_count[in_stack_00000010] = 0;
      local_28 = 0;
      if (0 < in_stack_00000014->tri_count) {
        local_24 = in_stack_00000010 * 4;
        local_40 = 0;
        local_38 = 0;
        local_4c = (int)in_stack_0000000c->lod_info + local_24 + -4;
        local_48 = 0;
        do {
          puVar19 = (uint *)((int)in_stack_00000014->tri_data->attribute_indices + local_48);
          puVar16 = (ushort *)(*(int *)(local_4c + 0x7c) + local_38);
          *(uint *)(local_40 + *(int *)(local_4c + 0x90)) = *puVar19;
          puVar17 = puVar16 + 3;
          fVar21 = (float10)256;
          puVar9 = puVar19;
          puVar12 = puVar19;
          do {
            *puVar16 = *(ushort *)(puVar9 + 4);
            dVar22 = crt_math_c_round_FUN_005fe6b0((double)((float10)(float)puVar12[7] * fVar21));
            iStack_10 = (int)ROUND(dVar22);
            *(short *)(extraout_EAX + 6) = (short)iStack_10;
            dVar22 = crt_math_c_round_FUN_005fe6b0
                               ((double)((float10)*(float *)(extraout_EDX + 0x20) * fVar21));
            iStack_c = (int)ROUND(dVar22);
            puVar9 = (uint *)(extraout_ECX + 4);
            extraout_EAX_00[5] = (short)iStack_c;
            puVar16 = extraout_EAX_00;
            puVar12 = extraout_EDX_00;
          } while (extraout_EAX_00 != puVar17);
          if (puVar19[2] == 0) {
            piVar6 = (int *)((int)in_stack_0000000c->parts[puVar19[1]].tri_counts + local_24);
            *piVar6 = *piVar6 + 1;
            piVar6 = (int *)((int)in_stack_0000000c->tri_count + local_24);
            *piVar6 = *piVar6 + 1;
          }
          else {
            piVar6 = (int *)((int)in_stack_0000000c->parts[puVar19[1]].cap_tri_counts + local_24);
            *piVar6 = *piVar6 + 1;
            piVar6 = (int *)((int)in_stack_0000000c->cap_tri_count + local_24);
            *piVar6 = *piVar6 + 1;
          }
          local_40 = local_40 + 4;
          local_38 = local_38 + 0x12;
          local_48 = local_48 + 0x8c;
          local_28 = local_28 + 1;
        } while (local_28 < in_stack_00000014->tri_count);
      }
      iVar18 = 0;
      iVar8 = 0;
      iVar7 = 0;
      iVar13 = (int)in_stack_0000000c->lod_info + in_stack_00000010 * 4 + -4;
      if (0 < in_stack_0000000c->num_parts) {
        do {
          iVar7 = iVar7 + *(int *)(iVar13 + 0x7164);
          iVar18 = iVar18 + *(int *)(iVar13 + 0x7178);
          iVar8 = iVar8 + 1;
          iVar13 = iVar13 + 0x60;
        } while (iVar8 < in_stack_0000000c->num_parts);
      }
      if ((iVar7 != in_stack_0000000c->tri_count[in_stack_00000010]) ||
         (iVar18 != in_stack_0000000c->cap_tri_count[in_stack_00000010])) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x89c;
        core_main_c_displayErrorAndQuit_FUN_00506f10("BUG! Count mismatch!!");
      }
      if (0 < in_stack_0000000c->cap_tri_count[in_stack_00000010]) {
        piVar6 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                           (in_stack_0000000c->cap_tri_count[in_stack_00000010] * 4,
                            "..\\core\\skeledit.cpp",0x8a1);
        in_stack_0000000c->cap_index_ptr[in_stack_00000010] = piVar6;
        if (piVar6 == (int *)0x0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x8a2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
        }
        local_14 = 0;
        local_2c = 0;
        iVar13 = in_stack_0000000c->tri_count[in_stack_00000010];
        if (0 < in_stack_0000000c->num_parts) {
          local_3c = in_stack_0000000c;
          do {
            iVar18 = local_14 << 2;
            iVar7 = iVar13 * 0x8c;
            for (iVar8 = 0; iVar8 < local_3c->parts[0].cap_tri_counts[in_stack_00000010];
                iVar8 = iVar8 + 1) {
              iVar13 = iVar13 + 1;
              *(uint *)((int)in_stack_0000000c->cap_index_ptr[in_stack_00000010] + iVar18) =
                   *(uint *)
                    ((int)in_stack_00000014->tri_data->attribute_indices + iVar7 + 0xc);
              iVar7 = iVar7 + 0x8c;
              local_14 = local_14 + 1;
              iVar18 = iVar18 + 4;
            }
            local_3c = (CDeformableModel *)(local_3c->tri_count + 3);
            local_2c = local_2c + 1;
          } while (local_2c < in_stack_0000000c->num_parts);
        }
      }
      return;
    }
    pcVar10 = in_stack_00000014->vertex_data->lod_workspace + local_34 + -0x10;
    local_52c.x = *(float *)pcVar10;
    local_52c.y = *(float *)(pcVar10 + 4);
    local_52c.z = *(float *)(pcVar10 + 8);
    pcVar14 = pcVar10 + 0xc;
    pfVar15 = afStack_520;
    for (iVar7 = 0xfa; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar15 = *(float *)pcVar14;
      pcVar14 = pcVar14 + ((uint)bVar20 * -2 + 1) * 4;
      pfVar15 = pfVar15 + (uint)bVar20 * -2 + 1;
    }
    local_138 = *(int *)(pcVar10 + 0x3f4);
    iStack_134 = *(int *)(pcVar10 + 0x3f8);
    piVar6 = (int *)(pcVar10 + 0x3fc);
    pfVar15 = afStack_130;
    for (iVar7 = 0x32; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar15 = (float)*piVar6;
      piVar6 = piVar6 + (uint)bVar20 * -2 + 1;
      pfVar15 = pfVar15 + (uint)bVar20 * -2 + 1;
    }
    pfVar15 = (float *)(*(int *)((int)in_stack_0000000c->vertex_data_ptr + iVar13) + local_44);
    fVar2 = 0.0;
    *(byte *)pfVar15 = 0;
    local_1c = pfVar15 + 4;
    while (*(byte *)pfVar15 < 3) {
      iVar13 = -1;
      iVar7 = 0;
      local_530 = 0.0;
      if (0 < iStack_10) {
        iVar8 = 0;
        do {
          if (local_530 < *(float *)((int)afStack_520 + iVar8)) {
            local_530 = *(float *)((int)afStack_520 + iVar8);
            iVar13 = iVar7;
          }
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 4;
        } while (iVar7 < iStack_10);
      }
      if (local_530 <= 0.0) break;
      *(byte *)((int)pfVar15 + *(byte *)pfVar15 + 1) = (byte)iVar13;
      pfVar15[*(byte *)pfVar15 + 1] = local_530;
      pCVar5 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (aCStack_68,&local_52c,(CMatrix3x4f *)(iVar13 * 0x30 + in_stack_00000018));
      pCVar11 = (CVector3f *)(local_1c + (uint)*(byte *)pfVar15 * 3);
      if (pCVar11 != pCVar5) {
        pCVar11->x = pCVar5->x;
        pCVar11->y = pCVar5->y;
        pCVar11->z = pCVar5->z;
      }
      afStack_520[iVar13] = 0.0;
      fVar2 = local_530 + fVar2;
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
    local_34 = local_34 + 0x4c4;
    local_30 = local_30 + 1;
    local_44 = local_44 + 0x34;
  } while( true );
}
