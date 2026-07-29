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
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  SRenderVertex in_stack_ffffff30;
  byte auVar7 [24];
  byte in_stack_ffffff60 [44];
  int iVar8;
  uint auStack_70 [12];
  uint auStack_40 [12];
  
  bVar6 = 0;
  iVar8 = 0x40590c;
  engine_3d_c_setActiveRenderColor_FUN_00405840();
  iVar3 = 0;
  pSVar2 = line_strip + 1;
  while( true ) {
    if (line_strip->vertex_count + -1 <= iVar3) break;
    puVar4 = &DAT_005c5014 + pSVar2->primitive_type * 0xc;
    puVar5 = auStack_40;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    puVar4 = &DAT_005c5014 + pSVar2->vertex_count * 0xc;
    puVar5 = auStack_70;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    puVar4 = auStack_70;
    puVar5 = (uint *)&stack0xffffff60;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    pSVar2 = (SLineStrip *)&pSVar2->vertex_count;
    iVar3 = iVar3 + 1;
    puVar4 = auStack_40;
    puVar5 = (uint *)&stack0xffffff30;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    vertex2.a = iVar8;
    auVar7 = in_stack_ffffff60._0_24_;
    vertex2.projected_vertex.transformed_x = auVar7._0_4_;
    vertex2.projected_vertex.transformed_y = auVar7._4_4_;
    vertex2.projected_vertex.transformed_z = auVar7._8_4_;
    vertex2.projected_vertex.inv_z = auVar7._12_4_;
    vertex2.projected_vertex.screen_x = auVar7._16_4_;
    vertex2.projected_vertex.screen_y = auVar7._20_4_;
    vertex2.u = in_stack_ffffff60._24_4_;
    vertex2.v = in_stack_ffffff60._28_4_;
    vertex2.r = in_stack_ffffff60._32_4_;
    vertex2.g = in_stack_ffffff60._36_4_;
    vertex2.b = in_stack_ffffff60._40_4_;
    engine_3d_c_clipAndDrawLine3D_FUN_00409590(in_stack_ffffff30,vertex2);
  }
  return (SMRGLHeaderExtended *)(&line_strip[1].primitive_type + line_strip->vertex_count);
}
