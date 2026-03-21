// Name: engine_3d.c_drawLineStrip2D_FUN_00404570
// Address: 00404570
// Address Range: [[00404570, 004045ff] [0060e072, 0060e12a]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_drawLineStrip2D_FUN_00404570(SLineStrip *line_strip)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_drawLineStrip2D_FUN_00404570(SLineStrip *line_strip)

{
  SRenderVertex vertex1;
  SRenderVertex vertex2;
  int iVar1;
  SLineStrip *pSVar2;
  int iVar3;
  SRenderVertex *pSVar4;
  SRenderVertex *pSVar5;
  uint *puVar6;
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
  int iVar31;
  int iVar32;
  SRenderVertex local_70;
  SRenderVertex local_40;
  
  bVar8 = 0;
  engine_3d_c_setActiveRenderColor_FUN_00404540();
  iVar3 = 0;
  pSVar2 = line_strip + 1;
  while (iVar3 < line_strip->vertex_count + -1) {
    pSVar4 = g_RenderVertexBuffer + pSVar2->primitive_type;
    pSVar5 = &local_40;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      (pSVar5->projected_vertex).transformed_x = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar8 * -2 + 1) * 4);
      pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar8 * -8 + 4);
    }
    pSVar4 = g_RenderVertexBuffer + pSVar2->vertex_count;
    pSVar5 = &local_70;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(int *)pSVar5 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar8 * -2 + 1) * 4);
      pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar8 * -2 + 1) * 4);
    }
    pSVar4 = &local_70;
    puVar6 = (uint *)&stack0xffffff60;
    iVar21 = local_70.projected_vertex.transformed_x;
    iVar22 = local_70.projected_vertex.transformed_y;
    iVar23 = local_70.projected_vertex.transformed_z;
    iVar24 = local_70.projected_vertex.inv_z;
    iVar25 = local_70.projected_vertex.screen_x;
    iVar26 = local_70.projected_vertex.screen_y;
    iVar27 = local_70.u;
    iVar28 = local_70.v;
    iVar29 = local_70.r;
    iVar30 = local_70.g;
    iVar31 = local_70.b;
    iVar32 = local_70.a;
    for (iVar1 = local_70.a; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = *(uint *)pSVar4;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar8 * -2 + 1) * 4);
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    }
    pSVar2 = (SLineStrip *)&pSVar2->vertex_count;
    iVar3 = iVar3 + 1;
    pSVar4 = &local_40;
    piVar7 = (int *)&stack0xffffff30;
    iVar9 = local_40.projected_vertex.transformed_x;
    iVar10 = local_40.projected_vertex.transformed_y;
    iVar11 = local_40.projected_vertex.transformed_z;
    iVar12 = local_40.projected_vertex.inv_z;
    iVar13 = local_40.projected_vertex.screen_x;
    iVar14 = local_40.projected_vertex.screen_y;
    iVar15 = local_40.u;
    iVar16 = local_40.v;
    iVar17 = local_40.r;
    iVar18 = local_40.g;
    iVar19 = local_40.b;
    iVar20 = local_40.a;
    for (iVar1 = local_40.a; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar7 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar8 * -8 + 4);
      piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
    }
    vertex1.projected_vertex.transformed_y = iVar10;
    vertex1.projected_vertex.transformed_x = iVar9;
    vertex1.projected_vertex.transformed_z = iVar11;
    vertex1.projected_vertex.inv_z = iVar12;
    vertex1.projected_vertex.screen_x = iVar13;
    vertex1.projected_vertex.screen_y = iVar14;
    vertex1.u = iVar15;
    vertex1.v = iVar16;
    vertex1.r = iVar17;
    vertex1.g = iVar18;
    vertex1.b = iVar19;
    vertex1.a = iVar20;
    vertex2.projected_vertex.transformed_y = iVar22;
    vertex2.projected_vertex.transformed_x = iVar21;
    vertex2.projected_vertex.transformed_z = iVar23;
    vertex2.projected_vertex.inv_z = iVar24;
    vertex2.projected_vertex.screen_x = iVar25;
    vertex2.projected_vertex.screen_y = iVar26;
    vertex2.u = iVar27;
    vertex2.v = iVar28;
    vertex2.r = iVar29;
    vertex2.g = iVar30;
    vertex2.b = iVar31;
    vertex2.a = iVar32;
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1,vertex2);
  }
  return (SMRGLHeaderExtended *)(&line_strip[1].primitive_type + line_strip->vertex_count);
}
