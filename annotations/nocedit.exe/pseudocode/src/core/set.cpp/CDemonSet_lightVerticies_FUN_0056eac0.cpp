// Name: core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
// Address: 0056eac0
// Address Range: [[0056eac0, 0056f93c]]
// Convention: __cdecl
// Signature: float core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0(CDemonSet * this_ptr)
// Cross-references:
//   core_bodypart.cpp_FUN_00419340 (00419340) at 00419394 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043bae0 (0043bae0) at 0043bee2 [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_0044b060 (0044b060) at 0044b2aa [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004778d0 (004778d0) at 00477964 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_FUN_004e9930 (004e9930) at 004e9a73 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_FUN_004e9af0 (004e9af0) at 004e9c1f [UNCONDITIONAL_CALL]
//   core_morph.cpp_CMorphModel_rotatePoints_FUN_0052af70 (0052af70) at 0052b130 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_CallDSetLightVertices_FUN_0059ab50 (0059ab50) at 0059ab7d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_set_cpp_00645efa
//   TerminatedCString s_CDemonSet_lightVerticies_00645f0a
//   TerminatedCString s_core_set_cpp_00645f5f
//   TerminatedCString s_Too_many_normals_on_this_00645f6f
//   TerminatedCString s_core_set_cpp_00645f98
//   TerminatedCString s_Need_more_normals_for_pa_00645fa8
//   double DOUBLE_00645fd3 = 65535
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   void* g_BackBuffer
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_z
//   undefined4 g_RenderVertexBuffer[0].light
//   undefined4 g_RenderVertexBuffer[0].color
//   undefined4 g_RenderVertexBuffer[0].fog
//   undefined4 g_RenderVertexBuffer[0].w_recip
//   undefined4 DAT_00688044
//   undefined4 DAT_00688048
//   undefined4 DAT_0068804c
//   undefined4 g_RenderVertexBuffer[1].light
//   undefined4 g_RenderVertexBuffer[1].color
//   undefined4 g_RenderVertexBuffer[1].fog
//   undefined4 g_RenderVertexBuffer[1].w_recip
//   CDemonRenderer g_CDemonRendererInstance
//   float g_PerspectiveReciprocal
//   CMatrix3x3i g_TransformMatrix
//   undefined4 g_TransformMatrix[0][1]
//   undefined4 g_TransformMatrix[0][2]
//   undefined4 g_TransformMatrix[1][0]
//   undefined4 g_TransformMatrix[1][1]
//   undefined4 g_TransformMatrix[1][2]
//   undefined4 g_TransformMatrix[2][0]
//   undefined4 g_TransformMatrix[2][1]
//   undefined4 g_TransformMatrix[2][2]
//   int g_LightAttenuationMax
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CMatrix3x3i g_InverseMatrix
//   undefined4 g_InverseMatrix[0][1]
//   undefined4 g_InverseMatrix[0][2]
//   undefined4 g_InverseMatrix[1][0]
//   undefined4 g_InverseMatrix[1][1]
//   undefined4 g_InverseMatrix[1][2]
//   undefined4 g_InverseMatrix[2][0]
//   undefined4 g_InverseMatrix[2][1]
//   undefined4 g_InverseMatrix[2][2]
//   undefined4 DAT_032bd77c
//   CVector3f[4000] DAT_032c1ccc
//   undefined4 DAT_032c1cd0
//   undefined4 DAT_032c1cd4
//   undefined4 DAT_032c1cd8
//   undefined4 DAT_032c1cdc
//   undefined4 DAT_032c1ce0
//   undefined4 DAT_032cd84c
//   undefined4 DAT_032cd850
//   undefined4 DAT_032cd854
//   undefined4 DAT_032cd858
//   undefined4 DAT_032cd864
//   undefined4 DAT_033081cc
//   undefined4 DAT_033081d0
//   undefined4 DAT_033081d4
//   undefined4 DAT_033081d8
//   undefined4 DAT_033081dc
//   undefined4 DAT_033081e0
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
//   core_set.cpp_FUN_0056e890
//   crt_memory.c_memset_FUN_005fde40
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

float __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0(CDemonSet *this_ptr)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  C3DSLight *pCVar4;
  undefined *puVar5;
  CDemonSet *pCVar6;
  CDemonSet *extraout_EAX;
  float fVar7;
  float fVar8;
  CDemonSet *pCVar9;
  ushort *puVar10;
  uint uVar11;
  CVector3f *pCVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  BADSPACEBASE *in_ESP;
  int iVar17;
  float *pfVar18;
  byte bVar19;
  float in_stack_00000008;
  int in_stack_0000000c;
  ushort *in_stack_00000010;
  int in_stack_00000018;
  int *in_stack_0000001c;
  char *apcStackY_1154 [1012];
  undefined4 uStack_170;
  undefined4 local_16c;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 local_148;
  undefined4 local_13c;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  int local_11c;
  int local_118;
  char *apcStack_114 [4];
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  int local_d4;
  int iStack_d0;
  int local_cc;
  float local_c4;
  float local_bc;
  float fStack_b4;
  float local_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_98;
  uint local_90;
  float fStack_8c;
  float local_88;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  int local_68;
  int local_64;
  undefined *local_5c;
  undefined *local_58;
  undefined *local_54;
  int local_50;
  undefined *local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  int iStack_38;
  float fStack_34;
  int iStack_30;
  int iStack_2c;
  float local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  
  bVar19 = 0;
  if (20000 < (int)in_stack_00000008) {
    g_CurrentFilename = "..\\core\\set.cpp";
    g_CurrentLineNumber = 0xde8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::lightVerticies - tried to light %d vertices, but GLOBAL_VERTEX_COUNT = %d");
  }
  pCVar6 = (CDemonSet *)
           engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (pCVar6 == (CDemonSet *)0x0) {
    iVar17 = (int)in_stack_00000008 * 0x30;
    if (*(int *)this_ptr->field22_0x15ac80 == 0) {
      pCVar6 = this_ptr;
      if (*(int *)(this_ptr->field69_0x161654 + 4) == 0) {
        if (*(int *)(this_ptr->field22_0x15ac80 + 8) == 0) {
          if (in_stack_0000001c == (int *)0x0) {
            if (in_stack_0000000c == 0) {
              if (0 < (int)in_stack_00000008) {
                local_3c = 0;
                iVar17 = 0;
                do {
                  local_164 = *(undefined4 *)
                               ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_x +
                               iVar17);
                  local_160 = *(undefined4 *)
                               ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_y +
                               iVar17);
                  uStack_15c = *(undefined4 *)
                                ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_z +
                                iVar17);
                  core_set_cpp_FUN_0056e890();
                  uStack_158 = local_148;
                  *(undefined4 *)(&stack0xfffffeac + (uint)bVar19 * -8) =
                       *(undefined4 *)(&stack0xfffffebc + (uint)bVar19 * -8);
                  iVar14 = iStack_38;
                  *(undefined4 *)(&stack0xfffffeb0 + (uint)bVar19 * -8 + (uint)bVar19 * -8) =
                       *(undefined4 *)(&stack0xfffffec0 + (uint)bVar19 * -8 + (uint)bVar19 * -8);
                  uStack_170 = 0;
                  core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0(this_ptr);
                  *(float *)((int)&g_RenderVertexBuffer[0].w_recip + iVar17) =
                       g_PerspectiveReciprocal;
                  fStack_34 = (float)(iVar14 + 1);
                  iVar17 = iVar17 + 0x30;
                } while ((int)fStack_34 < (int)in_stack_00000008);
                return fStack_34;
              }
            }
            else {
              if (0 < (int)in_stack_00000008) {
                local_64 = 0;
                iVar14 = 0;
                local_6c = (float)iVar17;
                do {
                  local_134 = *(undefined4 *)
                               ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_x +
                               iVar14);
                  local_130 = *(undefined4 *)
                               ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_y +
                               iVar14);
                  uStack_12c = *(undefined4 *)
                                ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_z +
                                iVar14);
                  core_set_cpp_FUN_0056e890();
                  iVar17 = local_64;
                  iVar14 = iVar14 + 0x30;
                  puVar1 = (undefined4 *)(&DAT_032cd84c + local_64);
                  local_64 = local_64 + 0xc;
                  *puVar1 = apcStack_114[1];
                  *(char **)(&DAT_032cd850 + (uint)bVar19 * -8 + iVar17) =
                       apcStack_114[(uint)bVar19 * -2 + 2];
                  *(char **)((int)(&DAT_032cd850 + (uint)bVar19 * -8 + iVar17) +
                            ((uint)bVar19 * -2 + 1) * 4) =
                       apcStack_114[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 3];
                } while (iVar14 < (int)local_6c);
              }
              if (in_stack_00000018 < 1) {
                if (4000 < in_stack_0000000c) {
                  g_CurrentFilename = "..\\core\\set.cpp";
                  g_CurrentLineNumber = 0xeaf;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Too many normals on this packed tri list");
                  g_CurrentFilename = "..\\core\\set.cpp";
                  g_CurrentLineNumber = 0xeb1;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Need more normals for packed models");
                }
                iVar17 = 0;
                if (0 < in_stack_0000000c) {
                  pCVar12 = DAT_032c1ccc;
                  puVar10 = in_stack_00000010;
                  do {
                    iVar15 = (uint)*puVar10 * 0xc;
                    local_90 = (uint)puVar10[2];
                    iVar13 = (uint)puVar10[1] * 0xc;
                    local_1c = *(int *)(&DAT_032cd84c + iVar13) - *(int *)(&DAT_032cd84c + iVar15);
                    iVar16 = local_90 * 0xc;
                    iVar14 = *(int *)(&DAT_032cd84c + iVar16) - *(int *)(&DAT_032cd84c + iVar13);
                    fStack_a4 = (float)(*(int *)(&DAT_032cd854 + iVar13) -
                                       *(int *)(&DAT_032cd854 + iVar15));
                    local_a0 = (float)iVar14;
                    iStack_14 = *(int *)(&DAT_032cd850 + iVar16) - *(int *)(&DAT_032cd850 + iVar13);
                    local_a8 = (float)(*(int *)(&DAT_032cd850 + iVar13) -
                                      *(int *)(&DAT_032cd850 + iVar15));
                    local_18 = *(int *)(&DAT_032cd854 + iVar16) - *(int *)(&DAT_032cd854 + iVar13);
                    local_98 = (float)local_18;
                    local_44 = local_a8 * local_98 - (float)iStack_14 * fStack_a4;
                    local_40 = (float)iVar14 * fStack_a4 - (float)local_1c * local_98;
                    local_48 = (float)local_1c * (float)iStack_14 - local_a0 * local_a8;
                    fStack_8c = local_48 * local_48 + local_40 * local_40 + local_44 * local_44;
                    local_88 = (float)(g_LightAttenuationMax - ((int)fStack_8c >> 1));
                    fVar8 = local_88 * (float)DOUBLE_00645fd3;
                    puVar10 = puVar10 + 9;
                    iVar17 = iVar17 + 1;
                    pCVar12->x = local_44 * fVar8;
                    pCVar12->y = local_40 * fVar8;
                    pCVar12->z = local_48 * fVar8;
                    pCVar12 = pCVar12 + 1;
                  } while (iVar17 < in_stack_0000000c);
                }
                crt_memory_c_memset_FUN_005fde40(&DAT_033081cc,0,(int)in_stack_00000008 * 0xc);
                iVar17 = 0;
                if (0 < in_stack_0000000c) {
                  pCVar12 = DAT_032c1ccc;
                  do {
                    uVar11 = (uint)*in_stack_00000010;
                    (&DAT_033081cc)[uVar11 * 3] = pCVar12->x + (float)(&DAT_033081cc)[uVar11 * 3];
                    (&DAT_033081d0)[uVar11 * 3] = pCVar12->y + (float)(&DAT_033081d0)[uVar11 * 3];
                    (&DAT_033081d4)[uVar11 * 3] = pCVar12->z + (float)(&DAT_033081d4)[uVar11 * 3];
                    uVar11 = (uint)in_stack_00000010[1];
                    (&DAT_033081cc)[uVar11 * 3] = pCVar12->x + (float)(&DAT_033081cc)[uVar11 * 3];
                    (&DAT_033081d0)[uVar11 * 3] = pCVar12->y + (float)(&DAT_033081d0)[uVar11 * 3];
                    (&DAT_033081d4)[uVar11 * 3] = pCVar12->z + (float)(&DAT_033081d4)[uVar11 * 3];
                    uVar11 = (uint)in_stack_00000010[2];
                    in_stack_00000010 = in_stack_00000010 + 9;
                    (&DAT_033081cc)[uVar11 * 3] = pCVar12->x + (float)(&DAT_033081cc)[uVar11 * 3];
                    (&DAT_033081d0)[uVar11 * 3] = pCVar12->y + (float)(&DAT_033081d0)[uVar11 * 3];
                    iVar17 = iVar17 + 1;
                    (&DAT_033081d4)[uVar11 * 3] = pCVar12->z + (float)(&DAT_033081d4)[uVar11 * 3];
                    pCVar12 = pCVar12 + 1;
                  } while (iVar17 < in_stack_0000000c);
                }
              }
              else {
                iVar17 = 0;
                puVar10 = in_stack_00000010;
                if (0 < in_stack_0000000c) {
                  do {
                    iVar14 = *(int *)(puVar10 + 0x12) * 0xc;
                    iVar15 = *(int *)(puVar10 + 0xc) * 0xc;
                    local_18 = *(int *)(&DAT_032cd84c + iVar14) - *(int *)(&DAT_032cd84c + iVar15);
                    iVar16 = *(int *)(puVar10 + 0x18) * 0xc;
                    iVar13 = *(int *)(&DAT_032cd84c + iVar16) - *(int *)(&DAT_032cd84c + iVar14);
                    local_c4 = (float)iVar13;
                    iStack_14 = *(int *)(&DAT_032cd850 + iVar16) - *(int *)(&DAT_032cd850 + iVar14);
                    local_20 = (float)(*(int *)(&DAT_032cd850 + iVar14) -
                                      *(int *)(&DAT_032cd850 + iVar15));
                    local_bc = (float)(*(int *)(&DAT_032cd854 + iVar16) -
                                      *(int *)(&DAT_032cd854 + iVar14));
                    fVar8 = (float)(*(int *)(&DAT_032cd850 + iVar14) -
                                   *(int *)(&DAT_032cd850 + iVar15)) * local_bc -
                            (float)iStack_14 *
                            (float)(*(int *)(&DAT_032cd854 + iVar14) -
                                   *(int *)(&DAT_032cd854 + iVar15));
                    fVar3 = (float)iVar13 *
                            (float)(*(int *)(&DAT_032cd854 + iVar14) -
                                   *(int *)(&DAT_032cd854 + iVar15)) - (float)local_18 * local_bc;
                    fVar2 = (float)local_18 * (float)iStack_14 - local_c4 * local_20;
                    fStack_b4 = fVar2 * fVar2 + fVar3 * fVar3 + fVar8 * fVar8;
                    local_b0 = (float)(g_LightAttenuationMax - ((int)fStack_b4 >> 1));
                    fVar7 = local_b0 * (float)DOUBLE_00645fd3;
                    *(float *)(puVar10 + 4) = fVar8 * fVar7;
                    *(float *)(puVar10 + 6) = fVar3 * fVar7;
                    *(float *)(puVar10 + 8) = fVar2 * fVar7;
                    if (in_stack_00000018 == 4) {
                      puVar10 = puVar10 + 0x24;
                    }
                    else {
                      puVar10 = puVar10 + 0x1e;
                    }
                    iVar17 = iVar17 + 1;
                  } while (iVar17 < in_stack_0000000c);
                }
                crt_memory_c_memset_FUN_005fde40(&DAT_033081cc,0,(int)in_stack_00000008 * 0xc);
                iVar17 = 0;
                if (0 < in_stack_0000000c) {
                  do {
                    iVar14 = *(int *)(in_stack_00000010 + 0xc);
                    pfVar18 = (float *)(in_stack_00000010 + 4);
                    (&DAT_033081cc)[iVar14 * 3] = *pfVar18 + (float)(&DAT_033081cc)[iVar14 * 3];
                    (&DAT_033081d0)[iVar14 * 3] =
                         *(float *)(in_stack_00000010 + 6) + (float)(&DAT_033081d0)[iVar14 * 3];
                    (&DAT_033081d4)[iVar14 * 3] =
                         *(float *)(in_stack_00000010 + 8) + (float)(&DAT_033081d4)[iVar14 * 3];
                    iVar14 = *(int *)(in_stack_00000010 + 0x12);
                    (&DAT_033081cc)[iVar14 * 3] = *pfVar18 + (float)(&DAT_033081cc)[iVar14 * 3];
                    (&DAT_033081d0)[iVar14 * 3] =
                         *(float *)(in_stack_00000010 + 6) + (float)(&DAT_033081d0)[iVar14 * 3];
                    (&DAT_033081d4)[iVar14 * 3] =
                         *(float *)(in_stack_00000010 + 8) + (float)(&DAT_033081d4)[iVar14 * 3];
                    iVar14 = *(int *)(in_stack_00000010 + 0x18);
                    (&DAT_033081cc)[iVar14 * 3] = *pfVar18 + (float)(&DAT_033081cc)[iVar14 * 3];
                    (&DAT_033081d0)[iVar14 * 3] =
                         *(float *)(in_stack_00000010 + 6) + (float)(&DAT_033081d0)[iVar14 * 3];
                    (&DAT_033081d4)[iVar14 * 3] =
                         *(float *)(in_stack_00000010 + 8) + (float)(&DAT_033081d4)[iVar14 * 3];
                    if (*(int *)(in_stack_00000010 + 2) == 4) {
                      iVar14 = *(int *)(in_stack_00000010 + 0x1e);
                      (&DAT_033081cc)[iVar14 * 3] = *pfVar18 + (float)(&DAT_033081cc)[iVar14 * 3];
                      (&DAT_033081d0)[iVar14 * 3] =
                           *(float *)(in_stack_00000010 + 6) + (float)(&DAT_033081d0)[iVar14 * 3];
                      (&DAT_033081d4)[iVar14 * 3] =
                           *(float *)(in_stack_00000010 + 8) + (float)(&DAT_033081d4)[iVar14 * 3];
                    }
                    if (in_stack_00000018 == 4) {
                      in_stack_00000010 = in_stack_00000010 + 0x24;
                    }
                    else {
                      in_stack_00000010 = in_stack_00000010 + 0x1e;
                    }
                    iVar17 = iVar17 + 1;
                  } while (iVar17 < in_stack_0000000c);
                }
              }
              if (*(int *)this_ptr->field35_0x15ae84 == 0) {
                if (0 < (int)in_stack_00000008) {
                  pfVar18 = (float *)&DAT_033081cc;
                  local_5c = &DAT_032cd84c;
                  iVar17 = 0;
                  local_58 = (undefined *)0x0;
                  do {
                    puVar5 = local_5c;
                    local_70 = pfVar18[2] * pfVar18[2] +
                               *pfVar18 * *pfVar18 + pfVar18[1] * pfVar18[1];
                    local_6c = (float)(g_LightAttenuationMax - ((int)local_70 >> 1));
                    fVar8 = local_6c * (float)DOUBLE_00645fd3;
                    *pfVar18 = *pfVar18 * fVar8;
                    pfVar18[1] = pfVar18[1] * fVar8;
                    pfVar18[2] = pfVar18[2] * fVar8;
                    local_f4 = (int)ROUND(*pfVar18);
                    local_f0 = (int)ROUND(pfVar18[1]);
                    local_ec = (int)ROUND(pfVar18[2]);
                    uStack_170 = 0;
                    pfVar18 = pfVar18 + 3;
                    iVar17 = iVar17 + 1;
                    core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0(this_ptr);
                    fVar8 = g_PerspectiveReciprocal;
                    local_58 = puVar5 + 0xc;
                    *(float *)((int)&g_RenderVertexBuffer[0].w_recip + (int)local_54) =
                         g_PerspectiveReciprocal;
                    local_54 = (undefined *)((int)local_54 + 0x30);
                  } while (iVar17 < (int)in_stack_00000008);
                  return fVar8;
                }
              }
              else {
                iStack_30 = 0;
                if (0 < (int)in_stack_00000008) {
                  pfVar18 = (float *)&DAT_033081cc;
                  local_4c = (undefined *)0x0;
                  local_54 = &DAT_032cd84c;
                  do {
                    if (((1.0 <= ABS(*pfVar18)) || (1.0 <= ABS(pfVar18[1]))) ||
                       (1.0 <= ABS(pfVar18[2]))) {
                      local_7c = pfVar18[2] * pfVar18[2] +
                                 *pfVar18 * *pfVar18 + pfVar18[1] * pfVar18[1];
                      local_78 = (float)(g_LightAttenuationMax - ((int)local_7c >> 1));
                      fVar8 = local_78 * (float)DOUBLE_00645fd3;
                      *pfVar18 = *pfVar18 * fVar8;
                      pfVar18[1] = pfVar18[1] * fVar8;
                      pfVar18[2] = pfVar18[2] * fVar8;
                      local_e8 = (int)ROUND(*pfVar18);
                      local_e4 = (int)ROUND(pfVar18[1]);
                      local_e0 = (int)ROUND(pfVar18[2]);
                    }
                    uStack_170 = 0;
                    core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0(this_ptr);
                    pCVar6 = (CDemonSet *)g_PerspectiveReciprocal;
                    pfVar18 = pfVar18 + 3;
                    iStack_2c = iStack_2c + 1;
                    *(float *)((int)&g_RenderVertexBuffer[0].w_recip + (int)local_48) =
                         g_PerspectiveReciprocal;
                    local_50 = local_50 + 0xc;
                    local_48 = (float)((int)local_48 + 0x30);
                  } while (iStack_2c < (int)in_stack_00000008);
                }
              }
            }
          }
          else {
            if (this_ptr->rendering_mode == 0) {
              if (0 < (int)in_stack_00000008) {
                local_54 = (undefined *)0x0;
                iVar14 = 0;
                local_68 = iVar17;
                do {
                  local_e0 = *(int *)((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_x +
                                     iVar14);
                  local_dc = *(undefined4 *)
                              ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_y + iVar14
                              );
                  local_d8 = *(undefined4 *)
                              ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_z + iVar14
                              );
                  pCVar6 = (CDemonSet *)core_set_cpp_FUN_0056e890();
                  iVar14 = iVar14 + 0x30;
                  *(undefined4 *)(&DAT_032cd84c + (int)local_54) = uStack_128;
                  *(undefined4 *)(&DAT_032cd850 + (uint)bVar19 * -8 + (int)local_54) =
                       *(undefined4 *)(&stack0xfffffedc + (uint)bVar19 * -8);
                  *(undefined4 *)
                   ((int)(&DAT_032cd850 + (uint)bVar19 * -8 + (int)local_54) +
                   ((uint)bVar19 * -2 + 1) * 4) =
                       *(undefined4 *)(&stack0xfffffee0 + (uint)bVar19 * -8 + (uint)bVar19 * -8);
                  local_54 = (undefined *)((int)local_54 + 0xc);
                } while (iVar14 < local_68);
              }
              iVar17 = 0;
              if (0 < (int)in_stack_00000008) {
                do {
                  local_d4 = ((uint)((longlong)g_TransformMatrix.m[0][0] *
                                    (longlong)*in_stack_0000001c) >> 0x10 |
                             (int)((ulonglong)
                                   ((longlong)g_TransformMatrix.m[0][0] *
                                   (longlong)*in_stack_0000001c) >> 0x20) << 0x10) +
                             ((uint)((longlong)g_TransformMatrix.m[1][0] *
                                    (longlong)in_stack_0000001c[1]) >> 0x10 |
                             (int)((ulonglong)
                                   ((longlong)g_TransformMatrix.m[1][0] *
                                   (longlong)in_stack_0000001c[1]) >> 0x20) << 0x10) +
                             ((uint)((longlong)g_TransformMatrix.m[2][0] *
                                    (longlong)in_stack_0000001c[2]) >> 0x10 |
                             (int)((ulonglong)
                                   ((longlong)g_TransformMatrix.m[2][0] *
                                   (longlong)in_stack_0000001c[2]) >> 0x20) << 0x10);
                  iStack_d0 = ((uint)((longlong)g_TransformMatrix.m[0][1] *
                                     (longlong)*in_stack_0000001c) >> 0x10 |
                              (int)((ulonglong)
                                    ((longlong)g_TransformMatrix.m[0][1] *
                                    (longlong)*in_stack_0000001c) >> 0x20) << 0x10) +
                              ((uint)((longlong)g_TransformMatrix.m[1][1] *
                                     (longlong)in_stack_0000001c[1]) >> 0x10 |
                              (int)((ulonglong)
                                    ((longlong)g_TransformMatrix.m[1][1] *
                                    (longlong)in_stack_0000001c[1]) >> 0x20) << 0x10) +
                              ((uint)((longlong)g_TransformMatrix.m[2][1] *
                                     (longlong)in_stack_0000001c[2]) >> 0x10 |
                              (int)((ulonglong)
                                    ((longlong)g_TransformMatrix.m[2][1] *
                                    (longlong)in_stack_0000001c[2]) >> 0x20) << 0x10);
                  local_cc = ((uint)((longlong)g_TransformMatrix.m[0][2] *
                                    (longlong)*in_stack_0000001c) >> 0x10 |
                             (int)((ulonglong)
                                   ((longlong)g_TransformMatrix.m[0][2] *
                                   (longlong)*in_stack_0000001c) >> 0x20) << 0x10) +
                             ((uint)((longlong)g_TransformMatrix.m[1][2] *
                                    (longlong)in_stack_0000001c[1]) >> 0x10 |
                             (int)((ulonglong)
                                   ((longlong)g_TransformMatrix.m[1][2] *
                                   (longlong)in_stack_0000001c[1]) >> 0x20) << 0x10) +
                             ((uint)((longlong)g_TransformMatrix.m[2][2] *
                                    (longlong)in_stack_0000001c[2]) >> 0x10 |
                             (int)((ulonglong)
                                   ((longlong)g_TransformMatrix.m[2][2] *
                                   (longlong)in_stack_0000001c[2]) >> 0x20) << 0x10);
                  local_11c = ((uint)((longlong)g_InverseMatrix.m[0][0] * (longlong)local_d4) >>
                               0x10 | (int)((ulonglong)
                                            ((longlong)g_InverseMatrix.m[0][0] * (longlong)local_d4)
                                           >> 0x20) << 0x10) +
                              ((uint)((longlong)g_InverseMatrix.m[1][0] * (longlong)iStack_d0) >>
                               0x10 | (int)((ulonglong)
                                            ((longlong)g_InverseMatrix.m[1][0] * (longlong)iStack_d0
                                            ) >> 0x20) << 0x10) +
                              ((uint)((longlong)g_InverseMatrix.m[2][0] * (longlong)local_cc) >>
                               0x10 | (int)((ulonglong)
                                            ((longlong)g_InverseMatrix.m[2][0] * (longlong)local_cc)
                                           >> 0x20) << 0x10);
                  local_118 = ((uint)((longlong)g_InverseMatrix.m[0][1] * (longlong)local_d4) >>
                               0x10 | (int)((ulonglong)
                                            ((longlong)g_InverseMatrix.m[0][1] * (longlong)local_d4)
                                           >> 0x20) << 0x10) +
                              ((uint)((longlong)g_InverseMatrix.m[1][1] * (longlong)iStack_d0) >>
                               0x10 | (int)((ulonglong)
                                            ((longlong)g_InverseMatrix.m[1][1] * (longlong)iStack_d0
                                            ) >> 0x20) << 0x10) +
                              ((uint)((longlong)g_InverseMatrix.m[2][1] * (longlong)local_cc) >>
                               0x10 | (int)((ulonglong)
                                            ((longlong)g_InverseMatrix.m[2][1] * (longlong)local_cc)
                                           >> 0x20) << 0x10);
                  in_stack_0000001c = in_stack_0000001c + 3;
                  pCVar6 = (CDemonSet *)
                           ((uint)((longlong)g_InverseMatrix.m[2][2] * (longlong)local_cc) >> 0x10 |
                           (int)((ulonglong)((longlong)g_InverseMatrix.m[2][2] * (longlong)local_cc)
                                >> 0x20) << 0x10);
                  apcStack_114[0] =
                       pCVar6->cameras[0].name +
                       ((uint)((longlong)g_InverseMatrix.m[0][2] * (longlong)local_d4) >> 0x10 |
                       (int)((ulonglong)((longlong)g_InverseMatrix.m[0][2] * (longlong)local_d4) >>
                            0x20) << 0x10) +
                       ((uint)((longlong)g_InverseMatrix.m[1][2] * (longlong)iStack_d0) >> 0x10 |
                       (int)((ulonglong)((longlong)g_InverseMatrix.m[1][2] * (longlong)iStack_d0) >>
                            0x20) << 0x10) + -4;
                  iVar14 = iVar17 + 1;
                  (&DAT_033081cc)[iVar17 * 3] = local_11c;
                  (&DAT_033081d0)[iVar17 * 3 + (uint)bVar19 * -2] = (&local_118)[(uint)bVar19 * -2];
                  (&DAT_033081d0 + iVar17 * 3 + (uint)bVar19 * -2)[(uint)bVar19 * -2 + 1] =
                       apcStack_114[(uint)bVar19 * -2 + (uint)bVar19 * -2];
                  iVar17 = iVar14;
                } while (iVar14 < (int)in_stack_00000008);
              }
            }
            else {
              pCVar6 = (CDemonSet *)0x0;
              pCVar9 = pCVar6;
              if (0 < (int)in_stack_00000008) {
                do {
                  pCVar6 = (CDemonSet *)((int)&pCVar9->camera_count + 1);
                  (&DAT_033081cc)[(int)pCVar9 * 3] = *in_stack_0000001c;
                  (&DAT_033081d0)[(int)pCVar9 * 3 + (uint)bVar19 * -2] =
                       in_stack_0000001c[(uint)bVar19 * -2 + 1];
                  (&DAT_033081d0 + (int)pCVar9 * 3 + (uint)bVar19 * -2)[(uint)bVar19 * -2 + 1] =
                       (in_stack_0000001c + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1];
                  pCVar9 = pCVar6;
                  in_stack_0000001c = in_stack_0000001c + 3;
                } while ((int)pCVar6 < (int)in_stack_00000008);
              }
            }
            iVar17 = 0;
            if (0 < (int)in_stack_00000008) {
              local_4c = &DAT_032cd84c;
              iVar14 = 0;
              do {
                iVar17 = iVar17 + 1;
                core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0(this_ptr);
                *(float *)((int)&g_RenderVertexBuffer[0].w_recip + iVar14) = g_PerspectiveReciprocal
                ;
                local_48 = (float)((int)local_48 + 0xc);
                iVar14 = iVar14 + 0x30;
              } while (iVar17 < (int)in_stack_00000008);
              return in_stack_00000008;
            }
          }
        }
        else if (0 < (int)in_stack_00000008) {
          iStack_38 = 0;
          iVar17 = 0;
          do {
            local_104 = *(undefined4 *)
                         ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_x + iVar17);
            local_100 = *(undefined4 *)
                         ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_y + iVar17);
            local_fc = *(undefined4 *)
                        ((int)&g_RenderVertexBuffer[0].projected_vertex.transformed_z + iVar17);
            core_set_cpp_FUN_0056e890();
            uStack_170 = 0;
            local_16c = local_13c;
            *(undefined4 *)(&stack0xfffffe98 + (uint)bVar19 * -8) =
                 *(undefined4 *)(&stack0xfffffec8 + (uint)bVar19 * -8);
            *(undefined4 *)((int)&stack0xfffffe9c + (uint)bVar19 * -8 + (uint)bVar19 * -8) =
                 *(undefined4 *)((int)&stack0xfffffecc + (uint)bVar19 * -8 + (uint)bVar19 * -8);
            core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0(this_ptr);
            fVar8 = g_PerspectiveReciprocal;
            iStack_30 = iStack_30 + 1;
            *(float *)((int)&g_RenderVertexBuffer[0].w_recip + iVar17) = g_PerspectiveReciprocal;
            iVar17 = iVar17 + 0x30;
          } while (iStack_30 < (int)in_stack_00000008);
          return fVar8;
        }
      }
      else if (0 < (int)in_stack_00000008) {
        fVar8 = 0.0;
        do {
          *(undefined4 *)((int)&g_RenderVertexBuffer[0].light + (int)fVar8) =
               *(undefined4 *)(this_ptr->field69_0x161654 + 8);
          *(undefined4 *)((int)&g_RenderVertexBuffer[0].color + (int)fVar8) =
               *(undefined4 *)(this_ptr->field69_0x161654 + 0xc);
          fVar7 = (float)((int)fVar8 + 0x30);
          *(undefined4 *)((int)&g_RenderVertexBuffer[0].fog + (int)fVar8) =
               *(undefined4 *)(this_ptr->field69_0x161654 + 0x10);
          fVar8 = fVar7;
        } while (SBORROW4((int)fVar7,iVar17) != (int)fVar7 + (int)in_stack_00000008 * -0x30 < 0);
        return fVar7;
      }
    }
    else {
      if (DAT_032bd77c == 0) {
        pCVar6 = this_ptr;
        if (*(int *)this_ptr->field22_0x15ac80 == 2) {
          iVar17 = 0;
          if (0 < (int)in_stack_00000008) {
            iVar14 = 0;
            do {
              *(undefined4 *)((int)&g_RenderVertexBuffer[0].w_recip + iVar14) = 0;
              core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0(this_ptr);
              iVar17 = iVar17 + 1;
              pCVar6 = extraout_EAX;
              iVar14 = iVar14 + 0x30;
            } while (iVar17 < (int)in_stack_00000008);
          }
        }
        else if (*(int *)this_ptr->field22_0x15ac80 == 3) {
          if (0 < (int)in_stack_00000008) {
            fVar8 = 0.0;
            do {
              *(undefined4 *)((int)&g_RenderVertexBuffer[0].light + (int)fVar8) =
                   *(undefined4 *)(this_ptr->field35_0x15ae84 + 4);
              *(undefined4 *)((int)&g_RenderVertexBuffer[0].color + (int)fVar8) =
                   *(undefined4 *)(this_ptr->field35_0x15ae84 + 8);
              fVar7 = (float)((int)fVar8 + 0x30);
              *(undefined4 *)((int)&g_RenderVertexBuffer[0].fog + (int)fVar8) =
                   *(undefined4 *)(this_ptr->field35_0x15ae84 + 0xc);
              *(undefined4 *)((int)&g_RenderVertexBuffer[0].w_recip + (int)fVar8) = 0;
              fVar8 = fVar7;
            } while (SBORROW4((int)fVar7,iVar17) != (int)fVar7 + (int)in_stack_00000008 * -0x30 < 0)
            ;
            g_PerspectiveReciprocal = 0.0;
            return fVar7;
          }
        }
        else if (0 < (int)in_stack_00000008) {
          fVar8 = 0.0;
          do {
            fVar7 = (float)((int)fVar8 + 0x30);
            *(undefined4 *)((int)&g_RenderVertexBuffer[0].light + (int)fVar8) = 0xffff;
            *(undefined4 *)((int)&g_RenderVertexBuffer[0].color + (int)fVar8) = 0xffff;
            *(undefined4 *)((int)&g_RenderVertexBuffer[0].fog + (int)fVar8) = 0xffff;
            *(undefined4 *)((int)&g_RenderVertexBuffer[0].w_recip + (int)fVar8) = 0;
            fVar8 = fVar7;
          } while (SBORROW4((int)fVar7,iVar17) != (int)fVar7 + (int)in_stack_00000008 * -0x30 < 0);
          g_PerspectiveReciprocal = 0.0;
          return fVar7;
        }
        g_PerspectiveReciprocal = 0.0;
        return (float)pCVar6;
      }
      if (0 < (int)in_stack_00000008) {
        pCVar6 = (CDemonSet *)0x0;
        do {
          this_ptr = (CDemonSet *)(pCVar6->cameras[0].name + 0x2c);
          pCVar4 = pCVar6[4].lights;
          pCVar4[0x97].field8_0x21e[0x88e] = '\0';
          pCVar4[0x97].field8_0x21e[0x88f] = '\0';
          pCVar4[0x97].field8_0x21e[0x890] = '\0';
          pCVar4[0x97].field8_0x21e[0x891] = '\0';
          pCVar4 = pCVar6[4].lights;
          pCVar4[0x97].field8_0x21e[0x892] = '\0';
          pCVar4[0x97].field8_0x21e[0x893] = '\0';
          pCVar4[0x97].field8_0x21e[0x894] = '\0';
          pCVar4[0x97].field8_0x21e[0x895] = '\0';
          pCVar4 = pCVar6[4].lights;
          pCVar4[0x97].field8_0x21e[0x896] = '\0';
          pCVar4[0x97].field8_0x21e[0x897] = '\0';
          pCVar4[0x97].field8_0x21e[0x898] = '\0';
          pCVar4[0x97].field8_0x21e[0x899] = '\0';
          pCVar4 = pCVar6[4].lights;
          pCVar4[0x97].field8_0x21e[0x89a] = '\0';
          pCVar4[0x97].field8_0x21e[0x89b] = '\0';
          pCVar4[0x97].field8_0x21e[0x89c] = '\0';
          pCVar4[0x97].field8_0x21e[0x89d] = '\0';
          pCVar6 = this_ptr;
        } while (SBORROW4((int)this_ptr,iVar17) !=
                 (int)this_ptr + (int)in_stack_00000008 * -0x30 < 0);
      }
      g_PerspectiveReciprocal = 0.0;
      pCVar6 = this_ptr;
    }
  }
  return (float)pCVar6;
}


// Assembly code:
// 0056eac0: PUSH EBX
//   Label: core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
// 0056eac1: PUSH ESI
// 0056eac2: PUSH EDI
// 0056eac3: PUSH EBP
// 0056eac4: MOV EBP,ESP
// 0056eac6: SUB ESP,0x164
// 0056eacc: AND ESP,0xfffffff8
// 0056eacf: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0056ead2: CMP EDX,0x4e20
// 0056ead8: JLE 0x0056eb03
//   XREF to: 0056eb03 (CONDITIONAL_JUMP)
// 0056eada: PUSH 0x4e20
// 0056eadf: PUSH EDX
// 0056eae0: MOV ECX,0x645efa
//   XREF to: 00645efa (PARAM)
// 0056eae5: MOV EBX,0xde8
// 0056eaea: PUSH 0x645f0a
//   XREF to: 00645f0a (DATA)
// 0056eaef: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0056eaf5: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0056eafb: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0056eb00: ADD ESP,0xc
// 0056eb03: MOV EDI,dword ptr [0x006703ec]
//   Label: LAB_0056eb03
//   XREF to: 006703ec (READ)
// 0056eb09: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0056eb0a: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 0056eb0f: ADD ESP,0x4
// 0056eb12: TEST EAX,EAX
// 0056eb14: JNZ 0x0056eb80
//   XREF to: 0056eb80 (CONDITIONAL_JUMP)
// 0056eb1a: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0056eb1d: LEA EDI,[EDX*0x4 + 0x0]
// 0056eb24: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056eb27: SUB EDI,EDX
// 0056eb29: MOV EDX,dword ptr [EAX + 0x15ac80]
// 0056eb2f: SHL EDI,0x4
// 0056eb32: TEST EDX,EDX
// 0056eb34: JZ 0x0056ec78
//   XREF to: 0056ec78 (CONDITIONAL_JUMP)
// 0056eb3a: CMP dword ptr [0x032bd77c],0x0
//   XREF to: 032bd77c (READ)
// 0056eb41: JZ 0x0056eb87
//   XREF to: 0056eb87 (CONDITIONAL_JUMP)
// 0056eb43: CMP dword ptr [EBP + 0x18],0x0
//   XREF to: Stack[0x8] (READ)
// 0056eb47: JLE 0x0056eb70
//   XREF to: 0056eb70 (CONDITIONAL_JUMP)
// 0056eb49: MOV EDX,EDI
// 0056eb4b: XOR EAX,EAX
// 0056eb4d: ADD EAX,0x30
//   Label: LAB_0056eb4d
// 0056eb50: XOR EBX,EBX
// 0056eb52: MOV dword ptr [EAX + 0x688004],EBX
//   XREF to: 00688034 (WRITE)
//   XREF to: 00688064 (WRITE)
// 0056eb58: MOV dword ptr [EAX + 0x688008],EBX
//   XREF to: 00688038 (WRITE)
//   XREF to: 00688068 (WRITE)
// 0056eb5e: MOV dword ptr [EAX + 0x68800c],EBX
//   XREF to: 0068803c (WRITE)
//   XREF to: 0068806c (WRITE)
// 0056eb64: MOV dword ptr [EAX + 0x688010],EBX
//   XREF to: 00688040 (WRITE)
//   XREF to: 00688070 (WRITE)
// 0056eb6a: CMP EAX,EDX
// 0056eb6c: JL 0x0056eb4d
//   XREF to: 0056eb4d (CONDITIONAL_JUMP)
// 0056eb6e: MOV EAX,EAX
// 0056eb70: XOR EBX,EBX
//   Label: LAB_0056eb70
// 0056eb72: MOV dword ptr [0x02d051f4],EBX
//   XREF to: 02d051f4 (WRITE)
// 0056eb78: LEA EAX,[EAX]
// 0056eb7e: MOV EDX,EDX
// 0056eb80: MOV ESP,EBP
//   Label: LAB_0056eb80
// 0056eb82: POP EBP
// 0056eb83: POP EDI
// 0056eb84: POP ESI
// 0056eb85: POP EBX
// 0056eb86: RET
// 0056eb87: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0056eb87
//   XREF to: Stack[0x4] (READ)
// 0056eb8a: MOV EDX,dword ptr [EAX + 0x15ac80]
// 0056eb90: CMP EDX,0x2
// 0056eb93: JNZ 0x0056ebdf
//   XREF to: 0056ebdf (CONDITIONAL_JUMP)
// 0056eb95: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0056eb98: XOR EBX,EBX
// 0056eb9a: TEST EDI,EDI
// 0056eb9c: JLE 0x0056ebd0
//   XREF to: 0056ebd0 (CONDITIONAL_JUMP)
// 0056eb9e: MOV EDI,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0056eba1: XOR ESI,ESI
// 0056eba3: PUSH 0x1
//   Label: LAB_0056eba3
// 0056eba5: PUSH EBX
// 0056eba6: XOR ECX,ECX
// 0056eba8: PUSH ECX
// 0056eba9: PUSH EDI
// 0056ebaa: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056ebad: ADD ESI,0x30
// 0056ebb0: PUSH EAX
// 0056ebb1: MOV dword ptr [ESI + 0x688010],ECX
//   XREF to: 00688040 (WRITE)
//   XREF to: 00688070 (WRITE)
// 0056ebb7: CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
//   XREF to: 0056ddb0 (UNCONDITIONAL_CALL)
// 0056ebbc: ADD ESP,0x14
// 0056ebbf: INC EBX
// 0056ebc0: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0056ebc3: ADD EDI,0xc
// 0056ebc6: CMP EBX,EDX
// 0056ebc8: JL 0x0056eba3
//   XREF to: 0056eba3 (CONDITIONAL_JUMP)
// 0056ebca: LEA EAX,[EAX]
// 0056ebd0: XOR ECX,ECX
//   Label: LAB_0056ebd0
// 0056ebd2: MOV dword ptr [0x02d051f4],ECX
//   XREF to: 02d051f4 (WRITE)
// 0056ebd8: MOV ESP,EBP
// 0056ebda: POP EBP
// 0056ebdb: POP EDI
// 0056ebdc: POP ESI
// 0056ebdd: POP EBX
// 0056ebde: RET
// 0056ebdf: CMP EDX,0x3
//   Label: LAB_0056ebdf
// 0056ebe2: JNZ 0x0056ec39
//   XREF to: 0056ec39 (CONDITIONAL_JUMP)
// 0056ebe4: CMP dword ptr [EBP + 0x18],0x0
//   XREF to: Stack[0x8] (READ)
// 0056ebe8: JLE 0x0056ebd0
//   XREF to: 0056ebd0 (CONDITIONAL_JUMP)
// 0056ebea: MOV ECX,EDI
// 0056ebec: XOR EAX,EAX
// 0056ebee: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_0056ebee
//   XREF to: Stack[0x4] (READ)
// 0056ebf1: MOV EDX,dword ptr [EDX + 0x15ae88]
// 0056ebf7: MOV dword ptr [EAX + 0x688034],EDX
//   XREF to: 00688034 (WRITE)
//   XREF to: 00688064 (WRITE)
// 0056ebfd: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056ec00: MOV EDX,dword ptr [EDX + 0x15ae8c]
// 0056ec06: MOV dword ptr [EAX + 0x688038],EDX
//   XREF to: 00688038 (WRITE)
//   XREF to: 00688068 (WRITE)
// 0056ec0c: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056ec0f: ADD EAX,0x30
// 0056ec12: MOV EDX,dword ptr [EDX + 0x15ae90]
// 0056ec18: MOV dword ptr [EAX + 0x68800c],EDX
//   XREF to: 0068803c (WRITE)
//   XREF to: 0068806c (WRITE)
// 0056ec1e: XOR EDX,EDX
// 0056ec20: MOV dword ptr [EAX + 0x688010],EDX
//   XREF to: 00688040 (WRITE)
//   XREF to: 00688070 (WRITE)
// 0056ec26: CMP EAX,ECX
// 0056ec28: JL 0x0056ebee
//   XREF to: 0056ebee (CONDITIONAL_JUMP)
// 0056ec2a: XOR ECX,ECX
// 0056ec2c: MOV dword ptr [0x02d051f4],ECX
//   XREF to: 02d051f4 (WRITE)
// 0056ec32: MOV ESP,EBP
// 0056ec34: POP EBP
// 0056ec35: POP EDI
// 0056ec36: POP ESI
// 0056ec37: POP EBX
// 0056ec38: RET
// 0056ec39: CMP dword ptr [EBP + 0x18],0x0
//   Label: LAB_0056ec39
//   XREF to: Stack[0x8] (READ)
// 0056ec3d: JLE 0x0056ebd0
//   XREF to: 0056ebd0 (CONDITIONAL_JUMP)
// 0056ec3f: MOV ECX,0xffff
// 0056ec44: MOV EDX,EDI
// 0056ec46: XOR EAX,EAX
// 0056ec48: ADD EAX,0x30
//   Label: LAB_0056ec48
// 0056ec4b: MOV dword ptr [EAX + 0x688004],ECX
//   XREF to: 00688034 (WRITE)
//   XREF to: 00688064 (WRITE)
// 0056ec51: MOV dword ptr [EAX + 0x688008],ECX
//   XREF to: 00688038 (WRITE)
//   XREF to: 00688068 (WRITE)
// 0056ec57: XOR EDI,EDI
// 0056ec59: MOV dword ptr [EAX + 0x68800c],ECX
//   XREF to: 0068803c (WRITE)
//   XREF to: 0068806c (WRITE)
// 0056ec5f: MOV dword ptr [EAX + 0x688010],EDI
//   XREF to: 00688040 (WRITE)
//   XREF to: 00688070 (WRITE)
// 0056ec65: CMP EAX,EDX
// 0056ec67: JL 0x0056ec48
//   XREF to: 0056ec48 (CONDITIONAL_JUMP)
// 0056ec69: XOR ECX,ECX
// 0056ec6b: MOV dword ptr [0x02d051f4],ECX
//   XREF to: 02d051f4 (WRITE)
// 0056ec71: MOV ESP,EBP
// 0056ec73: POP EBP
// 0056ec74: POP EDI
// 0056ec75: POP ESI
// 0056ec76: POP EBX
// 0056ec77: RET
// 0056ec78: MOV ECX,dword ptr [EAX + 0x161658]
//   Label: LAB_0056ec78
// 0056ec7e: TEST ECX,ECX
// 0056ec80: JZ 0x0056eccb
//   XREF to: 0056eccb (CONDITIONAL_JUMP)
// 0056ec82: CMP dword ptr [EBP + 0x18],0x0
//   XREF to: Stack[0x8] (READ)
// 0056ec86: JLE 0x0056eb80
//   XREF to: 0056eb80 (CONDITIONAL_JUMP)
// 0056ec8c: MOV ECX,EDI
// 0056ec8e: XOR EAX,EAX
// 0056ec90: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_0056ec90
//   XREF to: Stack[0x4] (READ)
// 0056ec93: MOV EDX,dword ptr [EDX + 0x16165c]
// 0056ec99: MOV dword ptr [EAX + 0x688034],EDX
//   XREF to: 00688034 (WRITE)
//   XREF to: 00688064 (WRITE)
// 0056ec9f: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056eca2: MOV EDX,dword ptr [EDX + 0x161660]
// 0056eca8: MOV dword ptr [EAX + 0x688038],EDX
//   XREF to: 00688038 (WRITE)
//   XREF to: 00688068 (WRITE)
// 0056ecae: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056ecb1: ADD EAX,0x30
// 0056ecb4: MOV EDX,dword ptr [EDX + 0x161664]
// 0056ecba: MOV dword ptr [EAX + 0x68800c],EDX
//   XREF to: 0068803c (WRITE)
//   XREF to: 0068806c (WRITE)
// 0056ecc0: CMP EAX,ECX
// 0056ecc2: JL 0x0056ec90
//   XREF to: 0056ec90 (CONDITIONAL_JUMP)
// 0056ecc4: MOV ESP,EBP
// 0056ecc6: POP EBP
// 0056ecc7: POP EDI
// 0056ecc8: POP ESI
// 0056ecc9: POP EBX
// 0056ecca: RET
// 0056eccb: MOV EBX,dword ptr [EAX + 0x15ac88]
//   Label: LAB_0056eccb
// 0056ecd1: TEST EBX,EBX
// 0056ecd3: JZ 0x0056ed6f
//   XREF to: 0056ed6f (CONDITIONAL_JUMP)
// 0056ecd9: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0056ecdc: MOV dword ptr [ESP + 0x138],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 0056ece3: TEST EBX,EBX
// 0056ece5: JLE 0x0056eb80
//   XREF to: 0056eb80 (CONDITIONAL_JUMP)
// 0056eceb: XOR EBX,EBX
// 0056eced: MOV EAX,dword ptr [EBX + 0x688014]
//   Label: LAB_0056eced
//   XREF to: 00688014 (READ)
//   XREF to: 00688044 (READ)
// 0056ecf3: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x10c] (WRITE)
// 0056ecf7: MOV EAX,dword ptr [EBX + 0x688018]
//   XREF to: 00688018 (READ)
//   XREF to: 00688048 (READ)
// 0056ecfd: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x108] (WRITE)
// 0056ed01: MOV EAX,dword ptr [EBX + 0x68801c]
//   XREF to: 0068801c (READ)
//   XREF to: 0068804c (READ)
// 0056ed07: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x104] (WRITE)
// 0056ed0b: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0x10c] (DATA)
// 0056ed0f: PUSH EAX
// 0056ed10: LEA ESI,[ESP + 0x34]
//   XREF to: Stack[-0x148] (DATA)
// 0056ed14: CALL core_set.cpp_FUN_0056e890
//   XREF to: 0056e890 (UNCONDITIONAL_CALL)
// 0056ed19: ADD ESP,0x4
// 0056ed1c: PUSH 0x0
// 0056ed1e: MOV ECX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x40] (READ)
// 0056ed25: LEA EDI,[ESP + 0x4]
//   XREF to: Stack[-0x178] (DATA)
// 0056ed29: PUSH ECX
// 0056ed2a: LEA ESI,[ESP + 0x38]
//   XREF to: Stack[-0x148] (DATA)
// 0056ed2e: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x178] (DATA)
// 0056ed32: PUSH 0x0
// 0056ed34: MOVSD ES:EDI,ESI
// 0056ed35: MOVSD ES:EDI,ESI
// 0056ed36: MOVSD ES:EDI,ESI
// 0056ed37: PUSH EAX
// 0056ed38: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056ed3b: PUSH ESI
// 0056ed3c: ADD EBX,0x30
// 0056ed3f: CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
//   XREF to: 0056ddb0 (UNCONDITIONAL_CALL)
// 0056ed44: ADD ESP,0x14
// 0056ed47: MOV EAX,[0x02d051f4]
//   XREF to: 02d051f4 (READ)
// 0056ed4c: MOV EDI,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x40] (READ)
// 0056ed53: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0056ed56: INC EDI
// 0056ed57: MOV dword ptr [EBX + 0x688010],EAX
//   XREF to: 00688040 (WRITE)
// 0056ed5d: MOV dword ptr [ESP + 0x138],EDI
//   XREF to: Stack[-0x40] (WRITE)
// 0056ed64: CMP EDI,EDX
// 0056ed66: JL 0x0056eced
//   XREF to: 0056eced (CONDITIONAL_JUMP)
// 0056ed68: MOV ESP,EBP
// 0056ed6a: POP EBP
// 0056ed6b: POP EDI
// 0056ed6c: POP ESI
// 0056ed6d: POP EBX
// 0056ed6e: RET
// 0056ed6f: CMP dword ptr [EBP + 0x2c],0x0
//   Label: LAB_0056ed6f
//   XREF to: Stack[0x1c] (READ)
// 0056ed73: JZ 0x0056f036
//   XREF to: 0056f036 (CONDITIONAL_JUMP)
// 0056ed79: CMP dword ptr [EAX + 0x15ae70],0x0
// 0056ed80: JZ 0x0056ee19
//   XREF to: 0056ee19 (CONDITIONAL_JUMP)
// 0056ed86: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0056ed89: XOR EAX,EAX
// 0056ed8b: TEST EDX,EDX
// 0056ed8d: JLE 0x0056edb0
//   XREF to: 0056edb0 (CONDITIONAL_JUMP)
// 0056ed8f: MOV ECX,dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 0056ed92: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0056ed95: IMUL ESI,EAX,0xc
//   Label: LAB_0056ed95
// 0056ed98: LEA EDI,[ESI + 0x33081cc]
//   XREF to: 033081cc (DATA)
// 0056ed9e: MOV ESI,ECX
// 0056eda0: INC EAX
// 0056eda1: ADD ECX,0xc
// 0056eda4: MOVSD ES:EDI,ESI
//   XREF to: 033081cc (WRITE)
//   XREF to: 033081d8 (WRITE)
// 0056eda5: MOVSD ES:EDI,ESI
//   XREF to: 033081d0 (WRITE)
//   XREF to: 033081dc (WRITE)
// 0056eda6: MOVSD ES:EDI,ESI
//   XREF to: 033081d4 (WRITE)
//   XREF to: 033081e0 (WRITE)
// 0056eda7: CMP EAX,EBX
// 0056eda9: JL 0x0056ed95
//   XREF to: 0056ed95 (CONDITIONAL_JUMP)
// 0056edab: LEA EAX,[EAX]
// 0056edae: MOV ECX,ECX
// 0056edb0: MOV ESI,dword ptr [EBP + 0x18]
//   Label: LAB_0056edb0
//   XREF to: Stack[0x8] (READ)
// 0056edb3: XOR EBX,EBX
// 0056edb5: TEST ESI,ESI
// 0056edb7: JLE 0x0056eb80
//   XREF to: 0056eb80 (CONDITIONAL_JUMP)
// 0056edbd: MOV EDX,0x32cd84c
//   XREF to: 032cd84c (DATA)
// 0056edc2: MOV EDI,0x33081cc
//   XREF to: 033081cc (DATA)
// 0056edc7: XOR ESI,ESI
// 0056edc9: MOV dword ptr [ESP + 0x124],EDX
//   XREF to: Stack[-0x54] (WRITE)
//   XREF to: 032cd84c (DATA)
// 0056edd0: PUSH 0x0
//   Label: LAB_0056edd0
// 0056edd2: PUSH EBX
// 0056edd3: PUSH EDI
//   XREF to: 033081cc (DATA)
//   XREF to: 033081d8 (DATA)
// 0056edd4: MOV EAX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x54] (READ)
//   XREF to: 032cd84c (PARAM)
//   XREF to: 032cd858 (PARAM)
// 0056eddb: PUSH EAX
//   XREF to: 032cd84c (DATA)
//   XREF to: 032cd858 (DATA)
// 0056eddc: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056eddf: ADD ESI,0x30
// 0056ede2: PUSH EDX
// 0056ede3: INC EBX
// 0056ede4: ADD EDI,0xc
// 0056ede7: CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
//   XREF to: 0056ddb0 (UNCONDITIONAL_CALL)
// 0056edec: ADD ESP,0x14
// 0056edef: MOV EAX,[0x02d051f4]
//   XREF to: 02d051f4 (READ)
// 0056edf4: MOV ECX,dword ptr [ESP + 0x124]
//   XREF to: Stack[-0x54] (READ)
// 0056edfb: MOV dword ptr [ESI + 0x688010],EAX
//   XREF to: 00688040 (WRITE)
// 0056ee01: ADD ECX,0xc
//   XREF to: 032cd858 (PARAM)
// 0056ee04: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0056ee07: MOV dword ptr [ESP + 0x124],ECX
//   XREF to: Stack[-0x54] (WRITE)
//   XREF to: 032cd858 (DATA)
// 0056ee0e: CMP EBX,EAX
// 0056ee10: JL 0x0056edd0
//   XREF to: 0056edd0 (CONDITIONAL_JUMP)
// 0056ee12: MOV ESP,EBP
// 0056ee14: POP EBP
// 0056ee15: POP EDI
// 0056ee16: POP ESI
// 0056ee17: POP EBX
// 0056ee18: RET
// 0056ee19: CMP dword ptr [EBP + 0x18],0x0
//   Label: LAB_0056ee19
//   XREF to: Stack[0x8] (READ)
// 0056ee1d: JLE 0x0056eea0
//   XREF to: 0056eea0 (CONDITIONAL_JUMP)
// 0056ee23: MOV dword ptr [ESP + 0x108],EDI
//   XREF to: Stack[-0x70] (WRITE)
// 0056ee2a: MOV dword ptr [ESP + 0x11c],EDX
//   XREF to: Stack[-0x5c] (WRITE)
// 0056ee31: MOV EAX,dword ptr [EBX + 0x688014]
//   Label: LAB_0056ee31
//   XREF to: 00688014 (DATA)
//   XREF to: 00688044 (DATA)
// 0056ee37: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0xe8] (WRITE)
// 0056ee3e: MOV EAX,dword ptr [EBX + 0x688018]
//   XREF to: 00688018 (DATA)
//   XREF to: 00688048 (DATA)
// 0056ee44: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0xe4] (WRITE)
// 0056ee4b: MOV EAX,dword ptr [EBX + 0x68801c]
//   XREF to: 0068801c (DATA)
//   XREF to: 0068804c (DATA)
// 0056ee51: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 0056ee58: LEA EAX,[ESP + 0x90]
//   XREF to: Stack[-0xe8] (DATA)
// 0056ee5f: PUSH EAX
// 0056ee60: LEA ESI,[ESP + 0x4c]
//   XREF to: Stack[-0x130] (DATA)
// 0056ee64: CALL core_set.cpp_FUN_0056e890
//   XREF to: 0056e890 (UNCONDITIONAL_CALL)
// 0056ee69: ADD ESP,0x4
// 0056ee6c: MOV EDI,dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x5c] (READ)
// 0056ee73: LEA ESI,[ESP + 0x48]
//   XREF to: Stack[-0x130] (DATA)
// 0056ee77: LEA EDI,[EDI + 0x32cd84c]
//   XREF to: 032cd84c (DATA)
// 0056ee7d: ADD EBX,0x30
// 0056ee80: MOV ECX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x5c] (READ)
// 0056ee87: MOVSD ES:EDI,ESI
//   XREF to: 032cd84c (DATA)
// 0056ee88: MOVSD ES:EDI,ESI
//   XREF to: 032cd850 (DATA)
// 0056ee89: MOVSD ES:EDI,ESI
//   XREF to: 032cd854 (DATA)
// 0056ee8a: ADD ECX,0xc
// 0056ee8d: MOV ESI,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x70] (READ)
// 0056ee94: MOV dword ptr [ESP + 0x11c],ECX
//   XREF to: Stack[-0x5c] (WRITE)
// 0056ee9b: CMP EBX,ESI
// 0056ee9d: JL 0x0056ee31
//   XREF to: 0056ee31 (CONDITIONAL_JUMP)
// 0056ee9f: NOP
// 0056eea0: MOV EDI,dword ptr [EBP + 0x18]
//   Label: LAB_0056eea0
//   XREF to: Stack[0x8] (READ)
// 0056eea3: XOR EBX,EBX
// 0056eea5: TEST EDI,EDI
// 0056eea7: JLE 0x0056edb0
//   XREF to: 0056edb0 (CONDITIONAL_JUMP)
// 0056eead: MOV ECX,dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 0056eeb0: IMUL EDI,EBX,0xc
//   Label: LAB_0056eeb0
// 0056eeb3: MOV EAX,[0x02d052e8]
//   XREF to: 02d052e8 (READ)
// 0056eeb8: MOV EDX,dword ptr [ECX]
// 0056eeba: IMUL EDX
// 0056eebc: SHRD EAX,EDX,0x10
// 0056eec0: MOV ESI,EAX
// 0056eec2: MOV EDX,dword ptr [ECX + 0x4]
// 0056eec5: MOV EAX,[0x02d052f4]
//   XREF to: 02d052f4 (READ)
// 0056eeca: IMUL EDX
// 0056eecc: SHRD EAX,EDX,0x10
// 0056eed0: MOV EDX,dword ptr [ECX + 0x8]
// 0056eed3: ADD ESI,EAX
// 0056eed5: MOV EAX,[0x02d05300]
//   XREF to: 02d05300 (READ)
// 0056eeda: IMUL EDX
// 0056eedc: SHRD EAX,EDX,0x10
// 0056eee0: MOV EDX,dword ptr [ECX]
// 0056eee2: ADD ESI,EAX
// 0056eee4: MOV EAX,[0x02d052ec]
//   XREF to: 02d052ec (READ)
// 0056eee9: MOV dword ptr [ESP + 0x9c],ESI
//   XREF to: Stack[-0xdc] (WRITE)
// 0056eef0: IMUL EDX
// 0056eef2: SHRD EAX,EDX,0x10
// 0056eef6: MOV ESI,EAX
// 0056eef8: MOV EDX,dword ptr [ECX + 0x4]
// 0056eefb: MOV EAX,[0x02d052f8]
//   XREF to: 02d052f8 (READ)
// 0056ef00: IMUL EDX
// 0056ef02: SHRD EAX,EDX,0x10
// 0056ef06: MOV EDX,dword ptr [ECX + 0x8]
// 0056ef09: ADD ESI,EAX
// 0056ef0b: MOV EAX,[0x02d05304]
//   XREF to: 02d05304 (READ)
// 0056ef10: IMUL EDX
// 0056ef12: SHRD EAX,EDX,0x10
// 0056ef16: MOV EDX,dword ptr [ECX]
// 0056ef18: ADD ESI,EAX
// 0056ef1a: MOV EAX,[0x02d052f0]
//   XREF to: 02d052f0 (READ)
// 0056ef1f: MOV dword ptr [ESP + 0xa0],ESI
//   XREF to: Stack[-0xd8] (WRITE)
// 0056ef26: IMUL EDX
// 0056ef28: SHRD EAX,EDX,0x10
// 0056ef2c: MOV ESI,EAX
// 0056ef2e: MOV EDX,dword ptr [ECX + 0x4]
// 0056ef31: MOV EAX,[0x02d052fc]
//   XREF to: 02d052fc (READ)
// 0056ef36: IMUL EDX
// 0056ef38: SHRD EAX,EDX,0x10
// 0056ef3c: MOV EDX,dword ptr [ECX + 0x8]
// 0056ef3f: ADD ESI,EAX
// 0056ef41: MOV EAX,[0x02d05308]
//   XREF to: 02d05308 (READ)
// 0056ef46: IMUL EDX
// 0056ef48: SHRD EAX,EDX,0x10
// 0056ef4c: MOV EDX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0xdc] (READ)
// 0056ef53: ADD ESI,EAX
// 0056ef55: MOV EAX,[0x02f0d364]
//   XREF to: 02f0d364 (READ)
// 0056ef5a: MOV dword ptr [ESP + 0xa4],ESI
//   XREF to: Stack[-0xd4] (WRITE)
// 0056ef61: IMUL EDX
// 0056ef63: SHRD EAX,EDX,0x10
// 0056ef67: MOV EDX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0xd8] (READ)
// 0056ef6e: MOV ESI,EAX
// 0056ef70: MOV EAX,[0x02f0d370]
//   XREF to: 02f0d370 (READ)
// 0056ef75: IMUL EDX
// 0056ef77: SHRD EAX,EDX,0x10
// 0056ef7b: MOV EDX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0xd4] (READ)
// 0056ef82: ADD ESI,EAX
// 0056ef84: MOV EAX,[0x02f0d37c]
//   XREF to: 02f0d37c (READ)
// 0056ef89: IMUL EDX
// 0056ef8b: SHRD EAX,EDX,0x10
// 0056ef8f: ADD ESI,EAX
// 0056ef91: MOV dword ptr [ESP + 0x54],ESI
//   XREF to: Stack[-0x124] (WRITE)
// 0056ef95: MOV EDX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0xdc] (READ)
// 0056ef9c: MOV EAX,[0x02f0d368]
//   XREF to: 02f0d368 (READ)
// 0056efa1: IMUL EDX
// 0056efa3: SHRD EAX,EDX,0x10
// 0056efa7: MOV EDX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0xd8] (READ)
// 0056efae: MOV ESI,EAX
// 0056efb0: MOV EAX,[0x02f0d374]
//   XREF to: 02f0d374 (READ)
// 0056efb5: IMUL EDX
// 0056efb7: SHRD EAX,EDX,0x10
// 0056efbb: MOV EDX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0xd4] (READ)
// 0056efc2: ADD ESI,EAX
// 0056efc4: MOV EAX,[0x02f0d380]
//   XREF to: 02f0d380 (READ)
// 0056efc9: IMUL EDX
// 0056efcb: SHRD EAX,EDX,0x10
// 0056efcf: MOV EDX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0xdc] (READ)
// 0056efd6: ADD ESI,EAX
// 0056efd8: MOV EAX,[0x02f0d36c]
//   XREF to: 02f0d36c (READ)
// 0056efdd: MOV dword ptr [ESP + 0x58],ESI
//   XREF to: Stack[-0x120] (WRITE)
// 0056efe1: IMUL EDX
// 0056efe3: SHRD EAX,EDX,0x10
// 0056efe7: MOV EDX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0xd8] (READ)
// 0056efee: MOV ESI,EAX
// 0056eff0: MOV EAX,[0x02f0d378]
//   XREF to: 02f0d378 (READ)
// 0056eff5: IMUL EDX
// 0056eff7: SHRD EAX,EDX,0x10
// 0056effb: MOV EDX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0xd4] (READ)
// 0056f002: ADD ESI,EAX
// 0056f004: MOV EAX,[0x02f0d384]
//   XREF to: 02f0d384 (READ)
// 0056f009: ADD ECX,0xc
// 0056f00c: IMUL EDX
// 0056f00e: SHRD EAX,EDX,0x10
// 0056f012: ADD ESI,EAX
// 0056f014: LEA EDI,[EDI + 0x33081cc]
//   XREF to: 033081cc (DATA)
// 0056f01a: MOV dword ptr [ESP + 0x5c],ESI
//   XREF to: Stack[-0x11c] (WRITE)
// 0056f01e: LEA ESI,[ESP + 0x54]
//   XREF to: Stack[-0x124] (DATA)
// 0056f022: INC EBX
// 0056f023: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0056f026: MOVSD ES:EDI,ESI
//   XREF to: 033081cc (WRITE)
//   XREF to: 033081d8 (WRITE)
// 0056f027: MOVSD ES:EDI,ESI
//   XREF to: 033081d0 (WRITE)
//   XREF to: 033081dc (WRITE)
// 0056f028: MOVSD ES:EDI,ESI
//   XREF to: 033081d4 (WRITE)
//   XREF to: 033081e0 (WRITE)
// 0056f029: CMP EBX,EDX
// 0056f02b: JGE 0x0056edb0
//   XREF to: 0056edb0 (CONDITIONAL_JUMP)
// 0056f031: JMP 0x0056eeb0
//   XREF to: 0056eeb0 (UNCONDITIONAL_JUMP)
// 0056f036: CMP dword ptr [EBP + 0x1c],0x0
//   Label: LAB_0056f036
//   XREF to: Stack[0xc] (READ)
// 0056f03a: JNZ 0x0056f0d1
//   XREF to: 0056f0d1 (CONDITIONAL_JUMP)
// 0056f040: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0056f043: MOV dword ptr [ESP + 0x134],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 0056f04a: TEST EBX,EBX
// 0056f04c: JLE 0x0056eb80
//   XREF to: 0056eb80 (CONDITIONAL_JUMP)
// 0056f052: XOR EBX,EBX
// 0056f054: MOV EAX,dword ptr [EBX + 0x688014]
//   Label: LAB_0056f054
//   XREF to: 00688014 (READ)
//   XREF to: 00688044 (READ)
// 0056f05a: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x16c] (WRITE)
// 0056f05e: MOV EAX,dword ptr [EBX + 0x688018]
//   XREF to: 00688018 (READ)
//   XREF to: 00688048 (READ)
// 0056f064: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x168] (WRITE)
// 0056f068: MOV EAX,dword ptr [EBX + 0x68801c]
//   XREF to: 0068801c (READ)
//   XREF to: 0068804c (READ)
// 0056f06e: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x164] (WRITE)
// 0056f072: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x16c] (DATA)
// 0056f076: PUSH EAX
// 0056f077: LEA ESI,[ESP + 0x28]
//   XREF to: Stack[-0x154] (DATA)
// 0056f07b: LEA EDI,[ESP + 0x1c]
//   XREF to: Stack[-0x160] (DATA)
// 0056f07f: CALL core_set.cpp_FUN_0056e890
//   XREF to: 0056e890 (UNCONDITIONAL_CALL)
// 0056f084: LEA ESI,[ESP + 0x28]
//   XREF to: Stack[-0x154] (DATA)
// 0056f088: ADD ESP,0x4
// 0056f08b: MOVSD ES:EDI,ESI
// 0056f08c: MOVSD ES:EDI,ESI
// 0056f08d: MOVSD ES:EDI,ESI
// 0056f08e: PUSH 0x0
// 0056f090: MOV ESI,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x44] (READ)
// 0056f097: PUSH ESI
// 0056f098: PUSH 0x0
// 0056f09a: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x160] (DATA)
// 0056f09e: PUSH EAX
// 0056f09f: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056f0a2: PUSH EDI
// 0056f0a3: ADD EBX,0x30
// 0056f0a6: CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
//   XREF to: 0056ddb0 (UNCONDITIONAL_CALL)
// 0056f0ab: MOV EAX,[0x02d051f4]
//   XREF to: 02d051f4 (READ)
// 0056f0b0: ADD ESP,0x14
// 0056f0b3: MOV dword ptr [EBX + 0x688010],EAX
//   XREF to: 00688040 (WRITE)
// 0056f0b9: LEA EAX,[ESI + 0x1]
// 0056f0bc: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0056f0bf: MOV dword ptr [ESP + 0x134],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0056f0c6: CMP EAX,EDX
// 0056f0c8: JL 0x0056f054
//   XREF to: 0056f054 (CONDITIONAL_JUMP)
// 0056f0ca: MOV ESP,EBP
// 0056f0cc: POP EBP
// 0056f0cd: POP EDI
// 0056f0ce: POP ESI
// 0056f0cf: POP EBX
// 0056f0d0: RET
// 0056f0d1: CMP dword ptr [EBP + 0x18],0x0
//   Label: LAB_0056f0d1
//   XREF to: Stack[0x8] (READ)
// 0056f0d5: JLE 0x0056f150
//   XREF to: 0056f150 (CONDITIONAL_JUMP)
// 0056f0db: MOV dword ptr [ESP + 0x104],EDI
//   XREF to: Stack[-0x74] (WRITE)
// 0056f0e2: MOV dword ptr [ESP + 0x10c],ECX
//   XREF to: Stack[-0x6c] (WRITE)
// 0056f0e9: MOV EAX,dword ptr [EBX + 0x688014]
//   Label: LAB_0056f0e9
//   XREF to: 00688014 (DATA)
//   XREF to: 00688044 (DATA)
// 0056f0ef: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x13c] (WRITE)
// 0056f0f3: MOV EAX,dword ptr [EBX + 0x688018]
//   XREF to: 00688018 (DATA)
//   XREF to: 00688048 (DATA)
// 0056f0f9: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x138] (WRITE)
// 0056f0fd: MOV EAX,dword ptr [EBX + 0x68801c]
//   XREF to: 0068801c (DATA)
//   XREF to: 0068804c (DATA)
// 0056f103: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x134] (WRITE)
// 0056f107: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0x13c] (DATA)
// 0056f10b: PUSH EAX
// 0056f10c: LEA ESI,[ESP + 0x64]
//   XREF to: Stack[-0x118] (DATA)
// 0056f110: CALL core_set.cpp_FUN_0056e890
//   XREF to: 0056e890 (UNCONDITIONAL_CALL)
// 0056f115: ADD ESP,0x4
// 0056f118: ADD EBX,0x30
// 0056f11b: MOV EDI,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x6c] (READ)
// 0056f122: MOV EDX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x6c] (READ)
// 0056f129: LEA ESI,[ESP + 0x60]
//   XREF to: Stack[-0x118] (DATA)
// 0056f12d: ADD EDX,0xc
// 0056f130: LEA EDI,[EDI + 0x32cd84c]
//   XREF to: 032cd84c (DATA)
// 0056f136: MOV ECX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x74] (READ)
// 0056f13d: MOV dword ptr [ESP + 0x10c],EDX
//   XREF to: Stack[-0x6c] (WRITE)
// 0056f144: MOVSD ES:EDI,ESI
//   XREF to: 032cd84c (DATA)
// 0056f145: MOVSD ES:EDI,ESI
//   XREF to: 032cd850 (DATA)
// 0056f146: MOVSD ES:EDI,ESI
//   XREF to: 032cd854 (DATA)
// 0056f147: CMP EBX,ECX
// 0056f149: JL 0x0056f0e9
//   XREF to: 0056f0e9 (CONDITIONAL_JUMP)
// 0056f14b: LEA EAX,[EAX]
// 0056f14e: MOV ECX,ECX
// 0056f150: CMP dword ptr [EBP + 0x28],0x0
//   Label: LAB_0056f150
//   XREF to: Stack[0x18] (READ)
// 0056f154: JLE 0x0056f49d
//   XREF to: 0056f49d (CONDITIONAL_JUMP)
// 0056f15a: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0056f15d: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0056f160: XOR EDI,EDI
// 0056f162: TEST EDX,EDX
// 0056f164: JLE 0x0056f2c3
//   XREF to: 0056f2c3 (CONDITIONAL_JUMP)
// 0056f16a: MOV EDX,dword ptr [EAX + 0x24]
//   Label: LAB_0056f16a
// 0056f16d: IMUL EDX,EDX,0xc
// 0056f170: MOV EBX,dword ptr [EAX + 0x18]
// 0056f173: IMUL EBX,EBX,0xc
// 0056f176: MOV ECX,0x32cd84c
//   XREF to: 032cd84c (DATA)
// 0056f17b: ADD ECX,EDX
// 0056f17d: MOV EDX,0x32cd84c
//   XREF to: 032cd84c (DATA)
// 0056f182: ADD EDX,EBX
// 0056f184: MOV EBX,dword ptr [ECX]
//   XREF to: 032cd84c (DATA)
// 0056f186: SUB EBX,dword ptr [EDX]
//   XREF to: 032cd84c (DATA)
// 0056f188: MOV dword ptr [ESP + 0x158],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 0056f18f: MOV EBX,dword ptr [ECX + 0x4]
//   XREF to: 032cd850 (DATA)
// 0056f192: SUB EBX,dword ptr [EDX + 0x4]
//   XREF to: 032cd850 (DATA)
// 0056f195: MOV dword ptr [ESP + 0x160],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 0056f19c: MOV EBX,dword ptr [ECX + 0x8]
//   XREF to: 032cd854 (DATA)
// 0056f19f: SUB EBX,dword ptr [EDX + 0x8]
//   XREF to: 032cd854 (DATA)
// 0056f1a2: MOV ESI,dword ptr [EAX + 0x30]
// 0056f1a5: MOV dword ptr [ESP + 0x15c],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0056f1ac: IMUL EBX,ESI,0xc
// 0056f1af: ADD EBX,0x32cd84c
//   XREF to: 032cd84c (DATA)
// 0056f1b5: MOV ESI,dword ptr [ECX]
//   XREF to: 032cd84c (DATA)
// 0056f1b7: MOV EDX,dword ptr [EBX]
//   XREF to: 032cd84c (DATA)
// 0056f1b9: SUB EDX,ESI
// 0056f1bb: FILD dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x1c] (READ)
// 0056f1c2: MOV dword ptr [ESP + 0x15c],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0056f1c9: MOV ESI,dword ptr [ECX + 0x4]
//   XREF to: 032cd850 (DATA)
// 0056f1cc: FILD dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x1c] (READ)
// 0056f1d3: MOV EDX,dword ptr [EBX + 0x4]
//   XREF to: 032cd850 (DATA)
// 0056f1d6: FST float ptr [ESP + 0xac]
//   XREF to: Stack[-0xcc] (WRITE)
// 0056f1dd: SUB EDX,ESI
// 0056f1df: FMUL ST1
// 0056f1e1: MOV dword ptr [ESP + 0x15c],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0056f1e8: MOV EDX,dword ptr [EBX + 0x8]
//   XREF to: 032cd854 (DATA)
// 0056f1eb: SUB EDX,dword ptr [ECX + 0x8]
//   XREF to: 032cd854 (DATA)
// 0056f1ee: FILD dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x18] (READ)
// 0056f1f5: MOV dword ptr [ESP + 0x160],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0056f1fc: FST float ptr [ESP + 0x150]
//   XREF to: Stack[-0x28] (WRITE)
// 0056f203: FILD dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x18] (READ)
// 0056f20a: FSTP float ptr [ESP + 0xb4]
//   XREF to: Stack[-0xc4] (WRITE)
// 0056f211: FMUL float ptr [ESP + 0xb4]
//   XREF to: Stack[-0xc4] (READ)
// 0056f218: FILD dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x20] (READ)
// 0056f21f: FILD dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x1c] (READ)
// 0056f226: FLD ST1
// 0056f228: FMUL ST1
// 0056f22a: FXCH
// 0056f22c: FMULP ST5
// 0056f22e: FXCH
// 0056f230: FMUL float ptr [ESP + 0xb4]
//   XREF to: Stack[-0xc4] (READ)
// 0056f237: FXCH ST4
// 0056f239: FSUBP ST2,ST0
// 0056f23b: FLD ST1
// 0056f23d: FMUL ST2
// 0056f23f: FXCH ST4
// 0056f241: FSUBP ST3,ST0
// 0056f243: FLD ST2
// 0056f245: FMUL ST3
// 0056f247: FLD float ptr [ESP + 0xac]
//   XREF to: Stack[-0xcc] (READ)
// 0056f24e: FMUL float ptr [ESP + 0x150]
//   XREF to: Stack[-0x28] (READ)
// 0056f255: FXCH
// 0056f257: FADDP ST5,ST0
// 0056f259: FSUBP
// 0056f25b: FLD ST0
// 0056f25d: FMUL ST1
// 0056f25f: FADDP ST4,ST0
// 0056f261: FXCH ST3
// 0056f263: FSTP float ptr [ESP + 0xbc]
//   XREF to: Stack[-0xbc] (WRITE)
// 0056f26a: MOV EDX,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0xbc] (READ)
// 0056f271: MOV ECX,dword ptr [0x02d7a7bc]
//   XREF to: 02d7a7bc (READ)
// 0056f277: SAR EDX,0x1
// 0056f279: SUB ECX,EDX
// 0056f27b: MOV dword ptr [ESP + 0xc0],ECX
//   XREF to: Stack[-0xb8] (WRITE)
// 0056f282: FLD float ptr [ESP + 0xc0]
//   XREF to: Stack[-0xb8] (READ)
// 0056f289: FMUL double ptr [0x00645fd3]
//   XREF to: 00645fd3 (READ)
// 0056f28f: FXCH
// 0056f291: FMUL ST1
// 0056f293: FXCH ST2
// 0056f295: FMUL ST1
// 0056f297: FXCH ST3
// 0056f299: FMULP
// 0056f29b: MOV ESI,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0056f29e: FXCH
// 0056f2a0: FSTP float ptr [EAX + 0x8]
// 0056f2a3: FXCH
// 0056f2a5: FSTP float ptr [EAX + 0xc]
// 0056f2a8: FSTP float ptr [EAX + 0x10]
// 0056f2ab: CMP ESI,0x4
// 0056f2ae: JNZ 0x0056f48d
//   XREF to: 0056f48d (CONDITIONAL_JUMP)
// 0056f2b4: ADD EAX,0x48
// 0056f2b7: MOV EDX,dword ptr [EBP + 0x1c]
//   Label: LAB_0056f2b7
//   XREF to: Stack[0xc] (READ)
// 0056f2ba: INC EDI
// 0056f2bb: CMP EDI,EDX
// 0056f2bd: JL 0x0056f16a
//   XREF to: 0056f16a (CONDITIONAL_JUMP)
// 0056f2c3: MOV EDX,dword ptr [EBP + 0x18]
//   Label: LAB_0056f2c3
//   XREF to: Stack[0x8] (READ)
// 0056f2c6: LEA EAX,[EDX*0x4 + 0x0]
// 0056f2cd: SUB EAX,EDX
// 0056f2cf: SHL EAX,0x2
// 0056f2d2: PUSH EAX
// 0056f2d3: PUSH 0x0
// 0056f2d5: PUSH 0x33081cc
//   XREF to: 033081cc (DATA)
// 0056f2da: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0056f2df: ADD ESP,0xc
// 0056f2e2: XOR EBX,EBX
// 0056f2e4: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0056f2e7: MOV ECX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0056f2ea: TEST ESI,ESI
// 0056f2ec: JLE 0x0056f3a0
//   XREF to: 0056f3a0 (CONDITIONAL_JUMP)
// 0056f2f2: IMUL EAX,dword ptr [ECX + 0x18],0xc
//   Label: LAB_0056f2f2
// 0056f2f6: LEA ESI,[ECX + 0x8]
// 0056f2f9: ADD EAX,0x33081cc
//   XREF to: 033081cc (DATA)
// 0056f2fe: FLD float ptr [ESI]
// 0056f300: FADD float ptr [EAX]
//   XREF to: 033081cc (DATA)
// 0056f302: FSTP float ptr [EAX]
//   XREF to: 033081cc (DATA)
// 0056f304: FLD float ptr [ESI + 0x4]
// 0056f307: FADD float ptr [EAX + 0x4]
//   XREF to: 033081d0 (DATA)
// 0056f30a: FSTP float ptr [EAX + 0x4]
//   XREF to: 033081d0 (DATA)
// 0056f30d: FLD float ptr [ESI + 0x8]
// 0056f310: FADD float ptr [EAX + 0x8]
//   XREF to: 033081d4 (DATA)
// 0056f313: FSTP float ptr [EAX + 0x8]
//   XREF to: 033081d4 (DATA)
// 0056f316: IMUL EAX,dword ptr [ECX + 0x24],0xc
// 0056f31a: ADD EAX,0x33081cc
//   XREF to: 033081cc (DATA)
// 0056f31f: FLD float ptr [ESI]
// 0056f321: FADD float ptr [EAX]
//   XREF to: 033081cc (DATA)
// 0056f323: FSTP float ptr [EAX]
//   XREF to: 033081cc (DATA)
// 0056f325: FLD float ptr [ESI + 0x4]
// 0056f328: FADD float ptr [EAX + 0x4]
//   XREF to: 033081d0 (DATA)
// 0056f32b: FSTP float ptr [EAX + 0x4]
//   XREF to: 033081d0 (DATA)
// 0056f32e: FLD float ptr [ESI + 0x8]
// 0056f331: FADD float ptr [EAX + 0x8]
//   XREF to: 033081d4 (DATA)
// 0056f334: FSTP float ptr [EAX + 0x8]
//   XREF to: 033081d4 (DATA)
// 0056f337: IMUL EAX,dword ptr [ECX + 0x30],0xc
// 0056f33b: ADD EAX,0x33081cc
//   XREF to: 033081cc (DATA)
// 0056f340: FLD float ptr [ESI]
// 0056f342: FADD float ptr [EAX]
//   XREF to: 033081cc (DATA)
// 0056f344: FSTP float ptr [EAX]
//   XREF to: 033081cc (DATA)
// 0056f346: FLD float ptr [ESI + 0x4]
// 0056f349: FADD float ptr [EAX + 0x4]
//   XREF to: 033081d0 (DATA)
// 0056f34c: FSTP float ptr [EAX + 0x4]
//   XREF to: 033081d0 (DATA)
// 0056f34f: FLD float ptr [ESI + 0x8]
// 0056f352: FADD float ptr [EAX + 0x8]
//   XREF to: 033081d4 (DATA)
// 0056f355: FSTP float ptr [EAX + 0x8]
//   XREF to: 033081d4 (DATA)
// 0056f358: CMP dword ptr [ECX + 0x4],0x4
// 0056f35c: JNZ 0x0056f37f
//   XREF to: 0056f37f (CONDITIONAL_JUMP)
// 0056f35e: IMUL EAX,dword ptr [ECX + 0x3c],0xc
// 0056f362: ADD EAX,0x33081cc
//   XREF to: 033081cc (DATA)
// 0056f367: FLD float ptr [ESI]
// 0056f369: FADD float ptr [EAX]
//   XREF to: 033081cc (DATA)
// 0056f36b: FSTP float ptr [EAX]
//   XREF to: 033081cc (DATA)
// 0056f36d: FLD float ptr [ESI + 0x4]
// 0056f370: FADD float ptr [EAX + 0x4]
//   XREF to: 033081d0 (DATA)
// 0056f373: FSTP float ptr [EAX + 0x4]
//   XREF to: 033081d0 (DATA)
// 0056f376: FLD float ptr [ESI + 0x8]
// 0056f379: FADD float ptr [EAX + 0x8]
//   XREF to: 033081d4 (DATA)
// 0056f37c: FSTP float ptr [EAX + 0x8]
//   XREF to: 033081d4 (DATA)
// 0056f37f: CMP dword ptr [EBP + 0x28],0x4
//   Label: LAB_0056f37f
//   XREF to: Stack[0x18] (READ)
// 0056f383: JNZ 0x0056f495
//   XREF to: 0056f495 (CONDITIONAL_JUMP)
// 0056f389: ADD ECX,0x48
// 0056f38c: MOV EDI,dword ptr [EBP + 0x1c]
//   Label: LAB_0056f38c
//   XREF to: Stack[0xc] (READ)
// 0056f38f: INC EBX
// 0056f390: CMP EBX,EDI
// 0056f392: JL 0x0056f2f2
//   XREF to: 0056f2f2 (CONDITIONAL_JUMP)
// 0056f398: LEA EAX,[EAX]
// 0056f39e: MOV EDX,EDX
// 0056f3a0: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0056f3a0
//   XREF to: Stack[0x4] (READ)
// 0056f3a3: MOV EDI,dword ptr [EAX + 0x15ae84]
// 0056f3a9: TEST EDI,EDI
// 0056f3ab: JZ 0x0056f854
//   XREF to: 0056f854 (CONDITIONAL_JUMP)
// 0056f3b1: XOR EDX,EDX
// 0056f3b3: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0056f3b6: MOV dword ptr [ESP + 0x13c],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 0056f3bd: TEST ECX,ECX
// 0056f3bf: JLE 0x0056eb80
//   XREF to: 0056eb80 (CONDITIONAL_JUMP)
// 0056f3c5: MOV EDI,0x33081cc
//   XREF to: 033081cc (DATA)
// 0056f3ca: MOV EAX,0x32cd84c
//   XREF to: 032cd84c (DATA)
// 0056f3cf: MOV dword ptr [ESP + 0x120],EDX
//   XREF to: Stack[-0x58] (WRITE)
// 0056f3d6: MOV dword ptr [ESP + 0x118],EAX
//   XREF to: Stack[-0x60] (WRITE)
//   XREF to: 032cd84c (DATA)
// 0056f3dd: FLD float ptr [EDI]
//   Label: LAB_0056f3dd
//   XREF to: 033081cc (READ)
//   XREF to: 033081d8 (READ)
// 0056f3df: FABS
// 0056f3e1: MOV ECX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x3c] (READ)
// 0056f3e8: IMUL EBX,ECX,0xc
// 0056f3eb: MOV ESI,EDI
// 0056f3ed: FLD1
// 0056f3ef: FCOMPP
// 0056f3f1: FNSTSW AX
// 0056f3f3: SAHF
// 0056f3f4: JBE 0x0056f7c2
//   XREF to: 0056f7c2 (CONDITIONAL_JUMP)
// 0056f3fa: FLD float ptr [EDI + 0x4]
//   XREF to: 033081d0 (READ)
//   XREF to: 033081dc (READ)
// 0056f3fd: FABS
// 0056f3ff: FLD1
// 0056f401: FCOMPP
// 0056f403: FNSTSW AX
// 0056f405: SAHF
// 0056f406: JBE 0x0056f7c2
//   XREF to: 0056f7c2 (CONDITIONAL_JUMP)
// 0056f40c: FLD float ptr [EDI + 0x8]
//   XREF to: 033081d4 (READ)
// 0056f40f: FABS
// 0056f411: FLD1
// 0056f413: FCOMPP
// 0056f415: FNSTSW AX
// 0056f417: SAHF
// 0056f418: JBE 0x0056f7c2
//   XREF to: 0056f7c2 (CONDITIONAL_JUMP)
// 0056f41e: PUSH 0x0
// 0056f420: PUSH ECX
// 0056f421: MOV EAX,0x32cd84c
//   XREF to: 032cd84c (DATA)
// 0056f426: PUSH 0x0
// 0056f428: ADD EAX,EBX
// 0056f42a: PUSH EAX
// 0056f42b: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056f42e: PUSH ECX
// 0056f42f: CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
//   Label: LAB_0056f42f
//   XREF to: 0056ddb0 (UNCONDITIONAL_CALL)
// 0056f434: ADD ESP,0x14
// 0056f437: MOV EDX,dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x58] (READ)
// 0056f43e: MOV ECX,dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x58] (READ)
// 0056f445: MOV EBX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x3c] (READ)
// 0056f44c: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0056f44f: MOV EAX,[0x02d051f4]
//   XREF to: 02d051f4 (READ)
// 0056f454: ADD EDI,0xc
// 0056f457: ADD ECX,0x30
// 0056f45a: INC EBX
// 0056f45b: MOV dword ptr [EDX + 0x688040],EAX
//   XREF to: 00688040 (DATA)
//   XREF to: 00688070 (DATA)
// 0056f461: MOV EDX,dword ptr [ESP + 0x118]
//   XREF to: Stack[-0x60] (READ)
// 0056f468: MOV dword ptr [ESP + 0x120],ECX
//   XREF to: Stack[-0x58] (WRITE)
// 0056f46f: ADD EDX,0xc
// 0056f472: MOV dword ptr [ESP + 0x13c],EBX
//   XREF to: Stack[-0x3c] (WRITE)
// 0056f479: MOV dword ptr [ESP + 0x118],EDX
//   XREF to: Stack[-0x60] (WRITE)
//   XREF to: 032cd858 (DATA)
//   XREF to: 032cd864 (DATA)
// 0056f480: CMP EBX,ESI
// 0056f482: JGE 0x0056eb80
//   XREF to: 0056eb80 (CONDITIONAL_JUMP)
// 0056f488: JMP 0x0056f3dd
//   XREF to: 0056f3dd (UNCONDITIONAL_JUMP)
// 0056f48d: ADD EAX,0x3c
//   Label: LAB_0056f48d
// 0056f490: JMP 0x0056f2b7
//   XREF to: 0056f2b7 (UNCONDITIONAL_JUMP)
// 0056f495: ADD ECX,0x3c
//   Label: LAB_0056f495
// 0056f498: JMP 0x0056f38c
//   XREF to: 0056f38c (UNCONDITIONAL_JUMP)
// 0056f49d: MOV ESI,dword ptr [EBP + 0x1c]
//   Label: LAB_0056f49d
//   XREF to: Stack[0xc] (READ)
// 0056f4a0: MOV EBX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0056f4a3: CMP ESI,0xfa0
// 0056f4a9: JLE 0x0056f4cd
//   XREF to: 0056f4cd (CONDITIONAL_JUMP)
// 0056f4ab: MOV EDI,0x645f5f
//   XREF to: 00645f5f (DATA)
// 0056f4b0: MOV EAX,0xeaf
// 0056f4b5: PUSH 0x645f6f
//   XREF to: 00645f6f (DATA)
// 0056f4ba: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0056f4c0: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0056f4c5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0056f4ca: ADD ESP,0x4
// 0056f4cd: CMP dword ptr [EBP + 0x1c],0xfa0
//   Label: LAB_0056f4cd
//   XREF to: Stack[0xc] (READ)
// 0056f4d4: JLE 0x0056f4f9
//   XREF to: 0056f4f9 (CONDITIONAL_JUMP)
// 0056f4d6: MOV ECX,0x645f98
//   XREF to: 00645f98 (PARAM)
// 0056f4db: MOV ESI,0xeb1
// 0056f4e0: PUSH 0x645fa8
//   XREF to: 00645fa8 (DATA)
// 0056f4e5: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0056f4eb: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0056f4f1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0056f4f6: ADD ESP,0x4
// 0056f4f9: MOV EAX,dword ptr [EBP + 0x1c]
//   Label: LAB_0056f4f9
//   XREF to: Stack[0xc] (READ)
// 0056f4fc: XOR EDI,EDI
// 0056f4fe: TEST EAX,EAX
// 0056f500: JLE 0x0056f70a
//   XREF to: 0056f70a (CONDITIONAL_JUMP)
// 0056f506: FLD float ptr [ESP + 0x130]
//   XREF to: Stack[-0x48] (READ)
// 0056f50d: FLD float ptr [ESP + 0x12c]
//   XREF to: Stack[-0x4c] (READ)
// 0056f514: MOV ECX,0x32c1ccc
//   XREF to: 032c1ccc (DATA)
// 0056f519: XOR ESI,ESI
//   Label: LAB_0056f519
// 0056f51b: MOV SI,word ptr [EBX]
// 0056f51e: IMUL ESI,ESI,0xc
// 0056f521: XOR EAX,EAX
// 0056f523: XOR EDX,EDX
// 0056f525: MOV AX,word ptr [EBX + 0x4]
// 0056f529: MOV DX,word ptr [EBX + 0x2]
// 0056f52d: MOV dword ptr [ESP + 0xe0],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 0056f534: IMUL EAX,EDX,0xc
// 0056f537: MOV EDX,0x32cd84c
//   XREF to: 032cd84c (DATA)
// 0056f53c: ADD EAX,0x32cd84c
//   XREF to: 032cd84c (DATA)
// 0056f541: ADD EDX,ESI
// 0056f543: MOV ESI,dword ptr [EAX]
//   XREF to: 032cd84c (DATA)
// 0056f545: MOV dword ptr [ESP + 0x154],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 0056f54c: MOV ESI,dword ptr [EDX]
//   XREF to: 032cd84c (DATA)
// 0056f54e: SUB dword ptr [ESP + 0x154],ESI
//   XREF to: Stack[-0x24] (READ_WRITE)
// 0056f555: MOV ESI,dword ptr [ESP + 0x154]
//   XREF to: Stack[-0x24] (READ)
// 0056f55c: MOV dword ptr [ESP + 0x154],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 0056f563: MOV ESI,dword ptr [EAX + 0x4]
//   XREF to: 032cd850 (DATA)
// 0056f566: MOV dword ptr [ESP + 0x158],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 0056f56d: MOV ESI,dword ptr [EDX + 0x4]
//   XREF to: 032cd850 (DATA)
// 0056f570: SUB dword ptr [ESP + 0x158],ESI
//   XREF to: Stack[-0x20] (READ_WRITE)
// 0056f577: MOV ESI,dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x20] (READ)
// 0056f57e: MOV dword ptr [ESP + 0x160],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0056f585: MOV ESI,dword ptr [EAX + 0x8]
//   XREF to: 032cd854 (DATA)
// 0056f588: MOV EDX,dword ptr [EDX + 0x8]
//   XREF to: 032cd854 (DATA)
// 0056f58b: SUB ESI,EDX
// 0056f58d: MOV EDX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x98] (READ)
// 0056f594: MOV dword ptr [ESP + 0x15c],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 0056f59b: IMUL ESI,EDX,0xc
// 0056f59e: ADD ESI,0x32cd84c
//   XREF to: 032cd84c (DATA)
// 0056f5a4: MOV EDX,dword ptr [ESI]
//   XREF to: 032cd84c (DATA)
// 0056f5a6: MOV dword ptr [ESP + 0x158],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0056f5ad: MOV EDX,dword ptr [EAX]
//   XREF to: 032cd84c (DATA)
// 0056f5af: SUB dword ptr [ESP + 0x158],EDX
//   XREF to: Stack[-0x20] (READ_WRITE)
// 0056f5b6: MOV EDX,dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x20] (READ)
// 0056f5bd: MOV dword ptr [ESP + 0x158],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0056f5c4: FILD dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x1c] (READ)
// 0056f5cb: FILD dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x20] (READ)
// 0056f5d2: MOV EDX,dword ptr [ESI + 0x4]
//   XREF to: 032cd850 (DATA)
// 0056f5d5: FST float ptr [ESP + 0xd0]
//   XREF to: Stack[-0xa8] (WRITE)
// 0056f5dc: FXCH
// 0056f5de: FSTP float ptr [ESP + 0xcc]
//   XREF to: Stack[-0xac] (WRITE)
// 0056f5e5: FMUL float ptr [ESP + 0xcc]
//   XREF to: Stack[-0xac] (READ)
// 0056f5ec: MOV dword ptr [ESP + 0x158],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0056f5f3: MOV EDX,dword ptr [EAX + 0x4]
//   XREF to: 032cd850 (DATA)
// 0056f5f6: SUB dword ptr [ESP + 0x158],EDX
//   XREF to: Stack[-0x20] (READ_WRITE)
// 0056f5fd: MOV EDX,dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x20] (READ)
// 0056f604: MOV dword ptr [ESP + 0x15c],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0056f60b: MOV EDX,dword ptr [ESI + 0x8]
//   XREF to: 032cd854 (DATA)
// 0056f60e: MOV ESI,dword ptr [EAX + 0x8]
//   XREF to: 032cd854 (DATA)
// 0056f611: MOV EAX,EDX
// 0056f613: FILD dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x18] (READ)
// 0056f61a: SUB EAX,ESI
// 0056f61c: FSTP float ptr [ESP + 0xc8]
//   XREF to: Stack[-0xb0] (WRITE)
// 0056f623: MOV dword ptr [ESP + 0x158],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0056f62a: FLD float ptr [ESP + 0xc8]
//   XREF to: Stack[-0xb0] (READ)
// 0056f631: FILD dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x20] (READ)
// 0056f638: FSTP float ptr [ESP + 0xd8]
//   XREF to: Stack[-0xa0] (WRITE)
// 0056f63f: FMUL float ptr [ESP + 0xd8]
//   XREF to: Stack[-0xa0] (READ)
// 0056f646: FILD dword ptr [ESP + 0x154]
//   XREF to: Stack[-0x24] (READ)
// 0056f64d: FILD dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x1c] (READ)
// 0056f654: FLD ST1
// 0056f656: FMUL ST1
// 0056f658: FXCH
// 0056f65a: FMUL float ptr [ESP + 0xcc]
//   XREF to: Stack[-0xac] (READ)
// 0056f661: FXCH ST2
// 0056f663: FMUL float ptr [ESP + 0xd8]
//   XREF to: Stack[-0xa0] (READ)
// 0056f66a: FXCH ST2
// 0056f66c: FSUBP ST3,ST0
// 0056f66e: FXCH ST2
// 0056f670: FST ST4
// 0056f672: FMUL ST4
// 0056f674: FXCH
// 0056f676: FSUBP ST3,ST0
// 0056f678: FXCH ST2
// 0056f67a: FST ST4
// 0056f67c: FMUL ST4
// 0056f67e: FLD float ptr [ESP + 0xd0]
//   XREF to: Stack[-0xa8] (READ)
// 0056f685: FMUL float ptr [ESP + 0xc8]
//   XREF to: Stack[-0xb0] (READ)
// 0056f68c: FXCH
// 0056f68e: FADDP ST3,ST0
// 0056f690: FSUBP
// 0056f692: FST float ptr [ESP + 0x128]
//   XREF to: Stack[-0x50] (WRITE)
// 0056f699: FMUL float ptr [ESP + 0x128]
//   XREF to: Stack[-0x50] (READ)
// 0056f6a0: FADDP
// 0056f6a2: FSTP float ptr [ESP + 0xe4]
//   XREF to: Stack[-0x94] (WRITE)
// 0056f6a9: MOV EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[-0x94] (READ)
// 0056f6b0: MOV EDX,dword ptr [0x02d7a7bc]
//   XREF to: 02d7a7bc (READ)
// 0056f6b6: SAR EAX,0x1
// 0056f6b8: SUB EDX,EAX
// 0056f6ba: MOV dword ptr [ESP + 0xe8],EDX
//   XREF to: Stack[-0x90] (WRITE)
// 0056f6c1: FLD float ptr [ESP + 0xe8]
//   XREF to: Stack[-0x90] (READ)
// 0056f6c8: FMUL double ptr [0x00645fd3]
//   XREF to: 00645fd3 (READ)
// 0056f6ce: FLD ST1
// 0056f6d0: FMUL ST1
// 0056f6d2: FLD ST3
// 0056f6d4: FMUL ST2
// 0056f6d6: FLD float ptr [ESP + 0x128]
//   XREF to: Stack[-0x50] (READ)
// 0056f6dd: FMULP ST3
// 0056f6df: ADD EBX,0x12
// 0056f6e2: ADD ECX,0xc
// 0056f6e5: INC EDI
// 0056f6e6: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0056f6e9: FXCH
// 0056f6eb: FSTP float ptr [ECX + -0xc]
//   XREF to: 032c1ccc (WRITE)
//   XREF to: 032c1cd8 (WRITE)
// 0056f6ee: FSTP float ptr [ECX + -0x8]
//   XREF to: 032c1cd0 (WRITE)
//   XREF to: 032c1cdc (WRITE)
// 0056f6f1: FSTP float ptr [ECX + -0x4]
//   XREF to: 032c1cd4 (WRITE)
//   XREF to: 032c1ce0 (WRITE)
// 0056f6f4: CMP EDI,EAX
// 0056f6f6: JL 0x0056f519
//   XREF to: 0056f519 (CONDITIONAL_JUMP)
// 0056f6fc: FSTP float ptr [ESP + 0x12c]
//   XREF to: Stack[-0x4c] (WRITE)
// 0056f703: FSTP float ptr [ESP + 0x130]
//   XREF to: Stack[-0x48] (WRITE)
// 0056f70a: MOV EDX,dword ptr [EBP + 0x18]
//   Label: LAB_0056f70a
//   XREF to: Stack[0x8] (READ)
// 0056f70d: LEA EAX,[EDX*0x4 + 0x0]
// 0056f714: SUB EAX,EDX
// 0056f716: SHL EAX,0x2
// 0056f719: PUSH EAX
// 0056f71a: PUSH 0x0
// 0056f71c: PUSH 0x33081cc
//   XREF to: 033081cc (DATA)
// 0056f721: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0056f726: ADD ESP,0xc
// 0056f729: XOR ESI,ESI
// 0056f72b: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0056f72e: MOV EBX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0056f731: TEST EDX,EDX
// 0056f733: JLE 0x0056f3a0
//   XREF to: 0056f3a0 (CONDITIONAL_JUMP)
// 0056f739: MOV ECX,0x32c1ccc
//   XREF to: 032c1ccc (DATA)
// 0056f73e: MOV EDI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0056f741: XOR EAX,EAX
//   Label: LAB_0056f741
// 0056f743: MOV AX,word ptr [EBX]
// 0056f746: IMUL EAX,EAX,0xc
// 0056f749: ADD EAX,0x33081cc
//   XREF to: 033081cc (DATA)
// 0056f74e: FLD float ptr [ECX]
//   XREF to: 032c1ccc (READ)
//   XREF to: 032c1cd8 (READ)
// 0056f750: FADD float ptr [EAX]
//   XREF to: 033081cc (DATA)
// 0056f752: FSTP float ptr [EAX]
//   XREF to: 033081cc (DATA)
// 0056f754: FLD float ptr [ECX + 0x4]
//   XREF to: 032c1cd0 (READ)
//   XREF to: 032c1cdc (READ)
// 0056f757: FADD float ptr [EAX + 0x4]
//   XREF to: 033081d0 (DATA)
// 0056f75a: FSTP float ptr [EAX + 0x4]
//   XREF to: 033081d0 (DATA)
// 0056f75d: FLD float ptr [ECX + 0x8]
//   XREF to: 032c1cd4 (READ)
//   XREF to: 032c1ce0 (READ)
// 0056f760: FADD float ptr [EAX + 0x8]
//   XREF to: 033081d4 (DATA)
// 0056f763: FSTP float ptr [EAX + 0x8]
//   XREF to: 033081d4 (DATA)
// 0056f766: XOR EAX,EAX
// 0056f768: MOV AX,word ptr [EBX + 0x2]
// 0056f76c: IMUL EAX,EAX,0xc
// 0056f76f: ADD EAX,0x33081cc
//   XREF to: 033081cc (DATA)
// 0056f774: FLD float ptr [ECX]
//   XREF to: 032c1ccc (READ)
//   XREF to: 032c1cd8 (READ)
// 0056f776: FADD float ptr [EAX]
//   XREF to: 033081cc (DATA)
// 0056f778: FSTP float ptr [EAX]
//   XREF to: 033081cc (DATA)
// 0056f77a: FLD float ptr [ECX + 0x4]
//   XREF to: 032c1cd0 (READ)
//   XREF to: 032c1cdc (READ)
// 0056f77d: FADD float ptr [EAX + 0x4]
//   XREF to: 033081d0 (DATA)
// 0056f780: FSTP float ptr [EAX + 0x4]
//   XREF to: 033081d0 (DATA)
// 0056f783: FLD float ptr [ECX + 0x8]
//   XREF to: 032c1cd4 (READ)
//   XREF to: 032c1ce0 (READ)
// 0056f786: FADD float ptr [EAX + 0x8]
//   XREF to: 033081d4 (DATA)
// 0056f789: FSTP float ptr [EAX + 0x8]
//   XREF to: 033081d4 (DATA)
// 0056f78c: XOR EAX,EAX
// 0056f78e: MOV AX,word ptr [EBX + 0x4]
// 0056f792: IMUL EAX,EAX,0xc
// 0056f795: ADD EAX,0x33081cc
//   XREF to: 033081cc (DATA)
// 0056f79a: FLD float ptr [ECX]
//   XREF to: 032c1ccc (READ)
//   XREF to: 032c1cd8 (READ)
// 0056f79c: FADD float ptr [EAX]
//   XREF to: 033081cc (DATA)
// 0056f79e: ADD EBX,0x12
// 0056f7a1: FSTP float ptr [EAX]
//   XREF to: 033081cc (DATA)
// 0056f7a3: FLD float ptr [ECX + 0x4]
//   XREF to: 032c1cd0 (READ)
//   XREF to: 032c1cdc (READ)
// 0056f7a6: FADD float ptr [EAX + 0x4]
//   XREF to: 033081d0 (DATA)
// 0056f7a9: ADD ECX,0xc
// 0056f7ac: FSTP float ptr [EAX + 0x4]
//   XREF to: 033081d0 (DATA)
// 0056f7af: FLD float ptr [ECX + -0x4]
//   XREF to: 032c1cd4 (READ)
//   XREF to: 032c1ce0 (READ)
// 0056f7b2: FADD float ptr [EAX + 0x8]
//   XREF to: 033081d4 (DATA)
// 0056f7b5: INC ESI
// 0056f7b6: FSTP float ptr [EAX + 0x8]
//   XREF to: 033081d4 (DATA)
// 0056f7b9: CMP ESI,EDI
// 0056f7bb: JL 0x0056f741
//   XREF to: 0056f741 (CONDITIONAL_JUMP)
// 0056f7bd: JMP 0x0056f3a0
//   XREF to: 0056f3a0 (UNCONDITIONAL_JUMP)
// 0056f7c2: FLD float ptr [ESI + 0x4]
//   Label: LAB_0056f7c2
//   XREF to: 033081d0 (READ)
//   XREF to: 033081dc (READ)
// 0056f7c5: FMUL ST0
// 0056f7c7: FLD float ptr [ESI]
//   XREF to: 033081cc (READ)
//   XREF to: 033081d8 (READ)
// 0056f7c9: FMUL ST0
// 0056f7cb: FADDP
// 0056f7cd: FLD float ptr [ESI + 0x8]
//   XREF to: 033081d4 (READ)
//   XREF to: 033081e0 (READ)
// 0056f7d0: FMUL ST0
// 0056f7d2: FADDP
// 0056f7d4: FSTP float ptr [ESP + 0xf0]
//   XREF to: Stack[-0x88] (WRITE)
// 0056f7db: MOV EAX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[-0x88] (READ)
// 0056f7e2: MOV EDX,dword ptr [0x02d7a7bc]
//   XREF to: 02d7a7bc (READ)
// 0056f7e8: SAR EAX,0x1
// 0056f7ea: SUB EDX,EAX
// 0056f7ec: MOV dword ptr [ESP + 0xf4],EDX
//   XREF to: Stack[-0x84] (WRITE)
// 0056f7f3: FLD float ptr [ESP + 0xf4]
//   XREF to: Stack[-0x84] (READ)
// 0056f7fa: FMUL double ptr [0x00645fd3]
//   XREF to: 00645fd3 (READ)
// 0056f800: FLD float ptr [ESI]
//   XREF to: 033081cc (READ)
//   XREF to: 033081d8 (READ)
// 0056f802: FMUL ST1
// 0056f804: FLD float ptr [ESI + 0x4]
//   XREF to: 033081d0 (READ)
//   XREF to: 033081dc (READ)
// 0056f807: FMUL ST2
// 0056f809: FLD float ptr [ESI + 0x8]
//   XREF to: 033081d4 (READ)
//   XREF to: 033081e0 (READ)
// 0056f80c: FMULP ST3
// 0056f80e: LEA EBX,[ESP + 0x84]
//   XREF to: Stack[-0xf4] (DATA)
// 0056f815: MOV EAX,ESI
// 0056f817: FXCH
// 0056f819: FSTP float ptr [ESI]
//   XREF to: 033081cc (WRITE)
//   XREF to: 033081d8 (WRITE)
// 0056f81b: FSTP float ptr [ESI + 0x4]
//   XREF to: 033081d0 (WRITE)
//   XREF to: 033081dc (WRITE)
// 0056f81e: FSTP float ptr [ESI + 0x8]
//   XREF to: 033081d4 (WRITE)
//   XREF to: 033081e0 (WRITE)
// 0056f821: FLD float ptr [EAX]
//   XREF to: 033081cc (READ)
//   XREF to: 033081d8 (READ)
// 0056f823: FISTP dword ptr [EBX]
//   XREF to: Stack[-0xf4] (DATA)
// 0056f825: FLD float ptr [EAX + 0x4]
//   XREF to: 033081d0 (READ)
//   XREF to: 033081dc (READ)
// 0056f828: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0xf0] (WRITE)
// 0056f82b: FLD float ptr [EAX + 0x8]
//   XREF to: 033081d4 (READ)
//   XREF to: 033081e0 (READ)
// 0056f82e: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0xec] (WRITE)
// 0056f831: PUSH 0x0
// 0056f833: MOV EBX,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x3c] (READ)
// 0056f83a: PUSH EBX
// 0056f83b: LEA EAX,[ESP + 0x8c]
//   XREF to: Stack[-0xf4] (DATA)
// 0056f842: PUSH EAX
// 0056f843: MOV ESI,dword ptr [ESP + 0x124]
//   XREF to: Stack[-0x60] (READ)
// 0056f84a: PUSH ESI
//   XREF to: 032cd858 (DATA)
// 0056f84b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056f84e: PUSH EAX
// 0056f84f: JMP 0x0056f42f
//   XREF to: 0056f42f (UNCONDITIONAL_JUMP)
// 0056f854: CMP dword ptr [EBP + 0x18],0x0
//   Label: LAB_0056f854
//   XREF to: Stack[0x8] (READ)
// 0056f858: JLE 0x0056eb80
//   XREF to: 0056eb80 (CONDITIONAL_JUMP)
// 0056f85e: MOV EAX,0x32cd84c
//   XREF to: 032cd84c (DATA)
// 0056f863: MOV ESI,0x33081cc
//   XREF to: 033081cc (DATA)
// 0056f868: MOV dword ptr [ESP + 0x114],EDI
//   XREF to: Stack[-0x64] (WRITE)
// 0056f86f: MOV dword ptr [ESP + 0x110],EAX
//   XREF to: Stack[-0x68] (WRITE)
//   XREF to: 032cd84c (DATA)
// 0056f876: FLD float ptr [ESI + 0x4]
//   Label: LAB_0056f876
//   XREF to: 033081d0 (READ)
//   XREF to: 033081dc (READ)
// 0056f879: FMUL ST0
// 0056f87b: FLD float ptr [ESI]
//   XREF to: 033081cc (READ)
//   XREF to: 033081d8 (READ)
// 0056f87d: FMUL ST0
// 0056f87f: FADDP
// 0056f881: FLD float ptr [ESI + 0x8]
//   XREF to: 033081d4 (READ)
//   XREF to: 033081e0 (READ)
// 0056f884: FMUL ST0
// 0056f886: FADDP
// 0056f888: FSTP float ptr [ESP + 0xfc]
//   XREF to: Stack[-0x7c] (WRITE)
// 0056f88f: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x7c] (READ)
// 0056f896: MOV EDX,dword ptr [0x02d7a7bc]
//   XREF to: 02d7a7bc (READ)
// 0056f89c: SAR EAX,0x1
// 0056f89e: SUB EDX,EAX
// 0056f8a0: MOV dword ptr [ESP + 0x100],EDX
//   XREF to: Stack[-0x78] (WRITE)
// 0056f8a7: FLD float ptr [ESP + 0x100]
//   XREF to: Stack[-0x78] (READ)
// 0056f8ae: FMUL double ptr [0x00645fd3]
//   XREF to: 00645fd3 (READ)
// 0056f8b4: FLD float ptr [ESI]
//   XREF to: 033081cc (READ)
//   XREF to: 033081d8 (READ)
// 0056f8b6: FMUL ST1
// 0056f8b8: FLD float ptr [ESI + 0x4]
//   XREF to: 033081d0 (READ)
//   XREF to: 033081dc (READ)
// 0056f8bb: FMUL ST2
// 0056f8bd: FLD float ptr [ESI + 0x8]
//   XREF to: 033081d4 (READ)
//   XREF to: 033081e0 (READ)
// 0056f8c0: FMULP ST3
// 0056f8c2: LEA EBX,[ESP + 0x78]
//   XREF to: Stack[-0x100] (DATA)
// 0056f8c6: MOV EAX,ESI
// 0056f8c8: FXCH
// 0056f8ca: FSTP float ptr [ESI]
//   XREF to: 033081cc (WRITE)
//   XREF to: 033081d8 (WRITE)
// 0056f8cc: FSTP float ptr [ESI + 0x4]
//   XREF to: 033081d0 (WRITE)
//   XREF to: 033081dc (WRITE)
// 0056f8cf: FSTP float ptr [ESI + 0x8]
//   XREF to: 033081d4 (WRITE)
//   XREF to: 033081e0 (WRITE)
// 0056f8d2: FLD float ptr [EAX]
//   XREF to: 033081cc (READ)
//   XREF to: 033081d8 (READ)
// 0056f8d4: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x100] (DATA)
// 0056f8d6: FLD float ptr [EAX + 0x4]
//   XREF to: 033081d0 (READ)
//   XREF to: 033081dc (READ)
// 0056f8d9: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0xfc] (WRITE)
// 0056f8dc: FLD float ptr [EAX + 0x8]
//   XREF to: 033081d4 (READ)
//   XREF to: 033081e0 (READ)
// 0056f8df: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0xf8] (WRITE)
// 0056f8e2: PUSH 0x0
// 0056f8e4: PUSH EDI
// 0056f8e5: LEA EAX,[ESP + 0x80]
//   XREF to: Stack[-0x100] (DATA)
// 0056f8ec: PUSH EAX
// 0056f8ed: MOV EBX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x68] (READ)
//   XREF to: 032cd84c (PARAM)
// 0056f8f4: PUSH EBX
//   XREF to: 032cd84c (DATA)
// 0056f8f5: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056f8f8: PUSH EAX
// 0056f8f9: ADD ESI,0xc
// 0056f8fc: INC EDI
// 0056f8fd: CALL core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
//   XREF to: 0056ddb0 (UNCONDITIONAL_CALL)
// 0056f902: ADD ESP,0x14
// 0056f905: MOV EAX,[0x02d051f4]
//   XREF to: 02d051f4 (READ)
// 0056f90a: MOV EDX,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0x64] (READ)
// 0056f911: LEA ECX,[EBX + 0xc]
//   XREF to: 032cd858 (DATA)
// 0056f914: ADD EDX,0x30
// 0056f917: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0056f91a: MOV dword ptr [ESP + 0x110],ECX
//   XREF to: Stack[-0x68] (WRITE)
//   XREF to: 032cd858 (DATA)
// 0056f921: MOV dword ptr [EDX + 0x688010],EAX
//   XREF to: 00688010 (DATA)
//   XREF to: 00688040 (DATA)
// 0056f927: MOV dword ptr [ESP + 0x114],EDX
//   XREF to: Stack[-0x64] (WRITE)
// 0056f92e: CMP EDI,EBX
// 0056f930: JL 0x0056f876
//   XREF to: 0056f876 (CONDITIONAL_JUMP)
// 0056f936: MOV ESP,EBP
// 0056f938: POP EBP
// 0056f939: POP EDI
// 0056f93a: POP ESI
// 0056f93b: POP EBX
// 0056f93c: RET
