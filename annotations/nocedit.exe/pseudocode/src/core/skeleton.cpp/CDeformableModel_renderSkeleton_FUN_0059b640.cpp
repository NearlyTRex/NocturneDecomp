// Name: core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_0059b640
// Address: 0059b640
// Address Range: [[0059b640, 0059b7f7] [0060dfc1, 0060e071]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_renderSkeleton_FUN_0059b640(CDeformableModel *this_ptr,int color,CMatrix3x4f *bone_matrices,int render_flags)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_renderSkeleton_FUN_0059b640(CDeformableModel *this_ptr,int color,CMatrix3x4f *bone_matrices,int render_flags)

{
  SRenderVertex vertex1;
  SRenderVertex vertex2;
  CSkeleton *pCVar1;
  SRenderVertex *pSVar2;
  int iVar3;
  int iVar4;
  SRenderVertex *pSVar5;
  uint *puVar6;
  CMatrix3x4f *matrix_in;
  int *piVar7;
  uint *puVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  CVector3i local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  int local_1c;
  CSkeleton *local_18;
  int local_14;
  
  bVar9 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr);
  if ((render_flags & 1U) != 0) {
    iVar4 = 0;
    matrix_in = bone_matrices;
    if (0 < pCVar1->bone_count) {
      do {
        core_xform_cpp_getTranslation_FUN_005f6110(matrix_in,&local_28);
        local_4c.x = (int)ROUND(local_28.x * 256.0f);
        local_4c.y = (int)ROUND(local_28.y * 256.0f);
        local_4c.z = (int)ROUND(local_28.z * 256.0f);
        pSVar2 = g_CDemonRendererPtr2->vertex_buffer_ptr + iVar4;
        iVar4 = iVar4 + 1;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&pSVar2->projected_vertex,&local_4c);
        matrix_in = matrix_in + 1;
      } while (iVar4 < pCVar1->bone_count);
    }
    local_14 = 0;
    g_ActiveRenderColor = color;
    if (0 < pCVar1->bone_count) {
      iVar4 = 0;
      local_18 = pCVar1;
      do {
        iVar22 = local_18->bone_list[0].parent_index;
        if (-1 < iVar22) {
          pSVar2 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar5 = pSVar2 + iVar22;
          iVar22 = (pSVar5->projected_vertex).transformed_x;
          iVar23 = (pSVar5->projected_vertex).transformed_y;
          iVar24 = (pSVar5->projected_vertex).transformed_z;
          iVar25 = (pSVar5->projected_vertex).inv_z;
          iVar26 = (pSVar5->projected_vertex).screen_x;
          iVar27 = (pSVar5->projected_vertex).screen_y;
          iVar28 = pSVar5->u;
          iVar29 = pSVar5->v;
          iVar30 = pSVar5->r;
          iVar31 = pSVar5->g;
          iVar32 = pSVar5->b;
          iVar3 = pSVar5->a;
          piVar7 = (int *)&stack0xffffff84;
          iVar33 = iVar3;
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar7 = (pSVar5->projected_vertex).transformed_x;
            pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar9 * -2 + 1) * 4);
            piVar7 = piVar7 + (uint)bVar9 * -2 + 1;
          }
          puVar6 = (uint *)((int)&(pSVar2->projected_vertex).transformed_x + iVar4);
          uVar10 = *puVar6;
          uVar11 = puVar6[1];
          uVar12 = puVar6[2];
          uVar13 = puVar6[3];
          uVar14 = puVar6[4];
          uVar15 = puVar6[5];
          uVar16 = puVar6[6];
          uVar17 = puVar6[7];
          uVar18 = puVar6[8];
          uVar19 = puVar6[9];
          uVar20 = puVar6[10];
          iVar3 = puVar6[0xb];
          puVar8 = (uint *)&stack0xffffff54;
          iVar21 = iVar3;
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
          }
          vertex1.projected_vertex.transformed_y = uVar11;
          vertex1.projected_vertex.transformed_x = uVar10;
          vertex1.projected_vertex.transformed_z = uVar12;
          vertex1.projected_vertex.inv_z = uVar13;
          vertex1.projected_vertex.screen_x = uVar14;
          vertex1.projected_vertex.screen_y = uVar15;
          vertex1.u = uVar16;
          vertex1.v = uVar17;
          vertex1.r = uVar18;
          vertex1.g = uVar19;
          vertex1.b = uVar20;
          vertex1.a = iVar21;
          vertex2.projected_vertex.transformed_y = iVar23;
          vertex2.projected_vertex.transformed_x = iVar22;
          vertex2.projected_vertex.transformed_z = iVar24;
          vertex2.projected_vertex.inv_z = iVar25;
          vertex2.projected_vertex.screen_x = iVar26;
          vertex2.projected_vertex.screen_y = iVar27;
          vertex2.u = iVar28;
          vertex2.v = iVar29;
          vertex2.r = iVar30;
          vertex2.g = iVar31;
          vertex2.b = iVar32;
          vertex2.a = iVar33;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1,vertex2);
        }
        iVar4 = iVar4 + 0x30;
        local_18 = (CSkeleton *)((local_18->motion_list).state_names[1] + 2);
        local_14 = local_14 + 1;
      } while (local_14 < pCVar1->bone_count);
    }
  }
  if (((render_flags & 2U) != 0) && (iVar4 = 0, 0 < pCVar1->bone_count)) {
    do {
      core_xform_cpp_matrixToEulerAngles_FUN_005f5690(bone_matrices,&local_40);
      core_xform_cpp_getTranslation_FUN_005f6110(bone_matrices,&local_34);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr2,&local_40,&local_34);
      shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(g_CEditorToolsPtr,0.5,0xff);
      iVar4 = iVar4 + 1;
      bone_matrices = bone_matrices + 1;
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
    } while (iVar4 < pCVar1->bone_count);
  }
  return;
}
