// Name: engine_3d.c_drawLineStrip3D_FUN_00404600
// Address: 00404600
// Address Range: [[00404600, 0040468f]]
// Convention: __cdecl
// Signature: void engine_3d.c_drawLineStrip3D_FUN_00404600(SLineStrip * line_strip)

#include "nocturne.h"

void __cdecl engine_3d_c_drawLineStrip3D_FUN_00404600(SLineStrip *line_strip)

{
  int iVar1;
  int *piVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  SRenderVertex *pSVar4;
  int *piVar5;
  uint *puVar6;
  int *piVar7;
  byte bVar8;
  int in_stack_00000008;
  SRenderVertex *in_stack_ffffff34;
  SRenderVertex *in_stack_ffffff38;
  uint auStack_9c [10];
  uint uStack_74;
  int aiStack_6c [12];
  int aiStack_3c [11];
  
  bVar8 = 0;
  uStack_74 = 0x40460c;
  engine_3d_c_setActiveRenderColor_FUN_00404540();
  iVar3 = 0;
  piVar2 = (int *)(in_stack_00000008 + 8);
  while (iVar3 < *(int *)(in_stack_00000008 + 4) + -1) {
    pSVar4 = g_RenderVertexBuffer + *piVar2;
    piVar5 = aiStack_3c;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar5 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar8 * -2 + 1) * 4);
      piVar5 = piVar5 + (uint)bVar8 * -2 + 1;
    }
    pSVar4 = g_RenderVertexBuffer + piVar2[1];
    piVar5 = aiStack_6c;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar5 = (pSVar4->projected_vertex).transformed_x;
      pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar8 * -2 + 1) * 4);
      piVar5 = piVar5 + (uint)bVar8 * -2 + 1;
    }
    piVar5 = aiStack_6c;
    puVar6 = auStack_9c;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = *piVar5;
      piVar5 = piVar5 + (uint)bVar8 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + 1;
    piVar5 = aiStack_3c;
    piVar7 = (int *)&stack0xffffff34;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar7 = *piVar5;
      piVar5 = piVar5 + (uint)bVar8 * -2 + 1;
      piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
    }
    engine_3d_c_clipAndDrawLine3D_FUN_00408070(in_stack_ffffff34,in_stack_ffffff38);
  }
  return;
}
