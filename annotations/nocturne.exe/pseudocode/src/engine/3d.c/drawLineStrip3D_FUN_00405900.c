// Name: engine_3d.c_drawLineStrip3D_FUN_00405900
// Address: 00405900
// Address Range: [[00405900, 0040598f]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_drawLineStrip3D_FUN_00405900(SLineStrip *line_strip)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_drawLineStrip3D_FUN_00405900(SLineStrip *line_strip)

{
  SRenderVertex vertex2;
  int iVar1;
  SLineStrip *pSVar2;
  int iVar3;
  SRenderVertex *pSVar4;
  int *piVar5;
  uint *puVar6;
  int *piVar7;
  byte bVar8;
  SRenderVertex in_stack_ffffff30;
  byte auVar9 [24];
  byte in_stack_ffffff60 [44];
  int iVar10;
  int aiStack_70 [12];
  int aiStack_40 [12];
  
  bVar8 = 0;
  iVar10 = 0x40590c;
  engine_3d_c_setActiveRenderColor_FUN_00405840();
  iVar3 = 0;
  pSVar2 = line_strip + 1;
  while( true ) {
    if (line_strip->vertex_count + -1 <= iVar3) break;
    pSVar4 = g_SRenderVertex_ARRAY_005c5014 + pSVar2->primitive_type;
    piVar5 = aiStack_40;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar5 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar8 * -2 + 1) * 4);
      piVar5 = piVar5 + (uint)bVar8 * -2 + 1;
    }
    pSVar4 = g_SRenderVertex_ARRAY_005c5014 + pSVar2->vertex_count;
    piVar5 = aiStack_70;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar5 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar8 * -2 + 1) * 4);
      piVar5 = piVar5 + (uint)bVar8 * -2 + 1;
    }
    piVar5 = aiStack_70;
    puVar6 = (uint *)&stack0xffffff60;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = *piVar5;
      piVar5 = piVar5 + (uint)bVar8 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    }
    pSVar2 = (SLineStrip *)&pSVar2->vertex_count;
    iVar3 = iVar3 + 1;
    piVar5 = aiStack_40;
    piVar7 = (int *)&stack0xffffff30;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar7 = *piVar5;
      piVar5 = piVar5 + (uint)bVar8 * -2 + 1;
      piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
    }
    vertex2.a = iVar10;
    auVar9 = in_stack_ffffff60._0_24_;
    vertex2.projected_vertex.transformed_x = auVar9._0_4_;
    vertex2.projected_vertex.transformed_y = auVar9._4_4_;
    vertex2.projected_vertex.transformed_z = auVar9._8_4_;
    vertex2.projected_vertex.inv_z = auVar9._12_4_;
    vertex2.projected_vertex.screen_x = auVar9._16_4_;
    vertex2.projected_vertex.screen_y = auVar9._20_4_;
    vertex2.u = in_stack_ffffff60._24_4_;
    vertex2.v = in_stack_ffffff60._28_4_;
    vertex2.r = in_stack_ffffff60._32_4_;
    vertex2.g = in_stack_ffffff60._36_4_;
    vertex2.b = in_stack_ffffff60._40_4_;
    engine_3d_c_clipAndDrawLine3D_FUN_00409590(in_stack_ffffff30,vertex2);
  }
  return (SMRGLHeaderExtended *)(&line_strip[1].primitive_type + line_strip->vertex_count);
}
