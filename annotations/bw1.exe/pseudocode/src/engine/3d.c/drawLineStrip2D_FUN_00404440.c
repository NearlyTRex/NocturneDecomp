// Name: engine_3d.c_drawLineStrip2D_FUN_00404440
// Address: 00404440
// Address Range: [[00404440, 004044cf]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_drawLineStrip2D_FUN_00404440(int param_1)

#include "nocturne.h"

int __cdecl engine_3d_c_drawLineStrip2D_FUN_00404440(int param_1)

{
  SRenderVertex vertex2;
  int iVar1;
  int *piVar2;
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
  iVar8 = 0x40444c;
  engine_3d_c_setActiveRenderColor_FUN_00404410();
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 8);
  while (iVar3 < *(int *)(param_1 + 4) + -1) {
    puVar4 = &DAT_00629014 + *piVar2 * 0xc;
    puVar5 = auStack_40;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    puVar4 = &DAT_00629014 + piVar2[1] * 0xc;
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
    piVar2 = piVar2 + 1;
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
    engine_3d_c_clipAndDrawLine2D_FUN_00407af0(in_stack_ffffff30,vertex2);
  }
  return *(int *)(param_1 + 4) * 4 + param_1 + 8;
}
