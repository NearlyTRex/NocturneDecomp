// Name: core_ladder.cpp_CLadder_renderOpaque_FUN_00502620
// Address: 00502620
// Address Range: [[00502620, 005028b3] [00602e34, 00603047]]
// Convention: __cdecl
// Signature: int __cdecl core_ladder_cpp_CLadder_renderOpaque_FUN_00502620(CLadder *this_ptr)

#include "nocturne.h"

int __cdecl core_ladder_cpp_CLadder_renderOpaque_FUN_00502620(CLadder *this_ptr)

{
  SRenderVertex vertex1;
  SRenderVertex vertex1_00;
  SRenderVertex vertex1_01;
  SRenderVertex vertex2;
  SRenderVertex vertex2_00;
  SRenderVertex vertex2_01;
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SRenderVertex *pSVar5;
  SRenderVertex *pSVar6;
  int *piVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
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
  SRenderVertex local_74;
  CVector3i CStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  uint uStack_18;
  int iStack_14;
  
  bVar8 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                          (&this_ptr->base,(CBoundingBox3D *)&local_74);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if ((iVar1 != 0) && (g_CDemonMissionPtr->is_in_editor != 0)) {
    iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
    if (iVar2 == 0) {
      g_ActiveRenderColor = 0xfb;
      local_74.projected_vertex.transformed_y = 0;
      while( true ) {
        if ((this_ptr->ladder_size).y + (float)0.001 <=
            (float)local_74.projected_vertex.transformed_y) break;
        if (0.0 < (float)local_74.projected_vertex.transformed_y) {
          uStack_18 = 0;
          iStack_14 = local_74.projected_vertex.transformed_y;
          local_74.a = (int)ROUND(256.0f * 0.0);
          engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,
                     (CVector3i *)&local_74.a);
          pSVar6 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          iVar2 = pSVar6[2].projected_vertex.transformed_x;
          iVar20 = pSVar6[2].projected_vertex.transformed_y;
          iVar21 = pSVar6[2].projected_vertex.transformed_z;
          iVar22 = pSVar6[2].projected_vertex.inv_z;
          iVar23 = pSVar6[2].projected_vertex.screen_x;
          iVar24 = pSVar6[2].projected_vertex.screen_y;
          iVar25 = pSVar6[2].u;
          iVar26 = pSVar6[2].v;
          iVar27 = pSVar6[2].r;
          iVar28 = pSVar6[2].g;
          iVar29 = pSVar6[2].b;
          iVar3 = pSVar6[2].a;
          pSVar5 = pSVar6 + 2;
          piVar7 = (int *)&stack0xffffff58;
          iVar30 = iVar3;
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar7 = (pSVar5->projected_vertex).transformed_x;
            pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar8 * -2 + 1) * 4);
            piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
          }
          iVar3 = (pSVar6->projected_vertex).transformed_x;
          iVar9 = (pSVar6->projected_vertex).transformed_y;
          iVar10 = (pSVar6->projected_vertex).transformed_z;
          iVar11 = (pSVar6->projected_vertex).inv_z;
          iVar12 = (pSVar6->projected_vertex).screen_x;
          iVar13 = (pSVar6->projected_vertex).screen_y;
          iVar14 = pSVar6->u;
          iVar15 = pSVar6->v;
          iVar16 = pSVar6->r;
          iVar17 = pSVar6->g;
          iVar18 = pSVar6->b;
          iVar4 = pSVar6->a;
          piVar7 = (int *)&stack0xffffff28;
          iVar19 = iVar4;
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar7 = (pSVar6->projected_vertex).transformed_x;
            pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar8 * -2 + 1) * 4);
            piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
          }
          vertex1_00.projected_vertex.transformed_y = iVar9;
          vertex1_00.projected_vertex.transformed_x = iVar3;
          vertex1_00.projected_vertex.transformed_z = iVar10;
          vertex1_00.projected_vertex.inv_z = iVar11;
          vertex1_00.projected_vertex.screen_x = iVar12;
          vertex1_00.projected_vertex.screen_y = iVar13;
          vertex1_00.u = iVar14;
          vertex1_00.v = iVar15;
          vertex1_00.r = iVar16;
          vertex1_00.g = iVar17;
          vertex1_00.b = iVar18;
          vertex1_00.a = iVar19;
          vertex2_00.projected_vertex.transformed_y = iVar20;
          vertex2_00.projected_vertex.transformed_x = iVar2;
          vertex2_00.projected_vertex.transformed_z = iVar21;
          vertex2_00.projected_vertex.inv_z = iVar22;
          vertex2_00.projected_vertex.screen_x = iVar23;
          vertex2_00.projected_vertex.screen_y = iVar24;
          vertex2_00.u = iVar25;
          vertex2_00.v = iVar26;
          vertex2_00.r = iVar27;
          vertex2_00.g = iVar28;
          vertex2_00.b = iVar29;
          vertex2_00.a = iVar30;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_00,vertex2_00);
          pSVar6 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          iVar2 = pSVar6[2].projected_vertex.transformed_x;
          iVar20 = pSVar6[2].projected_vertex.transformed_y;
          iVar21 = pSVar6[2].projected_vertex.transformed_z;
          iVar22 = pSVar6[2].projected_vertex.inv_z;
          iVar23 = pSVar6[2].projected_vertex.screen_x;
          iVar24 = pSVar6[2].projected_vertex.screen_y;
          iVar25 = pSVar6[2].u;
          iVar26 = pSVar6[2].v;
          iVar27 = pSVar6[2].r;
          iVar28 = pSVar6[2].g;
          iVar29 = pSVar6[2].b;
          iVar3 = pSVar6[2].a;
          pSVar5 = pSVar6 + 2;
          piVar7 = (int *)&stack0xffffff58;
          iVar30 = iVar3;
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar7 = (pSVar5->projected_vertex).transformed_x;
            pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar8 * -2 + 1) * 4);
            piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
          }
          iVar3 = pSVar6[1].projected_vertex.transformed_x;
          iVar9 = pSVar6[1].projected_vertex.transformed_y;
          iVar10 = pSVar6[1].projected_vertex.transformed_z;
          iVar11 = pSVar6[1].projected_vertex.inv_z;
          iVar12 = pSVar6[1].projected_vertex.screen_x;
          iVar13 = pSVar6[1].projected_vertex.screen_y;
          iVar14 = pSVar6[1].u;
          iVar15 = pSVar6[1].v;
          iVar16 = pSVar6[1].r;
          iVar17 = pSVar6[1].g;
          iVar18 = pSVar6[1].b;
          iVar4 = pSVar6[1].a;
          pSVar6 = pSVar6 + 1;
          piVar7 = (int *)&stack0xffffff28;
          iVar19 = iVar4;
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar7 = (pSVar6->projected_vertex).transformed_x;
            pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar8 * -2 + 1) * 4);
            piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
          }
          vertex1_01.projected_vertex.transformed_y = iVar9;
          vertex1_01.projected_vertex.transformed_x = iVar3;
          vertex1_01.projected_vertex.transformed_z = iVar10;
          vertex1_01.projected_vertex.inv_z = iVar11;
          vertex1_01.projected_vertex.screen_x = iVar12;
          vertex1_01.projected_vertex.screen_y = iVar13;
          vertex1_01.u = iVar14;
          vertex1_01.v = iVar15;
          vertex1_01.r = iVar16;
          vertex1_01.g = iVar17;
          vertex1_01.b = iVar18;
          vertex1_01.a = iVar19;
          vertex2_01.projected_vertex.transformed_y = iVar20;
          vertex2_01.projected_vertex.transformed_x = iVar2;
          vertex2_01.projected_vertex.transformed_z = iVar21;
          vertex2_01.projected_vertex.inv_z = iVar22;
          vertex2_01.projected_vertex.screen_x = iVar23;
          vertex2_01.projected_vertex.screen_y = iVar24;
          vertex2_01.u = iVar25;
          vertex2_01.v = iVar26;
          vertex2_01.r = iVar27;
          vertex2_01.g = iVar28;
          vertex2_01.b = iVar29;
          vertex2_01.a = iVar30;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_01,vertex2_01);
        }
        fStack_24 = (float)0.5 * (this_ptr->ladder_size).x;
        fStack_1c = 0.0;
        fStack_20 = (float)local_74.projected_vertex.transformed_y;
        CStack_30.x = (int)ROUND(-(this_ptr->ladder_size).x * (float)0.5 *
                                 256.0f);
        CStack_30.y = (int)ROUND((float)local_74.projected_vertex.transformed_y * 256.0f);
        CStack_30.z = (int)ROUND(256.0f * 0.0);
        engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&CStack_30);
        local_74.r = (int)ROUND(fStack_24 * 256.0f);
        local_74.g = (int)ROUND(fStack_20 * 256.0f);
        local_74.b = (int)ROUND(fStack_1c * 256.0f);
        engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,
                   (CVector3i *)&local_74.r);
        pSVar6 = g_CDemonRendererPtr2->vertex_buffer_ptr;
        iVar2 = pSVar6[1].projected_vertex.transformed_x;
        iVar20 = pSVar6[1].projected_vertex.transformed_y;
        iVar21 = pSVar6[1].projected_vertex.transformed_z;
        iVar22 = pSVar6[1].projected_vertex.inv_z;
        iVar23 = pSVar6[1].projected_vertex.screen_x;
        iVar24 = pSVar6[1].projected_vertex.screen_y;
        iVar25 = pSVar6[1].u;
        iVar26 = pSVar6[1].v;
        iVar27 = pSVar6[1].r;
        iVar28 = pSVar6[1].g;
        iVar29 = pSVar6[1].b;
        iVar3 = pSVar6[1].a;
        pSVar5 = pSVar6 + 1;
        piVar7 = (int *)&stack0xffffff58;
        iVar30 = iVar3;
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar7 = (pSVar5->projected_vertex).transformed_x;
          pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar8 * -2 + 1) * 4);
          piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
        }
        iVar3 = (pSVar6->projected_vertex).transformed_x;
        iVar9 = (pSVar6->projected_vertex).transformed_y;
        iVar10 = (pSVar6->projected_vertex).transformed_z;
        iVar11 = (pSVar6->projected_vertex).inv_z;
        iVar12 = (pSVar6->projected_vertex).screen_x;
        iVar13 = (pSVar6->projected_vertex).screen_y;
        iVar14 = pSVar6->u;
        iVar15 = pSVar6->v;
        iVar16 = pSVar6->r;
        iVar17 = pSVar6->g;
        iVar18 = pSVar6->b;
        iVar4 = pSVar6->a;
        piVar7 = (int *)&stack0xffffff28;
        iVar19 = iVar4;
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar7 = (pSVar6->projected_vertex).transformed_x;
          pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar8 * -2 + 1) * 4);
          piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
        }
        vertex1.projected_vertex.transformed_y = iVar9;
        vertex1.projected_vertex.transformed_x = iVar3;
        vertex1.projected_vertex.transformed_z = iVar10;
        vertex1.projected_vertex.inv_z = iVar11;
        vertex1.projected_vertex.screen_x = iVar12;
        vertex1.projected_vertex.screen_y = iVar13;
        vertex1.u = iVar14;
        vertex1.v = iVar15;
        vertex1.r = iVar16;
        vertex1.g = iVar17;
        vertex1.b = iVar18;
        vertex1.a = iVar19;
        vertex2.projected_vertex.transformed_y = iVar20;
        vertex2.projected_vertex.transformed_x = iVar2;
        vertex2.projected_vertex.transformed_z = iVar21;
        vertex2.projected_vertex.inv_z = iVar22;
        vertex2.projected_vertex.screen_x = iVar23;
        vertex2.projected_vertex.screen_y = iVar24;
        vertex2.u = iVar25;
        vertex2.v = iVar26;
        vertex2.r = iVar27;
        vertex2.g = iVar28;
        vertex2.b = iVar29;
        vertex2.a = iVar30;
        engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1,vertex2);
        local_74.projected_vertex.transformed_y =
             (int)((float)local_74.projected_vertex.transformed_y + 1.0f);
      }
    }
  }
  if (iVar1 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&this_ptr->model,0.0,-1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  return iVar1;
}
