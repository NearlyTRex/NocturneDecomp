// Name: engine_3d.c_drawLineStrip2D_FUN_00404570
// Address: 00404570
// Address Range: [[00404570, 004045ff]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_drawLineStrip2D_FUN_00404570(SLineStrip * line_strip)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: local_d0 */
/* WARNING: Variable defined which should be unmapped: local_a0 */

SMRGLHeaderExtended * __cdecl engine_3d_c_drawLineStrip2D_FUN_00404570(SLineStrip *line_strip)

{
  SRenderVertex vertex2;
  int iVar1;
  SLineStrip *pSVar2;
  int iVar3;
  SRenderVertex *pSVar4;
  SRenderVertex *pSVar5;
  byte bVar6;
  SRenderVertex local_d0;
  SRenderVertex local_a0;
  SRenderVertex local_70;
  SRenderVertex local_40;
  
  bVar6 = 0;
  local_a0.w_recip = 5.902398e-39;
  engine_3d_c_setActiveRenderColor_FUN_00404540();
  iVar3 = 0;
  pSVar2 = line_strip + 1;
  while (iVar3 < line_strip->vertex_count + -1) {
    pSVar4 = g_RenderVertexBuffer + pSVar2->primitive_type;
    pSVar5 = &local_40;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      (pSVar5->projected_vertex).transformed_x = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
      pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar6 * -8 + 4);
    }
    pSVar4 = g_RenderVertexBuffer + pSVar2->vertex_count;
    pSVar5 = &local_70;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(int *)pSVar5 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
      pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar6 * -2 + 1) * 4);
    }
    pSVar4 = &local_70;
    pSVar5 = &local_a0;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(uint *)pSVar5 = *(uint *)pSVar4;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
      pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar6 * -2 + 1) * 4);
    }
    pSVar2 = (SLineStrip *)&pSVar2->vertex_count;
    iVar3 = iVar3 + 1;
    pSVar4 = &local_40;
    pSVar5 = &local_d0;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(int *)pSVar5 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -8 + 4);
      pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar6 * -2 + 1) * 4);
    }
    vertex2.w_recip = local_a0.w_recip;
    vertex2.projected_vertex = local_a0.projected_vertex;
    vertex2.u = local_a0.u;
    vertex2.v = local_a0.v;
    vertex2.light = local_a0.light;
    vertex2.color = local_a0.color;
    vertex2.fog = local_a0.fog;
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(local_d0,vertex2);
  }
  return (SMRGLHeaderExtended *)(&line_strip[1].primitive_type + line_strip->vertex_count);
}
