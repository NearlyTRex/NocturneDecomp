// Name: engine_3d.c_drawLineStrip2D_FUN_00404570
// Address: 00404570
// Address Range: [[00404570, 004045ff]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_drawLineStrip2D_FUN_00404570(SLineStrip * line_strip)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_drawLineStrip2D_FUN_00404570(SLineStrip *line_strip)

{
  int iVar1;
  SLineStrip *pSVar2;
  int iVar3;
  SRenderVertex *pSVar4;
  int *piVar5;
  uint *puVar6;
  int *piVar7;
  byte bVar8;
  SRenderVertex *in_stack_ffffff30;
  SRenderVertex *in_stack_ffffff34;
  uint auStack_a0 [11];
  uint uStack_74;
  int local_70 [12];
  int local_40 [12];
  
  bVar8 = 0;
  uStack_74 = 0x40457c;
  engine_3d_c_setActiveRenderColor_FUN_00404540();
  iVar3 = 0;
  pSVar2 = line_strip + 1;
  while (iVar3 < line_strip->vertex_count + -1) {
    pSVar4 = g_RenderVertexBuffer + pSVar2->primitive_type;
    piVar5 = local_40;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar5 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar8 * -2 + 1) * 4);
      piVar5 = piVar5 + (uint)bVar8 * -2 + 1;
    }
    pSVar4 = g_RenderVertexBuffer + pSVar2->vertex_count;
    piVar5 = local_70;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar5 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar8 * -2 + 1) * 4);
      piVar5 = piVar5 + (uint)bVar8 * -2 + 1;
    }
    piVar5 = local_70;
    puVar6 = auStack_a0;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = *piVar5;
      piVar5 = piVar5 + (uint)bVar8 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    }
    pSVar2 = (SLineStrip *)&pSVar2->vertex_count;
    iVar3 = iVar3 + 1;
    piVar5 = local_40;
    piVar7 = (int *)&stack0xffffff30;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar7 = *piVar5;
      piVar5 = piVar5 + (uint)bVar8 * -2 + 1;
      piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
    }
    engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff30,in_stack_ffffff34);
  }
  return (SMRGLHeaderExtended *)(&line_strip[1].primitive_type + line_strip->vertex_count);
}
