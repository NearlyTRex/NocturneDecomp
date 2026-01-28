// Name: engine_3d.c_drawLineStrip3D_FUN_00404600
// Address: 00404600
// Address Range: [[00404600, 0040468f]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_drawLineStrip3D_FUN_00404600(SLineStrip *line_strip)

#include "nocturne.h"

void __cdecl engine_3d_c_drawLineStrip3D_FUN_00404600(SLineStrip *line_strip)

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
  uStack_74 = 0x40460c;
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
    engine_3d_c_clipAndDrawLine3D_FUN_00408070(in_stack_ffffff30,in_stack_ffffff34);
  }
  return;
}
